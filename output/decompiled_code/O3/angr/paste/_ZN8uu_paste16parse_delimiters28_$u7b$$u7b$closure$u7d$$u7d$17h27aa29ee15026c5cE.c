long long uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h27aa29ee15026c5c(char a0[4], struct_0 *a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // r15
    unsigned int v4;  // eax
    void* v5;  // rax
    unsigned long long *v6;  // r14
    unsigned long long *v7;  // rax
    unsigned long long *v8;  // rcx

    v0 = v2;
    if ((unsigned int)a2 < 128)
    {
        a0[0] = a2;
        v3 = 1;
    }
    else
    {
        v4 = a2;
        if ((unsigned int)a2 < 0x800)
        {
            a0[0] = (char)(v4 >> 6) | 192;
            a0[1] = (char)a2 & 63 | 128;
            v3 = 2;
        }
        else if ((unsigned int)a2 < 0x10000)
        {
            a0[0] = (char)(v4 >> 12) | 224;
            a0[1] = (char)((a2 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
            a0[2] = (char)a2 & 63 | 128;
            v3 = 3;
        }
        else
        {
            a0[0] = (char)(v4 >> 18) & 7 | 240;
            a0[1] = (char)((a2 & 4294967295 & 4294967295) >> 12 & 4294967295) & 63 | 128;
            a0[2] = (char)((a2 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
            a0[3] = (char)a2 & 63 | 128;
            v3 = 4;
        }
    }
    v5 = __rust_alloc(v3, 1);
    if (!v5)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    memcpy(v5, a0, v3);
    v6 = a1->field_10;
    if (v6 != a1->field_0)
    {
        v7 = a1->field_8;
        v8 = v6 * 16;
        *((void* *)(v7 + v8)) = v5;
        *((unsigned long long *)(v7 + v8 + 8)) = v3;
        a1->field_10 = (char *)v6 + 1;
        return v7;
    }
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hddd0f9e22ecb8420(a1);
}
