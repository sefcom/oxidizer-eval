long long uu_env::EnvAppData::process_all_string_arguments(unsigned long a0, void* a1, unsigned long long a2[3])
{
    unsigned int v0;  // [bp-0x194]
    unsigned long long v1;  // [bp-0x190]
    unsigned long long v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x180]
    unsigned long long v4;  // [bp-0x178]
    int v5;  // [bp-0x178], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x178]
    unsigned long long v8[3];  // [bp-0x170]
    unsigned long long v9;  // [bp-0x168]
    unsigned int v10;  // [bp-0x160]
    unsigned int v11;  // [bp-0x148]
    int v12;  // [bp-0x148]
    unsigned long long v13;  // [bp-0x138]
    struct_2 *v14;  // [bp-0x130]
    struct_0 *v15;  // [bp-0x128]
    void* v16;  // [bp-0x120]
    unsigned long long v17;  // [bp-0x118]
    void* v18;  // [bp-0x110]
    unsigned long v19;  // [bp-0x108]
    unsigned long long v20;  // [bp-0x100]
    void* v21;  // [bp-0xf8]
    unsigned long long v22;  // [bp-0xe8]
    unsigned long long v23;  // [bp-0xe0]
    unsigned long long v24;  // [bp-0xd8]
    unsigned long long v25;  // [bp-0xd0]
    unsigned long long v26;  // [bp-0xc8]
    unsigned long long v27;  // [bp-0xc0]
    unsigned long long v28;  // [bp-0xb8]
    unsigned long long v29;  // [bp-0xb0]
    unsigned long long v30;  // [bp-0xa8]
    unsigned long long v31;  // [bp-0xa0]
    uint128_t v32;  // [bp-0x98]
    int v33;  // [bp-0x80], Other Possible Types: char
    unsigned long long v34;  // [bp-0x70]
    int v35;  // [bp-0x68]
    unsigned long long v36;  // [bp-0x58]
    char v37;  // [bp-0x50]
    unsigned long long v38;  // [bp-0x40]
    unsigned long long v40;  // rax
    unsigned long long v41[3];  // rdx
    unsigned long long v42;  // r15
    char *v43;  // r14
    unsigned long long v44[3];  // rdx
    unsigned long long v45[3];  // rdx
    unsigned long long v46[3];  // r12
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned int v52;  // edx
    unsigned long long v53[3];  // rcx
    unsigned long long v54;  // rax
    unsigned long long v55[3];  // rbp
    unsigned long long v56[3];  // rbp
    unsigned long long v57;  // rax

    v16 = 0;
    v17 = 8;
    v18 = 0;
    v22 = "argv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ";
    v23 = 5;
    v24 = "chdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ";
    v25 = 5;
    v26 = "fileTSTPsizei128";
    v27 = 4;
    v28 = "ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ";
    v29 = 13;
    v30 = "unsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ";
    v31 = 5;
    v32 = 9269695016050495394250779263073;
    v19 = a2[1];
    v20 = a2[1] + a2[2] * 24;
    v21 = 0;
    v40 = v19.next();
    if (v41)
    {
        v42 = v40;
        v0 = 0;
        v43 = &v16;
        do
        {
            v45 = v44;
            v1.to_string_lossy(v45[1], v45[2]);
            v46 = v45;
            v5 = v4;
            if (!((!v42 | (char)v0) & 1))
            {
                v6 = v4;
                if (!(char)v46[1].eq(v46[2], "---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 2))
                {
                    v5 = 0;
                    v43 = &v16;
                    v5 = v7;
                    if (!(!(char)core::slice::<impl [T]>::starts_with(v2, v3, ::0x4b3770::core::char::methods::encode_utf8_raw(45, &v5), v41)))
                        goto LABEL_4b706e;
                    v5 = v7;
                    v6 = v7;
                    if (!(!v2.is_contained_in(v3)))
                        goto LABEL_4b706e;
                }
                v6.clone(v46);
                v13 = v9;
                memcpy(&v11, &v6, 16);
                v16.push(&v11, &g_5a9b28);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
                v54 = v19.next();
                if (v41)
                {
                    do
                    {
                        v56 = v55;
                        v1.to_string_lossy(v56[1], v56[2]);
                        v5 = v6;
                        if (!((!v54 | (char)v0) & 1))
                        {
                            v5 = v6;
                            if (!(char)v56[1].eq(v56[2], "---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 2))
                            {
                                v5 = 0;
                                v5 = v7;
                                if (!(char)core::slice::<impl [T]>::starts_with(v2, v3, ::0x4b3770::core::char::methods::encode_utf8_raw(45, &v5), v41))
                                {
                                    v2.is_contained_in(v3);
                                    v5 = v7;
                                }
                            }
                        }
                        v6 = v5;
                        v6.clone(v56);
                        v13 = v9;
                        memcpy(&v11, &v6, 16);
                        v16.push(&v11, &g_5a9b28);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
                        v54 = v19.next();
                        v55 = v41;
                    } while (v41);
                }
            }
            else
            {
LABEL_4b706e:
                uu_env::check_and_handle_string_args(&v5, v46[1], v46[2], "--split-string-S-vSenv-error-cannot-unsetargv0:     executing: [0]= []= ", 14, v43, NULL);
                v5 = v4;
                if (v5)
                {
                    *((unsigned long long *)&v15->padding_1[7]) = v5;
                    v15->field_10 = &v53[0];
                    *((unsigned long long *)&v15->field_0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v16);
                    return a0;
                }
                if (((char)v8 & 1))
                {
LABEL_4b70ec:
                    *((char *)&a1[1]) = 1;
                    goto LABEL_4b70f5;
                }
                uu_env::check_and_handle_string_args(&v5, v46[1], v46[2], "-S-vSenv-error-cannot-unsetargv0:     executing: [0]= []= ", 2, v43, NULL);
                v5 = v4;
                if (v4)
                {
                    *((unsigned long long *)&v15->padding_1[7]) = v5;
                    v15->field_10 = &v53[0];
                    *((unsigned long long *)&v15->field_0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v16);
                    return a0;
                }
                if (!(!((char)v8 & 1)))
                    goto LABEL_4b70ec;
                uu_env::check_and_handle_string_args(&v5, v46[1], v46[2], "-vSenv-error-cannot-unsetargv0:     executing: [0]= []= ", 3, v43, NULL);
                v5 = v4;
                if (v4)
                {
                    *((unsigned long long *)&v15->padding_1[7]) = v5;
                    v15->field_10 = &v53[0];
                    *((unsigned long long *)&v15->field_0) = 0x8000000000000000;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v16);
                    return a0;
                }
                if (((char)v8 & 1))
                {
                    *((unsigned short *)a1) = 257;
                }
                else
                {
                    uu_env::check_and_handle_string_args(&v5, v46[1], v46[2], "-vvSkindAuto/", 4, v43, a2);
                    v5 = v4;
                    if (v4)
                    {
                        *((unsigned long long *)&v15->padding_1[7]) = v5;
                        v15->field_10 = &v53[0];
                        *((unsigned long long *)&v15->field_0) = 0x8000000000000000;
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
                        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v16);
                        return a0;
                    }
                    if (((char)v8 & 1))
                    {
                        v14->field_0 = 257;
                        v14->field_2 = 0;
                    }
                    else
                    {
                        v50 = "---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs".strip_prefix_of(2, v2, v3);
                        if (v50)
                        {
                            v4 = v50;
                            v8[0] = v41;
                            v0 = v4.slice_contains(&v22, 5);
                            goto LABEL_4b726c;
                        }
                        v51 = "-errorenv-error-config-fileuu_env(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringar".strip_prefix_of(1, v2, v3);
                        if (v51)
                        {
                            v4 = v51;
                            v8[0] = (char *)v41 + v51;
                            v52 = (unsigned int)v41;
                            if (!v52 == 0x110000 && !!(int)::0x4b3690::core::str::validations::next_code_point(&v4))
                            {
                                while (true)
                                {
                                    v11 = v52;
                                    v0 = v11.slice_contains(&v32, 4);
                                    if (!(int)::0x4b3690::core::str::validations::next_code_point(&v4))
                                        break;
                                    v52 = (unsigned int)v41;
                                    if (v52 == 0x110000)
                                        break;
                                }
LABEL_4b726c:
                                if (v2.is_contained_in(v3) && (char)core::slice::<impl [T]>::starts_with(v2, v3, "-u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(v2, v3, "---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 2))
                                {
                                    v4.to_vec("name", 4);
                                    v13 = v9;
                                    memcpy(&v11, &v6, 16);
                                    v57 = v2.get(v3);
                                    if (!v57)
                                        core::str::slice_error_fail(v2, v3, 2, v3, &g_5a9b40); /* do not return */
                                    v4.to_vec(v57, a2);
                                    v38 = v9;
                                    memcpy(&v37, &v6, 16);
                                    v35 = v12;
                                    v36 = v13;
                                    v4.from_iter(&v35);
                                    uucore::mods::locale::get_message_with_args(&v33, "env-error-cannot-unsetargv0:     executing: [0]= []= ", 22, &v4);
                                    v10 = 125;
                                    v5 = v33;
                                    v9 = v34;
                                    *((double *)&v15->padding_1[7]) = v4.new();
                                    v15->field_10 = &g_5a99b0[0];
                                    *((unsigned long long *)&v15->field_0) = 0x8000000000000000;
                                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
                                    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v16);
                                    return a0;
                                }
                                v4.clone(v46);
                                v13 = v9;
                                memcpy(&v11, &v6, 16);
                                v43.push(&v11, &g_5a9b58);
                                continue;
                            }
                        }
                        v0 = 0;
                        goto LABEL_4b726c;
                    }
                }
LABEL_4b70f5:
                v0 = 0;
            }
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v1);
            v42 = v19.next();
            v41 = v41;
        } while (v41);
    }
    v15->field_10 = 0;
    *((int128_t *)&v15->field_0) = *((int128_t *)&v16);
    return v15;
}
