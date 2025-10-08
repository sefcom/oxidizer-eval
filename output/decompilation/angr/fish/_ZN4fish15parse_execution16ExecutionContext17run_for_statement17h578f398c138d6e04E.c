long long fish::parse_execution::ExecutionContext::run_for_statement(struct_1 *a0, void* a1, unsigned long long a2[10], unsigned long long a3)
{
    void* v0;  // [bp-0x1f8], Other Possible Types: int, char
    int v1;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0x1f8]
    unsigned int v4;  // [bp-0x1f4]
    int v5;  // [bp-0x1f0], Other Possible Types: struct_0 *, uint128_t [3], unsigned long long
    uint128_t v6[3];  // [bp-0x1f0]
    void* v7;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0x1e8]
    unsigned short v9;  // [bp-0x1e4]
    int v10;  // [bp-0x1e0]
    char v11;  // [sp-0x1d8]
    unsigned long long v12;  // [sp-0x1d0]
    unsigned long v13;  // [sp-0x1c8]
    int v14;  // [bp-0x1b8], Other Possible Types: void*
    unsigned long long v15;  // [bp-0x1b0]
    void* v16;  // [sp-0x1a8]
    void* v17;  // [bp-0x198], Other Possible Types: char, unsigned long long
    unsigned long long v18;  // [bp-0x190]
    void* v19;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x160]
    void* v21;  // [bp-0x158]
    unsigned long long v22;  // [bp-0x150]
    void* v23;  // [bp-0x148]
    char v24;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x138]
    unsigned long long v26;  // [bp-0x130]
    char v27;  // [bp-0x128]
    unsigned long long v28;  // [bp-0x120]
    unsigned long v29;  // [bp-0x118]
    char v30;  // [bp-0x110]
    int v31;  // [bp-0x110]
    unsigned long long v32;  // [bp-0x100]
    int v33;  // [bp-0xf8]
    void* v34;  // [bp-0xf8]
    unsigned long long v35;  // [bp-0xf0]
    int v36;  // [bp-0xe8], Other Possible Types: void*
    unsigned long v37;  // [bp-0xe0]
    int v38;  // [bp-0xdf]
    unsigned long long v39;  // [bp-0xd8]
    char v40;  // [bp-0xd0]
    void* v41;  // [bp-0xc8]
    int v42;  // [bp-0xc8]
    unsigned long long v43;  // [bp-0xc0]
    int v44;  // [bp-0xb8], Other Possible Types: void*
    unsigned long v45;  // [bp-0xb0]
    int v46;  // [bp-0xaf]
    unsigned long long v47;  // [bp-0xa8]
    char v48;  // [bp-0xa0]
    void* v49;  // [bp-0x98]
    int v50;  // [bp-0x98]
    unsigned long long v51;  // [bp-0x90]
    int v52;  // [bp-0x88], Other Possible Types: void*
    unsigned long v53;  // [bp-0x80]
    int v54;  // [bp-0x7f]
    unsigned long long v55;  // [bp-0x78]
    char v56;  // [bp-0x70]
    void* v57;  // [bp-0x68]
    char v58;  // [bp-0x58]
    char v59;  // [bp-0x40]
    void* v61;  // rbx
    struct_1 *v62;  // r14
    unsigned long v63;  // r12
    unsigned long long v64;  // rbp
    unsigned long v65;  // r13
    unsigned long long v66;  // rax
    unsigned int v67;  // r15d
    unsigned long long v69;  // rax
    char *v71;  // r13
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    char *v74;  // r12
    struct_0 *v75;  // rax
    void* v76;  // rax
    unsigned long long v77;  // rdx
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    char v81;  // bpl
    unsigned int v84;  // edi
    unsigned int v85;  // r12d
    unsigned long long v86;  // rax
    unsigned long long v87;  // rdx
    uint128_t v88[3];  // rax
    int v89;  // xmm0
    int v90;  // xmm1
    unsigned long v91;  // r15
    unsigned int v93;  // edi
    unsigned int v94;  // r12d
    unsigned long long v95;  // rax
    unsigned long long v96;  // rdx
    uint128_t v97[3];  // rax
    int v98;  // xmm0
    int v99;  // xmm1
    unsigned int v101;  // edi
    unsigned long long v102;  // rax
    unsigned long long v103;  // rdx
    uint128_t v104[3];  // rax
    int v105;  // xmm0
    int v106;  // xmm1

    v61 = a1;
    v62 = a0;
    v63 = &a2[2];
    v27.node_source_owned((unsigned int)a0->field_18, v63, 19904240);
    if (!(char)fish::expand::expand_one(&v27, 0, a1, 0))
    {
        (char)v1.try_source_range(v63);
        v101 = 0;
        if (v0)
            v101 = v4;
        v91 = (int)v5;
        v34 = 0;
        v35 = 4;
        *((uint128_t *)&v36) = 0;
        *((uint128_t *)&v38) = 0;
        v37 = v101.start();
        v39 = a0.length(((v0 & 1) ? (unsigned int)v91 : 0));
        v40 = 1;
        v17 = 0;
        v18 = 4;
        v19 = 0;
        v102 = g_14dced8[0].localize();
        *((char *)&v1) = 1;
        *((int128_t *)&v5) = *((int128_t *)&v28);
        fish_printf::printf_impl::sprintf_locale(&(char)v14, &v17, v102, v103, ".", &(char)v1, 1);
        (char)v14.unwrap(&g_14dcef0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v1);
        *((int128_t *)&v0) = *((int128_t *)&v17);
        v7 = 0;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v34);
        v36 = v7;
        *((int128_t *)&v33) = *((int128_t *)&(char)v1);
        v104 = 8.alloc_impl(48, 0);
        if (!v104)
            alloc::alloc::handle_alloc_error(8, 48); /* do not return */
        v105 = (int128_t)v33;
        v106 = *((int128_t *)&v36);
        v104[2] = *((int128_t *)&v39);
        *((void*)&v104[1]) = v106;
        *((void*)&v104[0]) = v105;
        v1 = 1;
        *((uint128_t *[3])&v6[0]) = v104;
        v7 = 1;
        a0->field_18.report_errors(a1, 121, &(char)v1);
        goto LABEL_13de731;
    }
    v64 = v28;
    v65 = v29;
    if ((char)fish::common::valid_var_name(v64, v65))
    {
        v21 = 0;
        v22 = 8;
        v23 = 0;
        v24.get_argument_nodes(a2[8], a2[9]);
        v20 = v25;
        v66 = a0->field_18.expand_arguments_from_nodes(a0->field_28, a1, v20, v26, &v21);
        v67 = v66;
        if (!(char)v66)
        {
            v58.getf(a1.parser() + 472, v64, v65, 0);
            if (v64.flags_for(v65) < 2)
            {
                v69 = a1.parser();
                v0 = 0;
                v5 = 8;
                v7 = 0;
                v17.map_or(&v58, &(char)v0);
                if ((char)v69 + 472.set(v64, v65, 257, &v17))
                    core::panicking::panic("assertion failed: retval == EnvStackSetResult::Ok", 49, &g_14dcf50); /* do not return */
                fish::trace::trace_if_enabled_with_args(a1.parser(), "f", 3, 8, 0);
                fish::builtins::fish_indent::fish_indent::{{closure}}(&(char)v0, v64, v65);
                v16 = v7;
                *((int128_t *)&v14) = *((int128_t *)&(char)v0);
                v17.variable_set(&(char)v14);
                (char)v14.into_iter(&v21);
                (char)v31.next(&(char)v14);
                v67 = 0;
                if (!((char)(((0 ^ *((long long *)&v30)) & (0 ^ -(*((long long *)&v30)))) >> 63)))
                {
                    v71 = &(char)v0;
                    v57 = a1;
                    do
                    {
                        v72 = v62->field_28.check_end_execution(v61);
                        v67 = v72;
                        if ((char)v72 != 4)
                        {
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v31);
                            goto LABEL_13de999;
                        }
                        v73 = v61.parser();
                        v74 = v71;
                        v75 = 8.alloc_impl(24, 0);
                        if (!v75)
                            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                        v75->field_10 = v32;
                        *((void*)&v75->field_0) = v31;
                        v1 = 1;
                        v5 = v75;
                        v7 = 1;
                        v71 = v74;
                        v61 = v57;
                        if ((char)v73 + 472.set(v28, v29, 0x100, v74))
                        {
                            v3 = &g_14dcec8;
                            v5 = 1;
                            v7 = 8;
                            *((uint128_t *)&v10) = 0;
                            core::panicking::panic_fmt(&(char)v0, &g_14dcf38); /* do not return */
                        }
                        v76 = v61.parser();
                        v71.clone(&v17);
                        fish::event::fire(v76, v71);
                        *((char *)(v61.parser().libdata_mut() + 129)) = 0;
                        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v77);
                        v78 = v61.parser();
                        v9 = 3;
                        *((uint128_t *)&v2) = 0;
                        v8 = 0;
                        v79 = v78.push_block(v71);
                        v62.run_job_list(v61, a3);
                        v61.parser().pop_block(v79);
                        if ((char)v62->field_28.check_end_execution(v61) == 1)
                        {
                            v81 = *((char *)(v61.parser().libdata() + 129));
                            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v77);
                            *((char *)(v61.parser().libdata_mut() + 129)) = 0;
                            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v77);
                            if (v81 == 1)
                                break;
                        }
                        (char)v31.next(&(char)v14);
                    } while ((long long)v31 != 0x8000000000000000);
                    v67 = 0;
                }
LABEL_13de999:
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&(char)v14);
                fish::trace::trace_if_enabled(v61.parser(), "e", 7);
                core::ptr::drop_in_place<fish::event::Event>(&v17);
                core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v24, v25);
            }
            else
            {
                (char)v3.try_source_range(v63);
                v84 = 0;
                if (v0)
                    v84 = v4;
                v85 = v5;
                v49 = 0;
                v51 = 4;
                *((uint128_t *)&v52) = 0;
                *((uint128_t *)&v54) = 0;
                v53 = v84.start();
                v55 = a0.length(((v0 & 1) ? v85 : 0));
                v56 = 1;
                v14 = 0;
                v15 = 4;
                v16 = 0;
                v18 = "%";
                v19 = 45;
                v17 = 0x8000000000000000;
                v86 = v17.localize();
                *((char *)&v2) = 0;
                v5 = "forfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP";
                v7 = 3;
                v11 = 1;
                v12 = v64;
                v13 = v65;
                fish_printf::printf_impl::sprintf_locale(&v59, &v14, v86, v87, ".", &(char)v2, 2);
                v59.unwrap(&g_14dcf20);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v2);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v17);
                *((int128_t *)&v1) = *((int128_t *)&v14);
                v7 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v49);
                v52 = v7;
                *((int128_t *)&v50) = (int128_t)v1;
                v88 = 8.alloc_impl(48, 0);
                if (!v88)
                    alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                v89 = (int128_t)v50;
                v90 = *((int128_t *)&v52);
                v88[2] = *((int128_t *)&v55);
                *((void*)&v88[1]) = v90;
                *((void*)&v88[0]) = v89;
                v2 = 1;
                *((uint128_t *[3])&v5[0]) = v88;
                v7 = 1;
                a0->field_18.report_errors(a1, 2, &(char)v2);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v2);
                core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v58);
                v67 = 3;
                goto LABEL_13de948;
            }
        }
        else
        {
LABEL_13de948:
            core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v24, v20);
            core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v21);
        }
    }
    else
    {
        (char)v2.try_source_range(v63);
        v91 = v0;
        v93 = 0;
        if ((char)v91)
            v93 = v4;
        v94 = (int)v5;
        v41 = 0;
        v43 = 4;
        *((uint128_t *)&v44) = 0;
        *((uint128_t *)&v46) = 0;
        v45 = v93.start();
        v47 = a0.length((((char)v91 & 1) ? v94 : 0));
        v48 = 1;
        v17 = 0;
        v18 = 4;
        v19 = 0;
        v95 = g_14c9d98[0].localize();
        *((char *)&v1) = 0;
        v5 = "forfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP";
        v7 = 3;
        v11 = 1;
        v12 = v64;
        v13 = v65;
        fish_printf::printf_impl::sprintf_locale(&(char)v14, &v17, v95, v96, ".", &(char)v1, 2);
        (char)v14.unwrap(&g_14dcf08);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v1);
        *((int128_t *)&v0) = *((int128_t *)&v17);
        v7 = 0;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v41);
        v44 = v7;
        *((int128_t *)&v42) = *((int128_t *)&(char)v1);
        v97 = 8.alloc_impl(48, 0);
        if (!v97)
            alloc::alloc::handle_alloc_error(8, 48); /* do not return */
        v98 = (int128_t)v42;
        v99 = *((int128_t *)&v44);
        v97[2] = *((int128_t *)&v47);
        *((void*)&v97[1]) = v99;
        *((void*)&v97[0]) = v98;
        v1 = 1;
        *((uint128_t *[3])&v5[0]) = v97;
        v7 = 1;
        a0->field_18.report_errors(a1, 2, &(char)v1);
LABEL_13de731:
        core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v1);
        v67 = (unsigned int)v91 & 0xffffff00 | 3;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v27);
    return v67;
}
