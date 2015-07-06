void criptografar(char *mensagem){
	while (*mensagem){
		*mensagem = *mensagem + 42;
		mensagem++;
	}
}

void descriptografar(char *mensagem){
	while (*mensagem){
		*mensagem = *mensagem - 42;
		mensagem++;
	}
}