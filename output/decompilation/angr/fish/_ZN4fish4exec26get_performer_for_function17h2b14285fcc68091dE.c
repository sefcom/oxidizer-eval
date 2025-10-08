long long fish::exec::get_performer_for_function(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0[3];  // [bp-0xd8]
    int v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    void* v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    void* v6;  // [bp-0xb0]
    void* v7;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xa0]
    void* v9;  // [bp-0x98]
    void* v10;  // [bp-0x90]
    int v11;  // [bp-0x88], Other Possible Types: char
    char v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x88]
    int v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x58]
    void* v19;  // [bp-0x50]
    char v20;  // [bp-0x48]
    unsigned long long v21;  // [bp-0x38]
    char v22;  // [bp-0x28]
    void* v24;  // rax
    unsigned long v25;  // cc_ndep
    void* v26;  // r15
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx

    if (a0->field_0 != 2)
        core::panicking::panic("assertion failed: p.is_function()assertion failed: p.is_block_node() || p.is_function()Process must be a builtinprocess_type_t::exec process found in pipeline, where it should never be. Aborting.status cannot be 0 for an error resultsrc/expand.rs", 33, &g_14d7dc8); /* do not return */
    v24 = a1->field_28;
    if (!v24)
    {
        v26 = 0;
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v24) + 1, 0, _ccall(20, v24, 0, v25))))
    {
        v26 = a1->field_28;
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 20609368()
    }
    v10 = v26;
    v11.clone(a2, a3);
    v21 = v15;
    memcpy(&v20, &v11, 16);
    if (!a0->field_58)
        core::option::unwrap_failed(&g_14d7d48); /* do not return */
    *((long long *)&v11) = fish::function::get_props((long long)a0->field_50[8], (long long)a0->field_50[16]);
    if (v13)
    {
        v7 = v13;
        v0.clone(a0->field_50, a0->field_58);
        v15 = v3;
        *((int128_t *)&v11) = *((int128_t *)&v0[0]);
        v18 = v7;
        memcpy(&v16, &v20, 16);
        v17 = v21;
        v19 = v26;
        return (unsigned long long)v11.new();
    }
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::function::FunctionProperties>>>(&(unsigned long long)v11);
    if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
    {
        v4 = 0;
        v5 = 1;
        v6 = 0;
        v0.to_flog_str(&g_15a9370);
        (unsigned long long)v11.into_iter(&v0);
        v4.spec_extend(&(unsigned long long)v11);
        v4.push(58, &g_14d7d80);
        v4.push(32, &g_14d7d80);
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v2 = "U";
        v3 = 22;
        *((unsigned long long *)&v1) = 0x8000000000000000;
        v27 = (unsigned long long)v1.localize();
        if (!a0->field_58)
            core::option::unwrap_failed(&g_14d7d98); /* do not return */
        v12 = 1;
        *((int128_t *)&v14) = (int128_t)a0->field_50[8];
        fish_printf::printf_impl::sprintf_locale(&v22, &v7, v27, v28, ".", &v12, 1);
        v22.unwrap(&g_14d7db0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v12);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v1);
        *((int128_t *)&v1) = *((int128_t *)&v7);
        v3 = 0;
        v7.to_flog_str(&(unsigned long long)v1);
        v12.into_iter(&v7);
        v4.spec_extend(&v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v1);
        v4.push(10, &g_14d7d80);
        fish::flog::flog_impl(v5, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
    }
    core::ptr::drop_in_place<fish::io::IoChain>(&v20);
    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(&v10);
    return 0;
}
