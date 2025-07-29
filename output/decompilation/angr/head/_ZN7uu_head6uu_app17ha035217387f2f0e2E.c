long long uu_head::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8]
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned int v4;  // [bp-0x838]
    unsigned int v5;  // [bp-0x834]
    char v6;  // [bp-0x830], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x828]
    unsigned long long v8;  // [bp-0x820]
    unsigned long long v9;  // [bp-0x818]
    unsigned int v10;  // [bp-0x5b8]
    unsigned int v11;  // [bp-0x5b4]
    char v12;  // [bp-0x5b0]
    unsigned long long v13;  // [bp-0x2f4]
    unsigned int v14;  // [bp-0x2ec]
    char v15;  // [bp-0x2e8]
    unsigned int v16;  // [bp-0x70]
    char v17;  // [bp-0x6c]
    unsigned long v18;  // [bp-0x2c]
    char v19;  // [bp-0x24]
    unsigned long long v22;  // rdx

    v12.new(uucore::util_name(), v22);
    v15.version(&v12, "(uutils coreutils) 0.1.0head-abouthead-usageBYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminat", 24);
    uucore::mods::locale::get_message(&v3, "head-abouthead-usageBYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-", 10);
    v12.about(&v15, &v3);
    uucore::mods::locale::get_message(&v0, "head-usageBYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-", 10);
    uucore::format_usage(&v3, v1, v2);
    v15.override_usage(&v12, &v3);
    memcpy(&v12, &v15, 700);
    v13 = 549755814016 | v18;
    v14 = *((int *)&v19);
    v15.new("BYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-inva", 5);
    v3.short(&v15, 99);
    v15.long(&v3, "bytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-l", 5);
    v3.value_name(&v15);
    uucore::mods::locale::get_message(&v6, "head-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/", 15);
    v15.help(&v3, &v6);
    v6 = "BYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-inva";
    v7 = 5;
    v8 = "LINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolcha";
    v9 = 5;
    v3.overrides_with_all(&v15, &v6);
    memcpy(&v6, &v3, 632);
    v10 = v4 | 32;
    v11 = v5;
    v15.arg(&v12, &v6);
    v12.new("LINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolcha", 5);
    v3.short(&v12, 110);
    v12.long(&v3, "lineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/n", 5);
    v3.value_name(&v12);
    uucore::mods::locale::get_message(&v6, "head-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightl", 15);
    v12.help(&v3, &v6);
    v6 = "LINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolcha";
    v7 = 5;
    v8 = "BYTESbytes[-]NUMhead-help-bytesLINESlineshead-help-linesQUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-inva";
    v9 = 5;
    v3.overrides_with_all(&v12, &v6);
    memcpy(&v6, &v3, 632);
    v10 = v4 | 32;
    v11 = v5;
    v12.arg(&v15, &v6);
    v15.new("QUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x8", 5);
    v3.short(&v15, 113);
    v15.long(&v3, "quietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-", 5);
    v3.visible_alias(&v15, "silenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unkno", 6);
    uucore::mods::locale::get_message(&v6, "head-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-lin", 15);
    v15.help(&v3, &v6);
    v6 = "VERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust";
    v7 = 7;
    v8 = "QUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x8";
    v9 = 5;
    v3.overrides_with_all(&v15, &v6);
    v6.action(&v3, 2);
    v15.arg(&v12, &v6);
    v12.new("VERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust", 7);
    v3.short(&v12, 118);
    v12.long(&v3, "verbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src", 7);
    uucore::mods::locale::get_message(&v6, "head-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/l", 17);
    v3.help(&v12, &v6);
    v6 = "QUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x8";
    v7 = 5;
    v8 = "VERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust";
    v9 = 7;
    v12.overrides_with_all(&v3, &v6);
    v3.action(&v12, 2);
    v12.arg(&v15, &v3);
    v15.new("-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/i", 19);
    v3.long(&v15, "presume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator", 18);
    v15.alias(&v3, "-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 19);
    memcpy(&v3, &v15, 632);
    v4 = v16 | 4;
    v5 = *((int *)&v17);
    v6.action(&v3, 2);
    v15.arg(&v12, &v6);
    v12.new("ZEROkeysu128", 4);
    v3.short(&v12, 122);
    v12.long(&v3, "zero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15);
    uucore::mods::locale::get_message(&v6, "head-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 25);
    v3.help(&v12, &v6);
    v12.overrides_with(&v3, "ZEROkeysu128", 4);
    v3.action(&v12, 2);
    v12.arg(&v15, &v3);
    v15.new("FILEchar", 4);
    v3.action(&v15, 1);
    v15.value_hint(&v3, 3);
    a0.arg(&v12, &v15);
    ::0x4ac0f0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
