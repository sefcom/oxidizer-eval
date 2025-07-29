long long uu_tee::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x388]
    unsigned long long v1;  // [bp-0x380]
    int v2;  // [bp-0x378]
    int v3;  // [bp-0x368]
    unsigned long long v4;  // [bp-0x358]
    char v5;  // [bp-0x350], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x348]
    int v7;  // [bp-0x340]
    int v8;  // [bp-0x330]
    int v9;  // [bp-0x320], Other Possible Types: char
    char v10;  // [bp-0x310]
    int v11;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x2f0]
    int v13;  // [bp-0x2e8], Other Possible Types: unsigned long long
    char v14;  // [bp-0x2e0]
    char v15;  // [bp-0x2df]
    char v16;  // [bp-0x2de]
    char v17;  // [bp-0x2dd]
    int v18;  // [bp-0x2d8]
    int v19;  // [bp-0x2c8]
    char v21;  // al
    char v22;  // al
    char v23;  // al
    unsigned long long v24[3];  // rax
    char v25;  // r13b
    unsigned long long v26;  // r15
    unsigned long long v27;  // rdx
    int v28;  // xmm0
    unsigned long long v29;  // rax
    void* v30;  // rcx
    void* v31;  // rdx
    unsigned long long v32;  // rsi
    unsigned long long v33;  // rax
    unsigned long v34;  // rbx

    uu_tee::uu_app(&(char)v11);
    v5.try_get_matches_from(&(char)v11, a0, a1);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1.from();
    v4 = *((long long *)&v9);
    v3 = v8;
    v2 = v7;
    v0 = v5;
    v1 = v6;
    v21 = v0.get_flag("appendignore-interruptsignore-pipe-errorsoutput-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ", 6);
    v22 = v0.get_flag("ignore-interruptsignore-pipe-errorsoutput-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ", 17);
    v23 = v0.get_flag("ignore-pipe-errorsoutput-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ", 18);
    if ((char)v0.contains_id("output-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ", 12))
    {
        (char)v11.try_get_one(&v0, "output-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ", 12);
        v24 = "output-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ".unwrap(12, &(char)v11);
        v25 = 1;
        if (v24)
        {
            v26 = v24[1].call_once(v24[2]);
            if (!(char)v26.equal(v27, "warnmanyZero", 4) && !(char)v26.equal(v27, "warn-nopipeexit-nopipeappendignore-interruptsignore-pipe-errorsoutput-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ", 11))
            {
                v25 = 2;
                if (!(char)v26.equal(v27, "exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPE", 4))
                {
                    v25 = 3;
                    if (!(char)v26.equal(v27, "exit-nopipeappendignore-interruptsignore-pipe-errorsoutput-error/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsError flushing stdout: uu_teeLocalization parse error at Could not init the localization system: ", 11))
                        core::panicking::panic("internal error: entered unreachable codeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 40, &g_57ac10); /* do not return */
                }
            }
        }
    }
    (char)v11.try_get_many(&v0, "filesizei128", 4);
    v5.unwrap("filesizei128", 4, &(char)v11);
    if (v5)
    {
        v28 = *((int128_t *)&v5);
        v19 = v9;
        v18 = v8;
        v13 = v7;
        v11 = v28;
        v10.from_iter(&(char)v11, &g_57ac28);
    }
    else
    {
        v29 = 8;
        v30 = 0;
        v31 = 0;
    }
    v14 = v21;
    v15 = v22;
    v16 = v23;
    v11 = v30;
    v12 = v29;
    v13 = v31;
    v17 = v25;
    v33 = uu_tee::tee(&v11, v32, v31, v30);
    v34 = (!v33 ? 0 : uu_tee::uumain::uumain::{{closure}}(v33));
    core::ptr::drop_in_place<uu_tee::Options>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v34;
}
