import sys
from PyQt5 import QtGui, QtWidgets, QtCore
from ui import Ui_MainWindow
import os.path
import crypto


class PasswordSaverGui:

    def __init__(self):
        self.applic = QtWidgets.QApplication(sys.argv)
        self.MainWindow = QtWidgets.QMainWindow()
        self.MainWindow.closeEvent = self.closeEvent
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self.MainWindow)
        self.database_enc_file_name = "base.txt.enc"
        self.database_dec_file_name = "base.txt"
        self.database_list = list()
        self.myclose = True
        self.ui.button_load_db.clicked.connect(self.load_database_to_ram)
        self.ui.pushButton_add_item.clicked.connect(self.add_item_in_list)

    def run_gui(self):
        self.MainWindow.show()
        self.load_database()
        sys.exit(self.applic.exec_())

    def load_database(self):
        if os.path.exists(self.database_enc_file_name):
            pass
        else:
            raise Exception("Файл бази даних не існує")

    def load_database_to_ram(self):
        crypto.decrypt_file(self.database_enc_file_name, self.database_dec_file_name)
        database = open(self.database_dec_file_name, "r")
        for line in database.readlines():
            if "end_of_file" in line:
                break
            else:
                self.database_list.append(line)
                self.ui.textedit_pass.append(line.strip())
        self.database_list.append("end_of_file")
        self.database_list = self.database_list[:-1]
        database.close()
        if os.path.exists(self.database_dec_file_name):
            os.remove(self.database_dec_file_name)
        if os.path.exists(self.database_enc_file_name):
            os.remove(self.database_enc_file_name)
        self.ui.button_load_db.setEnabled(False)

    def save_database_to_fs(self):
        open_f = open(self.database_dec_file_name, "w")
        for item in self.database_list:
            open_f.writelines(item)
        open_f.close()

    def add_item_in_list(self):
        password = self.ui.lineEdit_password.text()
        login = self.ui.lineEdit_login.text()
        site = self.ui.lineEdit_recource.text()
        info = self.ui.lineEdit_info.text()
        insert_str = "{},{},{},{}\n".format(site, login, password, info)
        self.database_list.append(insert_str)
        # self.save_database_to_fs()
        print(self.database_list)
        self.ui.lineEdit_password.clear()
        self.ui.lineEdit_login.clear()
        self.ui.lineEdit_info.clear()
        self.ui.lineEdit_recource.clear()

    def closeEvent(self, event):
        print("Збереження ішифрування бази даних.")
        write_data = open(self.database_dec_file_name, "w")
        for lines in self.database_list:
            write_data.writelines(lines)
        write_data.writelines("end_of_file")
        write_data.close()
        crypto.encrypt_file(self.database_dec_file_name)
        if os.path.exists(self.database_dec_file_name):
            os.remove(self.database_dec_file_name)


sw_application = PasswordSaverGui()
sw_application.run_gui()
