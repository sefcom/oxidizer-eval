long long fish::builtins::count::count(unsigned long a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0xa8]
    void* v1;  // [bp-0xa0]
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // rbx
    unsigned long v11;  // r14
    unsigned long long v12;  // r15

    v6 = v8;
    v5 = v9;
    v4 = v10;
    if (!a3)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14c8c70); /* do not return */
    v11 = a3 - 1;
    v1 = 0;
    v3.new(8, 0, &v1, a1, 0x20000);
    v12 = v3.fold();
    if ((char)__CFADD__(v12, v11))
        core::panicking::panic_const::panic_const_add_overflow(&g_14c8c88); /* do not return */
    v0 = v12 + v11;
    v2.to_wstring(&v0);
    a1->field_8.appendln(&v2);
    if (!v0)
        return 4294967297;
    return 0x100000000;
}
