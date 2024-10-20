long long uu_expr::syntax_tree::NumOrStr::eval_as_string::he89d34912e359fc1(struct_0 *a0, struct_1 *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x80]
    unsigned long long v1;  // [sp-0x78]
    void* v2;  // [sp-0x70]
    int v3;  // [sp-0x68]
    int v4;  // [sp-0x58]
    void* v5;  // [sp-0x48]
    void* v6;  // [sp-0x38]
    unsigned long long v7;  // [sp-0x28]
    unsigned long long v8;  // [sp-0x20]
    unsigned long long v9;  // [sp-0x18]
    char v10;  // [sp-0x10]

    if (a1->field_0 == 0x8000000000000000)
    {
        a0->field_10 = *((long long *)((char *)&a1->field_8 + 8));
        a0->field_0 = *((int128_t *)&(&a1->field_0)[1]);
        return a0;
    }
    *((uint128_t *)&v4) = a1->field_8;
    *((int128_t *)&v3) = *((int128_t *)&a1->field_0);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9 = 32;
    v10 = 3;
    v5 = 0;
    v6 = 0;
    v7 = &v0;
    v8 = &g_56a8b8;
    if ((char)_$LT$num_bigint..bigint..BigInt$u20$as$u20$core..fmt..Display$GT$::fmt::haf56ee7cf76bc1ad(&v3, &v5))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    if (!(long long)v3)
        return a0;
    __rust_dealloc((long long)(&v3)[8]);
}
