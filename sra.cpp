#include "sra.h"

SRA generate_sra_key(ZZ p){
    SRA res {};
    res.p = p;

    while (true) {
        res.e = NTL::RandomBnd(p - 3) + 2;

        if (NTL::GCD(res.e, p-1) == 1) {
            res.d = NTL::InvMod(res.e, p-1);
            break;
        }
    }
    return res;
}

ZZ encrypt_sra(SRA s, ZZ plaintext){
    return PowerMod(plaintext, s.e, s.p);
}

ZZ decrypt_sra(SRA s, ZZ ciphertext){
    return PowerMod(ciphertext, s.d, s.p);
}