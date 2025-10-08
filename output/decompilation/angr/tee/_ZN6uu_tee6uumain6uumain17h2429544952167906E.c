long long uu_tee::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3a8]
    unsigned long long v1;  // [bp-0x3a0]
    int v2;  // [bp-0x398]
    char v3;  // [bp-0x388]
    unsigned long long v4;  // [bp-0x378]
    char v5;  // [bp-0x370], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x368]
    int v7;  // [bp-0x360]
    char v8;  // [bp-0x350]
    unsigned long long v9;  // [bp-0x340]
    char v10;  // [bp-0x338]
    void* v11;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v12;  // [bp-0x2f0]
    void* v13;  // [bp-0x2e8]
    char v14;  // [bp-0x2e0]
    char v15;  // [bp-0x2df]
    char v16;  // [bp-0x2de]
    char v17;  // [bp-0x2dd]
    unsigned long long v19;  // rdi
    char v20;  // al
    char v21;  // al
    char v22;  // al
    unsigned long long v23[3];  // rax
    char v24;  // r13b
    unsigned long long v25;  // r15
    unsigned long long v26;  // r12
    unsigned long long v27;  // rax
    void* v28;  // rcx
    void* v29;  // rdx
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rax
    unsigned long v32;  // rbx

    uu_tee::uu_app(&v11);
    v5.try_get_matches_from(&v11, a0, a1);
    v19 = v6;
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v1.from();
    v4 = v9;
    memcpy(&v3, &v8, 16);
    v2 = v7;
    v0 = v5;
    v1 = v6;
    v20 = v0.get_flag("appendignore-interruptsignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6);
    v21 = v0.get_flag("ignore-interruptsignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 17);
    v22 = v0.get_flag("ignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 18);
    if ((char)v0.contains_id("output-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 12))
    {
        v11.try_get_one(&v0);
        v23 = v11.unwrap();
        v24 = 1;
        if (v23)
        {
            v25 = v23[1];
            v26 = v23[2];
            if (!(char)v25.equal(v26, "warnZero", 4) && !(char)v25.equal(v26, "warn-nopipeexit-nopipeappendignore-interruptsignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 11))
            {
                v24 = 2;
                if (!(char)v25.equal(v26, "exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4))
                {
                    v24 = 3;
                    if (!(char)v25.equal(v26, "exit-nopipeappendignore-interruptsignore-pipe-errorsoutput-error/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 11))
                        core::panicking::panic("internal error: entered unreachable code/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/ptr/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/exact_size.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/vec/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec/mod.rsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE) = ", 40, &g_4e9958); /* do not return */
                }
            }
        }
    }
    v11.try_get_many(&v0);
    v10.unwrap(&v11);
    if (*((long long *)&v10))
    {
        v11.collect(&v10);
    }
    else
    {
        v27 = 8;
        v28 = 0;
        v29 = 0;
    }
    v14 = v20;
    v15 = v21;
    v16 = v22;
    v11 = v28;
    v12 = v27;
    v13 = v29;
    v17 = v24;
    v31 = uu_tee::tee(&v11, v30, v29);
    v32 = (!v31 ? 0 : uu_tee::uumain::uumain::{{closure}}(v31));
    core::ptr::drop_in_place<uu_tee::Options>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v0);
    return v32;
}
