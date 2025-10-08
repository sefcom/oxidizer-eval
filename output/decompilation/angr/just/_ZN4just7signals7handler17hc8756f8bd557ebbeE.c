long long just::signals::handler(unsigned int a0)
{
    char v0;  // [bp-0x21]
    char v1;  // [bp-0x20], Other Possible Types: unsigned int
    char v2;  // [bp-0x1c]
    unsigned long v4;  // rbp
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rsi

    v4 = a0;
    v5 = nix::errno::<impl nix::errno::consts::Errno>::last();
    if ((unsigned int)v4 < 0x100)
    {
        v6 = core::sync::atomic::atomic_load();
        if (v6 == -1)
            core::option::expect_failed("fd != -1Asterisk", 8, &g_830fb0); /* do not return */
        v0 = v4;
        nix::unistd::write(&v1, v6, &v0, 1);
        if (v1 != 1)
            return v5.set();
        v7 = *((int *)&v2).desc();
    }
    else
    {
        v8 = 17;
        v7 = "unexpected signalsignal iterator cannot be initialized twicesrc/source.rs";
    }
    just::signals::die(v7, v8); /* do not return */
}
