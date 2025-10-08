fn uu_fmt::linebreak::restart_active_breaks(a1: i64, a2: i64, a3: i64, a4: i8, a5: i64, a6: i64, a7: i64, a8: i64) -> : struct38 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x38]
    let v1: u32;  // ymm0
    let v2: u64;  // rax
    let v3: u8;  // bpl

    v1 = 0xbf800000;
    if !(a4 & 1) {
        v0 = *((a6 + 40) as &i64);
        v2 = uu_fmt::linebreak::BreakArgs::compute_width(a1, a6, a3, 0);
    }
    return struct40 {
        field_0: a5
        field_8: a6
        field_16: 0
        field_24: a2
        field_32: v1
        field_36: v3
        field_37: v3 ^ 1
    };
}
