

#ifndef SRA_H
#define SRA_H

#include <vector>
#include <NTL/ZZ.h>

using namespace NTL;

struct SRA
{
    ZZ e;
    ZZ d;
    ZZ p;
};

//p is prime!!
SRA generate_sra_key(ZZ p);
ZZ encrypt_sra(SRA sra, ZZ plaintext);
ZZ decrypt_sra(SRA sra, ZZ ciphertext);


#endif