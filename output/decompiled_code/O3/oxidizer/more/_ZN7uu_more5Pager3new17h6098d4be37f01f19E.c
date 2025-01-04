fn uu_more::Pager::new(a0: &struct68, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v1: u64;  // rax
    let v5: u16;  // r9w
    let v6: u128;  // xmm0

    v1 = a2->field_10;
    v5 = a5->field_26;
    v6 = a2->field_0;
    return struct68 {
        field_0: v6
        field_16: a2->field_10
        field_24: a5->field_18
        field_32: a3
        field_40: a4
        field_48: v1
        field_56: 0
        field_64: (amd64g_calculate_condition(2, 6, a1 & 65535, 1, v3) as char ? 0 : ((a1 | -0x10000 | (a1 as u16 - 1) as u64) & 4294967295 & 4294967295) as u16)
        field_66: v5
    };
}
