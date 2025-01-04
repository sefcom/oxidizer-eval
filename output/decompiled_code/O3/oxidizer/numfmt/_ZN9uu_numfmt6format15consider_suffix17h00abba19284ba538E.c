fn uu_numfmt::format::consider_suffix(a0: i64, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u64;  // rbx
    let v8: u32;  // esi

    v3 = v5;
    v2 = v6;
    v1 = v7;
    v0 = 0x706050403020100;
    v8 = ((a1 - 2 & 255 & 255) < 4 ? a1 - 2 : 2);
    goto *((4337332 + vvar_3{reg 64} * 4) as &i32) + 4337332;
}
