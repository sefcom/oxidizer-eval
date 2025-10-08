long long fish::builtins::echo::parse_numeric_sequence(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x89]
    unsigned long v2;  // [bp-0x80]
    unsigned int v6;  // [bp-0x58]
    unsigned int v7;  // [bp-0x58]
    unsigned long long v14;  // r13
    void* v15;  // cc_ndep
    char v16;  // bpl
    unsigned int v17;  // eax
    char v18;  // dl
    unsigned long v19;  // rax
    unsigned long long v20;  // r13
    unsigned long long v21;  // rax

    if (v17 == 0x110000 || !((char)::0x128b6d0::core::char::methods::<impl char>::to_digit(v17, v0) & 1))
    {
        v20 = v14;
        if (v20)
        {
LABEL_1349ac3:
            a0->field_8 = v20;
            a0->field_10 = v16;
            v21 = 1;
        }
    }
    0.unwrap(&g_14c8db8);
    v14 += 1;
    if ((char)_ccall(4, 24, v14 + 1, 0, _ccall(19, 0, 0, v15)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14c8dd0); /* do not return */
    v16 = v0 * v16 + v18;
    v19 = v2;
    v20 = v14;
    if (!v19)
        goto LABEL_1349ac3;
    v15 = _ccall(20, v19, 0, _ccall(19, 0, 0, v15));
    v2 = v19 - 1;
    v6 = v7;
}
