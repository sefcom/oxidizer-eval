fn zoxide::util::rename(a0: void*, a1: u64, a2: u64) -> long long {
    let v0: struct32;  // [bp-0x48]
    let v2: &std::ffi::os_str::OsStr;  // rbx
    let v3: struct24;  // r15
    let v4: u64;  // rdx
    let v5: struct157;  // rax
    let v6: Result<struct24, struct16>;  // r13
    let v7: u64;  // rdx

    v2 = <&T as core::convert::AsRef<U>>::as_ref(a0);
    v3 = <&T as core::convert::AsRef<U>>::as_ref(a1, a2);
    v5 = std::fs::rename(v2, v4, v3, v4);
    if v5 {
        v6 = v5;
        if std::io::error::Error::kind(v5) as u8 == 1 {
            v6 = std::fs::rename(v2, v4, v3, v4);
            if let Ok(_) = v6 {
                std::io::error::Error::kind(v6);
            }
        }
    }
    v0 = struct32 {
        field_0: v2
        field_8: v4
        field_16: v3
        field_24: v4
    };
    return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v6, &v0, v7);
}
