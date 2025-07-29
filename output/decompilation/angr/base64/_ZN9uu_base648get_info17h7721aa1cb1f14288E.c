long long uu_base64::get_info(unsigned long long a0[4])
{
    char v0;  // [bp-0x40]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx

    uucore::mods::locale::get_message(&v0, "base64-about/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 12);
    v2 = v0.into_boxed_slice();
    uucore::mods::locale::get_message(&v0, "base64-usage", 12);
    v3 = v0.into_boxed_slice();
    a0[0] = v2;
    a0[1] = v4;
    a0[2] = v3;
    a0[3] = v4;
    return a0;
}
