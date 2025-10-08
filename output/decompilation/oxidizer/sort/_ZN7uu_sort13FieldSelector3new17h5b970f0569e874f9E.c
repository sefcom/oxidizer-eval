fn uu_sort::FieldSelector::new(a1: &struct17, a2: i64, a3: i64) -> : struct56 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v1: u128;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v3: u64;  // [bp-0x10]
    let v5: u64;  // rax
    let v6: u32;  // r9d
    let v7: u8;  // dil
    let v8: core::fmt::rt::Argument;  // r8b
    let v9: u128;  // xmm0

    if !a1[8] as i64 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "invalid character index 0 for the start position of a field");
        *((a0 + 55) as &i8) = 2;
        return;
    }
    v5 = a3 >> 40;
    v6 = v5;
    v3 = a1[16] as i64;
    v1 = *(a1 as &i128);
    v0 = a2[16] as i64;
    v9 = *(a2 as &i128);
    return struct56 {
        field_0: v9
        field_16: v0
        field_24: v1 as i64
        field_32: v2
        field_40: v3
        field_48: a3 as u32
        field_52: (a3 >> 32) as u8
        field_53: v5 as u8
        field_54: v8
        field_55: v7
    };
}
