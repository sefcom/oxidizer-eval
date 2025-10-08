void fish::flog::activate_flog_categories_by_pattern(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x58]
    void* v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    void* v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x30]
    void* v7;  // rax
    unsigned long long v8;  // rsi
    void* v9;  // rdx
    unsigned long v10;  // rsi
    unsigned long long v11;  // rdi
    void* v12;  // r8
    uint256_t v13;  // ymm1
    int v14;  // xmm1
    uint256_t v15;  // ymm1
    int v16;  // xmm1
    unsigned long long v17;  // r14
    unsigned long long v18;  // rdx
    char v19;  // al
    unsigned long long v20;  // rdx

    v0.to_vec(a0, a1);
    v7 = v1;
    if (v2)
    {
        v8 = 4611686018427387903 & v4 - 1;
        v9 = v7;
        if (v8 >= 7)
        {
            v10 = v8 + 1;
            v11 = v10 & 18446744073709551608;
            v9 = v7 + v11 * 4;
            v12 = 0;
            do
            {
                v14 = CmpEQV(*((int128_t *)((char *)v7 + 0x4 * v12)), 7526675440607552758797104578655);
                v15 = (v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)((char *)v7 + 0x4 * v12))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14;
                if (!((char)v15 & 1))
                {
                    if (((char)((unsigned long long)v14 >> 32) & 1))
                        goto LABEL_13b0d28;
                    goto LABEL_13b0c96;
                }
                else
                {
                    *((unsigned int *)((char *)v7 + 0x4 * v12)) = 45;
                    if (!((char)((unsigned long long)v14 >> 32) & 1))
                    {
LABEL_13b0c96:
                        if (((char)(v14 >> 64) & 1))
                            goto LABEL_13b0d41;
                        goto LABEL_13b0ca6;
                    }
                    else
                    {
LABEL_13b0d28:
                        *((unsigned int *)(4 + (char *)v7 + 0x4 * v12)) = 45;
                        if (!((char)(v14 >> 64) & 1))
                        {
LABEL_13b0ca6:
                            if (!((char)(v14 >> 96) & 1))
                                goto LABEL_13b0cbb;
                            goto LABEL_13b0cb2;
                        }
                        else
                        {
LABEL_13b0d41:
                            *((unsigned int *)(8 + (char *)v7 + 0x4 * v12)) = 45;
                            if (!((char)(v14 >> 96) & 1))
                                goto LABEL_13b0cbb;
LABEL_13b0cb2:
                            *((unsigned int *)(12 + (char *)v7 + 0x4 * v12)) = 45;
LABEL_13b0cbb:
                            v16 = CmpEQV(*((int128_t *)(16 + (char *)v7 + 0x4 * v12)), 7526675440607552758797104578655);
                            v13 = (v15 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(16 + (char *)v7 + 0x4 * v12))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
                            if (!((char)v13 & 1))
                            {
                                if (((char)((unsigned long long)v16 >> 32) & 1))
                                    goto LABEL_13b0d79;
                                goto LABEL_13b0ce5;
                            }
                            else
                            {
                                *((unsigned int *)(16 + (char *)v7 + 0x4 * v12)) = 45;
                                if (!((char)((unsigned long long)v16 >> 32) & 1))
                                {
LABEL_13b0ce5:
                                    if (((char)(v16 >> 64) & 1))
                                        goto LABEL_13b0d92;
                                    goto LABEL_13b0cf5;
                                }
                                else
                                {
LABEL_13b0d79:
                                    *((unsigned int *)(20 + (char *)v7 + 0x4 * v12)) = 45;
                                    if (!((char)(v16 >> 64) & 1))
                                    {
LABEL_13b0cf5:
                                        if (!((char)(v16 >> 96) & 1))
                                            continue;
                                        goto LABEL_13b0dab;
                                    }
                                    else
                                    {
LABEL_13b0d92:
                                        *((unsigned int *)(24 + (char *)v7 + 0x4 * v12)) = 45;
                                        if (!((char)(v16 >> 96) & 1))
                                            continue;
LABEL_13b0dab:
                                        *((unsigned int *)(28 + (char *)v7 + 0x4 * v12)) = 45;
                                    }
                                }
                            }
                        }
                    }
                }
                v12 += 8;
            } while (v11 != v12);
            if (v10 == v11)
                goto LABEL_13b0dc2;
        }
        do
        {
            if (*((int *)v9) == 95)
                *((unsigned int *)v9) = 45;
            v9 += 4;
        } while (v9 != v7 + v4 * 4);
    }
LABEL_13b0dc2:
    v3 = v7;
    v4 = v2;
    v5 = 44;
    while (true)
    {
        v17 = v3.next();
        if (!v17)
            break;
        v19 = v17.starts_with(v18, 45);
        v20 = v18;
        if (v19)
        {
            v17 = v17.slice_from(v18, 1);
            v20 = v18;
        }
        fish::flog::apply_one_wildcard(v17, v20, v19 ^ 1);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
