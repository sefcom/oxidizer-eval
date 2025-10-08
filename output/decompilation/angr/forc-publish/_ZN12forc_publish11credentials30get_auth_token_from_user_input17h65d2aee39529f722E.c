long long forc_publish::credentials::get_auth_token_from_user_input(struct_3 *a0, unsigned long long a1[3], unsigned long long a2, char a3, unsigned long long a4)
{
    char v0;  // [bp-0x1c8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0x1c0]
    unsigned long v2;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1b9]
    char *v4;  // [bp-0x1b8], Other Possible Types: char
    unsigned long long v5;  // [bp-0x1b8], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x1b1]
    int v7;  // [bp-0x1b0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x1a8], Other Possible Types: unsigned long long
    char *v9;  // [bp-0x198], Other Possible Types: int
    int v10;  // [bp-0x198]
    char *v11;  // [bp-0x198]
    int v12;  // [bp-0x198]
    unsigned long long v13;  // [bp-0x190]
    int v14;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    void* v15;  // [bp-0x178]
    unsigned long v16;  // [bp-0x170]
    char *v17;  // [bp-0x168]
    char *v18;  // [bp-0x160]
    unsigned long long v19;  // [bp-0x158]
    char *v20;  // [bp-0x150], Other Possible Types: unsigned long
    unsigned long v21;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long v22;  // [bp-0x140]
    unsigned long long v23;  // [bp-0x138]
    char v24;  // [bp-0x130]
    char v25;  // [bp-0x128]
    char v26;  // [bp-0x118]
    unsigned long long v27;  // [bp-0x108]
    void* v28;  // [bp-0x100]
    unsigned long long v29;  // [bp-0xf8]
    void* v30;  // [bp-0xf0]
    char *v31;  // [bp-0xe8], Other Possible Types: unsigned long
    unsigned long v32;  // [bp-0xe0], Other Possible Types: unsigned long long
    struct_2 *v33;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v34;  // [bp-0xc8]
    int v35;  // [bp-0xb8]
    unsigned long long v36;  // [bp-0xb0]
    unsigned long long v37;  // [bp-0xa8]
    struct_0 *v38;  // [bp-0x98]
    unsigned long long v39;  // [bp-0x90]
    char v40;  // [bp-0x88]
    unsigned long long v41;  // [bp-0x78]
    unsigned long long v42;  // [bp-0x70]
    int v43;  // [bp-0x68]
    unsigned long long v44;  // [bp-0x60]
    unsigned long long v45;  // [bp-0x58]
    int v46;  // [bp-0x50]
    unsigned long long v47;  // [bp-0x48]
    char *v48;  // [bp-0x40]
    unsigned long long v49;  // [bp-0x38]
    char v52;  // al
    unsigned long v53;  // rax
    unsigned long long v54;  // rax
    struct_5 *v55;  // rdx
    unsigned long v56;  // rax
    struct_5 *v57;  // rax
    unsigned long v59;  // r12
    unsigned long v60;  // r15
    unsigned long long v61;  // rax
    struct_5 *v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rax
    unsigned long long v65;  // rcx
    struct_5 *v66;  // rax
    char v68;  // al
    unsigned long v69;  // rax
    unsigned long long v70;  // rax
    unsigned long v71;  // rax

    v23 = a2;
    v24 = a3;
    v39 = a4;
    if (core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E, 0) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E, 0) <= 2)
    {
        v52 = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E.interest();
        if (!v52 || !tracing::__macro_support::__is_enabled(_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E, v52))
            goto LABEL_a62d2b;
        v53 = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_30[1];
        *((unsigned long long [2])&v9) = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_30;
        *((int128_t *)&v14) = *((int128_t *)&_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_38);
        v15 = 0;
        v16 = v53;
        v0.next(&(char)v9);
        if (!v0)
            core::option::expect_failed("FieldSet corrupted (this is a bug)Paste your auth token found on https://forc.pub/tokens below: Auth token saved to forc-plugins/forc-publish/src/credentials.rs", 34, &g_1253e90); /* do not return */
        v27 = v8;
        memcpy(&v26, &v4, 16);
        memcpy(&v25, &v0, 16);
        v0 = &g_1253e70;
        v2 = 1;
        v5 = 8;
        *((uint128_t *)&v7) = 0;
        v17 = &v25;
        v18 = &v0;
        v19 = &g_1253ea8;
        v11 = &v17;
        v13 = 1;
        v14 = &_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_30;
        forc_publish::credentials::get_auth_token_from_user_input::{{closure}}(&v11);
    }
    else
    {
LABEL_a62d2b:
        if (!(char)core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E, 0) >= 3)
        {
            v42 = 3;
            *((uint128_t *)&v43) = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_20;
            v54 = log::logger();
            if ((char)v55->field_18(v54, &v42))
            {
                v56 = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_30[1];
                *((unsigned long long [2])&v9) = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_30;
                *((int128_t *)&v14) = *((int128_t *)&_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_38);
                v15 = 0;
                v16 = v56;
                (char)v0.next(&(char)v9);
                if (!v0)
                    core::option::expect_failed("FieldSet corrupted (this is a bug)Paste your auth token found on https://forc.pub/tokens below: Auth token saved to forc-plugins/forc-publish/src/credentials.rs", 34, &g_1253e90); /* do not return */
                v27 = v8;
                memcpy(&v26, &v4, 16);
                memcpy(&v25, &v0, 16);
                v0 = &g_1253e70;
                v2 = 1;
                v5 = 8;
                *((uint128_t *)&v7) = 0;
                v17 = &v25;
                v18 = &v0;
                v19 = &g_1253ea8;
                v20 = &v17;
                v21 = 1;
                v22 = &_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E->field_30;
                v14 = v44;
                *((int128_t *)&v9) = *((int128_t *)&v42);
                tracing::__macro_support::__tracing_log(_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E, v54, v55, &(char)v9, &v20);
            }
        }
    }
    v57 = v39.flush();
    if (v57)
    {
        a0->field_0 = 0;
        *((struct_5 **)&a0->field_1[7]) = v57;
        return core::ptr::drop_in_place<std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<alloc::boxed::Box<regex_automata::meta::regex::Cache>>>>>(v23, *((int *)&v24));
    }
    v28 = 0;
    v29 = 1;
    v30 = 0;
    if (((char)v23.read_line(&v28) & 1))
    {
        a0->field_0 = 0;
        *((struct_5 **)&a0->field_1[7]) = v55;
    }
    else
    {
        v0.to_vec(core::str::<impl str>::trim_matches(1, 0), a2);
        v34 = v5;
        memcpy(&v33, &v0, 16);
        v59 = a1[1];
        v60 = a1[2];
        v61 = v59.parent(v60);
        if (v61)
        {
            v62 = std::fs::create_dir_all(v61, v55);
            if (v62)
            {
                a0->field_0 = 0;
                *((struct_5 **)&a0->field_1[7]) = v62;
            }
            else
            {
                v0.clone(&v33);
                v63 = v5;
                v37 = v5;
                *((int128_t *)&v35) = *((int128_t *)&v0);
                toml::ser::to_string(&v0, v36, v63);
                memcpy(&v40, &v2, 16);
                v41 = v7;
                if ((int)v0 == 1)
                {
                    v6 = v41;
                    memcpy(&(char)v0, &v40, 16);
                    a0->field_0 = 3;
                    v64 = *((long long *)&v3);
                    v65 = v6;
                    *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v0);
                    *((unsigned long long *)&a0->field_1[15]) = v64;
                    a0->field_8 = v65;
                }
                else
                {
                    v66 = std::fs::write(a1, &v40);
                    if (v66)
                    {
                        a0->field_0 = 0;
                        *((struct_5 **)&a0->field_1[7]) = v66;
                    }
                    else
                    {
                        if (core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E, 0) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E, 0) <= 2)
                        {
                            v68 = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE.interest();
                            if (!v68 || !tracing::__macro_support::__is_enabled(_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE, v68))
                                goto LABEL_a631a9;
                            v69 = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_30[1];
                            *((unsigned long long [2])&v12) = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_30;
                            *((int128_t *)&v14) = *((int128_t *)&_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_38);
                            v15 = 0;
                            v16 = v69;
                            v0.next(&(unsigned long long)v10);
                            if (!v0)
                                core::option::expect_failed("FieldSet corrupted (this is a bug)Paste your auth token found on https://forc.pub/tokens below: Auth token saved to forc-plugins/forc-publish/src/credentials.rs", 34, &g_1253ec8); /* do not return */
                            v27 = v8;
                            memcpy(&v26, &v4, 16);
                            memcpy(&v25, &v0, 16);
                            v20 = v59;
                            v21 = v60;
                            v31 = &v20;
                            v32 = <std::path::Display as core::fmt::Display>::fmt;
                            v0 = &g_1253e80;
                            v1 = 1;
                            v8 = 0;
                            v4 = &v31;
                            v7 = 1;
                            v17 = &v25;
                            v18 = &v0;
                            v19 = &g_1253ea8;
                            v9 = &v17;
                            v13 = 1;
                            v14 = &_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_30;
                            forc_publish::credentials::get_auth_token_from_user_input::{{closure}}(&v9);
                        }
                        else
                        {
LABEL_a631a9:
                            if (!(char)core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E, 0) >= 3)
                            {
                                v45 = 3;
                                *((uint128_t *)&v46) = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_20;
                                v70 = log::logger();
                                if ((char)v55->field_18(v70, &v45))
                                {
                                    v38 = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE;
                                    v71 = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_30[1];
                                    *((unsigned long long [2])&v9) = _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_30;
                                    *((int128_t *)&v14) = *((int128_t *)&_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_38);
                                    v15 = 0;
                                    v16 = v71;
                                    v0.next(&(unsigned long long)v10);
                                    if (!v0)
                                        core::option::expect_failed("FieldSet corrupted (this is a bug)Paste your auth token found on https://forc.pub/tokens below: Auth token saved to forc-plugins/forc-publish/src/credentials.rs", 34, &g_1253ec8); /* do not return */
                                    v27 = v8;
                                    memcpy(&v26, &v4, 16);
                                    memcpy(&v25, &v0, 16);
                                    v31 = v59;
                                    v32 = v60;
                                    v48 = &v31;
                                    v49 = <std::path::Display as core::fmt::Display>::fmt;
                                    v0 = &g_1253e80;
                                    v1 = 1;
                                    v8 = 0;
                                    v4 = &v48;
                                    v7 = 1;
                                    v17 = &v25;
                                    v18 = &v0;
                                    v19 = &g_1253ea8;
                                    v20 = &v17;
                                    v21 = 1;
                                    v22 = &_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE->field_30;
                                    v14 = v47;
                                    *((int128_t *)&v10) = *((int128_t *)&v45);
                                    tracing::__macro_support::__tracing_log(v38, v70, v55, &(unsigned long long)v10, &v20);
                                }
                            }
                        }
                        core::ptr::drop_in_place<forc_publish::credentials::Credentials>(&(char)v35);
                        goto LABEL_a63374;
                    }
                }
                core::ptr::drop_in_place<forc_publish::credentials::Credentials>(&(char)v35);
            }
            core::ptr::drop_in_place<alloc::string::String>(&v33);
        }
        else
        {
LABEL_a63374:
            a0->field_8 = v34;
            *((struct_2 **)&a0->field_1[7]) = v33;
            a0->field_0 = 14;
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v28);
    return core::ptr::drop_in_place<std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<alloc::boxed::Box<regex_automata::meta::regex::Cache>>>>>(v23, *((int *)&v24));
}
