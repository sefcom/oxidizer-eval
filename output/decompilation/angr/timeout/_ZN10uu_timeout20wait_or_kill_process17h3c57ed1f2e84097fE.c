void uu_timeout::wait_or_kill_process(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5, char a6, char a7, char a8)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x5c]
    char v2;  // [bp-0x58], Other Possible Types: unsigned long long
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned int v5;  // ebp
    unsigned long v6;  // rax
    unsigned int v7;  // ebp
    unsigned int v9;  // rdx

    v0.wait_or_timeout(a1, a4, a5);
    v5 = 124;
    if (!v0)
    {
        if (v1 == 1)
        {
            v5 = 125;
            if (a6)
            {
                v6 = *((int *)&v2);
                v7 = v6;
                v5 = v7 & 127;
                if (((char)v7 & 127))
                {
                    if ((char)v5 + 1 <= 1)
                        core::option::unwrap_failed(&g_512878); /* do not return */
                }
                else
                {
                    v5 = v6 >> 8;
                }
            }
        }
        else if (((char)uucore::features::signals::signal_by_name_or_value("KILLTRAP -- ", 4) & 1))
        {
            uu_timeout::report_if_verbose(v9, a2, a3, a8);
            uu_timeout::send_signal(a1, v9, a7);
            v3.wait(a1);
            if (*((int *)&v3) == 1)
            {
                a0->field_8 = *((long long *)&v4);
                a0->field_0 = 1;
                core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(v0, v2);
                return;
            }
            v5 = v9 + 128;
        }
        else
        {
            core::option::unwrap_failed(&g_512860); /* do not return */
        }
    }
    a0->field_4 = v5;
    a0->field_0 = 0;
    core::ptr::drop_in_place<core::result::Result<core::option::Option<std::process::ExitStatus>,std::io::error::Error>>(v0, v2);
    return;
}
