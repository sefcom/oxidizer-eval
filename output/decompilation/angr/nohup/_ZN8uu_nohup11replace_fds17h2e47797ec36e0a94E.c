long long uu_nohup::replace_fds()
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    char v3;  // [bp-0x38], Other Possible Types: unsigned long, unsigned int
    unsigned int v4;  // [bp-0x34]
    unsigned long long v5;  // [bp-0x30]
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v8;  // rax
    unsigned int v9;  // ebx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    std::io::stdio::stdin();
    if (std::sys::io::is_terminal::isatty::is_terminal())
    {
        (char)v0.open();
        if ((v0 & 1))
        {
            v8 = *((long long *)&v3);
            v1 = 9223372036854775809;
            *((unsigned int **)&v3) = &g_418d00;
            v4 = 0;
            v5 = 5;
            v6 = v8;
            return (char)v0.new();
        }
        if (dup2(v2, 0))
        {
            v10 = *(__errno_location()) * 0x100000000;
            *((char **)&v3) = "STDINSTDERRSTDOUT: ignoring input and appending output to \n";
            v5 = 5;
            v6 = v10 | 2;
            v0 = 9223372036854775809;
            v11 = (char)v0.new();
            core::ptr::drop_in_place<std::fs::File>(v2);
            return v11;
        }
        core::ptr::drop_in_place<std::fs::File>(v2);
    }
    std::io::stdio::stdout();
    if (std::sys::io::is_terminal::isatty::is_terminal())
    {
        uu_nohup::find_stdout(&(char)v0);
        if (v0)
            return v0;
        v9 = v3;
        if (dup2(v3, 1) != 1)
        {
            v12 = *(__errno_location()) * 0x100000000;
            v3 = "STDOUT: ignoring input and appending output to \n";
            v5 = 6;
            v6 = v12 | 2;
            v0 = 9223372036854775809;
            v11 = (char)v0.new();
            core::ptr::drop_in_place<std::fs::File>(v9);
            return v11;
        }
        core::ptr::drop_in_place<std::fs::File>(v3);
    }
    if (!std::sys::io::is_terminal::isatty::is_terminal())
    {
        return 0;
    }
    else if (dup2(1, 2) == 2)
    {
        return 0;
    }
    else
    {
        v13 = *(__errno_location()) * 0x100000000;
        v3 = "STDERRSTDOUT: ignoring input and appending output to \n";
        v5 = 6;
        v6 = v13 | 2;
        v1 = 9223372036854775809;
        return (char)v0.new();
    }
}
