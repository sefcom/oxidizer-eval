long long fish::reader::Reader::readline(unsigned long a0, struct_1 *a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x104]
    char v1;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xf8]
    void* v3;  // [bp-0xf0], Other Possible Types: unsigned long long
    struct_2 *v4;  // [bp-0xd0]
    int v5;  // [bp-0xc8], Other Possible Types: char
    int v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xb8]
    char v8;  // [bp-0xb0]
    char v9;  // [bp-0x98]
    termios v10;  // [bp-0x6c]
    struct_0 *v12;  // r12
    unsigned int v13;  // eax
    struct_0 *v14;  // r15
    unsigned long long v15;  // rax
    struct_0 *v16;  // rdi
    struct_0 *v17;  // rdi
    unsigned long long v18;  // rdx
    char v19;  // al
    struct_0 *v20;  // rdi
    struct_0 *v21;  // rax
    unsigned long long v22;  // rbx

    v8.new(fish::reader::reader_save_screen_state);
    v12 = a1->field_0;
    core::ptr::drop_in_place<core::option::Option<fish::reader::ReadlineLoopState>>(&v12->field_7e8);
    v12->field_7e8 = 0;
    v12->field_7f0 = 8;
    *((uint128_t *)&(&v12->field_7f0)[1]) = 0;
    *((unsigned long long *)((char *)&v12->field_7f8 + 8)) = 0;
    *((unsigned short *)&v12->field_808) = 1;
    *((char *)&v12->field_808 + 2) = 95;
    v9.scoped_mod(a1->field_8 + 64);
    *((unsigned long *)(v12.rls_mut() + 32)) = a2;
    v12->field_768 = 0;
    *((unsigned long long *)&v12->padding_813[29]) = 0;
    v12->padding_4f9[239].reset();
    v13 = getpgrp();
    tcsetpgrp(a1->field_0->field_4f0, v13);
    v0 = tcgetattr(a1->field_0->field_4f0, &v10);
    fish::reader::set_shell_modes(a1->field_0->field_4f0, "readlinereturn.1acs_tteeNo anodeSet archEdit tagextern \"", 8);
    v14 = a1->field_0;
    if (!*((char *)&v14->field_838 + 6))
    {
        v15 = fish::termsize::termsize_last();
        v15 >> 63.unwrap(&g_14e0180);
        v14->padding_228[368].reset_abandoning_line(v15);
        v14 = a1->field_0;
    }
    *((char *)&v14->field_838 + 6) = 0;
    v16 = a1->field_0;
    if (v16->field_4e8)
    {
        v1.to_vec(v16->field_4e0, v16->field_4e8);
        v7 = v3;
        memcpy(&v5, &v1, 16);
        v1 = 0;
        v2 = 8;
        v3 = 0;
        fish::event::fire_generic(a1->field_8, &v5, &v1);
        v16 = a1->field_0;
    }
    v16.exec_prompt(a1->field_8, 1, 0);
    a1->field_0->padding_840[5] = 1;
    while (!*((char *)(a1->field_0.rls() + 41)) && !(char)fish::reader::check_exit_loop_maybe_warning(a1))
    {
        v8.enable_tty_protocols();
        v1 = 9223372036854775812;
        if ((char)a1.handle_char_event(&v1))
            break;
    }
    if ((char)v8.disable_tty_protocols())
        a1->field_0.save_screen_state();
    v17 = a1->field_0;
    if (v17->field_4f8)
    {
        v17.exec_prompt(a1->field_8, 1, 1);
        v17 = a1->field_0;
    }
    v19 = v17.is_repaint_needed(0, v18);
    v20 = a1->field_0;
    if (v19 || v20->field_471 || v20->field_4f0)
    {
        v20.layout_and_repaint_before_execution(a1->field_8);
        v20 = a1->field_0;
    }
    if (*((char *)(v20.rls() + 41)) == 1)
        a1.finish_highlighting_before_exec();
    if (!(char)a1->field_0->padding_228[368].cursor_is_wrapped_to_own_line())
        fish::wutil::write_to_fd(&v1, "\n%s: %s\nInvalid working directory, it must start and end with /", 1, 1);
    v21 = a1->field_0;
    if (a1->field_0->field_4f0)
    {
        v1 = fish::common::safe_write_loop(1, "\r", 1);
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v1);
        v21 = a1->field_0;
    }
    if (v21->field_220)
    {
        fish::screen::screen_force_clear_to_end();
        a1->field_0.clear_pager();
    }
    if ((char)core::sync::atomic::atomic_load(&_ZN4fish6reader10EXIT_STATE17hba3d57e2282796bcE, 0) != 2)
    {
        if (!v0 && tcsetattr(a1->field_0->field_4f0, 0, &v10) == -1 && fish::proc::is_interactive_session())
            fish::wutil::perror("tcsetattr  nodes:   branches:   leaves:   tokens:   keywords: ", 9);
        fish::terminal::Outputter::stdoutput();
        if (_ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E)
            core::cell::panic_already_borrowed(&g_14e0198); /* do not return */
        _ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E = 18446744073709551615;
        g_15a9190.reset_text_face();
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&_ZN4fish8terminal9Outputter9stdoutput9STDOUTPUT17h9fe0409541b5edb5E);
    }
    v22 = 0x8000000000000000;
    if (*((char *)(a1->field_0.rls() + 41)) == 1)
    {
        v1.to_vec(a1->field_0->field_28, a1->field_0->field_30);
        v22 = v1;
        memcpy(&v5, &v2, 16);
        v5 = v6;
    }
    core::ptr::drop_in_place<core::option::Option<fish::reader::ReadlineLoopState>>(&a1->field_0->field_7e8);
    a1->field_0->field_7e8 = 0x8000000000000000;
    v4->field_0 = v22;
    *((void*)&(&v4->field_0)[1]) = v5;
    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v9);
    return core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(&v8);
}
