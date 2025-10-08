long long fish::builtins::test::test_expressions::TestParser::parse_args(unsigned long long a0[3], void* a1, unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    void* v0;  // [bp-0x150]
    void* v1;  // [bp-0x150]
    void* v2;  // [bp-0x138]
    unsigned long long v3;  // [bp-0x130]
    void* v4;  // [bp-0x128]
    void* v5;  // [bp-0x120]
    void* v6;  // [bp-0x118], Other Possible Types: char
    unsigned long v7;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x108], Other Possible Types: char
    unsigned long long v9;  // [bp-0xf8]
    void* v10;  // [bp-0xf0]
    void* v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    void* v13;  // [bp-0xd8]
    unsigned long long v14[3];  // [bp-0xd0]
    void* v15;  // [bp-0xc8]
    struct_1 *v16;  // [bp-0xc0]
    int v17;  // [bp-0xb8], Other Possible Types: unsigned short
    int v18;  // [bp-0xb8]
    unsigned long v19;  // [bp-0xb0]
    int v20;  // [bp-0xa8], Other Possible Types: void*
    char v21;  // [bp-0x98]
    unsigned int v22;  // [bp-0x97]
    unsigned int v23;  // [bp-0x94]
    int v24;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x88]
    char v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    unsigned long long v28;  // [bp-0x68]
    struct_1 *v29;  // [bp-0x58]
    int v30;  // [bp-0x40], Other Possible Types: char
    char v31;  // [bp-0x3d]
    void* v33;  // r14
    struct_1 *v34;  // rdx
    unsigned long long v36;  // r14
    unsigned long long v37;  // cc_op
    void* v39;  // cc_dep2
    void* v40;  // rbp
    void* v41;  // cc_dep1
    unsigned long long v42;  // cc_ndep
    unsigned long long v43;  // cc_ndep
    void* v44;  // cc_dep1
    unsigned long long v45;  // r14
    void* v46;  // rbp
    unsigned long long v47;  // cc_ndep
    unsigned long v48;  // r14
    struct_1 *v49;  // cc_dep1
    void* v50;  // cc_dep2
    int v51;  // xmm0
    int v52;  // xmm2
    unsigned int v53;  // ecx
    void* v54;  // rbx

    v33 = a1;
    v14[0] = a0;
    v15 = a1;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v16 = 0;
    v1 = v11.parse_expression(0, a1);
    if (!v1)
        core::panicking::panic("assertion failed: !parser.errors.is_empty() || result.is_some()assertion failed: result.as_ref().unwrap().range().end <= args.len()", 63, &g_14d4a98); /* do not return */
    v29 = 0;
    if (v29)
    {
        v2 = 0;
        v3 = 4;
        v4 = 0;
        if (a1)
            goto LABEL_1383a4c;
        v10 = 0;
        v5 = 0;
    }
    else
    {
        if (!v1)
            core::option::unwrap_failed(&g_14d4ab0); /* do not return */
        v34->field_20(v1);
        v0 = v1;
        if (v34 >= a1)
            goto LABEL_1383d3e;
        v34->field_20(v1);
        v16 = v34;
        v2 = 0;
        v3 = 4;
        v4 = 0;
LABEL_1383a4c:
        v2.spec_extend(a0[1], a0[1] + a0[2] * 4);
        if (v16 == 1)
        {
            v5 = fish::wutil::fish_wcswidth(4, 0);
            v10 = a1;
            if (a1 != 1)
                goto LABEL_1383d9a;
        }
        else
        {
            v5 = 0;
            v10 = a1;
            if (a1 != 1)
            {
LABEL_1383d9a:
                v36 = 1;
                v37 = 19;
                v39 = 0;
                v40 = 0;
                v9 = &g_14d4b70;
                v41 = 0;
                do
                {
                    v43 = v42;
                    v44 = v41;
                    v45 = v36;
                    v46 = v40;
                    v2.push(32);
                    v2.spec_extend(*((long long *)(a0 + v46 + 32)), *((long long *)(a0 + v46 + 32)) + *((long long *)(a0 + v46 + 40)) * 4);
                    v47 = _ccall(v37, v44, v39, v43);
                    v48 = v45 + 1;
                    if ((char)_ccall(4, 24, v45 + 1, 0, _ccall(v37, v44, v39, v43)))
                    {
                        v9 = &g_14d4b70;
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d4b70); /* do not return */
                    }
                    if (v48 == v16)
                        v5 = fish::wutil::fish_wcswidth(4, 0);
                    v39 = v46 + 24;
                    v37 = 8;
                    v40 = v39;
                    v36 = v48;
                    v41 = a1 * 24 - 24;
                    v42 = v47;
                } while (v41 != v40);
            }
        }
    }
    a2.spec_extend(a3, a3 + a4 * 4);
    v33 = v10;
    a2.extend(": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", "/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs");
    v49 = v29;
    v50 = 0;
    if (v29)
    {
        a2.spec_extend(*((long long *)16), *((long long *)16) + *((long long *)24) * 4);
    }
    else if (v1)
    {
        v34->field_20(v1);
        if ((char)_ccall(4, 24, v34 + 1, 0, _ccall(20, v1, 0, v47)))
        {
            v9 = &g_14d4ae0;
            core::panicking::panic_const::panic_const_add_overflow(0x14d4ae0); /* do not return */
        }
        v7 = &v34->padding_0[1];
        v6 = 4;
        v34->field_20(v1);
        v49 = v34;
        v50 = v33;
        if (v34 >= v33)
            core::panicking::panic_bounds_check(v34, v33, &g_14d4af8); /* do not return */
        v51 = *((int128_t *)(8 + (char *)a0 + 0x18 * v34));
        v52 = *((int128_t *)&v8);
        *((int128_t *)&v17) = *((int128_t *)&v6);
        v20 = v52;
        v21 = 1;
        v53 = *((int *)&v31);
        v22 = *((int *)&v30);
        v23 = v53;
        v24 = v51;
        fish_printf::printf_impl::sprintf_locale(&v6, a2, "unexpected argument at index %lu: '%ls'assertion failed: !parser.errors.is_empty() || result.is_some()assertion failed: result.as_ref().unwrap().range().end <= args.len()", 39, &(char)v17, 2);
        v6.unwrap(&g_14d4b10);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v17);
    }
    else
    {
        core::option::unwrap_failed(&g_14d4ac8); /* do not return */
    }
    a2.push(10);
    a2.spec_extend(4, 4);
    a2.push(10);
    v6 = 0;
    v7 = 4;
    v8 = 0;
    if ((char)_ccall(0, 24, v5 + 1, 0, (unsigned long long)(char)(v49 < v50)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d4b28); /* do not return */
    v17 = 16389;
    v19 = v5 + 1;
    v21 = 0;
    v24 = " +-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '";
    v25 = 1;
    v26 = 0;
    v27 = "^%ls: %*ls\n";
    v28 = 1;
    fish_printf::printf_impl::sprintf_locale(&v30, &v6, "%*ls%ls\n", 8, &v17, 3);
    v30.unwrap(&g_14d4b40);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v17);
    v20 = 0;
    *((int128_t *)&v18) = *((int128_t *)&v6);
    a2.spec_extend(v19, v19);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
    v0 = v1;
    if (!v0)
    {
        core::ptr::drop_in_place<fish::builtins::test::test_expressions::TestParser>(&v11);
        return 0;
    }
LABEL_1383d3e:
    v34->field_20(v0);
    if (v34 > v33)
        core::panicking::panic("assertion failed: result.as_ref().unwrap().range().end <= args.len()", 68, &g_14d4b58); /* do not return */
    v34->field_20(v1);
    if (v34 >= v33)
    {
        core::ptr::drop_in_place<fish::builtins::test::test_expressions::TestParser>(&v11);
        return v54;
    }
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(v1, v34);
    core::ptr::drop_in_place<fish::builtins::test::test_expressions::TestParser>(&v11);
    return 0;
}
