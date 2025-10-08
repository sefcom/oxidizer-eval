void fish::exec::internal_exec(void* a0, struct_0 *a1, struct_1 *a2)
{
    int v0;  // [bp-0x1d8]
    unsigned long long v1;  // [bp-0x1c8]
    char v2;  // [bp-0x1c0]
    int v3;  // [bp-0x1a8]
    unsigned long v4;  // [bp-0x198]
    char v5;  // [bp-0x188], Other Possible Types: unsigned long long
    char v6;  // [bp-0x180]
    unsigned long v7;  // [bp-0x170]
    int v8;  // [bp-0x168], Other Possible Types: char
    unsigned long long v9;  // [bp-0x158]
    char v10;  // [bp-0x150]
    unsigned long long v11;  // [bp-0x148]
    unsigned long long v12;  // [bp-0x140]
    char v13;  // [bp-0x138]
    unsigned long v14;  // [bp-0x130]
    char v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x120]
    int v17;  // [bp-0x118], Other Possible Types: char
    int v18;  // [bp-0x108]
    int v19;  // [bp-0xf8]
    int v20;  // [bp-0xe8]
    char v21;  // [bp-0xd8]
    int v22;  // [bp-0xc8]
    char v23;  // [bp-0xb8]
    char v24;  // [bp-0xa0]
    int v25;  // [bp-0x90]
    int v26;  // [bp-0x80]
    int v27;  // [bp-0x70]
    int v28;  // [bp-0x60]
    char v29;  // [bp-0x50]
    int v30;  // [bp-0x40]
    char v31;  // [bp-0x30]
    char v33;  // al
    char v34;  // al

    v4 = a2->field_10;
    *((uint128_t *)&v3) = a2->field_0;
    if (!a1->field_20)
        core::panicking::panic_bounds_check(0, 0, &g_14d7af0); /* do not return */
    v15.get_pwd_slash(a0);
    v33 = v3.append_from_specs(a1->field_18 + 1, v16, *((long long *)&v17));
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v15);
    if (v33)
    {
        sigemptyset(&v24);
        memcpy(&v15, &v24, 16);
        v17 = v25;
        v18 = v26;
        v19 = v27;
        v20 = v28;
        memcpy(&v21, &v29, 16);
        v22 = v30;
        memcpy(&v23, &v31, 16);
        v34 = fish::fork_exec::blocked_signals_for_job(a1, &v15);
        fish::redirection::dup2_list_resolve_chain(&v5, &v3);
        if ((int)fish::fork_exec::postfork::child_setup_process(0, (v34 ? &v15 : 0), 0, &v5))
        {
            core::ptr::drop_in_place<fish::ast::TokenStream>(v5, *((long long *)&v6));
        }
        else
        {
            if (fish::proc::is_interactive_session())
            {
                v2.getf(a0, "S", 5, 20);
                v8.to_vec("0", 1);
                v1 = v9;
                v0 = v8;
                if (*((long long *)&v2))
                {
                    v10.as_string(&v2);
                    fish::wutil::wcstoi::fish_wcstol(&v13, v11, v12);
                    if (v13 != 1 && v14 > 0)
                    {
                        v7 = v14 - 1;
                        v8.to_wstring(&v7);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                        v1 = v9;
                        v0 = v8;
                    }
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
                    core::ptr::drop_in_place<fish::env::var::EnvVar>(&v2);
                }
                a0.set_one("S", 5, 20, &v0);
            }
            if (a1->field_20)
                fish::exec::launch_process_nofork(a0, a1->field_18); /* do not return */
            core::panicking::panic_bounds_check(0, 0, &g_14d7b08); /* do not return */
        }
    }
    core::ptr::drop_in_place<fish::io::IoChain>(&v3);
    return;
}
