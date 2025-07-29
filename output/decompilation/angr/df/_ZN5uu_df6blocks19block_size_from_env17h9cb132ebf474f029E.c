long long uu_df::blocks::block_size_from_env()
{
    unsigned long long v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa0]
    char v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    void* v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    v6 = "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/builder/value_parser.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs";
    v7 = 13;
    v8 = "BLOCK_SIZEBLOCKSIZE/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/builder/value_parser.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs";
    v9 = 10;
    v10 = "BLOCKSIZE/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/builder/value_parser.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs";
    v11 = 9;
    v12 = 0;
    v13 = 3;
    while (true)
    {
        v16 = v6.next();
        if (!v16)
        {
            ::0x4bca40::core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>();
            return 0;
        }
        std::env::var(&v0, v16, v17);
        if (!((char)v0 & 1))
            break;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    }
    v5 = v2;
    memcpy(&v3, &v1, 16);
    uucore::features::parser::parse_size::parse_size_u64(&v14, v4, v17);
    if (*((long long *)&v14) != 4)
        core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v14);
    ::0x4bc670::core::ptr::drop_in_place<alloc::string::String>(&v3);
    if (((char)v0 & 1))
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    ::0x4bca40::core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>();
    return *((long long *)&v14) == 4;
}
