fn uu_fmt::linebreak::restart_active_breaks(a1: i64, a2: i64, a3: i32, a4: i8, a5: i64, a6: i64, a7: i64, a8: i64) -> : struct38 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x48]
    let v1: core::option::Option<(usize, char)>;  // [bp-0x38]
    let v2: u32;  // ymm0
    let v3: u64;  // rax
    let v4: u8;  // bpl
    let v5: i64;  // rdi

    v2 = 0xbf800000;
    if !a3 {
        v0 = a4;
        v1 = a5[5];
        v3 = uu_fmt::linebreak::BreakArgs::compute_width(a0, a5, a2, 0);
    }
    *(v5 as &u64) = v0;
    *((v5 + 8) as &&u64) = a5;
    *((v5 + 36) as &u8) = v4;
    *((v5 + 16) as &i64) = 0;
    *((v5 + 32) as &u32) = v2;
    *((v5 + 24) as &u64) = a1;
    *((v5 + 37) as &u8) = v4 ^ 1;
    return;
}
