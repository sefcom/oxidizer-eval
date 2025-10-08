int fish::reader::redirect_tty_after_sighup()
{
    void* v0;  // [bp-0x90], Other Possible Types: char
    unsigned int v1;  // [bp-0x8c]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned int v4;  // [bp-0x78]
    termios v5;  // [bp-0x70]
    unsigned long long v11;  // rax
    unsigned int v12;  // edx
    unsigned int v13;  // ebp
    unsigned int v14;  // ebp

    if (!fish::reader::reader_received_sighup())
    {
        *((unsigned long long **)&v5.c_iflag) = &g_14df9a8;
        *((unsigned long long *)&v5.c_oflag) = 1;
        *((unsigned long long *)&v5.c_cflag) = 8;
        *((uint128_t *)&v5.c_lflag) = 0;
        core::panicking::panic_fmt(&v5, &g_14df9b8); /* do not return */
    }
    v11 = _ZN4fish6reader25redirect_tty_after_sighup14TTY_REDIRECTED17h1b463e439c753854E.swap(1);
    if ((char)v11)
        return v11;
    *((unsigned long long *)&v5.c_iflag) = 0x1b600000000;
    v5.c_oflag = 0;
    *((unsigned short *)&v5.padding_c[0]) = 0;
    *((unsigned short *)&v5.c_oflag) = 257;
    (char)v0.open(&v5);
    if (*((int *)&v0) == 1)
        return core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v0);
    v0 = 0;
    v2 = 3;
    v3 = 0x100000000;
    v4 = 2;
    if (!((char)(char)v0.next() & 1))
        return core::ptr::drop_in_place<std::fs::File>(v1);
    do
    {
        v14 = v13;
        if (tcgetattr(v14, &v5) && ((int)errno::errno() == 25 || (int)errno::errno() == 5))
            dup2(v1, v14);
        v13 = v12;
    } while (((char)(char)v0.next() & 1));
    return core::ptr::drop_in_place<std::fs::File>(v1);
}
