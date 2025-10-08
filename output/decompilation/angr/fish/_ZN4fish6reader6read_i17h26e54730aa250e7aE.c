long long fish::reader::read_i(unsigned long a0)
{
    void* v0;  // [bp-0x120], Other Possible Types: char
    char v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x120]
    unsigned int v4;  // [bp-0x11c]
    struct_0 *v5;  // [bp-0x118], Other Possible Types: struct_1 *, unsigned long long
    unsigned long long v6;  // [bp-0x110]
    void* v7;  // [bp-0x110], Other Possible Types: unsigned long long
    int v8;  // [bp-0x108]
    unsigned long long v9;  // [bp-0x108]
    int v10;  // [bp-0x108]
    int v11;  // [bp-0x108]
    unsigned long long v12;  // [bp-0x100]
    unsigned long long v13;  // [bp-0xf8]
    struct_2 *v14;  // [bp-0xe8]
    int v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd0]
    unsigned long long v17;  // [bp-0xc8]
    void* v18;  // [bp-0xb8], Other Possible Types: int
    unsigned long long v19;  // [bp-0xb0]
    unsigned long long v20;  // [bp-0xa8]
    int v21;  // [bp-0xa8]
    int v22;  // [bp-0xa0]
    unsigned long long v23;  // [bp-0x98]
    void* v24;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x88]
    unsigned long long v26;  // [bp-0x80]
    void* v27;  // [bp-0x78]
    unsigned short v28;  // [bp-0x74]
    char v29;  // [bp-0x72]
    char v30;  // [bp-0x71]
    char v31;  // [bp-0x70], Other Possible Types: unsigned int
    char v32;  // [bp-0x6f]
    int v33;  // [bp-0x68]
    unsigned long long v34;  // [bp-0x58]
    char v35;  // [bp-0x48]
    unsigned long v37;  // r15
    char *v38;  // r14
    unsigned long long v39;  // rdx
    char *v40;  // rbx
    unsigned long v41;  // r12
    unsigned long long v42;  // rcx
    unsigned long v43;  // rbx
    char *v44;  // r12
    struct_0 *v45;  // rax
    struct_0 *v46;  // r13
    int v47;  // xmm0
    unsigned long v48;  // r15
    struct_3 *v49;  // rax
    struct_1 *v50;  // rax
    int v51;  // xmm0

    fish::threads::assert_is_main_thread();
    v18 = 0;
    v19 = 4;
    *((uint128_t *)&v21) = 0;
    v23 = 4;
    v24 = 0;
    v27 = 0;
    v31 = 0;
    v25 = "f";
    v26 = 11;
    v28 = 257;
    v29 = 1;
    v32 = 1;
    v37 = a0 + 472;
    v30 = fish::reader::check_bool_var(v37, fish::env::environment::Environment::get, "f", 27, 1);
    v31 = fish::reader::check_bool_var(v37, fish::env::environment::Environment::get, "f", 21, 0);
    if ((char)a0.is_breakpoint() && (char)fish::function::exists("f", 22, a0))
    {
        v0.to_vec("f", 22);
        v13 = v6;
        *((int128_t *)&v8) = *((int128_t *)&v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
        v20 = v13;
        *((int128_t *)&v18) = (int128_t)v8;
        v24 = 0;
    }
    else
    {
        v0.to_vec("f", 11);
        v13 = v6;
        *((int128_t *)&v8) = *((int128_t *)&v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
        v20 = v13;
        *((int128_t *)&v18) = (int128_t)v8;
        v0.to_vec("f", 17);
        v13 = v6;
        *((int128_t *)&v8) = *((int128_t *)&v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v21);
        v24 = v13;
        *((int128_t *)&v22) = (int128_t)v8;
    }
    fish::history::history_session_id(&v0, v37, &g_14c7518);
    v14 = fish::reader::reader_push(a0, v5, v6, &v18);
    v38 = &v0;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    v14.import_history_if_necessary(v39);
    v35.new(fish::reader::reader_save_screen_state);
    v40 = &v14;
    v41 = a0;
    while (!(char)fish::reader::check_exit_loop_maybe_warning(v40))
    {
        atomic_fetch_add(&_ZN4fish6reader9RUN_COUNT17hd43ff14a0ccba10fE);
        v38.readline(v40, 0);
        if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        {
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v38);
        }
        else
        {
            v17 = v6;
            *((int128_t *)&v15) = *((int128_t *)&v1);
            if (v17)
            {
                v35.disable_tty_protocols();
                v14.clear(0);
                v14.update_buff_pos(0, 0, v42);
                fish::terminal::Outputter::stdoutput();
                v9 = _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E.new();
                v12 = v39;
                v5 = v16;
                v7 = v17;
                v0 = 34;
                v9.write_command(v38);
                core::ptr::drop_in_place<fish::terminal::BufferedOutputter>(&v9);
                v38.to_vec("f", 12);
                v43 = v41;
                v44 = v38;
                v34 = v7;
                *((int128_t *)&v33) = *((int128_t *)&v3);
                v45 = 8.alloc_impl(24, 0);
                if (!v45)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v46 = v45;
                fish::builtins::fish_indent::fish_indent::{{closure}}(v44, v16, v17);
                v13 = v7;
                v47 = *((int128_t *)&v3);
                v10 = v47;
                v46->field_10 = v7;
                *((void*)&v46->field_0) = v47;
                v2 = 1;
                v5 = v46;
                v7 = 1;
                v48 = v43;
                fish::event::fire_generic(v43, &(char)v33, v44);
                fish::reader::reader_run_command(&(char)v33, v48, v16, v17);
                v40 = &v14;
                v38 = v44;
                v41 = v48;
                fish::signal::signal_clear_cancel();
                if (!(char)(&v33)[10])
                    atomic_fetch_add(&_ZN4fish6reader12STATUS_COUNT17h87afe7336ab6e9e9E);
                v49 = v41.libdata();
                v14->field_84b = v14->field_84b | v49->field_80;
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v39);
                *((char *)(v41.libdata_mut() + 128)) = 0;
                core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v39);
                fish::terminal::Outputter::stdoutput();
                v9 = _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E.new();
                v12 = v39;
                v4 = v41.get_last_status();
                v0 = 36;
                v9.write_command(v38);
                core::ptr::drop_in_place<fish::terminal::BufferedOutputter>(&v9);
                v38.to_vec("f", 13);
                v13 = 1;
                *((int128_t *)&v11) = *((int128_t *)&v2);
                v50 = 8.alloc_impl(24, 0);
                if (!v50)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v51 = (int128_t)v15;
                v50->field_10 = v17;
                *((void*)&v50->field_0) = v51;
                v3 = 1;
                v5 = v50;
                v6 = 1;
                fish::event::fire_generic(v41, &v9, v38);
                v14->field_830 + 16.resolve_pending();
                v1 = 39;
                v14->field_458.write_command(v38);
                if ((char)fish::reader::check_exit_loop_maybe_warning(&v14))
                    break;
                if (v14->field_84c)
                    v14->field_84c = 0;
            }
            else
            {
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v15);
            }
        }
    }
    fish::reader::reader_pop();
    if (fish::reader::reader_received_sighup())
        fish::reader::redirect_tty_after_sighup();
    fish::reader::reader_data_stack();
    if (g_15a90b0)
        return core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(&v35);
    core::sync::atomic::atomic_store(&_ZN4fish6reader10EXIT_STATE17hba3d57e2282796bcE, 1, 0);
    v1.to_vec("f", 9);
    v13 = v6;
    *((int128_t *)&v8) = *((int128_t *)&v3);
    v0 = 0;
    v5 = 8;
    v7 = 0;
    fish::event::fire_generic(v41, &(char)v8, &v1);
    core::sync::atomic::atomic_store(&_ZN4fish6reader10EXIT_STATE17hba3d57e2282796bcE, 2, 0);
    fish::proc::hup_jobs(v41.jobs());
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v39);
    return core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(&v35);
}
