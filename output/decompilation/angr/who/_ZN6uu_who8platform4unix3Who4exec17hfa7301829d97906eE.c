long long uu_who::platform::unix::Who::exec(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x3b0]
    char v1;  // [bp-0x3a6]
    char v2;  // [bp-0x3a5]
    char v3;  // [bp-0x3a4]
    char v4;  // [bp-0x3a3]
    char v5;  // [bp-0x3a2]
    char v6;  // [bp-0x3a1]
    char *v7;  // [bp-0x3a0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x3a0]
    unsigned long long v9;  // [bp-0x398]
    void* v10;  // [bp-0x390]
    void* v11;  // [bp-0x388]
    unsigned long long v12;  // [bp-0x380]
    unsigned long long v13;  // [bp-0x378]
    char v14;  // [bp-0x370]
    char v15;  // [bp-0x368], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x360]
    unsigned long long v17;  // [bp-0x358]
    unsigned long long v18;  // [bp-0x350]
    char v19;  // [bp-0x348]
    char v20;  // [bp-0x340], Other Possible Types: unsigned long
    unsigned int v21;  // [bp-0x33c]
    unsigned long long v22;  // [bp-0x338]
    char *v23;  // [bp-0x330], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x328]
    void* v25;  // [bp-0x320]
    char *v26;  // [bp-0x1b8], Other Possible Types: char, unsigned long long
    unsigned long long v27;  // [bp-0x1b0]
    unsigned long long v28;  // [bp-0x1a8]
    unsigned long long *v30;  // rcx
    unsigned long long *v31;  // rdx
    unsigned long long *v32;  // rsi
    unsigned long long *v33;  // rdx
    unsigned int v35;  // edx
    char v36;  // dl
    char v37;  // al
    unsigned long long v38;  // r12
    unsigned short v39;  // ax

    v30 = a0->field_8 + 8;
    v31 = &_ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E;
    if (a0->field_10 == 1)
    {
        v32 = a0->field_8 + 16;
        if (a0->field_10 == 1)
            goto LABEL_4676d6;
LABEL_4676d5:
        v33 = v31;
    }
    else
    {
        v32 = "\r";
        if (a0->field_10 != 1)
            goto LABEL_4676d5;
LABEL_4676d6:
        v33 = v30;
    }
    if (a0->field_19)
    {
        v15.collect(*(v33).iter_all_records_from(*(v32)), v35 & 1);
        alloc::str::join_generic_copy(&v20, v16, v17);
        v28 = v23;
        memcpy(&v26, &v20, 16);
        v7 = &v26;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v20 = &g_4fef18;
        v22 = 2;
        v25 = 0;
        v23 = &v7;
        v24 = 1;
        std::io::stdio::_print(&v20);
        core::ptr::drop_in_place<alloc::string::String>(&v26);
        v7 = v17;
        v26 = &v7;
        v27 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v20 = &g_4fef38;
        v22 = 2;
        v25 = 0;
        v23 = &v26;
        v24 = 1;
        std::io::stdio::_print(&v20);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v15);
    }
    else
    {
        v18 = *(v33).iter_all_records_from(*(v32));
        v19 = v36 & 1;
        if (a0->field_1c)
        {
            v0 = 4;
            a0.print_line("NAMEAnsi -- ", 4, 32, "LINE\"`$\\EADV", 4, &g_419284, 4, &g_419288, 4, &g_41ab33, 3, &g_41ab36, 7, &g_4191b0);
        }
        if (a0->field_26)
        {
            uu_who::platform::unix::current_tty(&(char)v8);
            v12 = v9;
            v11 = v10;
        }
        else
        {
            v8 = 0;
            v9 = 1;
            v10 = 0;
            v12 = 1;
            v11 = 0;
        }
        v13 = v18;
        v14 = v36 & 1;
        v6 = a0->field_24;
        v5 = a0->field_1f;
        v1 = a0->field_20;
        v4 = a0->field_23;
        v3 = a0->field_22;
        v2 = a0->field_21;
        while (true)
        {
            (char)v20.next();
            if ((int)v20 == 1)
            {
                memcpy(&v26, &v21, 384);
                if (a0->field_26)
                {
                    v15.tty_device(&v26);
                    v37 = v12.eq(v11, v16, v17);
                    core::ptr::drop_in_place<alloc::string::String>(&v15);
                    if (!v37)
                        continue;
                }
                if ((a0->field_25 & 1) && v26.is_user_process())
                {
                    v38 = a0.print_user(&v26);
                    if (v38)
                    {
                        core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v13);
                        core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                        return v38;
                    }
                }
                else
                {
                    v39 = v26;
                    if ((v39 == 1 & v6))
                    {
                        a0.print_runlevel(&v26);
                    }
                    else if ((v39 == 2 & v5))
                    {
                        a0.print_boottime(&v26);
                    }
                    else if ((v39 == 3 & v4))
                    {
                        a0.print_clockchange(&v26);
                    }
                    else if ((v39 == 5 & v3))
                    {
                        a0.print_initspawn(&v26);
                    }
                    else if ((v39 == 6 & v2))
                    {
                        a0.print_login(&v26);
                    }
                    else if ((v39 == 8 & v1))
                    {
                        a0.print_deadprocs(&v26);
                    }
                }
            }
            else
            {
                core::ptr::drop_in_place<uucore::features::utmpx::UtmpxIter>(&v13);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                break;
            }
        }
    }
    return 0;
}
