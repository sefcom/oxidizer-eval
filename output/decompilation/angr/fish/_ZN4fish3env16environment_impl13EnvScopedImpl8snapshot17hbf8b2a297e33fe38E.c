long long fish::env::environment_impl::EnvScopedImpl::snapshot(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    int v2;  // [bp-0x50], Other Possible Types: char
    int v3;  // [bp-0x40]
    int v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x20]
    char v6;  // [bp-0x18]

    v0 = fish::env::environment_impl::copy_node_chain(&a1->padding_0[80]);
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a1->field_58) + 1, 0, (unsigned long long)(char)(&v6 < 80))))
    {
        v1 = a1->field_58;
        v2.clone(a1);
        a0->field_30 = v5;
        *((void*)&a0->field_20) = v4;
        *((void*)&a0->field_10) = v3;
        *((void*)&a0->field_0) = v2;
        a0->field_38 = 0;
        a0->field_40 = 8;
        a0->field_48 = 0;
        a0->field_50 = v0;
        a0->field_58 = v1;
        a0->field_60 = 0;
        return v5;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20544481()
}
