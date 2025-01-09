fn uu_fmt::linebreak::restart_active_breaks(a0: &struct38, a1: void*, a2: u64, a3: u32, a4: u8, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: &struct_0;  // [bp+0x8]
    let v2: i8;  // [bp+0x10]
    let v3: i8;  // [bp+0x18]
    let v7: u64;  // r12
    let v8: u64;  // r13

    if !a4 {
        v7 = v3;
        v8 = v2;
        v0 = v1->field_28;
    }
    return struct38 {
        field_0: a5
        field_8: v4
        field_16: 0
        field_24: a2
        field_32: v5
        field_36: v6
        field_37: v6 ^ 1
    };
}
