void fish::builtins::fish_key_reader::process_input(unsigned long a0, unsigned long long a1, unsigned int a2, unsigned int a3, unsigned long long a4)
{
    unsigned int v0;  // [bp-0x1a8]
    unsigned int v1;  // [bp-0x1a4]
    unsigned long long v2;  // [bp-0x1a0]
    void* v3;  // [bp-0x168]
    unsigned long long v4;  // [bp-0x160]
    void* v5;  // [bp-0x158]
    char v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x70]
    char v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x30]
    unsigned long long v11;  // rbx
    unsigned long v12;  // rax

    v9 = v11;
    v1 = a3;
    v0 = a2;
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v2 = a1;
    a1.appendln("Press a key:\n", 13);
    v8.new(core::ops::function::FnOnce::call_once);
    v8.enable_tty_protocols();
    v7 = 9223372036854775812;
    if ((char)fish::reader::check_exit_loop_maybe_warning(0))
    {
        core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(&v8);
        core::ptr::drop_in_place<alloc::vec::Vec<fish::input_common::KeyEvent>>(0, 4);
        core::ptr::drop_in_place<fish::input_common::InputEventQueue>(a4);
        return;
    }
    v6.readch(a4);
    v12 = 9223372036854775811 + *((long long *)&v6) - 2;
    if (9223372036854775812 <= *((long long *)&v6))
        v12 = 0;
    goto (long long)(g_9f2198[v12] + (char *)&g_9f2198[0]);
}
