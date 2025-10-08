fn uu_tail::follow::files::FileHandling::update_metadata(a0: u64, a1: u64, a2: u64, a3: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x178]
    let v2: u64;  // r12
    let v3: i64;  // rsi
    let v4: i64;  // rdi
    let v5: struct24;  // rax

    if *(a3 as &i64) == 2 {
        v0 = std::fs::metadata(a1, a2);
        if v2 == 2 {
            v5 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
            *(v5 as &u64) = v2;
            return memcpy(v5 + 8, &v0 as u8, 168);
        }
    }
    memcpy(v4, v3, 168);
    v5 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    *(v5 as &u64) = v2;
    return memcpy(v5 + 8, &v0 as u8, 168);
}
