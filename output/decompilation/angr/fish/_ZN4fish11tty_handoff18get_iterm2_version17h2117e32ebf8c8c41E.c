long long fish::tty_handoff::get_iterm2_version(unsigned int a0[4], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x30]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    v5 = 32;
    v3 = a1;
    v4 = a2;
    v7 = v3.next();
    if (!v7)
        core::option::unwrap_failed(&g_14e4388); /* do not return */
    v8 = v3.next();
    v9 = v8;
    if (v9)
    {
        v9 = v7.eq_by(v7 + v10 * 4, "iTerm2unexpected fdsrc/universal_notifier/inotify.rssrc/util.rs", "unexpected fdsrc/universal_notifier/inotify.rssrc/util.rs");
        if ((char)v9)
        {
            v2 = 46;
            v0 = v8;
            v1 = v10;
            v9 = v0.next();
            if (v9)
            {
                v12 = fish::wutil::wcstoi::wcstoi(v9, v10);
                v9 = v12;
                if (!((char)v9 & 1))
                {
                    v13 = v0.next();
                    v9 = v13;
                    if (v9)
                    {
                        v14 = fish::wutil::wcstoi::wcstoi(v13, v10);
                        v9 = v14;
                        if (!((char)v9 & 1))
                        {
                            v15 = v0.next();
                            v9 = v15;
                            if (v9)
                            {
                                v16 = fish::wutil::wcstoi::wcstoi(v15, v10);
                                v9 = v16;
                                if (!((char)v9 & 1))
                                {
                                    a0[1] = v12 >> 32;
                                    a0[2] = v14 >> 32;
                                    a0[3] = v16 >> 32;
                                    a0[0] = 1;
                                    return v16 >> 32;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    a0[0] = 0;
    return v9;
}
