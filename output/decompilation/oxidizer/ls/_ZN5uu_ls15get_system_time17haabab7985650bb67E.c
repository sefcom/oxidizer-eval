fn uu_ls::get_system_time(a0: i64, a1: u8) -> void {
    let v0: u64;  // [bp-0x10]
    let v1: u64;  // [bp-0x8]
    let v3: u64;  // r14
    let v4: u64;  // rbx

    v1 = v3;
    v0 = v4;
    goto ((&g_4d10dc.field_0)[a1] + &g_4d10dc.field_0) as i64;
}
