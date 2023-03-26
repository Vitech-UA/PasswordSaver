import sys
from PyQt5 import QtGui, QtWidgets
from ui import Ui_MainWindow
import os.path
import crypto


class PasswordSaverGui:

    def __init__(self):
        self.applic = QtWidgets.QApplication(sys.argv)
        self.MainWindow = QtWidgets.QMainWindow()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self.MainWindow)
        self.database_enc_file_name = "base.txt.enc"
        self.database_dec_file_name = "base.txt"
        self.ui.button_load_db.clicked.connect(self.load_database_to_ram)

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
        database_ram = open(self.database_dec_file_name, "r")
        for line in database_ram.readlines():
            if "end_data" in line:
                break
            else:
                self.ui.textedit_pass.append(line.strip())
        database_ram.close()
        if os.path.exists(self.database_dec_file_name):
            os.remove(self.database_dec_file_name)
        self.ui.button_load_db.setEnabled(False)

    def save_database_to_fs(self, file: str):
        pass


sw_application = PasswordSaverGui()
sw_application.run_gui()
