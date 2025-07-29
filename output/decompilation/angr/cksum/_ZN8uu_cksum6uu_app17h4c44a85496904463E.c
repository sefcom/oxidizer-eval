long long uu_cksum::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad0]
    unsigned long long v1;  // [bp-0xac8]
    unsigned long long v2;  // [bp-0xac0]
    char v3;  // [bp-0xab8]
    unsigned int v4;  // [bp-0x840]
    unsigned int v5;  // [bp-0x83c]
    char v6;  // [bp-0x838], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x830]
    unsigned long long v8;  // [bp-0x828]
    unsigned long long v9;  // [bp-0x820]
    unsigned int v10;  // [bp-0x5c0]
    char v11;  // [bp-0x5bc]
    unsigned long long v12;  // [bp-0x57c]
    unsigned int v13;  // [bp-0x574]
    char v14;  // [bp-0x570], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x568]
    unsigned long long v16;  // [bp-0x560]
    unsigned long long v17;  // [bp-0x558]
    unsigned int v18;  // [bp-0x2f8]
    char v19;  // [bp-0x2f4]
    unsigned long v20;  // [bp-0x2b4]
    unsigned int v21;  // [bp-0x2ac]
    unsigned long long v22;  // [bp-0x2a8]
    unsigned long long v23;  // [bp-0x2a0]
    unsigned long long v24;  // [bp-0x298]
    unsigned long long v25;  // [bp-0x290]
    unsigned long long v28;  // rdx

    v6.new(uucore::util_name(), v28);
    v14.version(&v6);
    uucore::mods::locale::get_message(&v3, "cksum-aboutcksum-usagealgorithmcksum-help-algorithmALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3cksum-help-untaggedtagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-he", 11);
    v6.about(&v14, &v3);
    uucore::mods::locale::get_message(&v0, "cksum-usagealgorithmcksum-help-algorithmALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3cksum-help-untaggedtagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstat", 11);
    uucore::format_usage(&v3, v1, v2);
    v14.override_usage(&v6, &v3);
    memcpy(&v6, &v14, 700);
    v12 = 584115552392 | v20;
    v13 = v21;
    v14.new("filesizei128", 4);
    memcpy(&v3, &v14, 632);
    v4 = v18 | 4;
    v5 = *((int *)&v19);
    v14.action(&v3, 1);
    v22 = 2;
    v3.value_parser(&v14, &v22);
    v22.value_hint(&v3, 3);
    v14.arg(&v6, &v22);
    v6.new("algorithmcksum-help-algorithmALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3cksum-help-untaggedtagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksu", 9);
    v3.long(&v6, "algorithmcksum-help-algorithmALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3cksum-help-untaggedtagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksu", 9);
    v6.short(&v3, 97);
    uucore::mods::locale::get_message(&v22, "cksum-help-algorithmALGORITHMbsdcrccrc32bmd5sha224sha256sha384sha512blake2bblake3sm3cksum-help-untaggedtagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-st", 20);
    v3.help(&v6, &v22);
    v6.value_name(&v3);
    memcpy(&v22, &g_60ee40, 0x100);
    v3.value_parser(&v6, &v22);
    v6.arg(&v14, &v3);
    v14.new("untagged0", 8);
    v3.long(&v14, "untagged0", 8);
    uucore::mods::locale::get_message(&v22, "cksum-help-untaggedtagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/n", 19);
    v14.help(&v3, &v22);
    v3.action(&v14, 2);
    v22.overrides_with(&v3, "tagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x", 3);
    v14.arg(&v6, &v22);
    v6.new("tagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x", 3);
    v3.long(&v6, "tagcksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x", 3);
    uucore::mods::locale::get_message(&v22, "cksum-help-taglengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_", 14);
    v6.help(&v3, &v22);
    v3.action(&v6, 2);
    v22.overrides_with(&v3, "untagged0", 8);
    v6.arg(&v14, &v22);
    v14.new("lengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-lin", 6);
    v3.long(&v14, "lengthcksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-lin", 6);
    v22 = 4;
    v23 = ::0x4d9bc0::alloc::boxed::Box<T>::new();
    v24 = &g_60ef40;
    v14.value_parser(&v3, &v22);
    v3.short(&v14, 108);
    uucore::mods::locale::get_message(&v22, "cksum-help-lengthrawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu", 17);
    v14.help(&v3, &v22);
    v3.action(&v14, 0);
    v14.arg(&v6, &v3);
    v6.new("rawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/", 3);
    v3.long(&v6, "rawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/", 3);
    uucore::mods::locale::get_message(&v22, "cksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rus", 14);
    v6.help(&v3, &v22);
    v3.action(&v6, 2);
    v6.arg(&v14, &v3);
    v14.new("strictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core", 6);
    v3.long(&v14, "strictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core", 6);
    uucore::mods::locale::get_message(&v22, "cksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/i", 17);
    v14.help(&v3, &v22);
    v3.action(&v14, 2);
    v14.arg(&v6, &v3);
    v6.new("checkbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterat", 5);
    v3.short(&v6, 99);
    v6.long(&v3, "checkbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterat", 5);
    uucore::mods::locale::get_message(&v22, "cksum-help-check", 16);
    v3.help(&v6, &v22);
    v22.action(&v3, 2);
    v6.arg(&v14, &v22);
    v14.new("base64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v3.long(&v14, "base64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    uucore::mods::locale::get_message(&v22, "cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 17);
    v14.help(&v3, &v22);
    v3.action(&v14, 2);
    v22.conflicts_with(&v3, "rawcksum-help-rawstrictcksum-help-strictcheckbase64cksum-help-base64binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/", 3);
    v14.arg(&v6, &v22);
    v6.new("textSomedumb", 4);
    v3.long(&v6, "textSomedumb", 4);
    v6.short(&v3, 116);
    memcpy(&v3, &v6, 632);
    v4 = v10 | 4;
    v5 = *((int *)&v11);
    v6.overrides_with(&v3, "binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v3.action(&v6, 2);
    v6.arg(&v14, &v3);
    v14.new("binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v3.long(&v14, "binarycksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v14.short(&v3, 98);
    memcpy(&v3, &v14, 632);
    v4 = v18 | 4;
    v5 = *((int *)&v19);
    v14.overrides_with(&v3, "textSomedumb", 4);
    v3.action(&v14, 2);
    v14.arg(&v6, &v3);
    v6.new("warnZeromany", 4);
    v3.short(&v6, 119);
    v6.long(&v3, "warnZeromany", 4);
    uucore::mods::locale::get_message(&v22, "cksum-help-warnstatusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15);
    v3.help(&v6, &v22);
    v6.action(&v3, 2);
    v22 = "statusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v23 = 6;
    v24 = "quietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v25 = 5;
    v3.overrides_with_all(&v6, &v22);
    v6.arg(&v14, &v3);
    v14.new("statusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v3.long(&v14, "statusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    uucore::mods::locale::get_message(&v22, "cksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 17);
    v14.help(&v3, &v22);
    v3.action(&v14, 2);
    v14 = "warnZeromany";
    v15 = 4;
    v16 = "quietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v17 = 5;
    v22.overrides_with_all(&v3, &v14);
    v14.arg(&v6, &v22);
    v6.new("quietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
    v3.long(&v6, "quietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
    uucore::mods::locale::get_message(&v22, "cksum-help-quiet", 16);
    v6.help(&v3, &v22);
    v3.action(&v6, 2);
    v6 = "warnZeromany";
    v7 = 4;
    v8 = "statusquietcksum-help-statusignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs";
    v9 = 6;
    v22.overrides_with_all(&v3, &v6);
    v6.arg(&v14, &v22);
    v14.new("ignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 14);
    v3.long(&v14, "ignore-missingcksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 14);
    uucore::mods::locale::get_message(&v22, "cksum-help-ignore-missingcksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 25);
    v14.help(&v3, &v22);
    v3.action(&v14, 2);
    v14.arg(&v6, &v3);
    v6.new("zeroAnsi -- ", 4);
    v3.long(&v6, "zeroAnsi -- ", 4);
    v6.short(&v3, 122);
    uucore::mods::locale::get_message(&v22, "cksum-help-zero/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15);
    v3.help(&v6, &v22);
    v22.action(&v3, 2);
    v6.arg(&v14, &v22);
    uucore::mods::locale::get_message(&v14, "cksum-after-help", 16);
    a0.after_help(&v6, &v14);
    ::0x4d9020::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
