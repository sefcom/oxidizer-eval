void fish::reader::reader_run_command(unsigned long a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0xa0]
    void* v5;  // [bp-0xa0]
    char v6;  // [bp-0xa0]
    unsigned short v7;  // [bp-0x9c]
    unsigned long long v8;  // [bp-0x98]
    char v9;  // [bp-0x97]
    char v10;  // [bp-0x93]
    void* v11;  // [bp-0x90], Other Possible Types: unsigned long long
    uint128_t v12;  // [bp-0x88]
    unsigned int v13[1][2];  // [bp-0x6c], Other Possible Types: unsigned long
    unsigned int v14;  // [bp-0x64]
    char v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x58]
    void* v17;  // [bp-0x50]
    struct_4 *v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    unsigned int v20;  // [bp-0x38]
    struct_2 *v22;  // r13
    unsigned long long v23;  // rdx
    struct_3 *v24;  // r13
    void* v25;  // r13
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v31[2];  // rax
    struct_0 *v32;  // r15
    unsigned long long v33[2];  // rax
    struct_1 *v34;  // r15
    unsigned long long v35;  // rdi

    if (fish::tty_handoff::get_tty_protocols_active())
    {
        v4 = &g_14e0dd0;
        v8 = 1;
        v11 = 8;
        v12 = 0;
        core::panicking::panic_fmt(&(char)v4, &g_14e0e28); /* do not return */
    }
    fish::tokenizer::tok_command(&v15, a2, a3);
    if (v17)
    {
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v6, v16, v17);
        v3 = v11;
        *((int128_t *)&v0) = *((int128_t *)&v6);
        v22 = a1.libdata_mut();
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v22);
        v22->field_10 = v3;
        v22->field_0 = (int128_t)v0;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v23);
        v6.to_vec(a2, a3);
        v3 = v11;
        *((int128_t *)&v0) = *((int128_t *)&v6);
        v24 = a1.libdata_mut();
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(&v24->padding_0)[1]);
        *((unsigned long long *)((char *)&v24->field_18 + 8)) = v3;
        *((int128_t *)&(&v24->padding_0)[1]) = (int128_t)v0;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v23);
        v25 = v17;
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v6, v16, v17);
        v3 = v11;
        *((int128_t *)&v0) = *((int128_t *)&v6);
        a1 + 472.set_one("_", 1, 4, &(char)v0);
    }
    else
    {
        v25 = 0;
    }
    fish::reader::reader_write_title(a2, a3, a1, 1);
    fish::terminal::Outputter::stdoutput();
    if (_ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E)
        core::cell::panic_already_borrowed(&g_14e0e10); /* do not return */
    _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E = 18446744073709551615;
    v9 = 3;
    v10 = 0;
    *((unsigned int *)&v5) = 0;
    v7 = 773;
    g_15a9190.set_text_face(&(unsigned int)v5);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&_ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E);
    fish::reader::term_donate(0);
    v26 = std::time::Instant::now();
    v5 = 0;
    v8 = 8;
    v11 = 0;
    v13.eval(a1, a2, a3, &(unsigned int)v5);
    core::ptr::drop_in_place<fish::io::IoChain>(&(unsigned int)v5);
    fish::proc::job_reap(a1, 1);
    if (v25)
    {
        v19 = std::time::Instant::now();
        v20 = v23;
        v27 = v19.saturating_duration_since(v26, (unsigned int)v23);
        v28 = v27 * 1000;
        v29 = (unsigned int)v23 * 1125899907 >> 50;
        v1 = v29 + v28;
        v2 = v27 / 18446744073709552 + ((v29 + v28 <= v29 ? 1 : 0) & 1);
        (unsigned int)v5.to_wstring(&v1);
        a1 + 472.set_one("C", 12, 32, &(unsigned int)v5);
    }
    fish::reader::term_steal(v13.is_success());
    v31 = _ZN4fish6common12PROGRAM_NAME17h6212e6221159d343E.get();
    if (v31)
    {
        (unsigned int)v5.to_vec(v31[0], v31[1]);
        v3 = v11;
        *((int128_t *)&v0) = *((int128_t *)&v5);
        v32 = a1.libdata_mut();
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v32);
        v32->field_10 = v3;
        v32->field_0 = (int128_t)v0;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v23);
        v33 = _ZN4fish6common12PROGRAM_NAME17h6212e6221159d343E.get();
        if (v33)
        {
            (unsigned int)v5.to_vec(v33[0], v33[1]);
            v3 = v11;
            *((int128_t *)&v0) = *((int128_t *)&v5);
            a1 + 472.set_one("_", 1, 4, &(char)v0);
            (unsigned int)v5.to_vec(4, 0);
            v3 = v11;
            *((int128_t *)&v0) = *((int128_t *)&v5);
            v34 = a1.libdata_mut();
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(&v34->padding_0)[1]);
            *((void* *)((char *)&v34->field_18 + 8)) = v3;
            *((int128_t *)&(&v34->padding_0)[1]) = (int128_t)v0;
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v23);
            if ((char)fish::proc::have_proc_stat())
                fish::proc::proc_update_jiffies(a1);
            v18->field_8 = v14;
            v18->field_0 = v13;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v15);
            return;
        }
        v35 = &g_14e0df8;
    }
    else
    {
        v35 = &g_14e0de0;
    }
    core::option::unwrap_failed(v35); /* do not return */
}
