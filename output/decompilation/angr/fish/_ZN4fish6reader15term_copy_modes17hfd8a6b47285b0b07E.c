long long fish::reader::term_copy_modes()
{
    termios v0;  // [bp-0x6c]
    unsigned long v3;  // [bp-0x3c]
    void* v8;  // rbx
    unsigned int v9;  // eax
    struct_1 *v10;  // rax
    char v11;  // dl
    struct_0 *v12;  // rax

    tcgetattr(0, &v0);
    *((struct termios *)&v0.padding_3c).lock(_ZN4fish6reader27TTY_MODES_FOR_EXTERNAL_CMDS17h8801e9b0178ba92dE.get_or_try_init(&_ZN4fish6reader27TTY_MODES_FOR_EXTERNAL_CMDS17h8801e9b0178ba92dE));
    v8 = *((struct termios *)&v0.padding_3c).unwrap(&g_14e0920);
    *((struct termios *)&v8[8]) = v0;
    *((struct termios *)&v8[64]) = *((struct termios *)&v0.__ispeed);
    *((unsigned long *)&v8[56]) = v3;
    *((struct termios *)&v8[40]) = *((struct termios *)&v0.c_cc);
    *((struct termios *)&v8[24]) = *((struct termios *)&v0.c_cflag);
    *((char *)&v8[12]) = (char)v8[12] | 5;
    *((unsigned int *)&v8[20]) = (int)v8[20] | 32778;
    v9 = (int)v8[8];
    *((unsigned int *)&v8[8]) = v9 & 4294966975 | 0x100;
    if (!((unsigned short)v9 & 0x400))
    {
        v10 = fish::common::shell_modes();
        v10->field_9 = v10->field_9 & 251;
    }
    else
    {
        v10 = fish::common::shell_modes();
        v10->field_9 = v10->field_9 | 4;
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v10, v11 & 1);
    if (!((char)v8[9] & 16))
    {
        v12 = fish::common::shell_modes();
        v12->field_9 = v12->field_9 & 239;
    }
    else
    {
        v12 = fish::common::shell_modes();
        v12->field_9 = v12->field_9 | 16;
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v12, v11 & 1);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v8, v11 & 1);
}
