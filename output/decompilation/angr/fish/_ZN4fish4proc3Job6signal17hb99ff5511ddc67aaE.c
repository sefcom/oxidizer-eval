long long fish::proc::Job::signal(unsigned long long a0[5], unsigned int a1)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    unsigned long v3;  // [bp-0x98], Other Possible Types: unsigned short
    unsigned long v4;  // [bp-0x90], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    int v7;  // [bp-0x70]
    char v8;  // [bp-0x58]
    int v9;  // [bp-0x50]
    char v10;  // [bp-0x40]
    unsigned int v12;  // eax
    unsigned long long v13;  // rax
    char *v14;  // rax
    unsigned long v15;  // rax
    unsigned int *v16;  // rax

    v12 = a0.group().get_pgid();
    if (v12)
    {
        v13 = killpg(v12, a1);
        if ((unsigned int)v13 != -1)
            return v13 & 0xffffffffffffff00 | 1;
        v14 = strsignal(a1);
        if (v14)
            fish::common::charptr2wcstring(&v8, v14);
        else
            v8.to_vec("(", 5);
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3 = 8197;
        v4 = v12;
        v6 = 1;
        v7 = v9;
        fish_printf::printf_impl::sprintf_locale(&v10, &v0, "killpg(%d, %s)", 14, &v3, 2);
        v10.unwrap(&g_14df428);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v3);
        v5 = v2;
        memcpy(&v3, &v0, 16);
        fish::wutil::wperror(v4, v2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
        return 0;
    }
    else
    {
        v3 = a0[3];
        v4 = a0[4] * 224 + a0[3];
        v15 = v3.find();
        if (v15)
        {
            do
            {
                if (!v15.is_completed())
                {
                    v16 = v15 + 144.get();
                    if (!v16)
                    {
                        core::option::unwrap_failed(&g_14df440); /* do not return */
                    }
                    else if (kill(*(v16), a1) == -1)
                    {
                        return 0;
                    }
                }
                v15 = v3.find();
            } while (v15);
        }
        return v15 & 0xffffffffffffff00 | 1;
    }
}
