long long uu_dd::blocks::unblock::h64160dfab4101727(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x68], Other Possible Types: unsigned long long
    char *v1;  // [sp-0x60], Other Possible Types: unsigned long long
    char *v2;  // [sp-0x58], Other Possible Types: unsigned long long
    int v3;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x48]
    char *v6;  // rdi
    void* v7;  // rax
    char *v8;  // rbp
    void* v9;  // r12
    unsigned long long v10;  // r15
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rax
    unsigned long v14;  // r13
    char *v15;  // rdi
    char *v16;  // rbp

    if (!a3)
    {
        v0 = &g_516460;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    if (!a2)
    {
        v6 = 1;
        v7 = 0;
        v8 = 0;
    }
    else
    {
        v6 = 1;
        v7 = 0;
        v8 = 0;
        do
        {
            v9 += v10;
            a2 -= v10;
            v0 = v7;
            v1 = v6;
            v2 = v8;
            v3 = v9;
            v4 = v10;
            do
            {
                v12 = v10 + 1;
                if (v12 == 1)
                    continue;
            } while ((v14 = v12 - 1, *((char *)(-2 + (char *)v9 + v12)) == 32));
            if (v7 - v8 < v14)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h99ac5a82b5186539(&v0, v8, v14);
                v15 = v1;
                v16 = v2;
            }
            memcpy(v15 + v16, v9, v14);
            v8 = &v16[v14];
            v2 = v8;
            v13 = v0;
            if (v8 == v13)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8d55f2c6aacfa9c4(&v0);
            *((char *)(v1 + v8)) = 10;
            v8 += 1;
            v7 = v0;
            v6 = v1;
        } while (a2);
    }
    a0[0] = v7;
    a0[1] = v6;
    a0[2] = v8;
    return v7;
}
