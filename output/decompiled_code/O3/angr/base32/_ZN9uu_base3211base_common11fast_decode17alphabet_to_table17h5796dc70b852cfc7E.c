long long uu_base32::base_common::fast_decode::alphabet_to_table::h5796dc70b852cfc7(void* a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    void* v0;  // [sp-0x130], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x128]
    unsigned short v2;  // [sp-0x120]
    int v3;  // [sp-0x118]
    int v4;  // [sp-0x108]
    int v5;  // [sp-0xf8]
    int v6;  // [sp-0xe8]
    int v7;  // [sp-0xd8]
    int v8;  // [sp-0xc8]
    int v9;  // [sp-0xb8]
    int v10;  // [sp-0xa8]
    int v11;  // [sp-0x98]
    int v12;  // [sp-0x88]
    int v13;  // [sp-0x78]
    int v14;  // [sp-0x68]
    int v15;  // [sp-0x58]
    int v16;  // [sp-0x48]
    int v17;  // [sp-0x38]
    int v18;  // [sp-0x28]
    char *v20;  // rax
    unsigned long long v21;  // 4096
    unsigned long v23;  // rdx
    char *v24;  // rax
    char *v25;  // rax

    if (a3)
    {
        *((int128_t *)&v18) = 0;
        *((int128_t *)&v17) = 0;
        *((int128_t *)&v16) = 0;
        *((int128_t *)&v15) = 0;
        *((int128_t *)&v14) = 0;
        *((int128_t *)&v13) = 0;
        *((int128_t *)&v12) = 0;
        *((int128_t *)&v11) = 0;
        *((int128_t *)&v10) = 0;
        *((int128_t *)&v9) = 0;
        *((int128_t *)&v8) = 0;
        *((int128_t *)&v7) = 0;
        *((int128_t *)&v6) = 0;
        *((int128_t *)&v5) = 0;
        *((int128_t *)&v4) = 0;
        *((int128_t *)&v3) = 0;
        v0 = a1;
        v1 = a2 + a1;
        v20 = ::0x4c4b70::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha61c831695091875(&v0);
        if (v20)
        {
            do
            {
                v25 = *(v20);
                if (*((char *)(&v3 + v25)))
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            } while ((*((char *)(&v3 + v25)) = 1, v20 = ::0x4c4b70::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha61c831695091875(&v0), v20));
        }
    }
    else
    {
        *((int128_t *)&v18) = 1334440654591915542993625911497130241;
        *((int128_t *)&v17) = 1334440654591915542993625911497130241;
        *((int128_t *)&v16) = 1334440654591915542993625911497130241;
        *((int128_t *)&v15) = 1334440654591915542993625911497130241;
        *((int128_t *)&v14) = 1334440654591915542993625911497130241;
        *((int128_t *)&v13) = 1334440654591915542993625911497130241;
        *((int128_t *)&v12) = 1334440654591915542993625911497130241;
        *((int128_t *)&v11) = 1334440654591915542993625911497130241;
        *((int128_t *)&v10) = 1334440654591915542993625911497130241;
        *((int128_t *)&v9) = 1334440654591915542993625911497130241;
        *((int128_t *)&v8) = 1334440654591915542993625911497130241;
        *((int128_t *)&v7) = 1334440654591915542993625911497130241;
        *((int128_t *)&v6) = 1334440654591915542993625911497130241;
        *((int128_t *)&v5) = 1334440654591915542993625911497130241;
        *((int128_t *)&v4) = 1334440654591915542993625911497130241;
        *((int128_t *)&v3) = 1334440654591915542993625911497130241;
        v0 = 0;
        v1 = 2;
        v2 = 3338;
        for (v21 = a2; ((char)_$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd1264c7489ab82f(&v0, a1, v21) & 1); v21 = v23)
        {
            v24 = v23 & 4294967295;
            if (!*((char *)(&v3 + v24)))
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            *((char *)(&v3 + v24)) = 0;
        }
        core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$u8$C$2_usize$GT$$GT$::h9ff64d9a32df343b();
    }
    memcpy(a0, &v3, 0x100);
    return a0;
}
