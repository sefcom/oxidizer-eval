fn uu_realpath::process_relative(a0: &struct24, a1: &struct24, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u128;  // [sp-0x48]
    let v1: u64;  // [sp-0x38]
    let v4: u64;  // 4096
    let v5: u64;  // 4096
    let v7: u64;  // 4096

    return struct24 {
        field_0: a1->field_0
        field_16: v3
    };
    v1 = a1->field_10;
    v0 = a1->field_0;
    if a4 {
        v5 = a4;
    } else {
        v5 = a2;
    }
    if !a4 {
        v7 = a3;
    } else {
        v7 = a5;
    }
    v4 = v5;
}
