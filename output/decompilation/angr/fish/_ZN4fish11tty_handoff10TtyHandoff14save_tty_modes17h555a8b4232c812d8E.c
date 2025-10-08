long long fish::tty_handoff::TtyHandoff::save_tty_modes(unsigned long long *a0)
{
    unsigned int v0;  // [bp-0xc4]
    int v1;  // [bp-0xc0]
    int v2;  // [bp-0xb0]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x94]
    termios v5;  // [bp-0x84]
    char v7;  // [bp-0x64]
    char v8;  // [bp-0x58]
    unsigned long long v11;  // rax
    unsigned long v12;  // rax

    if (!*(a0))
    {
        return v12;
    }
    else if (tcgetattr(0, &v5))
    {
        v11 = errno::errno();
        if ((unsigned int)v11 == 25)
            return v11;
        return fish::wutil::perror("tcgetattrJob should not have fish's pgroup", 9);
    }
    else
    {
        memcpy(&v4, &v8, 16);
        memcpy(&v3, &v7, 16);
        *((struct termios *)&v2) = *((struct termios *)&v5.c_cflag);
        *((struct termios *)&v1) = v5;
        v0 = 1;
        return (unsigned long long)*((struct termios *)&v5.padding_3c).replace(*(a0) + 40, &v0);
    }
}
