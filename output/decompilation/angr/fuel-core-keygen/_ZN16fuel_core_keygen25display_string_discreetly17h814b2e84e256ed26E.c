long long fuel_core_keygen::display_string_discreetly(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    char *v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    void* v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    v7 = a0;
    v8 = a1;
    v9 = "### Do not share or lose this private key! Press any key to complete. ###The following required argument was not provided: secretprettyThe following required argument was not provided: prettyThe following required argument was not provided: key_typeParseSe";
    v10 = 73;
    if (!atty::is(0))
    {
        v0 = &v7;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &g_544370;
        v3 = 2;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        std::io::stdio::_print(&v2);
        return 0;
    }
    else if (!(std::io::stdio::stdout().into_alternate_screen() & 1))
    {
        v0 = &v7;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &g_544370;
        v3 = 2;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        v12 = vvar_58{reg 32}.write_fmt(&v2);
        if (v12)
        {
            v13 = v12.from();
        }
        else
        {
            v14 = vvar_58{reg 32}.flush();
            if (!v14)
            {
                v0 = &v9;
                v1 = <&T as core::fmt::Display>::fmt;
                v2 = &g_544370;
                v3 = 2;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_print(&v2);
                fuel_core_keygen::wait_for_keypress();
                core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&vvar_58{reg 32});
                return 0;
            }
            v13 = v14.from();
        }
        core::ptr::drop_in_place<termion::screen::AlternateScreen<std::io::stdio::Stdout>>(&vvar_58{reg 32});
        return v13;
    }
    else
    {
        return v15.from();
    }
}
