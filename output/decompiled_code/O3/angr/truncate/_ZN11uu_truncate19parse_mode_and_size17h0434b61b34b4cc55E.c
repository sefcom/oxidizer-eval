long long uu_truncate::parse_mode_and_size::h0434b61b34b4cc55(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x218]
    char v1;  // [bp-0xf8]
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0]
    int v5;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0xd0]
    unsigned long long v7;  // [sp-0xc8]
    unsigned long long v8;  // [sp-0xc0]
    void* v9;  // [sp-0xb8]
    unsigned long v10;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x98]
    void* v12;  // [sp-0x90]
    char v13[4];  // [sp-0x88]
    unsigned long long v14;  // [sp-0x80]
    char v15;  // [sp-0x78]
    void* v16;  // [sp-0x70]
    void* v17;  // [sp-0x60]
    unsigned short v18;  // [sp-0x50]
    char v19;  // [sp-0x4e]
    char v20;  // [bp-0x40]
    char v21;  // [bp-0x38]
    char v23[4];  // rax
    unsigned long v24;  // rdx
    unsigned long long v25;  // r12
    unsigned int v26;  // ecx
    unsigned int v27;  // esi
    unsigned int v28;  // edx
    char v29[4];  // r15
    void* v30;  // r14
    unsigned long long v31;  // r12
    unsigned long long v32;  // r13

    v23 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0030695d6b228c67(a1, a2);
    if (!v24)
    {
        a0[0] = 1;
        a0[1] = 0;
        a0[2] = 1;
        a0[1] = 0;
        return v23;
    }
    v25 = v23[0];
    if ((char)v25 < 0)
    {
        v26 = (unsigned int)v25 & 31;
        v27 = v23[1] & 63;
        if ((v25 & 255) <= 223)
        {
            v25 = v26 * 64 | v27;
        }
        else
        {
            v28 = v23[2] & 63 | v27 * 64;
            if ((v25 & 255) >= 240)
            {
                v25 = v23[3] & 63 | v28 * 64 | (v26 & 7) * 0x40000;
            }
            else
            {
                v25 = v28 | v26 * 0x1000;
                if ((unsigned int)v25 <= 62 && (v0 = (unsigned long long)0x5000a82000000000, ((char)((unsigned long long)(char)*((char *)((char *)&v0 + ((v25 & 4294967295 & 63) >> 3))) >> (unsigned long long)(char)(v25 & 4294967295 & 63 & 7)) & 1)))
                {
                    v29 = &v23[1];
                    if (v24 == 1)
                    {
                        v30 = 0;
                    }
                    else
                    {
                        if (v29[0] < 192)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                        v30 -= 1;
                    }
LABEL_481f69:
                    v18 = 0;
                    v19 = 0;
                    v16 = 0;
                    v17 = 0;
                    uucore::parser::parse_size::Parser::parse::h4bb7d9f2e0cc66ae(&v1, &v16, v29, v30);
                    v32 = *((long long *)&v1);
                    if (v32 != 3)
                    {
                        v23 = *((long long *)&v2);
                        *((int128_t *)&v5) = *((int128_t *)&v3);
                    }
                    else if (!*((long long *)&v4))
                    {
                        v23 = *((long long *)&v3);
                    }
                    else
                    {
                        v12 = 0;
                        *(&v13) = v29;
                        v14 = v30;
                        v15 = 1;
                        v10 = &v12;
                        v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v5 = &anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326;
                        v6 = 2;
                        v9 = 0;
                        v7 = &v10;
                        v8 = 1;
                        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v20, &v5);
                        v23 = *((long long *)&v20);
                        *((int128_t *)&v5) = *((int128_t *)&v21);
                        v32 = 2;
                    }
                    switch ((unsigned int)v31)
                    {
                    case 37:
                        if (!((unsigned int)v32 == 3))
                            goto LABEL_4820a9;
                        break;
                    case 43:
                        if (!((unsigned int)v32 == 3))
                            goto LABEL_4820a9;
                        break;
                    case 45:
                        if ((unsigned int)v32 == 3)
                            break;
LABEL_4820a9:
                        *((int128_t *)&a0[2]) = (int128_t)v5;
                        goto LABEL_4820e8;
                    case 47:
                        goto LABEL_4820d9;
                    case 60:
                        if (!((unsigned int)v32 == 3))
                            goto LABEL_4820a9;
                        break;
                    case 62:
                        if (!((unsigned int)v32 == 3))
                            goto LABEL_4820a9;
                        break;
                    default:
LABEL_4820d9:
                        if (!((unsigned int)v32 == 3))
                            goto LABEL_4820a9;
                        break;
                    }
                    v23 = uu_truncate::TruncateMode::Absolute::hd179e78d7ce44b71(v23);
                    a0[2] = v24;
LABEL_4820e8:
                    a0[1] = v23;
                    a0[0] = v32;
                    return v23;
                }
            }
        }
    }
    goto LABEL_481f69;
}
