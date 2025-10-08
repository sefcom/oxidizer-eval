long long fish::env_dispatch::init_terminal(unsigned long long a0)
{
    unsigned long long v0[5];  // [bp-0x50], Other Possible Types: char
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // r15
    void* v5;  // rax
    unsigned long long v6[5];  // rcx
    void* v7;  // rax
    unsigned long long v8;  // r15

    v4 = 0;
    v5 = v0.getf(a0, "T", 4, 0);
    v6 = v0;
    if (v6 && *((long long *)&v1))
    {
        v4 = v6[3];
        v5 = v6[4];
    }
    if (!v4)
    {
        v7 = 0;
        if (!v4)
            goto LABEL_139cb58;
LABEL_139cb57:
    }
    else
    {
        v7 = v5;
        if (v4)
            goto LABEL_139cb57;
LABEL_139cb58:
        v4 = 4;
    }
    v8 = v4 + v7 * 4;
    _ZN4fish6screen7IS_DUMB17h6e20799dfa2aab0eE.store(v4.eq_by(v8, "dumbtexte", "texte"));
    if (!v4.eq_by(v8, "ansi-mlinux-mxterm-mono", "linux-mxterm-mono") && !v4.eq_by(v8, "linux-mxterm-mono", "xterm-mono"))
        v4.eq_by(v8, "xterm-mono", &g_a169fe);
    _ZN4fish6screen14ONLY_GRAYSCALE17hab5a0a294e34d3f6E.store(1);
    v2.getf(a0, "M", 6, 0);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v2);
    if (*((long long *)&v2))
        fish::screen::screen_set_midnight_commander_hack();
    fish::env_dispatch::update_fish_color_support(a0);
    return core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
}
