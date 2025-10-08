long long fish::reader::safe_restore_term_mode()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // eax
    unsigned long long v3;  // rax
    termios *v4;  // rax

    v1 = fish::proc::is_interactive_session();
    if (!(char)v1)
        return v1;
    v2 = fish::nix::getpgrp();
    v3 = tcgetpgrp(0);
    if (v2 != (unsigned int)v3)
        return v3;
    v4 = fish::reader::safe_get_terminal_mode_on_startup();
    if (!v4)
        return v4;
    return tcsetattr(0, 0, v4);
}
