long long uu_ptx::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    int v3;  // [bp-0xaa8], Other Possible Types: char
    int v4;  // [bp-0xa98]
    int v5;  // [bp-0xa88]
    unsigned int v6;  // [bp-0x830]
    unsigned int v7;  // [bp-0x82c]
    unsigned long long v8;  // [bp-0x7ec]
    unsigned int v9;  // [bp-0x7e4]
    char v10;  // [bp-0x7e0]
    unsigned int v11;  // [bp-0x568]
    unsigned int v12;  // [bp-0x564]
    char v13;  // [bp-0x560]
    unsigned int v14;  // [bp-0x2e8]
    char v15;  // [bp-0x2e4]
    unsigned long v16;  // [bp-0x2a4]
    unsigned int v17;  // [bp-0x29c]
    char v18;  // [bp-0x298], Other Possible Types: unsigned long long
    int v19;  // [bp-0x298]
    int v20;  // [bp-0x298]
    unsigned long long v21;  // [bp-0x290]
    int v22;  // [bp-0x288], Other Possible Types: unsigned long long
    int v23;  // [bp-0x288]
    unsigned long long v24;  // [bp-0x280]
    int v25;  // [bp-0x278]
    unsigned long long v28;  // rdx

    v3.new(uucore::util_name(), v28);
    uucore::mods::locale::get_message(&v10, "ptx-about(uutils coreutils) 0.1.0ptx-usageptx-help-auto-referenceptx-help-traditionalptx-help-flag-truncationSTRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-", 9);
    v13.about(&v3, &v10);
    v3.version(&v13, "(uutils coreutils) 0.1.0ptx-usageptx-help-auto-referenceptx-help-traditionalptx-help-flag-truncationSTRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-igno", 24);
    uucore::mods::locale::get_message(&v0, "ptx-usageptx-help-auto-referenceptx-help-traditionalptx-help-flag-truncationSTRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-size", 9);
    uucore::format_usage(&v10, v1, v2);
    v13.override_usage(&v3, &v10);
    memcpy(&v3, &v13, 700);
    v8 = 549755814016 | v16;
    v9 = v17;
    v13.new(_ZN6uu_ptx7options4FILE17h12bd290e3023dffcE, g_73bfa0);
    memcpy(&v10, &v13, 632);
    v11 = v14 | 4;
    v12 = *((int *)&v15);
    v13.action(&v10, 1);
    v10.value_hint(&v13, 3);
    v13.arg(&v3, &v10);
    v3.new(_ZN6uu_ptx7options14AUTO_REFERENCE17hdd8addcc16e3f236E, g_73bfb0);
    v10.short(&v3, 65);
    v3.long(&v10, _ZN6uu_ptx7options14AUTO_REFERENCE17hdd8addcc16e3f236E, g_73bfb0);
    uucore::mods::locale::get_message(&v18, "ptx-help-auto-referenceptx-help-traditionalptx-help-flag-truncationSTRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx", 23);
    v10.help(&v3, &v18);
    v18.action(&v10, 2);
    v3.arg(&v13, &v18);
    v13.new(_ZN6uu_ptx7options11TRADITIONAL17hcddd6359eb5d9aaeE, g_73bfc0);
    v10.short(&v13, 71);
    v13.long(&v10, _ZN6uu_ptx7options11TRADITIONAL17hcddd6359eb5d9aaeE, g_73bfc0);
    uucore::mods::locale::get_message(&v18, "ptx-help-traditionalptx-help-flag-truncationSTRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-he", 20);
    v10.help(&v13, &v18);
    v18.action(&v10, 2);
    v13.arg(&v3, &v18);
    v3.new(_ZN6uu_ptx7options15FLAG_TRUNCATION17h7f4ddb7be9e03604E, g_73bfd0);
    v10.short(&v3, 70);
    v3.long(&v10, _ZN6uu_ptx7options15FLAG_TRUNCATION17h7f4ddb7be9e03604E, g_73bfd0);
    uucore::mods::locale::get_message(&v18, "ptx-help-flag-truncationSTRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help", 24);
    v10.help(&v3, &v18);
    v18.value_name(&v10, "STRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widt", 6);
    v3.arg(&v13, &v18);
    v13.new(_ZN6uu_ptx7options10MACRO_NAME17hbcad16fcc2055b17E, g_73bfe0);
    v10.short(&v13, 77);
    v13.long(&v10, _ZN6uu_ptx7options10MACRO_NAME17hbcad16fcc2055b17E, g_73bfe0);
    uucore::mods::locale::get_message(&v18, "ptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbF", 19);
    v10.help(&v13, &v18);
    v18.value_name(&v10, "STRINGptx-help-macro-nameptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widt", 6);
    v13.arg(&v3, &v18);
    v3.new(*((long long *)&_ZN6uu_ptx7options6FORMAT17hdfc5deaacb4bffdcE), g_73bff0);
    v10.long(&v3, *((long long *)&_ZN6uu_ptx7options6FORMAT17hdfc5deaacb4bffdcE), g_73bff0);
    memcpy(&v3, &v10, 632);
    v6 = v11 | 4;
    v7 = v12;
    v18 = "roffj";
    v21 = 4;
    v22 = "texinternal error: entered unreachable code: should be caught by clap";
    v24 = 3;
    v10.value_parser(&v3, &v18);
    *((int128_t *)&v3) = *((int128_t *)&_ZN6uu_ptx7options6FORMAT17hdfc5deaacb4bffdcE);
    *((int128_t *)&v4) = *((int128_t *)&_ZN6uu_ptx7options6format4ROFF17h29d2ed8ab5e288daE);
    *((int128_t *)&v5) = *((int128_t *)&_ZN6uu_ptx7options6format3TEX17hb6c8db373bb7142eE);
    v18.overrides_with_all(&v10, &v3);
    v3.arg(&v13, &v18);
    v13.new(*((long long *)&_ZN6uu_ptx7options6format4ROFF17h29d2ed8ab5e288daE), g_73c780);
    v10.short(&v13, 79);
    uucore::mods::locale::get_message(&v18, "ptx-help-roffptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplemented", 13);
    v13.help(&v10, &v18);
    *((int128_t *)&v19) = *((int128_t *)&_ZN6uu_ptx7options6FORMAT17hdfc5deaacb4bffdcE);
    *((int128_t *)&v23) = *((int128_t *)&_ZN6uu_ptx7options6format4ROFF17h29d2ed8ab5e288daE);
    *((int128_t *)&v25) = *((int128_t *)&_ZN6uu_ptx7options6format3TEX17hb6c8db373bb7142eE);
    v10.overrides_with_all(&v13, &v18);
    v18.action(&v10, 2);
    v13.arg(&v3, &v18);
    v3.new(*((long long *)&_ZN6uu_ptx7options6format3TEX17hb6c8db373bb7142eE), g_73c790);
    v10.short(&v3, 84);
    uucore::mods::locale::get_message(&v18, "ptx-help-texptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfea", 12);
    v3.help(&v10, &v18);
    *((int128_t *)&v20) = *((int128_t *)&_ZN6uu_ptx7options6FORMAT17hdfc5deaacb4bffdcE);
    *((int128_t *)&v22) = *((int128_t *)&_ZN6uu_ptx7options6format4ROFF17h29d2ed8ab5e288daE);
    *((int128_t *)&v25) = *((int128_t *)&_ZN6uu_ptx7options6format3TEX17hb6c8db373bb7142eE);
    v10.overrides_with_all(&v3, &v18);
    v18.action(&v10, 2);
    v3.arg(&v13, &v18);
    v13.new(_ZN6uu_ptx7options15RIGHT_SIDE_REFS17h5919f2978ef3dbffE, g_73c000);
    v10.short(&v13, 82);
    v13.long(&v10, _ZN6uu_ptx7options15RIGHT_SIDE_REFS17h5919f2978ef3dbffE, g_73c000);
    uucore::mods::locale::get_message(&v18, "ptx-help-right-side-refsptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-erro", 24);
    v10.help(&v13, &v18);
    v18.action(&v10, 2);
    v13.arg(&v3, &v18);
    v3.new(_ZN6uu_ptx7options15SENTENCE_REGEXP17h42a0e238e9ae0296E, g_73c010);
    v10.short(&v3, 83);
    v3.long(&v10, _ZN6uu_ptx7options15SENTENCE_REGEXP17h42a0e238e9ae0296E, g_73c010);
    uucore::mods::locale::get_message(&v18, "ptx-help-sentence-regexpREGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 24);
    v10.help(&v3, &v18);
    v18.value_name(&v10, "REGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 6);
    v3.arg(&v13, &v18);
    v13.new(_ZN6uu_ptx7options11WORD_REGEXP17ha6576087c26cb177E, g_73c020);
    v10.short(&v13, 87);
    v13.long(&v10, _ZN6uu_ptx7options11WORD_REGEXP17ha6576087c26cb177E, g_73c020);
    uucore::mods::locale::get_message(&v18, "ptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 20);
    v10.help(&v13, &v18);
    v18.value_name(&v10, "REGEXPptx-help-word-regexpptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 6);
    v13.arg(&v3, &v18);
    v3.new(_ZN6uu_ptx7options10BREAK_FILE17hf504c01eb3c1890fE, g_73c030);
    v10.short(&v3, 98);
    v3.long(&v10, _ZN6uu_ptx7options10BREAK_FILE17hf504c01eb3c1890fE, g_73c030);
    uucore::mods::locale::get_message(&v18, "ptx-help-break-fileptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 19);
    v10.help(&v3, &v18);
    v3.value_name(&v10, &g_483bec, 4);
    v10.value_hint(&v3, 3);
    v3.arg(&v13, &v10);
    v13.new(_ZN6uu_ptx7options11IGNORE_CASE17hef5a8ddebe674ab3E, g_73c040);
    v10.short(&v13, 102);
    v13.long(&v10, _ZN6uu_ptx7options11IGNORE_CASE17hef5a8ddebe674ab3E, g_73c040);
    uucore::mods::locale::get_message(&v18, "ptx-help-ignore-caseptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 20);
    v10.help(&v13, &v18);
    v18.action(&v10, 2);
    v13.arg(&v3, &v18);
    v3.new(_ZN6uu_ptx7options8GAP_SIZE17h20ac7fdee6e00507E, g_73c050);
    v10.short(&v3, 103);
    v3.long(&v10, _ZN6uu_ptx7options8GAP_SIZE17h20ac7fdee6e00507E, g_73c050);
    uucore::mods::locale::get_message(&v18, "ptx-help-gap-sizeNUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 17);
    v10.help(&v3, &v18);
    v18.value_name(&v10, "NUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 6);
    v3.arg(&v13, &v18);
    v13.new(_ZN6uu_ptx7options11IGNORE_FILE17h6ae7b198784764dfE, g_73c060);
    v10.short(&v13, 105);
    v13.long(&v10, _ZN6uu_ptx7options11IGNORE_FILE17h6ae7b198784764dfE, g_73c060);
    uucore::mods::locale::get_message(&v18, "ptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 20);
    v10.help(&v13, &v18);
    v13.value_name(&v10, &g_483bec, 4);
    v10.value_hint(&v13, 3);
    v13.arg(&v3, &v10);
    v3.new(_ZN6uu_ptx7options9ONLY_FILE17hef60c9031d725183E, g_73c070);
    v10.short(&v3, 111);
    v3.long(&v10, _ZN6uu_ptx7options9ONLY_FILE17hef60c9031d725183E, g_73c070);
    uucore::mods::locale::get_message(&v18, "ptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 18);
    v10.help(&v3, &v18);
    v3.value_name(&v10, &g_483bec, 4);
    v10.value_hint(&v3, 3);
    v3.arg(&v13, &v10);
    v13.new(_ZN6uu_ptx7options10REFERENCES17h5de22a127a33fe64E, g_73c080);
    v10.short(&v13, 114);
    v13.long(&v10, _ZN6uu_ptx7options10REFERENCES17h5de22a127a33fe64E, g_73c080);
    uucore::mods::locale::get_message(&v18, "ptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 19);
    v10.help(&v13, &v18);
    v13.value_name(&v10, &g_483bec, 4);
    v10.action(&v13, 2);
    v13.arg(&v3, &v10);
    v3.new(_ZN6uu_ptx7options5WIDTH17h46ca0cce1289ed37E, g_73c090);
    v10.short(&v3, 119);
    v3.long(&v10, _ZN6uu_ptx7options5WIDTH17h46ca0cce1289ed37E, g_73c090);
    uucore::mods::locale::get_message(&v18, "ptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 14);
    v10.help(&v3, &v18);
    v3.value_name(&v10, "NUMBERptx-help-ignore-fileptx-help-only-fileptx-help-referencesptx-help-widthDumbFormatNotImplementedParseErrorfeatureptx-error-dumb-formatptx-error-not-implementedcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 6);
    a0.arg(&v13, &v3);
    ::0x59dd00::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
