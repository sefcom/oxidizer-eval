long long fish::ast::Populator::allocate_populate_statement(struct_0 *a0, struct_2 *a1)
{
    void* v0;  // [sp-0x188]
    unsigned long long v1;  // [sp-0x180]
    void* v2;  // [sp-0x178]
    void* v3;  // [bp-0x170]
    unsigned long long v4;  // [sp-0x168]
    void* v5;  // [bp-0x160]
    int v6;  // [bp-0x158], Other Possible Types: unsigned long long (64 bits)[3], unsigned long long
    int v7;  // [bp-0x158]
    unsigned long long v8;  // [bp-0x150]
    void* v9;  // [sp-0x148], Other Possible Types: unsigned long long
    int v10;  // [bp-0x138]
    unsigned long long v11;  // [bp-0x138]
    unsigned long long v12;  // [bp-0x138]
    unsigned long long v13;  // [bp-0x138]
    unsigned long long v14;  // [bp-0x130]
    void* v15;  // [bp-0x128]
    char v16;  // [bp-0x120]
    unsigned int v17;  // [bp-0x120], Other Possible Types: char
    char v18;  // [bp-0x120]
    char v19;  // [bp-0x120]
    char v20;  // [bp-0x11c]
    int v21;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x110]
    char v23;  // [bp-0x100]
    unsigned long long v24;  // [bp-0xf8]
    void* v25;  // [bp-0xf0], Other Possible Types: unsigned long long
    void* v26;  // [bp-0xd0], Other Possible Types: unsigned long long
    int v27;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v28;  // [bp-0xc0]
    unsigned long v29;  // [bp-0xb8]
    int v30;  // [bp-0xb7]
    unsigned long long v31;  // [bp-0xb0]
    char v32;  // [bp-0xa8]
    void* v33;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v34;  // [bp-0x98], Other Possible Types: unsigned long long
    int v35;  // [bp-0x90]
    unsigned long v36;  // [bp-0x88]
    int v37;  // [bp-0x87]
    unsigned long long v38;  // [bp-0x80]
    char v39;  // [bp-0x78]
    void* v40;  // [bp-0x70], Other Possible Types: unsigned long long
    int v41;  // [bp-0x68], Other Possible Types: unsigned long long
    int v42;  // [bp-0x60]
    unsigned long v43;  // [bp-0x58]
    int v44;  // [bp-0x57]
    unsigned long long v45;  // [bp-0x50]
    char v46;  // [bp-0x48]
    char v47;  // [bp-0x40]
    unsigned long long v49;  // rax
    struct_1 *v50;  // rax
    struct_3 *v51;  // rax
    unsigned long long v52;  // r15
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    unsigned long long v55;  // r12
    unsigned long long v56;  // r12
    unsigned long long v57;  // r13
    unsigned long long v58;  // rdx
    unsigned long v59;  // cc_ndep
    unsigned int v60;  // r15d
    char v63;  // al
    char v64[10];  // rax
    char v65[10];  // rcx
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned int v70;  // r15d
    unsigned long long v71;  // rax
    unsigned long long v73;  // rdx
    unsigned long long v75;  // rax
    unsigned int v76;  // r15d
    unsigned long long v77;  // rax
    unsigned long long v79;  // rdx

    if (!(*((char *)(a1.peek_token(0) + 9)) != 11 || !(a1->field_db & 8)))
    {
        v16.allocate_visit(a1);
        core::ptr::drop_in_place<fish::ast::DecoratedStatement>(&v16);
    }
    else if (*((char *)(a1.peek_token(0) + 9)) == 4)
    {
        v49 = a1.allocate_boxed_visit();
        a0->field_8 = v49;
        a0->field_0 = 4;
        return v49;
    }
    else
    {
        v50 = a1.peek_token(0);
        v51 = a1.peek_token(0);
        if (v50->field_9 != 2)
        {
            v76 = v51.range();
            if (!a1->field_d0 || a1->field_d9)
            {
                v11 = 0x8000000000000000;
                a1->field_da = 1;
                if (!a1->field_d9)
                    goto LABEL_132af11;
            }
            else
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v8 = "E";
                v9 = 33;
                v6 = 0x8000000000000000;
                v77 = v6.localize();
                (char)v3.user_presentable_description(a1.peek_token(0));
                v16 = 1;
                *((int128_t *)&v21) = *((int128_t *)&v4);
                fish_printf::printf_impl::sprintf_locale(&(char)v13, &v0, v77, v79, ".", &v16, 1);
                (char)v13.unwrap(&g_14c56a0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v16);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v3);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
                *((int128_t *)&v10) = *((int128_t *)&v0);
                v15 = 0;
                a1->field_da = 1;
                if (!a1->field_d9)
                {
LABEL_132af11:
                    a1->field_d9 = 1;
                    if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
                    {
                        v0 = 0;
                        v1 = 1;
                        v2 = 0;
                        (char)v3.to_flog_str(&g_15a95b0);
                        v16.into_iter(&(char)v3);
                        v0.spec_extend(&v16);
                        v0.push(58, &g_14c56a0);
                        v0.push(32, &g_14c56a0);
                        v3 = 0;
                        v4 = 4;
                        v5 = 0;
                        v17 = 4;
                        v21 = a1.spaces();
                        v23 = 0;
                        v24 = 1;
                        v25 = 0;
                        fish_printf::printf_impl::sprintf_locale(&v6, &v3, "%*sparse error - begin unwindingp", 32, &v17, 2);
                        v6.unwrap(&g_14c56a0);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v17);
                        *((int128_t *)&v7) = *((int128_t *)&v3);
                        v9 = 0;
                        v3.to_flog_str(&v6);
                        v17.into_iter(&v3);
                        v0.spec_extend(&v17);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                        v0.push(10, &g_14c56a0);
                        fish::flog::flog_impl(v1, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                    }
                    if ((int)v76.start() != -1)
                        a1->padding_0[24].push(v76, (unsigned int)v79, &g_14c56a0);
                    if (a1->field_d0)
                    {
                        v26 = 0;
                        v27 = 4;
                        *((uint128_t *)&v28) = 0;
                        *((uint128_t *)&v30) = 0;
                        if (v11 == 0x8000000000000000)
                            core::option::unwrap_failed(&g_14c56a0); /* do not return */
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v26);
                        v26 = v11;
                        *((int128_t *)&v27) = *((int128_t *)&v14);
                        v32 = 3;
                        v29 = v76.start();
                        v31 = a0.length((unsigned int)v79);
                        a1->field_d0.push(&v26, &g_14c56a0);
                    }
                }
            }
            fish::ast::Populator::allocate_populate_statement::got_error(a0, a1);
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&(char)v13);
        }
        else if (v51->field_e)
        {
            v47.consume_any_token(a1);
            v52 = v47.source_start();
            v53 = v47.source_start();
            v54 = v47.source_length() + v53;
            v55 = v54;
            v56 = v55 - v52;
            if (v55 >= v52 && v55 <= a1->field_b0)
            {
                v57 = v52 * 4 + a1->field_a8;
                if (!((char)fish::tokenizer::variable_assignment_equals_pos(v57, v56) & 1))
                {
                    core::option::unwrap_failed(&g_14c5628); /* do not return */
                }
                else if (v58 > v56)
                {
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c5640); /* do not return */
                }
                else if ((char)_ccall(2, 8, v58, v56, v59))
                {
                    v60 = v47.range();
                    if (!a1->field_d0 || a1->field_d9)
                    {
                        v12 = 0x8000000000000000;
                    }
                    else
                    {
                        v3 = 0;
                        v4 = 4;
                        v5 = 0;
                        v16 = 1;
                        v21 = v57;
                        v22 = v58;
                        v23 = 1;
                        v24 = v58 * 4 + 4 + v57;
                        v25 = v56 - (v58 + 1);
                        fish_printf::printf_impl::sprintf_locale(&v6, &v3, g_14c5670[0].localize(), v58, ".", &v16, 2);
                        v6.unwrap(&g_14c5688);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v16);
                        *((int128_t *)&v10) = *((int128_t *)&v3);
                        v15 = 0;
                    }
                    a1->field_da = 1;
                    if (!a1->field_d9)
                    {
                        a1->field_d9 = 1;
                        if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
                        {
                            v0 = 0;
                            v1 = 1;
                            v2 = 0;
                            v3.to_flog_str(&g_15a95b0);
                            v16.into_iter(&v3);
                            v0.spec_extend(&v16);
                            v0.push(58, &g_14c5688);
                            v0.push(32, &g_14c5688);
                            v3 = 0;
                            v4 = 4;
                            v5 = 0;
                            v17 = 4;
                            v21 = a1.spaces();
                            v23 = 0;
                            v24 = 1;
                            v25 = 0;
                            fish_printf::printf_impl::sprintf_locale(&v6, &v3, "%*sparse error - begin unwindingp", 32, &v17, 2);
                            v6.unwrap(&g_14c5688);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v17);
                            *((int128_t *)&v6) = *((int128_t *)&v3);
                            v9 = 0;
                            v3.to_flog_str(&v6);
                            v17.into_iter(&v3);
                            v0.spec_extend(&v17);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                            v0.push(10, &g_14c5688);
                            fish::flog::flog_impl(v1, 0);
                            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                        }
                        if ((int)v60.start() != -1)
                            a1->padding_0[24].push(v60, (unsigned int)v58, &g_14c5688);
                        if (a1->field_d0)
                        {
                            v33 = 0;
                            v34 = 4;
                            *((uint128_t *)&v35) = 0;
                            *((uint128_t *)&v37) = 0;
                            if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
                                core::option::unwrap_failed(&g_14c5688); /* do not return */
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v33);
                            v33 = v12;
                            *((int128_t *)&v34) = *((int128_t *)&v14);
                            v39 = 13;
                            v36 = v60.start();
                            v38 = a0.length((unsigned int)v58);
                            a1->field_d0.push(&v33, &g_14c5688);
                        }
                    }
                    fish::ast::Populator::allocate_populate_statement::got_error(a0, a1);
                    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&(char)v13);
                }
                else
                {
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c5658); /* do not return */
                }
            }
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c5610); /* do not return */
        }
    }
    if (*((char *)(a1.peek_token(0) + 9)) == 2)
    {
        v17 = 269224706;
        v20 = 18;
        v63 = a1.peek_token(0) + 8.slice_contains(&v17, 5);
        v64 = a1.peek_token(1);
        v65 = 12;
        if (!v63)
        {
            v65 = 11;
            if (v64[9] != 2)
                goto LABEL_132ad3c;
        }
        if (!*((char *)(v64 + v65)))
        {
LABEL_132ad3c:
            if (a1.peek_token(0) + 8.slice_contains(&g_9fb0b6, 2) || *((char *)(a1.peek_token(1) + 9)) != 11)
                goto LABEL_132ad78;
            v66 = fish::ast::Populator::allocate_populate_statement::new_decorated_statement(a0, a1);
        }
        else
        {
            v66 = fish::ast::Populator::allocate_populate_statement::new_decorated_statement(a0, a1);
        }
    }
    else
    {
LABEL_132ad78:
        a1.peek_token(0);
        switch (*((char *)(a1.peek_token(0) + 8)))
        {
        case 2: case 10: case 11: case 18:
            v67 = a1.allocate_boxed_visit();
            a0->field_8 = v67;
            a0->field_0 = 3;
            return v67;
        case 7:
            v70 = a1.peek_token(0).range();
            if (!a1->field_d0 || a1->field_d9)
            {
                v13 = 0x8000000000000000;
                break;
            }
            else
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v8 = "E";
                v9 = 33;
                v6 = 0x8000000000000000;
                v71 = v6.localize();
                (char)v3.user_presentable_description(a1.peek_token(0));
                v18 = 1;
                *((int128_t *)&v21) = *((int128_t *)&v4);
                fish_printf::printf_impl::sprintf_locale(&(char)v12, &v0, v71, v73, ".", &v18, 1);
                (char)v12.unwrap(&g_14c55f8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v18);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v3);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
                *((int128_t *)&v10) = *((int128_t *)&v0);
                v15 = 0;
                break;
            }
            a1->field_da = 1;
            if (!a1->field_d9)
            {
                a1->field_d9 = 1;
                if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    (char)v3.to_flog_str(&g_15a95b0);
                    v16.into_iter(&(char)v3);
                    v0.spec_extend(&v16);
                    v0.push(58, &g_14c55f8);
                    v0.push(32, &g_14c55f8);
                    v3 = 0;
                    v4 = 4;
                    v5 = 0;
                    v19 = 4;
                    v21 = a1.spaces();
                    v23 = 0;
                    v24 = 1;
                    v25 = 0;
                    fish_printf::printf_impl::sprintf_locale(&v6, &v3, "%*sparse error - begin unwindingp", 32, &v19, 2);
                    v6.unwrap(&g_14c55f8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v19);
                    *((int128_t *)&v7) = *((int128_t *)&v3);
                    v9 = 0;
                    v3.to_flog_str(&v6);
                    v19.into_iter(&v3);
                    v0.spec_extend(&v19);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                    v0.push(10, &g_14c55f8);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                }
                if ((int)v70.start() != -1)
                    a1->padding_0[24].push(v70, (unsigned int)v73, &g_14c55f8);
                if (a1->field_d0)
                {
                    v40 = 0;
                    v41 = 4;
                    *((uint128_t *)&v42) = 0;
                    *((uint128_t *)&v44) = 0;
                    if (v13 == 0x8000000000000000)
                        core::option::unwrap_failed(&g_14c55f8); /* do not return */
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v40);
                    v40 = v13;
                    *((int128_t *)&v41) = *((int128_t *)&v14);
                    v46 = 3;
                    v43 = v70.start();
                    v45 = a0.length((unsigned int)v73);
                    a1->field_d0.push(&v40, &g_14c55f8);
                }
            }
            fish::ast::Populator::allocate_populate_statement::got_error(a0, a1);
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&(char)v13);
        case 8: case 14:
            v68 = a1.allocate_boxed_visit();
            a0->field_8 = v68;
            a0->field_0 = 2;
            return v68;
        case 12:
            v69 = a1.allocate_boxed_visit();
            a0->field_8 = v69;
            a0->field_0 = 5;
            return v69;
        case 16:
            v75 = a1.allocate_boxed_visit();
            a0->field_8 = v75;
            a0->field_0 = 6;
            return v75;
        default:
            v66 = fish::ast::Populator::allocate_populate_statement::new_decorated_statement(a0, a1);
        }
    }
    return v66;
}
