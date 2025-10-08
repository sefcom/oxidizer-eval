long long bat::syntax_mapping::SyntaxMapping::start_offload_build_all(struct_0 *a0)
{
    void* v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    unsigned long v7;  // cc_op
    unsigned long v8;  // cc_dep1
    unsigned long v9;  // cc_dep2
    unsigned long v10;  // cc_ndep
    unsigned long long v11;  // r14
    unsigned long long v12;  // rbx

    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0->field_30) + 1, 0, _ccall(v7, v8, v9, v10))))
    {
        v5 = v11;
        v4 = v12;
        v1 = 0x8000000000000000;
        v0 = 0;
        v2 = 0;
        v3.spawn_unchecked(&v0, a0->field_30);
        v0.expect(&v3);
        return core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v0);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 8665035()
}
