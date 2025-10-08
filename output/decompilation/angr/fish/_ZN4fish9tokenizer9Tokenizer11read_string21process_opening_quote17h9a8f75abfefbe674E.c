long long fish::tokenizer::Tokenizer::read_string::process_opening_quote(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v2;  // r15
    unsigned long long v3;  // r12
    unsigned long long v4;  // r13
    char v5;  // al
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r12
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // r12
    unsigned long long v10;  // r12

    v2 = a0->field_0;
    v3 = a0->field_30;
    if (v2)
    {
        a0->field_8->field_20(v2, v3);
        a3 &= 4294967295;
    }
    v4 = a0->field_18;
    v5 = fish::tokenizer::quote_end(a0->field_10, v4, v3, a3);
    if (!(v5 & 1))
    {
        a0->field_30 = v4;
        return 1;
    }
    v0 = v3;
    v7 = v6 + 1;
    if ((char)_ccall(4, 24, v6 + 1, 0, _ccall(17, (unsigned long long)(v5 & 1), 0, v8)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e3e28); /* do not return */
    v9 = v7;
    if ((int)a0->field_10.char_at(v4, v6) == 36)
    {
        a1.push(a2, &g_14e3e40);
        v9 = v6;
    }
    v10 = v9;
    a0->field_30 = v6;
    if (!v2)
        return 0;
    a0->field_8->field_20(v2, v10);
    return 0;
}
