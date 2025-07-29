long long uu_basename::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x858]
    char v1;  // [bp-0x840]
    unsigned long long v2;  // [bp-0x838]
    unsigned long long v3;  // [bp-0x830]
    char v4;  // [bp-0x828]
    unsigned int v5;  // [bp-0x5b0]
    unsigned int v6;  // [bp-0x5ac]
    char v7;  // [bp-0x5a8]
    unsigned int v8;  // [bp-0x330]
    char v9;  // [bp-0x32c]
    unsigned long long v10;  // [bp-0x2ec]
    unsigned int v11;  // [bp-0x2e4]
    char v12;  // [bp-0x2e0]
    unsigned long v13;  // [bp-0x24]
    char v14;  // [bp-0x1c]
    unsigned long long v17;  // rdx

    v7.new(uucore::util_name(), v17);
    v12.version(&v7);
    uucore::mods::locale::get_message(&v4, "basename-aboutbasename-usagebasename-help-multipleSUFFIXbasename-help-suffixbasename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly", 14);
    v7.about(&v12, &v4);
    uucore::mods::locale::get_message(&v1, "basename-usagebasename-help-multipleSUFFIXbasename-help-suffixbasename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x8", 14);
    uucore::format_usage(&v4, v2, v3);
    v12.override_usage(&v7, &v4);
    memcpy(&v7, &v12, 700);
    v10 = 549755814016 | v13;
    v11 = *((int *)&v14);
    v12.new("multipleNO_COLOR", 8);
    v4.short(&v12, 97);
    v12.long(&v4, "multipleNO_COLOR", 8);
    uucore::mods::locale::get_message(&v0, "basename-help-multipleSUFFIXbasename-help-suffixbasename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-l", 22);
    v4.help(&v12, &v0);
    v12.action(&v4, 2);
    v4.overrides_with(&v12, "multipleNO_COLOR", 8);
    v12.arg(&v7, &v4);
    v7.new("name", 4);
    v4.action(&v7, 1);
    v7.value_hint(&v4, 2);
    memcpy(&v4, &v7, 632);
    v5 = 516 | v8;
    v6 = *((int *)&v9);
    v7.arg(&v12, &v4);
    v12.new("suffix(uutils coreutils) 0.1.0basename-aboutbasename-usagebasename-help-multipleSUFFIXbasename-help-suffixbasename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/r", 6);
    v4.short(&v12, 115);
    v12.long(&v4, "suffix(uutils coreutils) 0.1.0basename-aboutbasename-usagebasename-help-multipleSUFFIXbasename-help-suffixbasename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/r", 6);
    v4.value_name(&v12);
    uucore::mods::locale::get_message(&v0, "basename-help-suffixbasename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rus", 20);
    v12.help(&v4, &v0);
    v4.overrides_with(&v12, "suffix(uutils coreutils) 0.1.0basename-aboutbasename-usagebasename-help-multipleSUFFIXbasename-help-suffixbasename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/r", 6);
    v12.arg(&v7, &v4);
    v7.new("zeroAnsi -- ", 4);
    v4.short(&v7, 122);
    v7.long(&v4, "zeroAnsi -- ", 4);
    uucore::mods::locale::get_message(&v0, "basename-help-zerosrc/uu/basename/src/basename.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rscapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/builder/arg.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sync/once.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/str/pattern.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nigh", 18);
    v4.help(&v7, &v0);
    v7.action(&v4, 2);
    v4.overrides_with(&v7, "zeroAnsi -- ", 4);
    a0.arg(&v12, &v4);
    ::0x49b940::core::ptr::drop_in_place<alloc::string::String>(&v1);
    return a0;
}
