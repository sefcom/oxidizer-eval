long long uu_realpath::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac8]
    unsigned long long v1;  // [bp-0xac0]
    unsigned long long v2;  // [bp-0xab8]
    char v3;  // [bp-0xab0]
    unsigned int v4;  // [bp-0x838]
    unsigned int v5;  // [bp-0x834]
    unsigned long long v6;  // [bp-0x7f4]
    unsigned int v7;  // [bp-0x7ec]
    char v8;  // [bp-0x7e8]
    unsigned long v9;  // [bp-0x52c]
    unsigned int v10;  // [bp-0x524]
    char v11;  // [bp-0x520]
    unsigned int v12;  // [bp-0x2a8]
    unsigned int v13;  // [bp-0x2a4]
    char v14;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x298]
    unsigned long long v16;  // [bp-0x290]
    unsigned long long v17;  // [bp-0x288]
    unsigned long long v20;  // rdx

    v3.new(uucore::util_name(), v20);
    v8.version(&v3, "(uutils coreutils) 0.1.0realpath-aboutrealpath-usagequietrealpath-help-quietstripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingr", 24);
    uucore::mods::locale::get_message(&v11, "realpath-aboutrealpath-usagequietrealpath-help-quietstripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicaliz", 14);
    v3.about(&v8, &v11);
    uucore::mods::locale::get_message(&v0, "realpath-usagequietrealpath-help-quietstripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelat", 14);
    uucore::format_usage(&v11, v1, v2);
    v8.override_usage(&v3, &v11);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | v9;
    v7 = v10;
    v8.new("quietrealpath-help-quietstripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealp", 5);
    v11.short(&v8, 113);
    v8.long(&v11, "quietrealpath-help-quietstripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealp", 5);
    uucore::mods::locale::get_message(&v14, "realpath-help-quietstripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-h", 19);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("stripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torela", 5);
    v11.short(&v3, 115);
    v3.long(&v11, "stripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torela", 5);
    v11.visible_alias(&v3, "no-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-", 11);
    uucore::mods::locale::get_message(&v14, "realpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpat", 19);
    v3.help(&v11, &v14);
    v11.action(&v3, 2);
    v3.arg(&v8, &v11);
    v8.new("zeroAnsi -- ", 4);
    v11.short(&v8, 122);
    v8.long(&v11, "zeroAnsi -- ", 4);
    uucore::mods::locale::get_message(&v14, "realpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-bas", 18);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("logicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo", 7);
    v11.short(&v3, 76);
    v3.long(&v11, "logicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo", 7);
    uucore::mods::locale::get_message(&v14, "realpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/regist", 21);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("physical", 8);
    v11.short(&v8, 80);
    v8.long(&v11, "physical", 8);
    v14 = "stripno-symlinksrealpath-help-striprealpath-help-zerologicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torela";
    v15 = 5;
    v16 = "logicalrealpath-help-logicalrealpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo";
    v17 = 7;
    v11.overrides_with_all(&v8, &v14);
    uucore::mods::locale::get_message(&v14, "realpath-help-physicalcanonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.i", 22);
    v8.help(&v11, &v14);
    v11.action(&v8, 2);
    v8.arg(&v3, &v11);
    v3.new("canonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/cla", 21);
    v11.short(&v3, 101);
    v3.long(&v11, "canonicalize-existingrealpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/cla", 21);
    uucore::mods::locale::get_message(&v14, "realpath-help-canonicalize-existingcanonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/", 35);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("canonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolc", 20);
    v11.short(&v8, 109);
    v8.long(&v11, "canonicalize-missingrealpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolc", 20);
    uucore::mods::locale::get_message(&v14, "realpath-help-canonicalize-missingrelative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-0", 34);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("relative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/", 11);
    v11.long(&v3, "relative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/", 11);
    v3.value_name(&v11);
    v11.value_parser(&v3);
    uucore::mods::locale::get_message(&v3, "realpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/ru", 25);
    v14.help(&v11, &v3);
    v3.arg(&v8, &v14);
    v8.new("relative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/", 13);
    v11.long(&v8, "relative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/", 13);
    v8.value_name(&v11);
    v11.value_parser(&v8);
    uucore::mods::locale::get_message(&v8, "realpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterat", 27);
    v14.help(&v11, &v8);
    v8.arg(&v3, &v14);
    v3.new("files/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/builder/arg.rscapacity overflow", 5);
    v11.action(&v3, 1);
    memcpy(&v3, &v11, 632);
    v4 = v12 | 1;
    v5 = v13;
    v11.value_parser(&v3);
    v3.value_hint(&v11, 2);
    a0.arg(&v8, &v3);
    ::0x49f450::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
