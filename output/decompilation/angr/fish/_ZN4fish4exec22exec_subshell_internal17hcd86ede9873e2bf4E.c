long long fish::exec::exec_subshell_internal(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, char *a5, char a6, char a7)
{
    char v0;  // [bp-0x11d]
    unsigned int v1;  // [bp-0x11c]
    void* v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x108]
    void* v4;  // [bp-0x100]
    char v5;  // [bp-0xf4]
    char v6;  // [bp-0xec]
    char v7;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long v8;  // [bp-0xe8]
    char v9;  // [bp-0xd8]
    char v10;  // [bp-0xc0]
    void* v11;  // [bp-0xb0]
    int v12;  // [bp-0xa8]
    char v13;  // [bp-0x98]
    char *v14;  // [bp-0x88]
    struct_0 *v15;  // [bp-0x80]
    int v16;  // [bp-0x78], Other Possible Types: char
    char v17;  // [bp-0x68]
    char v18;  // [bp-0x58]
    unsigned int v19;  // ebp
    void* v20;  // rdx
    unsigned long v21;  // cc_ndep
    unsigned int v22;  // eax

    v0 = a6;
    v18.scoped_mod(&a2->padding_0[64], a7);
    v16.get_last_statuses(a2);
    memcpy(&v13, &v17, 16);
    v12 = v16;
    v14 = &v0;
    v15 = a2;
    v7.getf_unless_empty(&a2[5].field_48, "I", 3, 0);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v7);
    v7 = a2->field_48.create_opts(1);
    if (((char)v7 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<fish::io::IoBufferfill>,std::io::error::Error>>(&v7);
        *(a5) = 1;
        v19 = 1;
        goto LABEL_13a90e6;
    }
    v11 = v20;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v20) + 1, 0, _ccall(17, (unsigned long long)((char)v7 & 1), 0, v21)))
        [D] Unsupported jumpkind Ijk_NoDecode at address 20615549()
    v1 = (unsigned int)v7 & 0xffffff00 | 1;
    v2.push(v20, &g_14c8e18);
    v5.eval_with(a2, a0, a1, &v2, a3, 7);
    v1 = 0;
    v7.finish(v20);
    if (v10)
    {
        *(a5) = 1;
        v19 = 1;
        goto LABEL_13a90d2;
    }
    else
    {
        if (v6)
        {
            *(a5) = 1;
            v19 = (int)v5.status_value();
LABEL_13a90d2:
            core::ptr::drop_in_place<fish::io::SeparatedBuffer>(&v7);
            core::ptr::drop_in_place<fish::io::IoChain>(&v2);
LABEL_13a90e6:
            core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::exec::exec_subshell_internal::{{closure}}>>(&v12);
        }
        else
        {
            if (a4)
                fish::exec::populate_subshell_output(a4, v20, *((long long *)&v9), v8);
            *(a5) = 0;
            v22 = v5.status_value();
            core::ptr::drop_in_place<fish::io::SeparatedBuffer>(&v7);
            core::ptr::drop_in_place<fish::io::IoChain>(&v2);
            core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::exec::exec_subshell_internal::{{closure}}>>(&v12);
            v19 = v22;
        }
        core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v18);
        return v19;
    }
}
