long long uu_env::make_options(unsigned long long a0[3], unsigned long long a1)
{
    char v0;  // [bp-0x261]
    unsigned long long v1[3];  // [bp-0x260]
    char v2;  // [bp-0x258]
    unsigned long long v3;  // [bp-0x258]
    unsigned long long v4;  // [bp-0x250]
    void* v5;  // [bp-0x248]
    char v6;  // [bp-0x240], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x238]
    void* v8;  // [bp-0x230]
    int v9;  // [bp-0x228], Other Possible Types: char
    unsigned long long v10;  // [bp-0x220]
    int v11;  // [bp-0x218]
    int v12;  // [bp-0x208]
    int v13;  // [bp-0x1f8]
    int v14;  // [bp-0x1d8], Other Possible Types: char
    int v15;  // [bp-0x1c8]
    int v16;  // [bp-0x1b8]
    int v17;  // [bp-0x1a8]
    char v18;  // [bp-0x198]
    void* v19;  // [bp-0x188]
    char v20;  // [bp-0x180]
    void* v21;  // [bp-0x170]
    void* v22;  // [bp-0x168]
    unsigned long long v23;  // [bp-0x160]
    uint128_t v24;  // [bp-0x158]
    unsigned long long v25;  // [bp-0x148]
    void* v26;  // [bp-0x140]
    void* v27;  // [bp-0x138]
    unsigned long long v28;  // [bp-0x130]
    void* v29;  // [bp-0x128]
    void* v30;  // [bp-0x120]
    unsigned long v31;  // [bp-0x118]
    unsigned long v32;  // [bp-0x110]
    struct_1 *v33;  // [bp-0x108]
    char v34;  // [bp-0x100]
    char v35;  // [bp-0xff]
    int v36;  // [bp-0xf0], Other Possible Types: char
    int v37;  // [bp-0xe0]
    int v38;  // [bp-0xd0]
    int v39;  // [bp-0xc0]
    char v40;  // [bp-0xb0]
    char v41;  // [bp-0x70]
    void* v43;  // r12
    char v44;  // r13b
    unsigned long long v45[3];  // rax
    unsigned long v46;  // rbp
    unsigned long long v47;  // rdx
    struct_1 *v48;  // rax
    unsigned long v49;  // rcx
    unsigned long long v50[3];  // rbx
    struct_0 *v51;  // rax
    unsigned long long v52;  // rax
    char v53;  // r12b
    unsigned long long v54[3];  // rax
    unsigned long long v55[3];  // rax
    unsigned long long v56;  // rax

    v0 = a1.get_flag("ignore-environmentstart with an empty environmentchdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior ", 18);
    v43 = 0;
    v44 = ((char)a1.get_flag("nullXCPUBOLDBlue", 4) ? 0 : 10);
    v18.try_get_one(a1, "chdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from");
    v45 = "chdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from".unwrap(&v18);
    if (v45)
    {
        v43 = v45[1];
        v46 = v45[2];
    }
    v18.try_get_many(a1, "fileTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v40.unwrap("fileTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4, &v18);
    if (*((long long *)&v40))
    {
        v2.collect(&v40);
    }
    else
    {
        v3 = 0.with_capacity_in(8, 16, &g_510c08);
        v4 = v47;
        v5 = 0;
    }
    v18.try_get_many(a1, "unsetremove variable from the environmentdebugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the comma", 5);
    v41.unwrap("unsetremove variable from the environmentdebugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the comma", 5, &v18);
    if (*((long long *)&v41))
    {
        v6.collect(&v41);
    }
    else
    {
        v6 = 0.with_capacity_in(8, 16, &g_510c20);
        v7 = v47;
        v8 = 0;
    }
    v18.try_get_one(a1, "argv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or");
    v48 = "argv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or".unwrap(&v18);
    if (v48)
    {
        v49 = v48->field_8;
        v48 = v48->field_10;
    }
    else
    {
        v49 = 0;
    }
    v19 = v5;
    memcpy(&v18, &v2, 16);
    memcpy(&v20, &v6, 16);
    v21 = v8;
    v34 = v0;
    v35 = v44;
    v30 = v43;
    v31 = v46;
    v22 = 0;
    v23 = 8;
    v24 = 0;
    v25 = 8;
    v26 = 0;
    v32 = v49;
    v33 = v48;
    v27 = 0;
    v28 = 8;
    v29 = 0;
    v9.try_get_many(a1, "ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or directory\nuse -[v]S to pass options in shebang lines", 13);
    v50 = a0;
    v14.unwrap("ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or directory\nuse -[v]S to pass options in shebang lines", 13, &v9);
    if (*((long long *)&v14))
    {
        v13 = v17;
        v12 = v16;
        v11 = v15;
        v9 = v14;
        while (true)
        {
            v51 = v9.next();
            if (!v51)
                break;
            v52 = uu_env::parse_signal_opt(&v18, v51->field_8, v51->field_10);
            if (v52)
            {
                v50[1] = v52;
                v50[2] = v47;
                v50[0] = 0x8000000000000000;
                core::ptr::drop_in_place<uu_env::Options>(&v18);
                return v50;
            }
        }
    }
    v9.try_get_many(a1, "varsTERMtruemainarg[charSTOPTTIN", 4);
    v36.unwrap("varsTERMtruemainarg[charSTOPTTIN", 4, &v9);
    if (*((long long *)&v36))
    {
        v17 = v39;
        v16 = v38;
        v15 = v37;
        v14 = v36;
        v53 = 0;
        while (true)
        {
            v54 = v14.next();
            if (!v54)
                break;
            if ((char)v54[1].eq(v54[2], "-: uu_env(uutils coreutils) 0.0.30Set each NAME to VALUE in the environment and run COMMAND{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]A mere - implies -i. If no COMMAND, print the resulting environment.ignore-environmentstart with an empty enviro", 1))
            {
                v34 = 1;
            }
            else
            {
                uu_env::parse_name_value_opt(&v9, &v18, v54[1], v54[2]);
                v53 = v10;
                if ((long long)v9)
                {
                    v1[1] = (long long)v9;
                    v1[2] = v10;
                    a0[0] = 0x8000000000000000;
                    core::ptr::drop_in_place<uu_env::Options>(&v18);
                    return a0;
                }
            }
            if ((v53 & 1))
                break;
        }
        v13 = v17;
        v12 = v16;
        v11 = v15;
        v9 = v14;
        v50 = a0;
        while (true)
        {
            v55 = v9.next();
            if (!v55)
                break;
            v56 = uu_env::parse_program_opt(&v18, v55[1], v55[2]);
            if (v56)
            {
                v50[1] = v56;
                v50[2] = &g_5107e8;
                v50[0] = 0x8000000000000000;
                core::ptr::drop_in_place<uu_env::Options>(&v18);
                return v50;
            }
        }
    }
    memcpy(v50, &v18, 160);
    return v50;
}
