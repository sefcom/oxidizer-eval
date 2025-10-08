long long uu_stty::print_terminal_size(unsigned long long a0, struct_0 *a1)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long
    void* v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    char *v4;  // [bp-0x68], Other Possible Types: unsigned long long
    int v5;  // [bp-0x60], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x58]
    char *v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    char *v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned int v12;  // eax
    unsigned int v13;  // edi
    unsigned int v14;  // edx
    int v15;  // [bp-0x7e]

    v12 = nix::sys::termios::cfgetospeed(a0);
    v0 = &g_4e2ad0;
    if (v12)
    {
        v0 = &g_4e2ae8;
        if (v12 != 1)
        {
            v0 = &g_4e2b00;
            if (v12 != 2)
            {
                v0 = &g_4e2b18;
                if (v12 != 3)
                {
                    v0 = &g_4e2b30;
                    if (v12 != 4)
                    {
                        v0 = &g_4e2b48;
                        if (v12 != 5)
                        {
                            v0 = &g_4e2b60;
                            if (v12 != 6)
                            {
                                v0 = &g_4e2b78;
                                if (v12 != 7)
                                {
                                    v0 = &g_4e2b90;
                                    if (v12 != 8)
                                    {
                                        v0 = &g_4e2ba8;
                                        if (v12 != 9)
                                        {
                                            v0 = &g_4e2bc0;
                                            if (v12 != 10)
                                            {
                                                v0 = &g_4e2bd8;
                                                if (v12 != 11)
                                                {
                                                    v0 = &g_4e2bf0;
                                                    if (v12 != 13)
                                                    {
                                                        v0 = &g_4e2c08;
                                                        if (v12 != 14)
                                                        {
                                                            v0 = &g_4e2c20;
                                                            if (v12 != 15)
                                                            {
                                                                v0 = &g_4e2c38;
                                                                if (v12 != 4097)
                                                                {
                                                                    v0 = &g_4e2c50;
                                                                    if (v12 != 4098)
                                                                    {
                                                                        v0 = &g_4e2c68;
                                                                        if (v12 != 4099)
                                                                        {
                                                                            v0 = &g_4e2c80;
                                                                            if (v12 != 4101)
                                                                            {
                                                                                v0 = &g_4e2c98;
                                                                                if (v12 != 4102)
                                                                                {
                                                                                    v0 = &g_4e2cb0;
                                                                                    if (v12 != 4103)
                                                                                    {
                                                                                        v0 = &g_4e2cc8;
                                                                                        if (v12 != 4104)
                                                                                        {
                                                                                            v0 = &g_4e2ce0;
                                                                                            if (v12 != 4105)
                                                                                            {
                                                                                                v0 = &g_4e2cf8;
                                                                                                if (v12 != 4106)
                                                                                                {
                                                                                                    v0 = &g_4e2d10;
                                                                                                    if (v12 != 4107)
                                                                                                    {
                                                                                                        v0 = &g_4e2d28;
                                                                                                        if (v12 != 4108)
                                                                                                        {
                                                                                                            v0 = &g_4e2d40;
                                                                                                            if (v12 != 4109)
                                                                                                            {
                                                                                                                v0 = &g_4e2d58;
                                                                                                                if (v12 != 4110)
                                                                                                                {
                                                                                                                    v0 = &g_4e2d70;
                                                                                                                    if (v12 != 4111)
                                                                                                                        goto LABEL_458b05;
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v7 = &v0;
    v8 = <&T as core::fmt::Display>::fmt;
    v2 = &g_4e2a50;
    v3 = 2;
    v6 = 0;
    v4 = &v7;
    v5 = 1;
    std::io::stdio::_print(&v2);
LABEL_458b05:
    if (a1->field_28)
    {
        v1 = 0;
        v13 = 1;
        if (!a1->field_18)
            v13 = a1->field_1c;
        if (((char)uu_stty::tiocgwinsz(v13, &(char)v1) & 1))
            return v14;
        v7 = &(char)v1;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v9 = &v15;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v2 = &g_4e2a70;
        v3 = 3;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        std::io::stdio::_print(&v2);
    }
    v2.clone(a0 + 32);
    v0 = v5;
    v7 = &v0;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v2 = &g_4e2aa0;
    v3 = 2;
    v6 = 0;
    v4 = &v7;
    v5 = 1;
    std::io::stdio::_print(&v2);
    v2 = &g_4e2ac0;
    v3 = 1;
    v4 = 8;
    *((uint128_t *)&v5) = 0;
    std::io::stdio::_print(&v2);
    return 134;
}
