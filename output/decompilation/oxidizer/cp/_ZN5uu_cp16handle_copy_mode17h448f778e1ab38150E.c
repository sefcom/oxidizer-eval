fn uu_cp::handle_copy_mode(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64) -> void {
    let v0: u64;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v2: u64;  // [bp-0x20]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x18]
    let v4: u64;  // [bp-0x10]
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u64;  // r13
    let v8: u64;  // r12
    let v9: u64;  // rbx

    v4 = v5;
    v3 = v6;
    v2 = v7;
    v1 = v8;
    v0 = v9;
    goto ((&g_42bd24.field_0)[*((a5 + 78) as &i8)] + &g_42bd24.field_0) as i64;
}
