long long starship_battery::types::manager::Manager::batteries(struct_0 *a0, unsigned long long *a1)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long
    int v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x8]
    unsigned long v5;  // cc_op
    unsigned long v6;  // cc_dep1
    unsigned long v7;  // cc_dep2
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // rbx

    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(a1)) + 1, 0, _ccall(v5, v6, v7, v8))))
    {
        v3 = v9;
        v0.new(*(a1));
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v2;
        *((void*)&(&a0->field_0)[1]) = v1;
        a0->field_0 = v0;
        return a0;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 13032710()
}
