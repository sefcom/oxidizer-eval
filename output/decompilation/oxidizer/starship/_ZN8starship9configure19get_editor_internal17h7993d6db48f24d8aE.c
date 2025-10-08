fn starship::configure::get_editor_internal(a1: i64, a2: &struct16) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct200;  // [bp-0x50]
    let v1: core::fmt::Arguments;  // [bp-0x48], Other Possible Types: u128
    let v2: u64;  // [bp-0x40]
    let v3: u128;  // [bp-0x38]
    let v5: struct24;  // [bp-0x28]
    let v6: struct24;  // [bp-0x20]
    let v8: struct200;  // rax

    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        v5 = a1[16] as i64;
        v3 = *(a1 as &i128);
        if v5 {
            return struct24 {
                field_0: *(a1 as &i128)
                field_16: a1[16] as i64
            };
        }
    }
    v8 = *(a2 as &i64);
    if v8 != 0x8000000000000000 {
        v1 = *((a2 + 8) as &i128);
        v0 = v8;
        if v2 {
            return struct24 {
                field_0: v0
                field_8: v1
                field_16: v2
            };
        }
    }
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("vi");
    return struct24 {
        field_0: v6.field_0
        field_16: v6.field_16
    };
}
