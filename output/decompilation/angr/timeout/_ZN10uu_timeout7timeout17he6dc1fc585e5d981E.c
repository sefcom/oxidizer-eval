long long uu_timeout::timeout(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned int a6, char a7, char a8, char a9)
{
    unsigned long long v0;  // [bp-0x1a8]
    char v1;  // [bp-0x198], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x194]
    int v3;  // [bp-0x190], Other Possible Types: char
    unsigned int v4;  // [bp-0x184]
    char v5;  // [bp-0x180]
    unsigned long long v6;  // [bp-0x170]
    char *v7;  // [bp-0x168], Other Possible Types: char
    unsigned int v8;  // [bp-0x164]
    unsigned long long v9;  // [bp-0x160]
    unsigned long long v10;  // [bp-0x150]
    char v11;  // [bp-0x140], Other Possible Types: unsigned int
    unsigned int v12;  // [bp-0x13c]
    unsigned long long v13;  // [bp-0x138]
    int v14;  // [bp-0x130], Other Possible Types: char
    unsigned long long v15;  // [bp-0x120]
    int v16;  // [bp-0x118], Other Possible Types: char, unsigned long
    unsigned int v17;  // [bp-0x114]
    unsigned long long v18;  // [bp-0x110]
    char *v19;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0x100], Other Possible Types: unsigned long long
    void* v21;  // [bp-0xf8]
    unsigned long long v22[3];  // 4096
    unsigned long v23;  // 4096
    unsigned int v24;  // eax
    unsigned long long v25;  // r14
    unsigned long long v26;  // rax
    unsigned long v27;  // rax
    unsigned long v29;  // r15
    unsigned long long v30;  // r14
    unsigned long v31;  // rax
    char v32;  // dil

    v22 = a0;
    v23 = a1;
    if (!a7)
        setpgid(0, 0);
    v24 = uucore::features::signals::enable_pipe_errors(v22, v23, a2, a3);
    if (v24 != 134)
    {
        return v24.from();
    }
    else if (a1)
    {
        v16.new(a0);
        v16.args(a0 + 1, a1 - 1);
        v16.stdin(a1, a2);
        v16.stdout(a1, a2);
        v16.stderr(a1, a2);
        (char)v7.spawn(&v16);
        if (*((int *)&v7) == 1)
        {
            v25 = uu_timeout::timeout::{{closure}}(v9);
            core::ptr::drop_in_place<std::process::Command>(&v16);
            return v25;
        }
        v4 = v8;
        memcpy(&v5, &v9, 16);
        v6 = v10;
        core::ptr::drop_in_place<std::process::Command>(&v16);
        uu_timeout::unblock_sigchld(a0, a1, a2, a3);
        v1.wait_or_timeout(&v4, a2, a3);
        if (v1 == 1)
        {
            uu_timeout::send_signal(&v4, a4, a7);
            v26 = (unsigned long long)1.from();
        }
        else if (v2 == 1)
        {
            v27 = *((int *)&v3);
            v26 = (!((char)v27 & 127) ? v27 >> 8 & 4294967295 : (unsigned int)uu_timeout::timeout::{{closure}}(v27 & 4294967295)).from();
        }
        else
        {
            uu_timeout::report_if_verbose(a4, a0[1], a0[2], a9);
            v29 = a7;
            uu_timeout::send_signal(&v4, a4, v29);
            if (a6 == 0x3b9aca00)
            {
                v16.wait(&v4);
                if (*((int *)&v16) == 1)
                {
                    v30 = v18.from();
                    core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(v1, *((long long *)&v3));
                    core::ptr::drop_in_place<std::process::Child>(&v4);
                    return v30;
                }
                if (a8)
                {
                    v31 = v17;
                    if (((char)v31 & 127))
                    {
LABEL_46df2a:
                        v26 = (unsigned long long)v32.from();
                    }
                    else
                    {
                        v26 = v31 >> 8 & 4294967295.from();
                    }
                }
                else
                {
                    goto LABEL_46df2a;
                }
            }
            else
            {
                uu_timeout::wait_or_kill_process(&v11, &v4, a0[1], a0[2], a5, a6, a8, v29, a9);
                if (v11 == 1)
                {
                    v0 = v13;
                    v7 = &v0;
                    v9 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v16 = &g_41ace0;
                    v18 = 1;
                    v21 = 0;
                    v19 = &(char)v7;
                    v20 = 1;
                    v14.map_or_else(&v16);
                    v20 = 125;
                    v16 = v14;
                    v19 = v15;
                    v16.new();
                    core::ptr::drop_in_place<std::io::error::Error>(v0);
                    core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(v1, (long long)v3);
                    core::ptr::drop_in_place<std::process::Child>(&v4);
                    return v30;
                }
                v26 = v12.from();
            }
        }
        core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(v1, (long long)v3);
        core::ptr::drop_in_place<std::process::Child>(&v4);
        return v30;
    }
    else
    {
        core::panicking::panic_bounds_check(0, 0, &g_512890); /* do not return */
    }
}
