
#ifndef WRITEBINARYFILE_BINARYFILE_H
#define WRITEBINARYFILE_BINARYFILE_H
#define FILENAME "myMessage.bin"
#define MAX_NAME_LENGTH 50
struct Message{
    char name[MAX_NAME_LENGTH];
    char sender[MAX_NAME_LENGTH];
    char receiver[MAX_NAME_LENGTH];

};
#endif //WRITEBINARYFILE_BINARYFILE_H
