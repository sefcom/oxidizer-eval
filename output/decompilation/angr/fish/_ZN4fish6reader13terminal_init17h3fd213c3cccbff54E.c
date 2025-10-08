long long fish::reader::terminal_init(unsigned long a0, unsigned long long a1, struct_1 *a2, unsigned int a3)
{
    char v0;  // [bp-0x1e1]
    void* v1;  // [bp-0x1e0]
    unsigned long long v2;  // [bp-0x1d8]
    void* v3;  // [bp-0x1d0]
    unsigned long long v4[3];  // [bp-0x1c8], Other Possible Types: int
    unsigned long long v6;  // [bp-0x1c0]
    void* v7;  // [bp-0x1b8], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x1b0]
    unsigned long long v9;  // [bp-0x1a8]
    void* v10;  // [bp-0x1a0]
    void* v11;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x190]
    void* v13;  // [bp-0x188]
    char v14;  // [bp-0x168]
    char v15;  // [bp-0x168]
    unsigned int v16;  // [bp-0x167]
    unsigned int v17;  // [bp-0x164]
    unsigned long v18;  // [bp-0x160], Other Possible Types: unsigned long long
    char v19;  // [bp-0x158], Other Possible Types: unsigned long
    char v20;  // [bp-0x148]
    unsigned long long v21;  // [bp-0x140]
    char v22;  // [bp-0x128]
    unsigned int v23;  // [bp-0x127]
    unsigned int v24;  // [bp-0x124]
    unsigned long v25;  // [bp-0x120]
    unsigned long v26;  // [bp-0x118]
    char v27;  // [bp-0x107]
    unsigned int v28;  // [bp-0x104]
    void* v29;  // [bp-0x100]
    void* v30;  // [bp-0xf8]
    unsigned long long v31;  // [bp-0xf0]
    int v32;  // [bp-0xe8]
    unsigned long long v33;  // [bp-0xe0]
    void* v34;  // [bp-0xd8]
    unsigned long long v35;  // [bp-0xd0]
    uint128_t v36;  // [bp-0xc8]
    unsigned long long v37;  // [bp-0xb8]
    void* v38;  // [bp-0xb0]
    unsigned long long v39;  // [bp-0xa8]
    void* v40;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned int v41;  // [bp-0x88]
    void* v42;  // [bp-0x80]
    unsigned long long v43;  // [bp-0x78]
    unsigned int v44;  // [bp-0x48]
    char v45;  // [bp-0x44]
    char v46;  // [bp-0x40]
    unsigned long long v48;  // rdx
    struct_0 *v49;  // rax
    int v50;  // xmm1
    unsigned long v51;  // rax
    unsigned long long v52[2];  // rax
    unsigned long long v53[2];  // r14
    unsigned long long v54;  // rax
    unsigned long v55;  // rdx
    unsigned long v56;  // rsi
    unsigned int v57;  // edi
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rsi
    unsigned long long v61;  // rdi

    if (!fish::nix::isatty(a3))
        core::panicking::panic("assertion failed: isatty(inputfd)initial query", 33, &g_14df9d0); /* do not return */
    fish::reader::reader_interactive_init();
    v30 = 0;
    v31 = 8;
    *((uint128_t *)&v32) = 0;
    v34 = 0;
    v35 = 4;
    v36 = 0;
    v37 = 8;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = 2;
    v41 = 0;
    v42 = 0;
    v43 = 3;
    v44 = a3;
    v45 = 0;
    v0 = 1;
    if ((char)fish::reader::querying_allowed())
    {
        fish::reader::set_shell_modes(a3, "initial query", 13);
        fish::terminal::Outputter::stdoutput();
        v11 = _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E.new();
        v12 = v48;
        v14 = 28;
        v11.write_command(&v14);
        v15 = 22;
        v11.write_command(&v15);
        fish::reader::query_capabilities_via_dcs(&v11, a1, a2->field_38);
        v15 = 21;
        v11.write_command(&v15);
        core::ptr::drop_in_place<fish::terminal::BufferedOutputter>(&v11);
        v49 = v30.blocking_query();
        v49->field_0 = 2;
        v50 = *((int128_t *)&v19);
        *((int128_t *)&(&v49->field_0)[1]) = *((int128_t *)&v15);
        *((void*)((char *)&v49->field_8 + 8)) = v50;
        *((long long *)((char *)&v49->field_18 + 8)) = *((long long *)&v20);
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v48);
        while (!(char)fish::reader::check_exit_loop_maybe_warning(0))
        {
            v11.readch(&v30);
            v51 = 0x8000000000000000 + v11 + 1;
            if (9223372036854775812 <= v11)
                v51 = 0;
            if (v51 != 3)
            {
                if (v51 != 4)
                    fish::reader::terminal_init::panic_cold_explicit(); /* do not return */
                if (v12 != 2)
                {
                    if (!((char)v12 & 1))
                        goto LABEL_13f65f8;
                }
                else
                {
                    v52 = _ZN4fish6common12PROGRAM_NAME17h6212e6221159d343E.get();
                    if (!v52)
                        core::option::unwrap_failed(&g_14dfa00); /* do not return */
                    v53 = v52;
                    if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
                    {
                        v8 = 0;
                        v9 = 1;
                        v10 = 0;
                        v4.to_flog_str(&g_15a93d0);
                        v15.into_iter(&v4);
                        v8.spec_extend(&v15);
                        v8.push(58, &g_14dfa18);
                        v8.push(32, &g_14dfa18);
                        v1 = 0;
                        v2 = 4;
                        v3 = 0;
                        v6 = "%";
                        v7 = 319;
                        *((unsigned long long *)&v4) = 0x8000000000000000;
                        v54 = (unsigned long long)v4.localize();
                        v55 = v53[0];
                        v56 = v53[1];
                        v14 = 1;
                        v57 = *((int *)&v27);
                        v16 = v57;
                        v17 = v28;
                        v18 = v55;
                        v19 = v56;
                        v20 = 4;
                        v21 = 2;
                        v22 = 1;
                        v23 = v57;
                        v24 = v17;
                        v25 = v18;
                        v26 = v19;
                        fish_printf::printf_impl::sprintf_locale(&v46, &v1, v54, v48, ".", &v14, 3);
                        v46.unwrap(&g_14dfa30);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v14);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v4);
                        *((int128_t *)&v4) = *((int128_t *)&v1);
                        v7 = 0;
                        v1.to_flog_str(&(unsigned long long)v4);
                        v14.into_iter(&v1);
                        v8.spec_extend(&v14);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v4);
                        v8.push(10, &g_14dfa18);
                        fish::flog::flog_impl(v9, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v8, v9);
                    }
                    v40 = 0;
                    v41 = 30000000;
LABEL_13f65f8:
                    core::ptr::drop_in_place<fish::input_common::CharEvent>(&v11);
                    break;
                }
            }
            else if (!v12)
            {
                fish::reader::reader_sighup();
            }
            else if ((unsigned int)v12 != 1)
            {
                if ((unsigned int)v12 != 2)
                    fish::reader::terminal_init::panic_cold_explicit(); /* do not return */
                goto LABEL_13f65f8;
            }
            core::ptr::drop_in_place<fish::input_common::CharEvent>(&v11);
        }
        fish::input_common::stop_query(v30.blocking_query(), v48);
        if ((long long)v36)
        {
            v59 = &g_14dfa78;
            v60 = 59;
            v61 = "assertion failed: input_data.input_function_args.is_empty()assertion failed: old.is_none()";
            core::panicking::panic(v61, v60, v59); /* do not return */
        }
        else if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            v11.to_flog_str(&g_15a99a0);
            v15.into_iter(&v11);
            v1.spec_extend(&v15);
            v1.push(58, &g_14dfa48);
            v1.push(32, &g_14dfa48);
            v11 = 0;
            v12 = 4;
            v13 = 0;
            v14 = 4;
            v18 = v33;
            fish_printf::printf_impl::sprintf_locale(&(unsigned long long)v4, &v11, "Returning %lu pending input eventsassertion failed: isatty(inputfd)initial query", 34, &v14, 1);
            (unsigned long long)v4.unwrap(&g_14dfa48);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v14);
            *((int128_t *)&v4) = *((int128_t *)&v11);
            v7 = 0;
            v11.to_flog_str(&(unsigned long long)v4);
            v14.into_iter(&v11);
            v1.spec_extend(&v14);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v4);
            v1.push(10, &g_14dfa48);
            fish::flog::flog_impl(v2, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
        }
    }
    memcpy(v29, &v30, 184);
    core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::reader::terminal_init::{{closure}}>>(&v0);
    return a0;
}
