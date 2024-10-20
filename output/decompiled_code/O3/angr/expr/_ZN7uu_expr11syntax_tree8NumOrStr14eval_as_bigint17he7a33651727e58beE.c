long long uu_expr::syntax_tree::NumOrStr::eval_as_bigint::he7a33651727e58be(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x37]
    char v3;  // [bp-0x34]
    char v4;  // [bp-0x30]
    char v6[2];  // rbx
    void* v7;  // rdx
    int v8;  // xmm0
    char v9[2];  // rax
    unsigned long long v10;  // rcx
    char v12[2];  // rbx
    char v13;  // cc_dep1
    unsigned long long v17;  // r15
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx
    char v20;  // cl
    unsigned long long v21;  // rdx

    if (a1->field_0 != 0x8000000000000000)
    {
        v8 = *((int128_t *)&a1->field_0);
        *((int128_t *)&a0->padding_15) = *((int128_t *)&a1->field_10);
        *((void*)&a0->field_8) = v8;
        a0->field_0 = 0;
        return v18;
    }
    v6 = a1->field_10;
    v7 = a1[1].field_0;
    if (!v7)
    {
        v7 = 0;
        goto LABEL_4fdb74;
    }
    else if (v6[0] != 45)
    {
LABEL_4fdb74:
    }
    else
    {
        v9 = &v6[1];
        v10 = v7;
        if (v10 == 1)
        {
            v7 = 0;
        }
        else
        {
            v13 = v6[1];
        }
    }
    v17 = a1->padding_8;
    num_bigint::biguint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..biguint..BigUint$GT$::from_str_radix::hd4bc135bcf1e5048(&v0, v12, v7, 10);
    v18 = *((long long *)&v0);
    if (v18 == 0x8000000000000000)
    {
        v19 = 1;
        v18 = 2;
    }
    else
    {
        v20 = v1;
        a0->field_11 = *((int *)&v3);
        *((int *)&(&a0->padding_10)[1]) = *((int *)&v2);
        v21 = *((long long *)&v4);
        a0->padding_10[0] = v20;
        *((unsigned long long *)&a0->padding_15) = v21;
        *((int *)&a0->field_18) = (v21 ? 2 : 1);
        v19 = 0;
    }
    a0->field_8 = v18;
    a0->field_0 = v19;
    if (v17)
        return __rust_dealloc(v6);
    return v18;
}
