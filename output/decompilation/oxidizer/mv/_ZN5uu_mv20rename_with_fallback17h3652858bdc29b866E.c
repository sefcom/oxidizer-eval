fn uu_mv::rename_with_fallback(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u64;  // [bp-0x50]
    let v1: struct40;  // [bp-0x48]
    let v3: u64;  // rax

    v0 = a4;
    v3 = std::fs::rename(a0, a1, a2, a3);
    v1 = struct40 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
        field_32: &v0
    };
    return (!v3 ? 0 : uu_mv::rename_with_fallback::{{closure}}(&v1 as u64, v3));
}
