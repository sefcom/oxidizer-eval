long long fish::parse_execution::ExecutionContext::handle_command_not_found(struct_0 *a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[6], unsigned long long a5)
{
    int v0;  // [bp-0x228], Other Possible Types: unsigned long long, char
    int v1;  // [bp-0x228], Other Possible Types: char, unsigned long long
    char v2;  // [bp-0x228], Other Possible Types: unsigned int
    int v3;  // [bp-0x224], Other Possible Types: char
    uint128_t v4[3];  // [bp-0x220], Other Possible Types: char, unsigned long long
    void* v5;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x214]
    unsigned int v7;  // [bp-0x210]
    char v8;  // [bp-0x20c]
    int v9;  // [bp-0x208], Other Possible Types: void*, unsigned long long
    unsigned long long v10;  // [bp-0x200]
    void* v11;  // [bp-0x1f8], Other Possible Types: unsigned long long
    int v12;  // [bp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x1e0]
    unsigned long long v14;  // [bp-0x1d8]
    void* v15;  // [bp-0x1c8], Other Possible Types: char
    unsigned long long v16;  // [bp-0x1c0]
    void* v17;  // [bp-0x1b8]
    void* v18;  // [bp-0x1b0]
    unsigned long long v19;  // [bp-0x1a8]
    void* v20;  // [bp-0x1a0]
    int v21;  // [bp-0x198]
    void* v22;  // [bp-0x198]
    unsigned long long v23;  // [bp-0x190]
    unsigned long long v24;  // [bp-0x188]
    unsigned long long v25;  // [bp-0x178]
    void* v26;  // [bp-0x170]
    unsigned long long v27;  // [bp-0x168]
    void* v28;  // [bp-0x160]
    void* v29;  // [bp-0x158]
    int v30;  // [bp-0x158]
    unsigned long long v31;  // [bp-0x150]
    int v32;  // [bp-0x148], Other Possible Types: void*
    unsigned long v33;  // [bp-0x140]
    int v34;  // [bp-0x13f]
    unsigned long long v35;  // [bp-0x138]
    char v36;  // [bp-0x130]
    int v37;  // [bp-0x128]
    void* v38;  // [bp-0x128]
    unsigned long long v39;  // [bp-0x120]
    int v40;  // [bp-0x118], Other Possible Types: void*
    unsigned long v41;  // [bp-0x110]
    int v42;  // [bp-0x10f]
    unsigned long long v43;  // [bp-0x108]
    char v44;  // [bp-0x100]
    void* v45;  // [bp-0xf8]
    int v46;  // [bp-0xf8]
    unsigned long long v47;  // [bp-0xf0]
    int v48;  // [bp-0xe8], Other Possible Types: void*
    unsigned long v49;  // [bp-0xe0]
    int v50;  // [bp-0xdf]
    unsigned long long v51;  // [bp-0xd8]
    char v52;  // [bp-0xd0]
    void* v53;  // [bp-0xc8]
    int v54;  // [bp-0xc8]
    unsigned long long v55;  // [bp-0xc0]
    int v56;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long v57;  // [bp-0xb0]
    int v58;  // [bp-0xaf]
    unsigned long long v59;  // [bp-0xa8]
    char v60;  // [bp-0xa0]
    unsigned long long v61;  // [bp-0x98]
    void* v62;  // [bp-0x88]
    unsigned long long v63;  // [bp-0x80]
    void* v64;  // [bp-0x78]
    unsigned int v65;  // [bp-0x70]
    int v66;  // [bp-0x6c]
    unsigned long long v67;  // [bp-0x60]
    unsigned long long v68;  // [bp-0x58]
    char v69;  // [bp-0x50]
    unsigned long long v71;  // r15
    unsigned int v72;  // edi
    unsigned int v73;  // ebp
    unsigned long long v74;  // rax
    unsigned long long v75;  // rdx
    uint128_t v76[3];  // rax
    int v77;  // xmm0
    int v78;  // xmm1
    unsigned int v79;  // edi
    unsigned int v80;  // ebp
    unsigned long long v81;  // rax
    unsigned long long v82;  // rdx
    uint128_t v83[3];  // rax
    int v84;  // xmm0
    int v85;  // xmm1
    unsigned int v86;  // edi
    unsigned int v87;  // r14d
    unsigned long long v88;  // rax
    unsigned long long v89;  // rdx
    uint128_t v90[3];  // rax
    int v91;  // xmm0
    int v92;  // xmm1
    unsigned long long v93;  // rax
    void* v94;  // rbx
    unsigned long long v95;  // r12
    int v96;  // xmm0
    char *v97;  // rdi
    unsigned int v99;  // edi
    unsigned int v100;  // r14d
    uint128_t v101[3];  // rax
    int v102;  // xmm0
    int v103;  // xmm1

    v71 = a5;
    v25 = a5;
    if ((char)a5.kind())
    {
        std::io::error::repr_bitpacked::decode_repr(&v0, a5);
        if (!v1 && *((int *)&v3) == 20)
        {
            v71 = a0->field_18;
            v2 = 47;
            if (v2.slice_contains((unsigned long long)v71.node_source(a4, fish::ast::Node::source), a2))
            {
                v2.try_source_range(a4);
                v72 = 0;
                if (v1)
                    v72 = *((int *)&v3);
                v73 = *((int *)&v4);
                v38 = 0;
                v39 = 4;
                *((uint128_t *)&v40) = 0;
                *((uint128_t *)&v42) = 0;
                v41 = v72.start();
                v43 = a0.length(((v1 & 1) ? v73 : 0));
                v44 = 1;
                v9 = 0;
                v10 = 4;
                v11 = 0;
                v13 = "U";
                v14 = 57;
                v12 = 0x8000000000000000;
                v74 = v12.localize();
                v0 = 1;
                v4 = a2;
                v5 = a3;
                fish_printf::printf_impl::sprintf_locale(&v15, &v9, v74, v75, ".", &(unsigned int)v1, 1);
                v15.unwrap(&g_14dccf8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned int)v1);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v12);
                *((int128_t *)&v1) = *((int128_t *)&v9);
                v5 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v38);
                v40 = v5;
                *((int128_t *)&v37) = (int128_t)v1;
                v76 = 8.alloc_impl(48, 0);
                if (!v76)
                    alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                v77 = (int128_t)v37;
                v78 = *((int128_t *)&v40);
                v76[2] = *((int128_t *)&v43);
                *((void*)&v76[1]) = v78;
                *((void*)&v76[0]) = v77;
                v1 = 1;
                *((uint128_t *[3])&v4[0]) = v76;
                v5 = 1;
                v71.report_errors(a1, 126, &(unsigned int)v1);
                goto LABEL_13dc25c;
            }
            else
            {
                v2.try_source_range(a4);
                v79 = 0;
                if (v1)
                    v79 = *((int *)&v3);
                v80 = (int)v4;
                v29 = 0;
                v31 = 4;
                *((uint128_t *)&v32) = 0;
                *((uint128_t *)&v34) = 0;
                v33 = v79.start();
                v35 = a0.length(((v1 & 1) ? v80 : 0));
                v36 = 1;
                v9 = 0;
                v10 = 4;
                v11 = 0;
                v13 = "U";
                v14 = 75;
                v12 = 0x8000000000000000;
                v81 = v12.localize();
                v0 = 1;
                v4 = a2;
                v5 = a3;
                fish_printf::printf_impl::sprintf_locale(&v15, &v9, v81, v82, ".", &(unsigned int)v1, 1);
                v15.unwrap(&g_14dcce0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned int)v1);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v12);
                *((int128_t *)&v1) = *((int128_t *)&v9);
                v5 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v29);
                v32 = v5;
                *((int128_t *)&v30) = (int128_t)v1;
                v83 = 8.alloc_impl(48, 0);
                if (!v83)
                    alloc::alloc::handle_alloc_error(8, 48); /* do not return */
                v84 = (int128_t)v30;
                v85 = *((int128_t *)&v32);
                v83[2] = *((int128_t *)&v35);
                *((void*)&v83[1]) = v85;
                *((void*)&v83[0]) = v84;
                v1 = 1;
                *((uint128_t *[3])&v4[0]) = v83;
                v5 = 1;
                v71.report_errors(a1, 126, &(unsigned int)v1);
                goto LABEL_13dc25c;
            }
        }
        else
        {
            v0.try_source_range(a4);
            v86 = 0;
            if (v1)
                v86 = *((int *)&v3);
            v87 = (int)v4;
            v45 = 0;
            v47 = 4;
            *((uint128_t *)&v48) = 0;
            *((uint128_t *)&v50) = 0;
            v49 = v86.start();
            v51 = a0.length(((v1 & 1) ? v87 : 0));
            v52 = 1;
            v9 = 0;
            v10 = 4;
            v11 = 0;
            v13 = "U";
            v14 = 60;
            v12 = 0x8000000000000000;
            v88 = v12.localize();
            v2 = 1;
            v4 = a2;
            v5 = a3;
            fish_printf::printf_impl::sprintf_locale(&v15, &v9, v88, v89, ".", &(unsigned int)v0, 1);
            v15.unwrap(&g_14dccc8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned int)v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v12);
            *((int128_t *)&v0) = *((int128_t *)&v9);
            v5 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v45);
            v48 = v5;
            *((int128_t *)&v46) = (int128_t)v0;
            v90 = 8.alloc_impl(48, 0);
            if (!v90)
                alloc::alloc::handle_alloc_error(8, 48); /* do not return */
            v91 = (int128_t)v46;
            v92 = *((int128_t *)&v48);
            v90[2] = *((int128_t *)&v51);
            *((void*)&v90[1]) = v92;
            *((void*)&v90[0]) = v91;
            v0 = 1;
            *((uint128_t *[3])&v4[0]) = v90;
            v5 = 1;
            a0->field_18.report_errors(a1, 126, &(unsigned int)v0);
            goto LABEL_13dc25c;
        }
    }
    else
    {
        v18 = 0;
        v19 = 8;
        v20 = 0;
        (char)v9.get_argument_nodes_no_redirs(a4[4], a4[5]);
        v61 = a0->field_18;
        v93 = a0->field_18.expand_arguments_from_nodes(a0->field_28, a1, v10, v11, &v18);
        v71 = v93 & 4294967295;
        if ((char)v93)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v9, v10);
            core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v18);
        }
        else
        {
            (char)v0.to_vec(a2, a3);
            v14 = v5;
            *((int128_t *)&v12) = *((int128_t *)&(char)v0);
            v18.insert(0, &(char)v12, &g_14dcc98);
            core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v9, v10);
            v22 = 0;
            v23 = 4;
            v24 = 0;
            v26 = 0;
            v27 = 8;
            v28 = 0;
            v15 = 0;
            v16 = 8;
            v17 = 0;
            (char)v12.to_vec("2", 1);
            v5 = v14;
            memcpy(&(char)v0, &(char)v12, 16);
            v7 = 1;
            v8 = 4;
            v15.push(&(char)v0, &g_14dccb0);
            v26.append_from_specs(&v15, 4, 0);
            if ((char)fish::function::exists("f", 22, a1.parser()))
            {
                (char)v0.to_vec("f", 22);
                v11 = v5;
                memcpy(&(char)v9, &(char)v0, 16);
                if (v20)
                {
                    v94 = 0;
                    do
                    {
                        (char)v9.push(32);
                        fish::common::escape(&(char)v0, *((long long *)(8 + v19 + (char *)v94)), *((long long *)(16 + v19 + (char *)v94)));
                        (char)v9.spec_extend((&v0)[1], (&v0)[1] + v5 * 4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                        v94 += 24;
                    } while (v20 * 24 != v94);
                }
                v95 = a1.parser();
                v69.get_last_statuses(v95);
                (char)v0.to_vec("f", 22);
                v14 = v5;
                v96 = *((int128_t *)&v0);
                v12 = v96;
                v3 = v96;
                v6 = v14;
                v65 = 6;
                *((int128_t *)&v66) = *((int128_t *)&(char)v0);
                v67 = (long long)(&v3)[8];
                v68 = v6;
                v62 = 0;
                v63 = 8;
                v64 = 0;
                (char)v0.event_block(&v62);
                v71 = v95.push_block(&(char)v0);
                (char)v0.eval(v95, v10, v11, &v26);
                v95.pop_block(v71);
                v95.set_last_statuses(&v69);
                v97 = &(char)v9;
            }
            else
            {
                v13 = "U";
                v14 = 16;
                v12 = 0x8000000000000000;
                (char)v0.to_vec(v12.localize(), a2);
                v11 = v5;
                *((int128_t *)&v9) = *((int128_t *)&(char)v0);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v22);
                v24 = v11;
                *((int128_t *)&v21) = (int128_t)v9;
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v12);
                if (!v20)
                    goto LABEL_13dc106;
                v22.push(32);
                fish::common::escape(&(char)v0, *((long long *)(v19 + 8)), *((long long *)(v19 + 16)));
                v22.spec_extend((&v0)[1], (&v0)[1] + v5 * 4);
                v97 = &(char)v0;
            }
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v97);
LABEL_13dc106:
            (char)v0.try_source_range(a4);
            v99 = 0;
            if (v1)
                v99 = *((int *)((char *)&v0 + 4));
            v100 = (&v0)[1];
            v53 = 0;
            v55 = 4;
            *((uint128_t *)&v56) = 0;
            *((uint128_t *)&v58) = 0;
            v57 = v99.start();
            v59 = a0.length(((v1 & 1) ? v100 : 0));
            v60 = 1;
            v5 = v24;
            *((int128_t *)&v0) = (int128_t)v21;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v53);
            v56 = v5;
            *((int128_t *)&v54) = *((int128_t *)&(char)v0);
            v101 = 8.alloc_impl(48, 0);
            if (!v101)
                alloc::alloc::handle_alloc_error(8, 48); /* do not return */
            v102 = (int128_t)v54;
            v103 = *((int128_t *)&v56);
            v101[2] = *((int128_t *)&v59);
            *((void*)&v101[1]) = v103;
            *((void*)&v101[0]) = v102;
            v0 = 1;
            *((uint128_t *[3])&v4[0]) = v101;
            v5 = 1;
            v61.report_errors(a1, 127, &(char)v0);
            core::ptr::drop_in_place<alloc::vec::Vec<fish::redirection::RedirectionSpec>>(&v15);
            core::ptr::drop_in_place<fish::io::IoChain>(&v26);
            core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v18);
LABEL_13dc25c:
            core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&(char)v0);
            v71 = v71 & 0xffffffffffffff00 | 3;
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v25);
        return v71 & 4294967295;
    }
}
