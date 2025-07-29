long long uu_mktemp::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad8]
    unsigned long long v1;  // [bp-0xad0]
    unsigned long long v2;  // [bp-0xac8]
    unsigned long long v3;  // [bp-0xac0]
    unsigned long long v4;  // [bp-0xab8]
    unsigned long long v5;  // [bp-0xab0]
    char v6;  // [bp-0xaa8]
    unsigned int v7;  // [bp-0x830]
    unsigned int v8;  // [bp-0x82c]
    char v9;  // [bp-0x828]
    unsigned int v10;  // [bp-0x5b0]
    char v11;  // [bp-0x5ac]
    unsigned long long v12;  // [bp-0x56c]
    unsigned int v13;  // [bp-0x564]
    char v14;  // [bp-0x560]
    unsigned long v15;  // [bp-0x2a4]
    unsigned int v16;  // [bp-0x29c]
    void* v17;  // [bp-0x298], Other Possible Types: char, unsigned long long
    unsigned long long v18;  // [bp-0x290]
    char v19;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v22;  // rdx

    v9.new(uucore::util_name(), v22);
    v14.version(&v9, "(uutils coreutils) 0.1.0mktemp-aboutmktemp-usagemktemp-help-directorymktemp-help-dry-runmktemp-help-quietmktemp-help-suffixSUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 24);
    uucore::mods::locale::get_message(&v6, "mktemp-aboutmktemp-usagemktemp-help-directorymktemp-help-dry-runmktemp-help-quietmktemp-help-suffixSUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 12);
    v9.about(&v14, &v6);
    uucore::mods::locale::get_message(&v0, "mktemp-usagemktemp-help-directorymktemp-help-dry-runmktemp-help-quietmktemp-help-suffixSUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 12);
    uucore::format_usage(&v6, v1, v2);
    v14.override_usage(&v9, &v6);
    memcpy(&v9, &v14, 700);
    v12 = 549755814016 | v15;
    v13 = v16;
    v14.new("directorydry-runquietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 9);
    v6.short(&v14, 100);
    v14.long(&v6, "directorydry-runquietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 9);
    uucore::mods::locale::get_message(&v17, "mktemp-help-directorymktemp-help-dry-runmktemp-help-quietmktemp-help-suffixSUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 21);
    v6.help(&v14, &v17);
    v17.action(&v6);
    v14.arg(&v9, &v17);
    v9.new("dry-runquietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
    v6.short(&v9, 117);
    v9.long(&v6, "dry-runquietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
    uucore::mods::locale::get_message(&v17, "mktemp-help-dry-runmktemp-help-quietmktemp-help-suffixSUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 19);
    v6.help(&v9, &v17);
    v17.action(&v6);
    v9.arg(&v14, &v17);
    v14.new("quietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 5);
    v6.short(&v14, 113);
    v14.long(&v6, "quietsuffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 5);
    uucore::mods::locale::get_message(&v17, "mktemp-help-quietmktemp-help-suffixSUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 17);
    v6.help(&v14, &v17);
    v17.action(&v6);
    v14.arg(&v9, &v17);
    v9.new("suffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    v6.long(&v9, "suffixtmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    uucore::mods::locale::get_message(&v17, "mktemp-help-suffixSUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 18);
    v9.help(&v6, &v17);
    v6.value_name(&v9, "SUFFIXmktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 6);
    v9.arg(&v14, &v6);
    v14.new("pt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1);
    v6.short(&v14, 112);
    uucore::mods::locale::get_message(&v17, "mktemp-help-pDIRmktemp-help-tmpdirmktemp-help-tX", 13);
    v14.help(&v6, &v17);
    v6.value_name(&v14, "DIRmktemp-help-tmpdirmktemp-help-tX", 3);
    v14.num_args(&v6);
    v3 = 3;
    v19 = v5;
    v17 = v3;
    v18 = v4;
    v6.value_parser(&v14, &v17);
    v17.value_hint(&v6, 4);
    v14.arg(&v9, &v17);
    v9.new("tmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    v6.long(&v9, "tmpdirpt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 6);
    uucore::mods::locale::get_message(&v17, "mktemp-help-tmpdirmktemp-help-tX", 18);
    v9.help(&v6, &v17);
    v6.value_name(&v9, "DIRmktemp-help-tmpdirmktemp-help-tX", 3);
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v9.num_args(&v6, &v17);
    memcpy(&v6, &v9, 632);
    v7 = 128 | v10;
    v8 = *((int *)&v11);
    v9.overrides_with(&v6, "pt/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1);
    v6.value_parser(&v9, &v3);
    v17.value_hint(&v6, 4);
    v9.arg(&v14, &v17);
    v14.new("t/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 1);
    v6.short(&v14, 116);
    uucore::mods::locale::get_message(&v17, "mktemp-help-tX", 13);
    v14.help(&v6, &v17);
    v6.action(&v14);
    v14.arg(&v9, &v6);
    v9.new("template", 8);
    v6.num_args(&v9);
    a0.arg(&v14, &v6);
    ::0x4a6570::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
