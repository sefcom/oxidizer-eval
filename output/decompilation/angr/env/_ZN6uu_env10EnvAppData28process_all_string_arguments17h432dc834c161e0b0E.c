long long uu_env::EnvAppData::process_all_string_arguments(unsigned long a0, struct_1 *a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [bp-0x168]
    unsigned long v1;  // [bp-0x168], Other Possible Types: unsigned long long, unsigned int
    int v2;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x168]
    unsigned long long v4[3];  // [bp-0x160], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x150], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x148]
    struct_0 *v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    int v10;  // [bp-0x128], Other Possible Types: unsigned int
    unsigned long long v11;  // [bp-0x128]
    int v12;  // [bp-0x128]
    unsigned long long v13[3];  // [bp-0x120]
    unsigned long long v14;  // [bp-0x118]
    void* v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x108]
    void* v17;  // [bp-0x100]
    unsigned long long v18;  // [bp-0xf8]
    unsigned long long v19;  // [bp-0xf0]
    unsigned long long v20;  // [bp-0xe8]
    void* v21;  // [bp-0xe0]
    unsigned long v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0xd0]
    void* v24;  // [bp-0xc8]
    char *v25;  // [bp-0xb8]
    unsigned long long v26;  // [bp-0xb0]
    unsigned long long v27;  // [bp-0xa8]
    unsigned long long v28;  // [bp-0xa0]
    unsigned long long v29;  // [bp-0x98]
    unsigned long long v30;  // [bp-0x90]
    unsigned long long v31;  // [bp-0x88]
    unsigned long long v32;  // [bp-0x80]
    unsigned long long v33;  // [bp-0x78]
    unsigned long long v34;  // [bp-0x70]
    unsigned long long v35;  // [bp-0x68]
    unsigned long long v36;  // [bp-0x60]
    uint128_t v37;  // [bp-0x58]
    int v38;  // [bp-0x48], Other Possible Types: char
    char v39;  // [bp-0x38]
    unsigned long long v41;  // rax
    unsigned long long v42[3];  // rdx
    unsigned long long v43;  // rbx
    unsigned long long v44[3];  // r14
    unsigned long long v45[3];  // r14
    unsigned long long v48;  // r15
    unsigned long long v49;  // rbx
    unsigned long long v50;  // rax
    char v51;  // bpl
    unsigned long long v52;  // rax
    unsigned int v53;  // edx
    unsigned long long v54;  // rax
    unsigned long long v55;  // r13
    unsigned long long v56[3];  // r12
    unsigned long long v57;  // rax

    v15 = 0;
    v16 = 8;
    v17 = 0;
    v27 = "argv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or";
    v28 = 5;
    v29 = "chdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from";
    v30 = 5;
    v31 = "fileTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG";
    v32 = 4;
    v33 = "ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or directory\nuse -[v]S to pass options in shebang lines";
    v34 = 13;
    v35 = "unsetremove variable from the environmentdebugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the comma";
    v36 = 5;
    v37 = 9269695016050495394250779263073;
    v22 = a2[1];
    v23 = a2[1] + a2[2] * 24;
    v24 = 0;
    v41 = v22.next();
    if (v42)
    {
        v43 = v41;
        v51 = 0;
        do
        {
            v45 = v44;
            v18.from_utf8_lossy(v45[1], v45[2]);
            v1 = v0;
            if (!((!v43 | v51) & 1))
            {
                v2 = v0;
                if (!(char)v45[1].eq(v45[2], "---ucannot unset '': Invalid argument", 2))
                {
                    v1 = 0;
                    v1 = v3;
                    if ((char)core::slice::<impl [T]>::starts_with(v19, v20, ::0x46d300::core::char::methods::encode_utf8_raw(45, &v1), v42))
                        goto LABEL_473f7c;
                    v1 = v3;
                    v2 = v3;
                    if (v19.is_contained_in(v20))
                        goto LABEL_473f7c;
                }
                v2.clone(v45[1], v45[2]);
                v14 = v5;
                *((int128_t *)&v12) = *((int128_t *)&v2);
                v15.push(&v9, &g_510a70);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
                v54 = v22.next();
                if (v42)
                {
                    v55 = v54;
                    v56 = v42;
                    do
                    {
                        v18.from_utf8_lossy(v56[1], v56[2]);
                        v1 = v2;
                        if (!((!v55 | v51) & 1))
                        {
                            v1 = v2;
                            if (!(char)v56[1].eq(v56[2], "---ucannot unset '': Invalid argument", 2))
                            {
                                v1 = 0;
                                v1 = v3;
                                if (!(char)core::slice::<impl [T]>::starts_with(v19, v20, ::0x46d300::core::char::methods::encode_utf8_raw(45, &v1), v42))
                                {
                                    v19.is_contained_in(v20);
                                    v1 = v3;
                                }
                            }
                        }
                        v2 = v1;
                        v2.clone(v56[1], v56[2]);
                        v14 = v5;
                        *((int128_t *)&v10) = *((int128_t *)&v2);
                        v15.push(&(unsigned long long)v10, &g_510a70);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
                        v55 = v22.next();
                        v56 = v42;
                    } while (v42);
                }
            }
            else
            {
LABEL_473f7c:
                v0 = v1;
                uu_env::check_and_handle_string_args(&v0, v45[1], v45[2], "--split-string-S-vSargv0:     executing: [0]= []= : Permission denied\nunknown error: ", 14, &v15, NULL);
                if (v0)
                {
                    *((unsigned long long *)&v21[8]) = v0;
                    *((unsigned long long *[3])&v21[16]) = v4;
                    *((unsigned long long *)v21) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v15);
                    return v21;
                }
                if (((char)v4 & 1))
                {
LABEL_474000:
                    *((char *)&a1->field_0 + 1) = 1;
                    goto LABEL_474009;
                }
                uu_env::check_and_handle_string_args(&v0, v45[1], v45[2], "-S-vSargv0:     executing: [0]= []= : Permission denied\nunknown error: ", 2, &v15, NULL);
                if (v0)
                {
                    *((unsigned long long *)&v21[8]) = v0;
                    *((unsigned long long *[3])&v21[16]) = v4;
                    *((unsigned long long *)v21) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v15);
                    return v21;
                }
                if (((char)v4 & 1))
                    goto LABEL_474000;
                uu_env::check_and_handle_string_args(&v0, v45[1], v45[2], "-vSargv0:     executing: [0]= []= : Permission denied\nunknown error: ", 3, &v15, NULL);
                if (v0)
                {
                    *((unsigned long long *)&v21[8]) = v0;
                    *((unsigned long long *[3])&v21[16]) = v4;
                    *((unsigned long long *)v21) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v15);
                    return v21;
                }
                if (((char)v4 & 1))
                {
                    a1->field_0 = 257;
                }
                else
                {
                    uu_env::check_and_handle_string_args(&v0, v45[1], v45[2], "-vvSkindAuto/", 4, &v15, a2);
                    if (v0)
                    {
                        *((unsigned long long *)&v21[8]) = v0;
                        *((unsigned long long *[3])&v21[16]) = v4;
                        *((unsigned long long *)v21) = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
                        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v15);
                        return v21;
                    }
                    if (((char)v4 & 1))
                    {
                        v8->field_0 = 257;
                        v8->field_2 = 0;
                    }
                    else
                    {
                        v48 = v19;
                        v49 = v20;
                        v50 = "---ucannot unset '': Invalid argument".strip_prefix_of(2, v48, v49);
                        if (v50)
                        {
                            v0 = v50;
                            v4[0] = v42;
                            v51 = v0.slice_contains(&v27);
                            goto LABEL_4741b5;
                        }
                        v52 = "-: uu_env(uutils coreutils) 0.0.30Set each NAME to VALUE in the environment and run COMMAND{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]A mere - implies -i. If no COMMAND, print the resulting environment.ignore-environmentstart with an empty enviro".strip_prefix_of(1, v48, v49);
                        if (v52)
                        {
                            v0 = v52;
                            v4[0] = (char *)v42 + v52;
                            v53 = (unsigned int)v42;
                            if ((v53 != 0x110000 & (char)core::str::validations::next_code_point(&v0)) == 1)
                            {
                                while (true)
                                {
                                    v10 = v53;
                                    v51 = v10.slice_contains(&v37, 4);
                                    v9 = v11;
                                    if (!((char)core::str::validations::next_code_point(&v0) & 1))
                                        break;
                                    v9 = v11;
                                    v53 = (unsigned int)v42;
                                    if (v53 == 0x110000)
                                        break;
                                }
                                goto LABEL_4741b5;
                            }
                        }
                        v51 = 0;
LABEL_4741b5:
                        if (v48.is_contained_in(v49) && (char)core::slice::<impl [T]>::starts_with(v48, v49, "-ucannot unset '': Invalid argument", 2) && !(char)core::slice::<impl [T]>::starts_with(v48, v49, "---ucannot unset '': Invalid argument", 2))
                        {
                            v57 = v48.get(v49);
                            if (!v57)
                                core::str::slice_error_fail(v48, v49, 2, v49, &g_510a88); /* do not return */
                            v9 = v57;
                            v13[0] = v42;
                            v25 = &v9;
                            v26 = <&T as core::fmt::Display>::fmt;
                            *((unsigned long long **)&v2) = &g_510a50;
                            v4 = 2;
                            v7 = 0;
                            v5 = &v25;
                            v6 = 1;
                            v38.map_or_else(&(unsigned long long)v2);
                            v6 = 125;
                            v2 = v38;
                            v5 = *((long long *)&v39);
                            *((double *)&v21[8]) = (unsigned long long)v2.new();
                            *((unsigned long long **)&v21[16]) = &g_5108a8[0];
                            *((unsigned long long *)v21) = 0x8000000000000000;
                            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
                            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v15);
                            return v21;
                        }
                        v0.clone(v45[1], v45[2]);
                        v14 = v5;
                        *((int128_t *)&v12) = *((int128_t *)&v0);
                        v15.push(&v9, &g_510aa0);
                        continue;
                    }
                }
LABEL_474009:
                v51 = 0;
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v18);
            v43 = v22.next();
            v44 = v42;
        } while (v42);
    }
    *((unsigned long long *)&v21[16]) = 0;
    *((int128_t *)v21) = *((int128_t *)&v15);
    return v21;
}
