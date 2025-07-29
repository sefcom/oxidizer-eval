long long uu_ln::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned long long v1;  // [bp-0xab0]
    unsigned long long v2;  // [bp-0xaa8]
    char v3;  // [bp-0xaa0]
    unsigned int v4;  // [bp-0x828]
    char v5;  // [bp-0x824]
    unsigned long long v6;  // [bp-0x7e4]
    unsigned int v7;  // [bp-0x7dc]
    char v8;  // [bp-0x7d8]
    unsigned int v9;  // [bp-0x560]
    unsigned int v10;  // [bp-0x55c]
    char v11;  // [bp-0x558]
    unsigned long v12;  // [bp-0x29c]
    unsigned int v13;  // [bp-0x294]
    char v14;  // [bp-0x290]
    unsigned long long v17;  // rdx

    v3.new(uucore::util_name(), v17);
    v11.version(&v3, "(uutils coreutils) 0.1.0forceln-help-forceinteractiveln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root", 24);
    uucore::mods::locale::get_message(&v8, "ln-about'; only all-args", 8);
    v3.about(&v11, &v8);
    uucore::mods::locale::get_message(&v0, "ln-usage", 8);
    uucore::format_usage(&v8, v1, v2);
    v11.override_usage(&v3, &v8);
    memcpy(&v3, &v11, 700);
    v6 = 549755814016 | v12;
    v7 = v13;
    uucore::features::backup_control::arguments::backup(&v8);
    v11.arg(&v3, &v8);
    uucore::features::backup_control::arguments::backup_no_args(&v8);
    v3.arg(&v11, &v8);
    v11.new("forceln-help-forceinteractiveln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nigh", 5);
    v8.short(&v11, 102);
    v11.long(&v8, "forceln-help-forceinteractiveln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nigh", 5);
    uucore::mods::locale::get_message(&v14, "ln-help-forceinteractiveln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2", 13);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new("interactiveln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86", 11);
    v8.short(&v3, 105);
    v3.long(&v8, "interactiveln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86", 11);
    uucore::mods::locale::get_message(&v14, "ln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown", 19);
    v8.help(&v3, &v14);
    v14.action(&v8, 2);
    v3.arg(&v11, &v14);
    v11.new("no-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust", 14);
    v8.short(&v11, 110);
    v11.long(&v8, "no-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust", 14);
    uucore::mods::locale::get_message(&v14, "ln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/l", 22);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new("logicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_", 7);
    v8.short(&v3, 76);
    v3.long(&v8, "logicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_", 7);
    uucore::mods::locale::get_message(&v14, "ln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/byt", 15);
    v8.help(&v3, &v14);
    v3.overrides_with(&v8, "physical", 8);
    v8.action(&v3, 2);
    v3.arg(&v11, &v8);
    v11.new("physical", 8);
    v8.short(&v11, 80);
    v11.long(&v8, "physical", 8);
    uucore::mods::locale::get_message(&v14, "ln-help-physical", 16);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new("symbolicEALREADY", 8);
    v8.short(&v3, 115);
    v3.long(&v8, "symbolicEALREADY", 8);
    uucore::mods::locale::get_message(&v14, "ln-help-symbolic", 16);
    v8.help(&v3, &v14);
    v3.overrides_with(&v8, "symbolicEALREADY", 8);
    v8.action(&v3, 2);
    v3.arg(&v11, &v8);
    uucore::features::backup_control::arguments::suffix(&v8);
    v11.arg(&v3, &v8);
    v3.new("target-directory", 16);
    v8.short(&v3, 116);
    v3.long(&v8, "target-directory", 16);
    uucore::mods::locale::get_message(&v14, "ln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 24);
    v8.help(&v3, &v14);
    v3.value_name(&v8);
    v8.value_hint(&v3, 4);
    v14.conflicts_with(&v8, "no-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 19);
    v3.arg(&v11, &v14);
    v11.new("no-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 19);
    v8.short(&v11, 84);
    v11.long(&v8, "no-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 19);
    uucore::mods::locale::get_message(&v14, "ln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 27);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new("relative", 8);
    v8.short(&v3, 114);
    v3.long(&v8, "relative", 8);
    uucore::mods::locale::get_message(&v14, "ln-help-relative", 16);
    v8.help(&v3, &v14);
    v3.requires(&v8, "symbolicEALREADY", 8);
    v8.action(&v3, 2);
    v3.arg(&v11, &v8);
    v11.new("verboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
    v8.short(&v11, 118);
    v11.long(&v8, "verboseln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 7);
    uucore::mods::locale::get_message(&v14, "ln-help-verbose.src/uu/ln/src/ln.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 15);
    v8.help(&v11, &v14);
    v14.action(&v8, 2);
    v11.arg(&v3, &v14);
    v3.new("files(uutils coreutils) 0.1.0forceln-help-forceinteractiveln-help-interactiveno-dereferenceln-help-no-dereferencelogicalln-help-logicalln-help-target-directoryDIRECTORYno-target-directoryln-help-no-target-directoryverboseln-help-verbose.src/uu/ln/src/ln.rs", 5);
    v8.action(&v3, 1);
    v3.value_hint(&v8, 2);
    memcpy(&v8, &v3, 632);
    v9 = v4 | 1;
    v10 = *((int *)&v5);
    v3.num_args(&v8);
    a0.arg(&v11, &v3);
    ::0x4a2ed0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
