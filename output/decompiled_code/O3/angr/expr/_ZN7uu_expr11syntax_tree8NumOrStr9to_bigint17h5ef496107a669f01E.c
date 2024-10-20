long long uu_expr::syntax_tree::NumOrStr::to_bigint::h5ef496107a669f01(struct_2 *a0, struct_0 *a1)
{
    void* v0;  // [sp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x3f]
    unsigned int v4;  // [bp-0x3c]
    char v5;  // [bp-0x38]
    char v7[2];  // rsi
    void* v8;  // rdx
    char v9;  // bpl
    void* v10;  // r15
    char v11[2];  // r13
    char v12[2];  // rsi
    char v13[2];  // r14
    unsigned long long v14;  // r12
    char v15[2];  // rax
    unsigned long long v16;  // rcx
    char v18;  // cc_dep1
    unsigned long long v19;  // rax
    char v20;  // cl
    unsigned int v21;  // edx
    unsigned long long v22;  // rdx

    if (a1->field_0 == 0x8000000000000000)
    {
        v7 = a1->field_10;
        v8 = *((long long *)&a1->field_18);
        if (!v8)
        {
            v8 = 0;
        }
        else if (v7[0] == 45)
        {
            v15 = &v7[1];
            v16 = v8;
            if (v16 == 1)
            {
                v8 = 0;
            }
            else
            {
                v18 = v7[1];
            }
        }
        num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hd4bc135bcf1e5048(&v1, v12, v8, 10);
        v19 = *((long long *)&v1);
        v20 = v2;
        if (v19 != 0x8000000000000000)
        {
            v21 = *((int *)&v3);
            a0->field_9 = v4;
            *((unsigned int *)&(&a0->field_8)[1]) = v21;
            v22 = *((long long *)&v5);
            *((unsigned long long *)&a0->padding_d) = v22;
            *((int *)&a0->field_10) = (v22 ? 2 : 1);
        }
        a0->field_8 = v20;
        a0->field_0 = v19;
        return v19;
    }
    else
    {
        v9 = a1->field_18;
        v10 = a1->field_8;
        v11 = a1->field_10;
        if (!v11)
        {
            ::libc.so.0::memcpy(v14, v10, v13);
            a0->field_0 = v11;
            *((long long *)&a0->field_8) = 8;
            *((char *[2])&a0->padding_d) = v11;
            *((char *)&a0->field_10) = v9;
            return v19;
        }
        v13 = v11 * 8;
        if (v11 >> 60)
        {
            v0 = 0;
        }
        else
        {
            v0 = 8;
            v14 = __rust_alloc(v13, 8);
            if (v14)
            {
                v19 = ::libc.so.0::memcpy(v14, v10, v13);
                a0->field_0 = v11;
                *((unsigned long long *)&a0->field_8) = v14;
                *((char *[2])&a0->padding_d) = v11;
                *((char *)&a0->field_10) = v9;
                return v19;
            }
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
}
