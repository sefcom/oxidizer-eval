void uu_env::parse_signal_value(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xe8]
    unsigned int v2;  // [bp-0xe0]
    int v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xb8]
    char v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    void* v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    char v11;  // [bp-0x78]
    char v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x60]
    int v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x48]
    int v16;  // [bp-0x40]
    unsigned long long v17;  // [bp-0x30]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long v21;  // rdx

    alloc::str::<impl str>::to_uppercase(&v5, a1, a2);
    v19 = uucore::features::signals::signal_by_name_or_value(v6, v7);
    v0.to_vec("signalenv-error-invalid-signal/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 6);
    v4 = v1;
    v3 = v0;
    v8 = 0;
    v9 = a1;
    v10 = a2;
    v11 = 1;
    v0.spec_to_string(&v8);
    v15 = v4;
    v14 = v3;
    v16 = v0;
    v17 = v1;
    v0.from_iter(&v14);
    uucore::mods::locale::get_message_with_args(&v12, "env-error-invalid-signal/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 24, &v0);
    v2 = 125;
    memcpy(&v0, &v12, 16);
    v1 = v13;
    v20 = v0.new();
    if ((!v21 | !v19) == 1)
    {
        a0->field_0 = v20;
        a0->field_8 = &g_5a99b0;
    }
    else
    {
        a0->field_8 = v21;
        a0->field_0 = 0;
        ::0x4b2300::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v20, &g_5a99b0);
    }
    ::0x4b2810::core::ptr::drop_in_place<alloc::string::String>(&v5);
    return;
}
