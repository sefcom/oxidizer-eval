long long fish::function::FunctionSet::get_props(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned long v4;  // cc_ndep

    v0 = v2;
    v3 = a0.get_inner(a1, a2);
    if (!v3)
        return 0;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v3->field_18) + 1, 0, _ccall(20, v3, 0, v4))))
        return v3->field_18;
    [D] Unsupported jumpkind Ijk_NoDecode at address 20670159()
}
