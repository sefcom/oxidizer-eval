long long fish::env::var::EnvVar::setting_exports(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x18]
    char v1;  // [bp-0x11]
    unsigned long v3;  // rax
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep
    unsigned long long v8;  // rcx

    v0 = v3;
    v1 = a1->field_10;
    v1.set(1, a2);
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a1->field_0) + 1, 0, _ccall(v4, v5, v6, v7))))
    {
        v8 = a1->field_8;
        a0->field_0 = a1->field_0;
        a0->field_8 = v8;
        a0->field_10 = v1;
        return a0;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20555192()
}
