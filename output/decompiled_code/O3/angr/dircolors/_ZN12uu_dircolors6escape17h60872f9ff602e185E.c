long long uu_dircolors::escape::h60872f9ff602e185(unsigned long long a0[3], char a1[4], unsigned long a2)
{
    unsigned int v0;  // [bp-0x54], Other Possible Types: char
    char v1;  // [sp-0x53]
    char v2;  // [sp-0x52]
    char v3;  // [sp-0x51]
    void* v4;  // [sp-0x50]
    char *v5;  // [sp-0x48]
    char *v6;  // [sp-0x40]
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbx
    char *v10;  // rbp
    unsigned int v12;  // ecx
    unsigned int v13;  // esi
    unsigned int v14;  // edx
    char *v15;  // rbp
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rcx
    char *v18;  // rbp
    unsigned int v19;  // eax
    unsigned long long v20;  // r13
    char *v21;  // rbp

    v4 = 0;
    v5 = 1;
    v6 = 0;
    if (!a2)
    {
        a0[2] = v6;
        a0[0] = v4;
        a0[1] = v5;
        return a0;
    }
    v8 = &a1[a2];
    v9 = 32;
    v10 = 0;
    while (true)
    {
        v6 = v6;
        v9 = a1[0];
        if ((char)v9 >= 0)
        {
            a1 = &a1[1];
            if (!((unsigned int)v9 == 39))
                goto LABEL_492550;
            goto LABEL_492610;
        }
        v12 = (unsigned int)v9 & 31;
        v13 = a1[1] & 63;
        if ((v9 & 255) <= 223)
        {
            a1 = &a1[2];
            v9 = v12 * 64 | v13;
            if (!((unsigned int)v9 == 39))
                goto LABEL_492550;
            goto LABEL_492610;
        }
        v14 = a1[2] & 63 | v13 * 64;
        if ((v9 & 255) < 240)
        {
            a1 += &g_3;
            v9 = v14 | v12 * 0x1000;
            if (!((unsigned int)v9 == 39))
                goto LABEL_492550;
LABEL_492610:
            if (v4 - v10 <= 3)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v4, v10, 4);
                v15 = v6;
            }
            *((int *)(v5 + v15)) = 656890919;
            v10 = v6 + 4;
            goto LABEL_4924c5;
        }
        a1 += 1;
        v9 = *((char *)(a1 + &g_3)) & 63 | v14 * 64 | (v12 & 7) * 0x40000;
        if ((unsigned int)v9 == 39)
            goto LABEL_492610;
LABEL_492550:
        if ((unsigned int)v9 != 58)
        {
            if ((unsigned int)v9 <= 127)
            {
                v17 = v4;
            }
            else
            {
                v0 = 0;
                v19 = v9;
                if ((unsigned int)v9 < 0x800)
                {
                    v0 = (char)(v19 >> 6) | 192;
                    v1 = (char)(v9 & 4294967295) & 63 | 128;
                    v20 = 2;
                }
                else if ((unsigned int)v9 < 0x10000)
                {
                    v0 = (char)(v19 >> 12) | 224;
                    v1 = (char)((v9 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                    v2 = (char)(v9 & 4294967295) & 63 | 128;
                    v20 = &g_3;
                }
                else
                {
                    v0 = (char)(v19 >> 18) | 240;
                    v1 = (char)((v9 & 4294967295 & 4294967295) >> 12 & 4294967295) & 63 | 128;
                    v2 = (char)((v9 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                    v3 = (char)(v9 & 4294967295) & 63 | 128;
                    v20 = 4;
                }
                if (v4 - v10 < v20)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v4, v10, v20);
                    v15 = v6;
                }
                memcpy(v21 + v5, &v0, v20);
                v10 = &v6[v20];
                v6 = v10;
                if (a1 == v8)
                    break;
                continue;
            }
LABEL_4925aa:
            if (v10 == v17)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hff5cb679717789ce(&v4);
            *((char *)(v5 + v10)) = v9;
            v10 += 1;
        }
        else
        {
            v16 = v4;
            if ((unsigned int)v9 == 92)
                goto LABEL_4925aa;
            if (v16 - v10 <= 1)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h7e5eee66c132a829(&v4, v10, 2);
                v15 = v6;
            }
            *((short *)(v5 + v18)) = 14940;
            v10 = v6 + 2;
        }
LABEL_4924c5:
        v6 = v10;
        if (a1 == v8)
            break;
    }
}
