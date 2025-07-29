long long uu_seq::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x830]
    char v5;  // [bp-0x82c]
    unsigned long long v6;  // [bp-0x7ec]
    unsigned int v7;  // [bp-0x7e4]
    char v8;  // [bp-0x7e0]
    unsigned long v9;  // [bp-0x524]
    unsigned int v10;  // [bp-0x51c]
    char v11;  // [bp-0x518]
    unsigned int v12;  // [bp-0x2a0]
    unsigned int v13;  // [bp-0x29c]
    char v14;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x290]
    char v16;  // [bp-0x288]
    unsigned long long v19;  // rdx

    v8.new(uucore::util_name(), v19);
    memcpy(&v3, &v8, 700);
    v6 = 549755814048 | v9;
    v7 = v10;
    v8.version(&v3, "(uutils coreutils) 0.1.0seq-aboutseq-usageseparatorseq-help-separatorterminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 24);
    uucore::mods::locale::get_message(&v11, "seq-aboutseq-usageseparatorseq-help-separatorterminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 9);
    v3.about(&v8, &v11);
    uucore::mods::locale::get_message(&v0, "seq-usageseparatorseq-help-separatorterminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 9);
    uucore::format_usage(&v11, v1, v2);
    v8.override_usage(&v3, &v11);
    v3.new("separatorseq-help-separatorterminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 9);
    v11.short(&v3, 115);
    v3.long(&v11, "separatorseq-help-separatorterminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 9);
    uucore::mods::locale::get_message(&v14, "seq-help-separatorterminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 18);
    v11.help(&v3, &v14);
    v3.arg(&v8, &v11);
    v8.new("terminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 10);
    v11.short(&v8, 116);
    v8.long(&v11, "terminatorseq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 10);
    uucore::mods::locale::get_message(&v14, "seq-help-terminatorequal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 19);
    v11.help(&v8, &v14);
    v8.arg(&v3, &v11);
    v3.new("equal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 11);
    v11.short(&v3, 119);
    v3.long(&v11, "equal-widthseq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 11);
    uucore::mods::locale::get_message(&v14, "seq-help-equal-widthformatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 20);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("formatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 6);
    v11.short(&v8, 102);
    v8.long(&v11, "formatseq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 6);
    uucore::mods::locale::get_message(&v14, "seq-help-formatnumbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 15);
    v11.help(&v8, &v14);
    v8.arg(&v3, &v11);
    v3.new("numbers/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/num-bigint-0.4.6/src/biguint.rssrc/uu/seq/src/seq.rs", 7);
    memcpy(&v11, &v3, 632);
    v12 = v4 | 32;
    v13 = *((int *)&v5);
    v3.action(&v11, 1);
    v14 = 1;
    v15 = 3;
    v16 = 0;
    v11.num_args(&v3, &v14);
    a0.arg(&v8, &v11);
    ::0x4bc0f0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
