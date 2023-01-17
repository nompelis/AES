
#ifndef _INAES_H_
#define _INAES_H_

#ifdef __cplusplus
extern "C" {
#endif


typedef unsigned char BYTE;
typedef unsigned int WORD;

struct AES256_key_s {
   WORD key[8];
   WORD w[4*15];
};


void inCrypto_AES256_KeyExpansion( struct AES256_key_s* k );

void inCrypto_AES256_CipherBlock( const struct AES256_key_s* k,
                                  unsigned char in[4*4]  );

void inCrypto_AES256_DecipherBlock( const struct AES256_key_s* k,
                                    unsigned char in[4*4]  );

#ifdef __cplusplus
}
#endif

#endif
