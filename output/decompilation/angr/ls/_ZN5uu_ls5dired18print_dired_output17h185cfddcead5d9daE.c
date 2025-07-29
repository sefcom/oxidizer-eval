long long uu_ls::dired::print_dired_output(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    char *v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    void* v6;  // [bp-0x20]
    unsigned long long v8;  // rax

    v8 = a2.flush();
    if (v8)
        return v8.from();
    if (a1->field_10)
        uu_ls::dired::print_positions("//DIRED////SUBDIRED//--dired-Dblock-sizehuman-readablesikibibytesescapeliteralquote-name/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hostname-0.4.1/src/nix.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", 9, a1);
    if (a0->field_ee)
        uu_ls::dired::print_positions("//SUBDIRED//--dired-Dblock-sizehuman-readablesikibibytesescapeliteralquote-name/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hostname-0.4.1/src/nix.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/uutils_term_grid-0.7.0/src/lib.rs", 12, a1 + 1);
    v0 = &a0[1].padding_0[13];
    v1 = <uucore::features::quoting_style::QuotingStyle as core::fmt::Display>::fmt;
    v2 = &g_6a1738;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print(&v2);
    return 0;
}
