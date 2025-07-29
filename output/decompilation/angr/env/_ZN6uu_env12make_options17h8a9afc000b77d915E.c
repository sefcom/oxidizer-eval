long long uu_env::make_options(unsigned long long *a0, unsigned long long a1)
{
    char v0;  // [bp-0x261]
    unsigned long long v1[3];  // [bp-0x260]
    int v2;  // [bp-0x258], Other Possible Types: char
    int v4;  // [bp-0x248]
    int v5;  // [bp-0x238]
    int v6;  // [bp-0x228]
    unsigned long long v8;  // [bp-0x208]
    unsigned long long v9;  // [bp-0x200]
    void* v10;  // [bp-0x1f8]
    char v11;  // [bp-0x1f0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x1e8]
    void* v13;  // [bp-0x1e0]
    int v14;  // [bp-0x1d8], Other Possible Types: char
    int v15;  // [bp-0x1c8]
    int v16;  // [bp-0x1b8]
    int v17;  // [bp-0x1a8]
    char v18;  // [bp-0x198]
    unsigned long long v19;  // [bp-0x188]
    char v20;  // [bp-0x180]
    unsigned long long v21;  // [bp-0x170]
    void* v22;  // [bp-0x168]
    unsigned long long v23;  // [bp-0x160]
    uint128_t v24;  // [bp-0x158]
    unsigned long long v25;  // [bp-0x148]
    void* v26;  // [bp-0x140]
    void* v27;  // [bp-0x138]
    unsigned long long v28;  // [bp-0x130]
    void* v29;  // [bp-0x128]
    unsigned long long v30;  // [bp-0x120]
    unsigned long v31;  // [bp-0x118]
    void* v32;  // [bp-0x110]
    struct_0 *v33;  // [bp-0x108]
    char v34;  // [bp-0x100]
    char v35;  // [bp-0xff]
    int v36;  // [bp-0xf8], Other Possible Types: char
    int v37;  // [bp-0xe8]
    int v38;  // [bp-0xd8]
    int v39;  // [bp-0xc8]
    char v40;  // [bp-0xb8]
    int v41;  // [bp-0xa8]
    int v42;  // [bp-0x98]
    int v43;  // [bp-0x88]
    char v44;  // [bp-0x78]
    int v45;  // [bp-0x68]
    int v46;  // [bp-0x58]
    int v47;  // [bp-0x48]
    void* v49;  // r13
    char v50;  // bl
    unsigned long long v51[3];  // rax
    unsigned long v52;  // rbp
    unsigned long v53;  // rdx
    struct_1 *v54;  // rax
    void* v55;  // rcx
    unsigned long long v56[3];  // rax
    unsigned long long v57;  // rax
    unsigned long long *v58;  // rcx
    char v59;  // bl
    unsigned long long v60[3];  // rbp
    unsigned long long v61[3];  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // [bp-0x250]

    v0 = a1.get_flag("ignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-", 18);
    v49 = 0;
    v50 = ((char)a1.get_flag("nullXCPUBOLDBlue", 4) ? 0 : 10);
    v18.try_get_one(a1, "chdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v51 = "chdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ".unwrap(5, &v18);
    if (v51)
    {
        v49 = v51[1];
        v52 = v51[2];
    }
    v18.try_get_many(a1, "fileTSTPsizei128", 4);
    v2.unwrap("fileTSTPsizei128", 4, &v18);
    if (*((long long *)&v2))
    {
        v43 = v6;
        v42 = v5;
        v41 = v4;
        memcpy(&v40, &v2, 16);
        (char)v8.from_iter(&v40, &g_5a9a18);
    }
    else
    {
        v8 = 0.with_capacity_in(8, 16, &g_5a9c80);
        v9 = v53;
        v10 = 0;
    }
    v18.try_get_many(a1, "unsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v2.unwrap("unsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5, &v18);
    if (*((long long *)&v2))
    {
        v47 = v6;
        v46 = v5;
        v45 = v4;
        memcpy(&v44, &v2, 16);
        v11.from_iter(&v44, &g_5a9a18);
    }
    else
    {
        v11 = 0.with_capacity_in(8, 16, &g_5a9c98);
        v12 = v53;
        v13 = 0;
    }
    v18.try_get_one(a1, "argv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v54 = "argv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ".unwrap(5, &v18);
    if (v54)
    {
        v55 = v54->field_8;
        v54 = v54->field_10;
    }
    else
    {
        v55 = 0;
    }
    v19 = v10;
    memcpy(&v18, &(char)v8, 16);
    memcpy(&v20, &v11, 16);
    v21 = v13;
    v34 = v0;
    v35 = v50;
    v30 = v49;
    v31 = v52;
    v22 = 0;
    v23 = 8;
    v24 = 0;
    v25 = 8;
    v26 = 0;
    v32 = v55;
    v33 = &v54->padding_0;
    v27 = 0;
    v28 = 8;
    v29 = 0;
    v2.try_get_many(a1, "ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 13);
    v14.unwrap("ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 13, &v2);
    if (*((long long *)&v14))
    {
        v6 = v17;
        v5 = v16;
        v4 = v15;
        v2 = v14;
        do
        {
            v56 = v2.next();
            if (!v56)
                goto LABEL_4b8464;
            v57 = uu_env::parse_signal_opt(&v18, v56[1], v56[2]);
        } while (!v57);
        v58 = a0;
        v1[1] = v57;
        v1[2] = v53;
    }
    else
    {
LABEL_4b8464:
        v2.try_get_many(a1, "varsTERMLANGtrue.ftlmainarg[", 4);
        v36.unwrap("varsTERMLANGtrue.ftlmainarg[", 4, &v2);
        if (!*((long long *)&v36))
        {
            memcpy(v1, &v18, 160);
            return a0;
        }
        v17 = v39;
        v16 = v38;
        v15 = v37;
        v14 = v36;
        v59 = 0;
        while (true)
        {
            v60 = v14.next();
            if (!v60)
                break;
            if ((char)v60[1].eq(v60[2], "-errorenv-error-config-fileuu_env(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringar", 1))
            {
                v34 = 1;
                if ((v59 & 1))
                    break;
            }
            else
            {
                uu_env::parse_name_value_opt(&v2, &v18, v60[1], v60[2]);
                if (*((long long *)&v2))
                {
                    v1[1] = (long long)v2;
                    v1[2] = v63;
                    v1[0] = 0x8000000000000000;
                    core::ptr::drop_in_place<uu_env::Options>(&v18);
                    return a0;
                }
                v59 = v63;
                if ((v59 & 1))
                    break;
            }
        }
        v6 = v17;
        v5 = v16;
        v4 = v15;
        v2 = v14;
        do
        {
            v61 = v2.next();
            if (!v61)
            {
                memcpy(v1, &v18, 160);
                return a0;
            }
            v62 = uu_env::parse_program_opt(&v18, v61[1], v61[2]);
        } while (!v62);
        v58 = a0;
        v1[1] = v62;
        v1[2] = &g_5a9928;
    }
    *(v58) = 0x8000000000000000;
    core::ptr::drop_in_place<uu_env::Options>(&v18);
    return a0;
}
