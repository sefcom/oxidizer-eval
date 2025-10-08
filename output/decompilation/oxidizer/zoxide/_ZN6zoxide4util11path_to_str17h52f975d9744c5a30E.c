fn zoxide::util::path_to_str(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: u64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x30]
    let v3: struct16;  // rsi
    let v5: &std::path::Path;  // rax:rdx

    v5 = std::path::<impl core::convert::AsRef<std::path::Path> for alloc::string::String>::as_ref(a1);
    v0 = core::str::converts::from_utf8(v5.data_ptr, a2);
    anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(a0, v3, *((&v0 as &char + 16) as &i64), v5.data_ptr, v5.length);
    return;
}
