long long uu_stty::print_settings(void* a0, char a1[42])
{
    unsigned long long v1;  // rax
    unsigned int v2;  // ebp
    unsigned long long v3;  // rax

    if (a1[41])
    {
        uu_stty::print_in_save_format(a0);
    }
    else
    {
        v1 = uu_stty::print_terminal_size(a0, a1);
        if ((unsigned int)v1 != 134)
            return v1;
        v2 = a1[40];
        v3 = uu_stty::print_control_chars(a0, v2);
        if ((unsigned int)v3 != 134)
            return v3;
        uu_stty::print_flags(a0, v2);
        uu_stty::print_flags(a0, v2);
        uu_stty::print_flags(a0, v2);
        uu_stty::print_flags(a0, v2);
    }
    return 134;
}
