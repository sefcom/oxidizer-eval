long long fish::reader::Reader::update_autosuggestion(struct_0 *a0, unsigned int a1)
{
    void* v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0]
    int v3;  // [bp-0xc8], Other Possible Types: char
    char v4;  // [bp-0xb8]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x78]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    char v14;  // al
    unsigned long long v15;  // cc_op
    unsigned long v16;  // cc_dep1
    unsigned long long v17;  // cc_dep2
    unsigned long v18;  // cc_ndep

    v9 = a0.can_autosuggest();
    if (!(char)v9)
    {
        a0->field_7a8 = 0;
        a0->field_510 = 0;
        return v9;
    }
    if ((char)a0.is_at_line_with_autosuggestion())
    {
        v10 = a0->field_518.clone(a0->field_520);
        if (v11 >= v10 && v11 <= a0->field_30)
        {
            v12 = fish::wcstringutil::string_prefixes_string_maybe_case_insensitive(a0->field_528, v10 * 4 + a0->field_28, v11 - v10, a0->field_508, a0->field_510);
            if ((char)v12)
                return v12;
            core::panicking::panic("assertion failed: string_prefixes_string_maybe_case_insensitive(autosuggestion.icase,\n    &el.text()[autosuggestion.search_string_range.clone()],\n    &autosuggestion.text)", 171, &g_14e0ae8); /* do not return */
        }
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0ad0); /* do not return */
    }
    v13 = a0->field_28.equal(a0->field_30, a0->field_7a0[1], a0->field_7a8);
    if ((char)v13)
        return v13;
    v3.to_vec(a0->field_28, a0->field_30);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&a0->field_7a0);
    a0->field_7a8 = *((long long *)&v4);
    *((void*)&a0->field_7a0[0]) = v3;
    v14 = (char)core::sync::atomic::atomic_load(&g_15a99e0, 0);
    v15 = 17;
    v16 = v14;
    v17 = 0;
    if (v14)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v15 = 4;
        v16 = &_ZN4fish4flog10categories13reader_render17hb6b829b8e2895987E;
        v17 = 24;
        v5.to_flog_str(&g_15a99d0);
        v3.into_iter(&v5);
        v0.spec_extend(&v3);
        v0.push(58, &g_14e0ab8);
        v0.push(32, &g_14e0ab8);
        v6.to_vec("Autosuggestingassertion failed: string_prefixes_string_maybe_case_insensitive(autosuggestion.icase,\n    &el.text()[autosuggestion.search_string_range.clone()],\n    &autosuggestion.text)", 14);
        v3.into_iter(&v6);
        v0.spec_extend(&v3);
        v0.push(10, &g_14e0ab8);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    a0->field_510 = 0;
    v3.to_vec(a0->field_28, a0->field_30);
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0->field_828) + 1, 0, _ccall(v15, v16, v17, v18))))
    {
        fish::reader::get_autosuggestion_performer(&v7, a1, &v3, *((long long *)&a0->field_78), a0->field_828);
        *((long long *)&a0->padding_7b8[104]).downgrade();
        return fish::reader::debounce_autosuggestions().perform_with_completion(&v7, *((long long *)&a0->padding_7b8[104]));
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20989967()
}
