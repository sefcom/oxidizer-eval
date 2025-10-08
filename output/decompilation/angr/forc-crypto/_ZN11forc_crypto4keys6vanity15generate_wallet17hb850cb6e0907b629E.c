long long forc_crypto::keys::vanity::generate_wallet(void* a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x150]
    char v1;  // [bp-0x148]
    unsigned long long v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x138]
    int v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    int v7;  // [bp-0x108]
    int v8;  // [bp-0xf9]
    int v9;  // [bp-0xf8]
    int v10;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    char v11;  // [bp-0xe7]
    char v12;  // [bp-0xe6]
    int v13;  // [bp-0xe0]
    int v14;  // [bp-0xd8]
    int v15;  // [bp-0xd7]
    unsigned long long v16;  // [bp-0xd0]
    int v17;  // [bp-0xc8]
    int v18;  // [bp-0xb8]
    int v19;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v20;  // [bp-0x98]
    char v21;  // [bp-0x88]
    char v22;  // [bp-0x87]
    char v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x70]
    int v25;  // [bp-0x68]
    int v26;  // [bp-0x58]
    char v27;  // [bp-0x48]
    char v28;  // [bp-0x47]
    int v29;  // [bp-0x38], Other Possible Types: char
    char v30;  // [bp-0x28]
    unsigned long long v32;  // rax
    char v33;  // al
    int v34;  // xmm0
    unsigned long long v35;  // rcx
    int v36;  // xmm0

    v0 = rand::rngs::thread::thread_rng();
    if (a1)
    {
        fuels_accounts::signers::private_key::generate_mnemonic_phrase(&v21, v0);
        v32 = *((long long *)&v21);
        memcpy(&v1, &v23, 16);
        v3 = v24;
        if (v32 == 12)
        {
            *((int128_t *)&v4) = *((int128_t *)&v1);
            v6 = v3;
            v10.new_from_mnemonic_phrase_with_path(v5, v3, "m/44'/1179993420'/0'/0/0EXAMPLES:\n", 24);
            v33 = v11;
            if (v10 == 1)
            {
                *((long long *)a0) = v11.from();
                *((unsigned long long *)&a0[64]) = 9223372036854775809;
                core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
            }
            else
            {
                v34 = *((int128_t *)&v12);
                *((int128_t *)&v8) = (int128_t)v15;
                v7 = v34;
                v35 = (long long)v4;
                memcpy(&v30, &v5, 16);
LABEL_7fc087:
                v27 = v33;
                memcpy(&v28, &(char)v7, 16);
                memcpy(&v29, &v7, 16);
                v2 = v35;
                memcpy(&v1, &v30, 16);
                v21.from(&v27);
                (char)v7.hash(&v21);
                v36 = (int128_t)v7;
                v14 = v9;
                v10 = v36;
                memcpy(&v19, &v2, 16);
                v20 = v3;
                memcpy(&v15, &v27, 16);
                v18 = v29;
                *((unsigned long long *)&a0[80]) = v3;
                a0[64] = v19;
                a0[48] = v29;
                a0[32] = v17;
                a0[16] = v9;
                *(a0) = v36;
            }
        }
        else
        {
            v18 = v26;
            v17 = v25;
            *((int128_t *)&v13) = *((int128_t *)&v1);
            v16 = v3;
            v10 = v32;
            *((long long *)a0) = (char)v10.from();
            *((unsigned long long *)&a0[64]) = 9223372036854775809;
        }
    }
    else
    {
        (char)v10.new(&v0);
        v21.from(&(char)v10);
        v33 = v21;
        *((int128_t *)&v7) = *((int128_t *)&v22);
        memcpy(&(char)v7, &v22, 16);
        v35 = 0x8000000000000000;
        goto LABEL_7fc087;
    }
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v0);
    return a0;
}
