from Crypto.Cipher import AES

KEY = "1234567890123456"
IV = "1234567890123456"


def read_file(file_name: str) -> bytes:
    with open(file_name, 'rb') as file:
        return file.read()


def write_to_file(file_name: str, data: bytes):
    with open(file_name, 'wb') as file:
        file.write(data)


def data_block_size_check(data: bytes):
    _, remainder = divmod(len(data), 16)
    for i in range(16 - remainder):
        data += b'f'
    return data


def encrypt_data(data: bytes):
    encryptor = AES.new(KEY.encode(), AES.MODE_CBC, iv=IV.encode())
    return encryptor.encrypt(data)


def decrypt_data(data: bytes):
    encryptor = AES.new(KEY.encode(), AES.MODE_CBC, iv=IV.encode())
    return encryptor.decrypt(data)


def encrypt_file(file: str):
    data = read_file(file)
    data = data_block_size_check(data)
    enc_data = encrypt_data(data)
    write_to_file(file + ".enc", enc_data)


def decrypt_file(file_to_encrypt: str, file_to_save: str):
    data = read_file(file_to_encrypt)
    dec_data = decrypt_data(data)
    write_to_file(file_to_save, dec_data)
