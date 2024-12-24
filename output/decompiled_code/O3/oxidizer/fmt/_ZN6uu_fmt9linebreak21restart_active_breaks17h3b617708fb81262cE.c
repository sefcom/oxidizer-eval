fn uu_fmt::linebreak::restart_active_breaks(a0: void*, a1: void*, a2: u64, a3: u64, a4: u8, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: &struct_1;  // [bp+0x8]
    let v2: i8;  // [bp+0x10]
    let v3: i8;  // [bp+0x18]
    let v4: &struct_1;  // rax
    let v5: u32;  // ymm0
    let v6: u8;  // bpl
    let v9: u64;  // rax

    v4 = v1;
    v5 = 0xbf800000;
    if a4 {
        v6 = 0;
    } else {
        v0 = v4->field_28;
        v6 = 0;
        v9 = v0;
        if v2 + a3 + uu_fmt::linebreak::BreakArgs::compute_width(a1, v4, a3, 0) + v9 - a1->field_30 <= v3 - a3 {
            v4 = v1;
            v5 = 0xbf800000;
        } else {
            v6 = 1;
            v5 = 0x3f800000;
            v4 = v1;
        }
    }
    return struct38 {
        field_0: a5
        field_8: v4
        field_16: 0
        field_24: a2 + v9
        field_32: v5
        field_36: v6
        field_37: v6 ^ 1
    };
}
