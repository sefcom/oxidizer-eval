long long uu_seq::numberparse::parse_hexadecimal::h3eefbf540d67b331(unsigned long long a0[6], char a1[4], unsigned long a2)
{
    unsigned long v0;  // [sp-0xb0], Other Possible Types: unsigned long long
    char v1;  // [sp-0xa8]
    unsigned int v2;  // [bp-0xa7]
    unsigned int v3;  // [sp-0xa4]
    unsigned long v4;  // [sp-0xa0], Other Possible Types: unsigned long long
    char v5;  // [sp-0x98]
    char v6;  // [bp-0x97]
    unsigned int v7;  // [bp-0x94]
    void* v8;  // [sp-0x90]
    int v9;  // [bp-0x88], Other Possible Types: char
    char v10;  // [bp-0x80]
    char v11;  // [bp-0x7f]
    char v12;  // [bp-0x7c]
    int v13;  // [bp-0x78], Other Possible Types: char
    void* v14;  // [sp-0x68]
    unsigned long v15;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v16;  // [sp-0x50]
    char v17;  // [sp-0x48]
    unsigned long v18;  // [sp-0x40], Other Possible Types: unsigned long long
    void* v19;  // [sp-0x38]
    char v20;  // [sp-0x30]
    char v22;  // bpl
    char v23[4];  // rax
    unsigned long long v24;  // rdx
    unsigned int v25;  // eax
    unsigned long long v26;  // rax
    char v27;  // cl
    unsigned long long v28;  // r12
    int v30;  // xmm0
    unsigned int *v31;  // rcx
    struct_0 *v32;  // rax
    unsigned int v33;  // esi

    if (!a2)
    {
LABEL_49813c:
        goto LABEL_498124;
    }
    else
    {
        v22 = a1[0];
        if (v22 == 45)
        {
            if (a2 < 4)
            {
                if (!(a2 == 3))
                    goto LABEL_498124;
LABEL_497f9b:
                v23 = 3;
                v24 = -3;
            }
            else
            {
                if (!(a1[3] <= 191))
                    goto LABEL_497f9b;
LABEL_498124:
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        else
        {
            if (a2 >= 3)
            {
                if (!(a1[2] <= 191))
                    goto LABEL_497fbd;
                goto LABEL_49813c;
            }
            else
            {
                if (!(a2 == 2))
                    goto LABEL_49813c;
LABEL_497fbd:
                v23 = 2;
                v24 = -2;
            }
        }
        if (v24 + a2)
        {
            v25 = *((char *)(a1 + v23));
            if (!(v25 != 43) || !(v25 != 45))
            {
                *((char *)&a0[1]) = 0;
                a0[0] = 9223372036854775812;
                return a0;
            }
        }
        num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hd4bc135bcf1e5048(&v9, a1 + v23, v24 + a2, 16);
        v26 = *((long long *)&v9);
        if (v0 == 0x8000000000000000)
        {
            *((char *)&a0[1]) = 2;
            a0[0] = 9223372036854775812;
            return a0;
        }
        v27 = v10;
        v3 = *((int *)&v12);
        v2 = *((int *)&v11);
        v28 = *((long long *)&v13);
        v0 = v26;
        v1 = v27;
        v4 = v28;
        v5 = 2 - (v28 < 1);
        v8 = 0;
        *((int128_t *)&v13) = 0x10000000000000000;
        *((int128_t *)&v9) = 0x80000000000000000;
        v14 = 0;
        v17 = 2 - (v28 < 1);
        v15 = &v0;
        v16 = 0;
        v20 = 1;
        v18 = &v9;
        v19 = 0;
        if (v22 != 45)
        {
            a0[4] = v8;
            v30 = *((int128_t *)&v0);
            *((int128_t *)&a0[2]) = *((int128_t *)&v4);
            *((void*)&a0[0]) = v30;
            *((int128_t *)&a0[5]) = 0;
        }
        else if (!(char)bigdecimal::impl_cmp::check_equality_bigdecimal_ref::hab00001fd516d84f(&v15, &v18))
        {
            v31 = (char *)&a0[3] + 1;
            a0[2] = v4;
            v32 = &a0[4];
            *((int128_t *)&a0[0]) = *((int128_t *)&v0);
            if (v28)
                *((char *)&a0[3]) = 0;
            else
                *((char *)&a0[3]) = 1;
            v33 = *((int *)&v6);
            *((unsigned int *)((char *)v31 + 3)) = v7;
            *(v31) = v33;
            v32->field_0 = 0;
            v32->field_10 = 0;
        }
        else
        {
            a0[0] = 9223372036854775810;
            a0[5] = 2;
            a0[1] = 0;
            if (v0)
                __rust_dealloc(*((long long *)&v1));
        }
        if (!(long long)v9)
            return a0;
        __rust_dealloc((long long)(&v9)[8]);
    }
}
