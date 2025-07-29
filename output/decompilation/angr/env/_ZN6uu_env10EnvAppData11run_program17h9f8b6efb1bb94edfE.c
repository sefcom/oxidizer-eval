long long uu_env::EnvAppData::run_program(struct_2 *a0, struct_0 *a1, char a2)
{
    char *v0;  // [bp-0x358], Other Possible Types: unsigned long long
    int v1;  // [bp-0x358]
    unsigned long v2;  // [bp-0x350], Other Possible Types: unsigned int
    char *v3;  // [bp-0x348], Other Possible Types: unsigned long
    char v4;  // [bp-0x340], Other Possible Types: unsigned int
    unsigned long v5;  // [bp-0x330]
    unsigned int v6;  // [bp-0x32c]
    unsigned long long v7;  // [bp-0x328]
    unsigned long long v8;  // [bp-0x320]
    int v9;  // [bp-0x318]
    unsigned int v10;  // [bp-0x310]
    char v11;  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long v12;  // [bp-0x300]
    unsigned long v13;  // [bp-0x2f8]
    char *v14;  // [bp-0x2f0], Other Possible Types: unsigned long
    char *v15;  // [bp-0x2e8], Other Possible Types: unsigned int
    unsigned int v16;  // [bp-0x2e0], Other Possible Types: unsigned long long
    char *v17;  // [bp-0x2d8]
    unsigned int v18;  // [bp-0x2d0], Other Possible Types: unsigned long long
    char *v19;  // [bp-0x2c8], Other Possible Types: void*
    unsigned int v20;  // [bp-0x2c0]
    char *v21;  // [bp-0x248], Other Possible Types: unsigned long
    unsigned int v22;  // [bp-0x240]
    void* v23;  // [bp-0x238]
    unsigned long v24;  // [bp-0x228]
    unsigned long v25;  // [bp-0x220]
    unsigned int v26;  // [bp-0x218], Other Possible Types: unsigned long long
    int v27;  // [bp-0x210], Other Possible Types: unsigned long long [2], unsigned long, unsigned long long
    int v28;  // [bp-0x210]
    char *v29;  // [bp-0x208], Other Possible Types: unsigned long
    unsigned long long v30;  // [bp-0x200], Other Possible Types: char
    void* v31;  // [bp-0x1f8]
    int v32;  // [bp-0x180], Other Possible Types: char
    unsigned int v33;  // [bp-0x170]
    char v34;  // [bp-0x168]
    char *v35;  // [bp-0x158]
    char v36;  // [bp-0x150]
    char *v37;  // [bp-0x140]
    char v38;  // [bp-0x138]
    char *v39;  // [bp-0x128]
    int v40;  // [bp-0x120]
    unsigned int v41;  // [bp-0x110]
    char v42;  // [bp-0x100]
    unsigned long v44;  // rbx
    uint128_t *v45;  // r14
    unsigned long v46;  // r12
    unsigned long v47;  // r15
    unsigned int v48;  // rax
    unsigned long long v49[2];  // rdx
    unsigned long long v50[2];  // rdx
    unsigned int v51;  // rax
    unsigned int v53;  // rax
    unsigned long v54;  // rax
    unsigned int v55;  // edi
    unsigned int v56;  // rdi

    v44 = a1->field_58;
    if (!v44)
        core::panicking::panic_bounds_check(0, 0, &g_5a9c20); /* do not return */
    v45 = a1->field_50;
    *((uint128_t *)&v9) = *(v45);
    v8 = 0x8000000000000000;
    v11.clone(&v8);
    v42.new((long long)v9, v10);
    v25 = v44;
    v24 = v45 + 1;
    v42.args(v45 + 1, v44 - 1);
    v46 = a1->field_88;
    if (v46)
    {
        v47 = a1->field_90;
        v42.arg0(v46, v47);
        ::0x4b3000::core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v11);
        v11 = 0x8000000000000000;
        v12 = v46;
        v13 = v47;
        if (a2)
        {
            v26 = 1;
            v27 = v46;
            v29 = v47;
            v30 = 1;
            v0 = &v26;
            *((void* *)&v2) = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned int **)&v15) = &g_5a9b70;
            v16 = 2;
            v19 = 0;
            v17 = &v0;
            v18 = 1;
            std::io::stdio::_eprint(&v15);
LABEL_4b77f8:
            v26 = 1;
            *((int128_t *)&v28) = (int128_t)v9;
            v30 = 0;
            v0 = &v26;
            *((void* *)&v2) = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned int **)&v15) = &g_5a9b90;
            v16 = 2;
            v19 = 0;
            v17 = &v0;
            v18 = 1;
            std::io::stdio::_eprint(&v15);
            v5 = "   argenv-error-permission-deniedenv-error-unknownenv-error-cannot-unset-invaliddirectoryenv-error-must-specify-command-with-chdirenv-error-cannot-change-directory: warning: valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClos";
            v7 = 6;
            v26 = 1;
            *((int128_t *)&v27) = *((int128_t *)&v12);
            v30 = 1;
            v0 = &(char)v5;
            *((void* *)&v2) = <&T as core::fmt::Display>::fmt;
            v3 = &v26;
            *((void* *)&v4) = <os_display::Quoted as core::fmt::Display>::fmt;
            v15 = &g_5a9bb0;
            v16 = 3;
            v19 = 0;
            v17 = &v0;
            v18 = 2;
            std::io::stdio::_eprint(&v15);
            v21 = v24;
            *((uint128_t **)&v22) = &v45[v25];
            v23 = 0;
            v48 = v21.next();
            if (v49)
            {
                do
                {
                    v14 = v48 + 1;
                    v0 = 1;
                    v2 = v50[0];
                    v3 = v50[1];
                    v4 = 1;
                    v15 = &(char)v5;
                    *((void* *)&v16) = <&T as core::fmt::Display>::fmt;
                    v17 = &v14;
                    *((void* *)&v18) = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v19 = &v0;
                    *((void* *)&v20) = <os_display::Quoted as core::fmt::Display>::fmt;
                    v26 = &g_5a9be0;
                    v27 = 4;
                    v31 = 0;
                    v29 = &v15;
                    v30 = 3;
                    std::io::stdio::_eprint(&v26);
                    v48 = v21.next();
                    v49 = v49;
                } while (v49);
            }
        }
    }
    else if (!(!a2))
    {
        goto LABEL_4b77f8;
    }
    (char)v5.status(&v42);
    if (((char)v5 & 1))
    {
        v14 = &v7;
        v51 = (unsigned long long)v7.kind();
        if (!(v51 & 255))
            goto LABEL_4b7a79;
        switch (v51)
        {
        case 1:
            *((long long *)&v26) = uucore::util_name();
            v27[0] = v49;
            v0 = &v26;
            *((void* *)&v2) = <&T as core::fmt::Display>::fmt;
            *((unsigned int **)&v15) = &g_5a9ad0;
            v16 = 2;
            v19 = 0;
            v17 = &v0;
            v18 = 1;
            std::io::stdio::_eprint(&v15);
            v15.to_vec("programenv-error-no-such-fileenv-error-use-s-shebang---u/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
            v3 = v17;
            *((int128_t *)&v1) = *((int128_t *)&v15);
            v26 = 1;
            *((int128_t *)&v27) = (int128_t)v9;
            v30 = 1;
            v15.spec_to_string(&v26);
            v35 = v3;
            memcpy(&v34, &v1, 16);
            memcpy(&v36, &v15, 16);
            v37 = v17;
            v15.from_iter(&v34);
            uucore::mods::locale::get_message_with_args(&v0, "env-error-permission-deniedenv-error-unknownenv-error-cannot-unset-invaliddirectoryenv-error-must-specify-command-with-chdirenv-error-cannot-change-directory: warning: valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuo", 27, &v15);
            v21 = &v0;
            *((void* *)&v22) = <alloc::string::String as core::fmt::Display>::fmt;
            *((unsigned int **)&v15) = &g_5a9af0;
            v16 = 2;
            v19 = 0;
            v17 = &v21;
            v18 = 1;
            std::io::stdio::_eprint(&v15);
            ::0x4b2810::core::ptr::drop_in_place<alloc::string::String>(&v0);
            break;
        case 20:
LABEL_4b7a79:
            v53 = a0->field_1.make_error_no_such_file_or_dir((long long)v9, v10);
            goto LABEL_4b7e69;
        default:
            *((long long *)&v26) = uucore::util_name();
            v27[0] = v49;
            v0 = &v26;
            *((void* *)&v2) = <&T as core::fmt::Display>::fmt;
            *((unsigned int **)&v15) = &g_5a9ad0;
            v16 = 2;
            v19 = 0;
            v17 = &v0;
            v18 = 1;
            std::io::stdio::_eprint(&v15);
            v15.to_vec("errorenv-error-config-fileuu_env(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringarg", 5);
            v29 = v17;
            memcpy(&v26, &v15, 16);
            v0 = &v14;
            *((void* *)&v2) = <&T as core::fmt::Debug>::fmt;
            *((unsigned int **)&v15) = &g_432480;
            v16 = 1;
            v19 = 0;
            v17 = &v0;
            v18 = 1;
            v32.map_or_else(&v15);
            memcpy(&v38, &v26, 16);
            v39 = v29;
            v40 = v32;
            v41 = v33;
            v15.from_iter(&v38);
            uucore::mods::locale::get_message_with_args(&v26, "env-error-unknownenv-error-cannot-unset-invaliddirectoryenv-error-must-specify-command-with-chdirenv-error-cannot-change-directory: warning: valueenv-warning-no-name-specifiedenv-error-failed-set-signal-actionEnvMissingClosingQuoteEnvInvalidBackslashAtEndO", 17, &v15);
            v0 = &v26;
            *((void* *)&v2) = <alloc::string::String as core::fmt::Display>::fmt;
            *((unsigned int **)&v15) = &g_5a9af0;
            v16 = 2;
            v19 = 0;
            v17 = &v0;
            v18 = 1;
            std::io::stdio::_eprint(&v15);
            ::0x4b2810::core::ptr::drop_in_place<alloc::string::String>(&v26);
        }
        v53 = 126.from();
    }
    else
    {
        v54 = v6;
        if (!(unsigned int)v54)
        {
            core::ptr::drop_in_place<core::result::Result<std::process::ExitStatus,std::io::error::Error>>(&(char)v5);
            core::ptr::drop_in_place<std::process::Command>(&v42);
            ::0x4b3000::core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v11);
            ::0x4b3000::core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v8);
            return 0;
        }
        v55 = v54;
        if (!((char)v55 & 127))
        {
            v53 = v54 >> 8 & 4294967295.from();
        }
        else
        {
            if (((char)v55 & 127) + 1 < 2)
            {
                v56 = &g_5a9c38;
            }
            else
            {
                v55 & 127.try_from().unwrap((unsigned int)v49);
                v15.all();
                v26.new(&v15);
                nix::sys::signal::sigaction(&v15, (unsigned int)v49, &v26);
                nix::sys::signal::raise((unsigned int)v49);
                v56 = &g_5a9c68;
            }
            core::option::unwrap_failed(v56); /* do not return */
        }
    }
LABEL_4b7e69:
    core::ptr::drop_in_place<core::result::Result<std::process::ExitStatus,std::io::error::Error>>(&(char)v5);
    core::ptr::drop_in_place<std::process::Command>(&v42);
    ::0x4b3000::core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v11);
    ::0x4b3000::core::ptr::drop_in_place<alloc::borrow::Cow<std::ffi::os_str::OsStr>>(&v8);
    return v53;
}
