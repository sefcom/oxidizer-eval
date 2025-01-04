fn uu_du::get_time_secs(a0: &Result<struct24, struct8>, a1: u64, a2: u64) -> int {
    let v0: u64;  // [sp-0x20]
    let v1: i8;  // [bp-0x18]
    let v2: i8;  // [bp-0x10]
    let v4: u64;  // rax
    let v5: u64;  // rax
    let v6: u64;  // 4102
    let v8: u64;  // rcx
    let v9: u128;  // xmm0
    let v11: u256;  // ymm0

    if !a1 {
        v4 = a2[14];
    } else if a1 == 1 {
        v4 = a2[15];
    } else {
        v5 = a2[7];
        v6 = a2[6];
        v0 = 3;
        if v6 {
            a0->field_8 = v5;
            a0->field_0 = 5;
            return v11;
        }
        v8 = v1;
        v9 = v2;
        return struct32 {
            field_0: v0
            field_8: v8
            field_16: v9
        };
    }
    return struct16 {
        field_0: 5
        field_8: v4
    };
}
