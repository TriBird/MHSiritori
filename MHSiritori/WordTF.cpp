// �N���C�A���g�� WinSock2

#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>

int main() {

	char server_ip_addr[32];
	int port_number;

	// Windows Sockets�d�l�Ɋւ�������i�[����\����
	WSADATA wsa_data;
	// WinSock�̏���������(Version 2.0)
	if (WSAStartup(MAKEWORD(2, 0), &wsa_data) != 0) {
		std::cerr << "Winsock�̏��������s(WSAStartup)" << std::endl;
	}

	// ���[�U����
	std::cout << "�ڑ���IP�A�h���X����͂��Ă�������(xxx.xxx.xxx.xxx)" << std::endl;
	std::cin >> server_ip_addr;
	std::cout << "�|�[�g�ԍ�����͂��Ă�������" << std::endl;
	std::cin >> port_number;

	// sockaddr_in�\���̂̍쐬�ƃ|�[�g�ԍ��AIP�^�C�v�̓���
	struct sockaddr_in dst_addr;
	memset(&dst_addr, 0, sizeof(dst_addr));
	dst_addr.sin_port = htons(port_number);		// �|�[�g�ԍ�
	dst_addr.sin_family = AF_INET;				// AF_INET��ipv4������

	// ������ (1) Type(ipv4 or v6) (2) IP�A�h���X�̃e�L�X�g�`�� (3) IP�A�h���X�̃o�C�i���`���y(2)��(3)�ɕϊ��z
	inet_pton(dst_addr.sin_family, server_ip_addr, &dst_addr.sin_addr.s_addr);

	// AF_INET��ipv4��IP�v���g�R�� & SOCK_STREAM��TCP�v���g�R��
	int dst_socket = socket(AF_INET, SOCK_STREAM, 0);

	// �ڑ�����
	if (connect(dst_socket, (struct sockaddr*)&dst_addr, sizeof(dst_addr))) {
		std::cerr << "�ڑ����s(�T�[�oIP�A�h���X" << server_ip_addr << "/�ڑ���|�[�g�ԍ�" << port_number << std::endl;
		exit(0);
	}

	std::cout << "�ڑ�����(�T�[�oIP�A�h���X" << server_ip_addr << "/�ڑ���|�[�g�ԍ�" << port_number << std::endl << std::endl;;


	char send_buf1[256], send_buf2[256];
	char recv_buf[256];

	while (1) {

		std::cout << "������2���͂��Ă�������" << std::endl;
		std::cin >> send_buf1 >> send_buf2;

		// Packet�̑��M(SOCKET, Buffer, Datasize, ���M���@)
		send(dst_socket, send_buf1, 256, 0);
		send(dst_socket, send_buf2, 256, 0);

		// Packet�̎�M
		recv(dst_socket, recv_buf, 256, 0);

		// ��M���ʂ̕\��
		std::cout << "���v��" << atoi(recv_buf) << std::endl << std::endl;
	}

	// �������
	closesocket(dst_socket);

	// WinSock�̏I������
	WSACleanup();
	return 0;
}