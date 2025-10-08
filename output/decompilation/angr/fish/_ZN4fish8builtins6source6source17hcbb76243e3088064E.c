long long fish::builtins::source::source(unsigned long long a0, struct_0 *a1, unsigned long long a2[2])
{
    unsigned int v0;  // [bp-0x138]
    unsigned int v1;  // [bp-0x134]
    void* v2;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x128]
    void* v4;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v5[3];  // [sp-0x118]
    unsigned long long v6;  // [sp-0x110]
    unsigned long v7;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xf8], Other Possible Types: char
    int v9;  // [bp-0xf8]
    int v10;  // [bp-0xf8]
    char v11;  // [sp-0xf0], Other Possible Types: unsigned long long
    int v12;  // [sp-0xe8], Other Possible Types: void*, unsigned long
    unsigned long long v13;  // [bp-0xe8]
    int v14;  // [bp-0xe0]
    char v15;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v16;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xb0]
    unsigned int v19;  // [bp-0xa4]
    unsigned long v20;  // [bp-0xa0]
    void* v21;  // [bp-0x98], Other Possible Types: char
    char v22;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x88]
    unsigned long long v24[5];  // [bp-0x80]
    char v25;  // [bp-0x78]
    unsigned long long v26;  // [bp-0x70]
    unsigned long long v27;  // [bp-0x68]
    unsigned long long v28;  // [bp-0x60]
    unsigned long long v29;  // [bp-0x58]
    unsigned long long v30;  // [bp-0x50]
    char v31;  // [bp-0x48]
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    unsigned long long v35;  // r15
    unsigned long long v36;  // cc_ndep
    unsigned long long v37[2];  // r14
    unsigned int v38;  // r14d
    unsigned long long v39[2];  // r14
    unsigned long long v40;  // rax
    unsigned int v41;  // edx
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45[5];  // rax
    unsigned long long v46[5];  // r15
    unsigned int v47;  // eax
    unsigned long long v48;  // cc_op
    unsigned long v49;  // cc_dep1
    unsigned long long v51;  // rdx
    unsigned long long v52;  // cc_ndep
    unsigned long long v53;  // 4097
    unsigned long long v54;  // rax
    unsigned long long v55;  // rcx
    char v56;  // sil
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rsi
    char v59;  // al
    unsigned long long v60;  // rbx
    unsigned long long v61;  // r12
    unsigned long long v62;  // r13
    char v63;  // al
    int v64;  // xmm0
    unsigned int v65;  // eax
    unsigned long long v67;  // rdx

    v33 = a2;
    v8.parse(a2, v34, a0, a1);
    v35 = 1;
    if (v11 == 2)
    {
        v33 = *((int *)&v8);
    }
    else if (!v34)
    {
        v33 = 2;
    }
    else if ((v11 & 1))
    {
        fish::builtins::shared::builtin_print_help(a0, a1, a2[0], a2[1]);
        v35 = 0;
    }
    else
    {
        v20 = a2[1];
        v18 = a2[0];
        v28 = v8;
        if (v34 != v28)
        {
            if ((char)_ccall(6, 8, v34, v28, v36))
            {
                v0 = 0;
                core::panicking::panic_bounds_check(v28, v34, &g_14ccef8); /* do not return */
            }
            v37 = v28 * 16;
            v0 = 0;
            if (*((long long *)(a2 + v37)).eq_by(*((long long *)(a2 + v37)) + *((long long *)(a2 + v37 + 8)) * 4, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '"))
            {
                v38 = a1->field_20;
                if (a1->field_20 < 0)
                    goto LABEL_136da55;
LABEL_136d9e8:
                v1 = v38;
                v0 = 0;
                (char)v5.to_vec("-", 1);
                v15 = v7;
                *((int128_t *)&v12) = *((int128_t *)&v5[0]);
                v8 = 1;
                v11 = 1;
                v0 = 0;
                v46 = v8.new();
                v24[0] = v46;
                v48 = 19;
                v49 = 0;
                v47 = 0;
                goto LABEL_136dd1f;
            }
            v39 = v37 + a2;
            v0 = 0;
            v40 = fish::fds::wopen_cloexec(v39[0], v39[1], 0, 0);
            v1 = v41;
            if (((char)v40 & 1))
            {
                v0 = 0;
                fish::common::escape(&v21, v39[0], v39[1]);
                v42 = a1->field_10;
                v2 = 0;
                v3 = 4;
                v4 = 0;
                v6 = "%";
                v7 = 50;
                *(v5) = 0x8000000000000000;
                v43 = v5.localize();
                v8 = 1;
                v11 = v18;
                v12 = v20;
                v15 = 1;
                *((int128_t *)&v16) = *((int128_t *)&v22);
                fish_printf::printf_impl::sprintf_locale(&v25, &v2, v43, v44, ".", &v8, 2);
                v25.unwrap(&g_14ccf10);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v8);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                memcpy(&v8, &v2, 16);
                v12 = 0;
                v42.append(&v8);
                fish::builtins::shared::builtin_wperror(v18, v20, a1);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v21);
LABEL_136dca0:
                v33 = 1;
            }
            else
            {
                v0 = (unsigned int)v40 & 0xffffff00 | 1;
                v19 = v1;
                (char)v5.to_vec(v39[0], v39[1]);
                v15 = v7;
                *((int128_t *)&v12) = *((int128_t *)&v5[0]);
                v8 = 1;
                v11 = 1;
                v19 = v1;
                v45 = v8.new();
                v46 = v45;
                v24[0] = v45;
                v47 = (unsigned int)v45 & 0xffffff00 | 1;
                v48 = 7;
                v49 = v1;
                if (v1 < 0)
                {
                    v8 = &g_14ccee8;
                    v11 = 1;
                    v13 = 8;
                    *((uint128_t *)&v14) = 0;
                    *((unsigned int **)&v0) = &g_14cce01;
                    core::panicking::panic_fmt(&v8, &g_14ccf28); /* do not return */
                }
LABEL_136dd1f:
                v0 = v47;
                v53 = atomic_fetch_add(v46);
                if ((char)_ccall(14, 24, v53 + 1, 0, _ccall(v48, v49, 0, v52)))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 20373589()
                v8.source_block(v46);
                v54 = a0.push_block(&v8);
                if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v46) + 1, 0, _ccall(24, v53 + 1, 0, _ccall(v48, v49, 0, v52))))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 20373589()
                v55 = v28;
                v56 = v34 != v55;
                v29 = a0 + 128.scoped_set(v46);
                v30 = v57;
                v58 = v56 + v55;
                if ((char)__CFADD__(v56, v55))
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14ccf40); /* do not return */
                }
                else if (v58 <= v34)
                {
                    v31.collect(&a2[v58], &a2[v34]);
                    a0 + 472.set_argv(&v31);
                    v59 = fish::reader::reader_read(a0, v1, a1->field_18);
                    a0.pop_block(v54);
                    if ((v59 & 1))
                    {
                        fish::common::escape(&v25, v46[3], v46[4]);
                        v60 = a1->field_10;
                        v21 = 0;
                        v22 = 4;
                        v23 = 0;
                        v3 = "%";
                        v4 = 36;
                        v2 = 0x8000000000000000;
                        v2.localize();
                        v6 = v18;
                        v7 = v20;
                        *((char *)v5) = 1;
                        v61 = v26;
                        v62 = v27;
                        v63 = v61.eq(v62, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1);
                        if (v63)
                            v61 = "<";
                        if (v63)
                            v62 = 7;
                        v64 = *((int128_t *)&v5[0]);
                        *((int128_t *)&v12) = *((int128_t *)&v7);
                        v9 = v64;
                        v15 = 1;
                        v16 = v61;
                        v17 = v62;
                        fish_printf::printf_impl::sprintf_locale();
                        (unsigned long long)v5.unwrap(&g_14ccf58);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v8);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
                        *((int128_t *)&v10) = *((int128_t *)&v21);
                        v12 = 0;
                        v60.append(&v8);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v25);
                        v35 = 1;
                        v33 = 1;
                    }
                    else
                    {
                        v65 = a0.get_last_status();
                        v33 = v65;
                        v35 = v65;
                    }
                    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedRefCell<fish::parser::LibraryData>,fish::common::ScopedRefCell<fish::parser::LibraryData>::scoped_set<fish::builtins::source::source::{{closure}},core::option::Option<alloc::sync::Arc<widestring::utfstring::Utf32String>>>::{{closure}}>>(&v29);
                    core::ptr::drop_in_place<alloc::sync::Arc<widestring::utfstring::Utf32String>>(&v24);
                    if ((char)v0)
                        core::ptr::drop_in_place<std::fs::File>(v1);
                }
                else
                {
                    core::slice::index::slice_start_index_len_fail(v58, v34, &g_14ccf70); /* do not return */
                }
            }
        }
        else
        {
            v38 = a1->field_20;
            if (v38 >= 0)
            {
                if (!fish::nix::isatty(v38))
                    goto LABEL_136d9e8;
                v2 = 0;
                v3 = 4;
                v4 = 0;
                v6 = "%";
                v7 = 52;
                *(v5) = 0x8000000000000000;
                v8 = 1;
                v11 = v18;
                v12 = v20;
                fish_printf::printf_impl::sprintf_locale(&v21, &v2, v5.localize(), v51, ".", &v8, 1);
                v21.unwrap(&g_14ccf88);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                memcpy(&v8, &v2, 16);
                v12 = 0;
                v0 = 0;
                a1->field_10.append(&v8);
                goto LABEL_136dca0;
            }
            else
            {
LABEL_136da55:
                v2 = 0;
                v3 = 4;
                v4 = 0;
                v6 = "%";
                v7 = 21;
                *(v5) = 0x8000000000000000;
                v8 = 1;
                v11 = v18;
                v12 = v20;
                fish_printf::printf_impl::sprintf_locale(&v21, &v2, v5.localize(), v67, ".", &v8, 1);
                v21.unwrap(&g_14ccfa0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                memcpy(&v8, &v2, 16);
                v12 = 0;
                v0 = 0;
                a1->field_10.append(&v8);
                goto LABEL_136dca0;
            }
        }
    }
    return v33 * 0x100000000 | v35;
}
