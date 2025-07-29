long long uu_realpath::prepare_relative_options(struct_0 *a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    unsigned long long v5[3];  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]
    char v10;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x80]
    char v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    char v19;  // [bp-0x48], Other Possible Types: unsigned long long
    char v20;  // [bp-0x38]
    unsigned long long v22[3];  // rax
    unsigned long long v23[3];  // rax
    char v24;  // cl
    struct_0 *v25;  // r12
    char *v26;  // rdi
    unsigned long long v28;  // rdx

    v0.try_get_one(a1, "relative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/", 11);
    v22 = "relative-toDIRrealpath-help-relative-torelative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/".unwrap(11, &v0);
    if (v22)
        v19.call_once(v22[1], v22[2]);
    else
        v19 = 0x8000000000000000;
    v0.try_get_one(a1, "relative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/", 13);
    v23 = "relative-baserealpath-help-relative-basefiles/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/".unwrap(13, &v0);
    if (v23)
    {
        v0.call_once(v23[1], v23[2]);
        v15 = v1;
        memcpy(&v13, &v0, 16);
    }
    else
    {
        v14 = 0x8000000000000000;
    }
    v1 = *((long long *)&v20);
    memcpy(&v0, &v19, 16);
    uu_realpath::canonicalize_relative_option(&v10, &v0, a2, v24);
    if (v10 == 9223372036854775809)
    {
        v25 = a0;
        v5[1] = v17;
        v5[2] = v18;
        v5[0] = 9223372036854775809;
        v26 = &v13;
    }
    else
    {
        v16 = v10;
        v17 = v11;
        v18 = v12;
        v1 = v15;
        memcpy(&v0, &v13, 16);
        uu_realpath::canonicalize_relative_option(&v10, &v0, a2, v24);
        v25 = a0;
        if (v10 == 9223372036854775809)
        {
            *((unsigned long long *)&v25->padding_1[7]) = v7;
            v25->field_10 = v9;
            *((unsigned long long *)&v25->field_0) = 9223372036854775809;
        }
        else
        {
            v6 = v10;
            v7 = v11;
            v9 = v12;
            if (v10 != 0x8000000000000000)
                v8 = v7;
            else
                v8 = 0;
            v28 = v8;
            if (!v28 || v10 == 0x8000000000000000 || v17.starts_with(v18, v28, v9))
            {
                v1 = v18;
                memcpy(&v0, &v16, 16);
                v4 = v9;
                v2 = v6;
                v3 = v7;
                *((int128_t *)&v25->field_0) = *((int128_t *)&v16);
                v25->field_20 = v3;
                v25->field_28 = v4;
                v25->field_10 = v1;
                v25->field_18 = v2;
                return v25;
            }
            *((long long *)&v25->field_0) = 0x8000000000000000;
            v25->field_18 = 0x8000000000000000;
            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v6);
        }
        v26 = &v16;
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v26);
    return v25;
}
