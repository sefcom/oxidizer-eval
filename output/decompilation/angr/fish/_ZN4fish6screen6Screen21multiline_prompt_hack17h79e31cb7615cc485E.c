long long fish::screen::Screen::multiline_prompt_hack(unsigned long long a0[18])
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    v1 = &a0[17];
    if ((char)(((0 ^ a0[17]) & (0 ^ -(a0[17]))) >> 63))
        v1 = 0;
    v2 = v1.map_or() - 1;
    v3 = v2 + a0[13];
    if ((char)__CFADD__(v2, a0[13]))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e1918); /* do not return */
    a0[13] = v3;
    return v3;
}
