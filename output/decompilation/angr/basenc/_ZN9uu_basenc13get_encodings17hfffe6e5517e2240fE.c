long long uu_basenc::get_encodings(struct_1 *a0)
{
    char v0;  // [bp-0xf0], Other Possible Types: unsigned long
    char v1;  // [bp-0xe9]
    char v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd9]
    unsigned long long v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x90]
    unsigned long long v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    unsigned long long v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    unsigned long long v18;  // [bp-0x68]
    unsigned long long v19;  // [bp-0x60]
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    char v22;  // [bp-0x48]
    char v23;  // [bp-0x38]
    struct_0 *v25;  // rax
    struct_0 *v26;  // rbx
    unsigned long long v27;  // r13
    unsigned long long v28;  // rbp
    unsigned long long v29;  // r14
    int v30;  // xmm0

    v25 = 8.alloc_impl(384);
    if (!v25)
        alloc::alloc::handle_alloc_error(8, 384); /* do not return */
    v26 = v25;
    uucore::mods::locale::get_message(&v0, "basenc-help-base64base64basenc-help-base64urlbase64urlbasenc-help-base32base32basenc-help-base32hexbase32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2", 18);
    v27 = *((long long *)&v3);
    v17 = *((long long *)&v2);
    v16 = v0;
    uucore::mods::locale::get_message(&v0, "basenc-help-base64urlbase64urlbasenc-help-base32base32basenc-help-base32hexbase32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown", 21);
    v14 = v0;
    v15 = *((long long *)&v2);
    v28 = *((long long *)&v3);
    uucore::mods::locale::get_message(&v0, "basenc-help-base32base32basenc-help-base32hexbase32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rus", 18);
    v12 = v0;
    v13 = *((long long *)&v2);
    v21 = *((long long *)&v3);
    uucore::mods::locale::get_message(&v0, "basenc-help-base32hexbase32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/stri", 21);
    v10 = v0;
    v11 = *((long long *)&v2);
    v20 = *((long long *)&v3);
    uucore::mods::locale::get_message(&v0, "basenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 18);
    v8 = v0;
    v9 = *((long long *)&v2);
    v19 = *((long long *)&v3);
    uucore::mods::locale::get_message(&v0, "basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 21);
    v6 = v0;
    v7 = *((long long *)&v2);
    v18 = *((long long *)&v3);
    uucore::mods::locale::get_message(&v0, "basenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 21);
    v5 = *((long long *)&v2);
    v29 = *((long long *)&v3);
    uucore::mods::locale::get_message(&v22, "basenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 15);
    v4 = *((long long *)&v23);
    memcpy(&v1, &v22, 16);
    v26->field_0 = "base64basenc-help-base64urlbase64urlbasenc-help-base32base32basenc-help-base32hexbase32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-u";
    v26->field_8 = 6;
    v26->field_10 = 0;
    v26->field_18 = v16;
    v26->field_20 = v17;
    v26->field_28 = v27;
    v26->field_30 = "base64urlbasenc-help-base32base32basenc-help-base32hexbase32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustli";
    v26->field_38 = 9;
    v26->field_40 = 1;
    v26->field_48 = v14;
    v26->field_50 = v15;
    v26->field_58 = v28;
    v26->field_60 = "base32basenc-help-base32hexbase32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/sr";
    v26->field_68 = 6;
    v26->field_70 = 2;
    v26->field_78 = v12;
    v26->field_80 = v13;
    v26->field_88 = v21;
    v26->field_90 = "base32hexbasenc-help-base16base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs";
    v26->field_98 = 9;
    v26->field_a0 = 3;
    v26->field_a8 = v10;
    v26->field_b0 = v11;
    v26->field_b8 = v20;
    v26->field_c0 = "base16basenc-help-base2lsbfbase2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs";
    v26->field_c8 = 6;
    v26->field_d0 = 4;
    v26->field_d8 = v8;
    v26->field_e0 = v9;
    v26->field_e8 = v19;
    v26->field_f0 = "base2lsbfbasenc-help-base2msbfbase2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs";
    v26->field_f8 = 9;
    v26->field_100 = 5;
    v26->field_108 = v6;
    v26->field_110 = v7;
    v26->field_118 = v18;
    v26->field_120 = "base2msbfbasenc-help-z85z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs";
    v26->field_128 = 9;
    v26->field_130 = 6;
    v26->field_138 = v0;
    v26->field_140 = v5;
    v26->field_148 = v29;
    v26->field_150 = "z85basenc-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs";
    v26->field_158 = 3;
    v26->field_160 = 7;
    v30 = *((int128_t *)&v0);
    *((int128_t *)&v26->field_161[15]) = *((int128_t *)&(&v0)[15]);
    *((void*)&v26->field_161[0]) = v30;
    a0->field_0 = 8;
    a0->field_8 = v26;
    a0->field_10 = 8;
    return a0;
}
