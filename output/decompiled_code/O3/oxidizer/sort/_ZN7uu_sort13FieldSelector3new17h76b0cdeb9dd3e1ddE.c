fn uu_sort::FieldSelector::new(a0: &struct56, a1: &struct17, a2: void*, a3: u32) -> u64 {
    let v0: u128;  // [sp-0x38]
    let v1: u64;  // [sp-0x28]
    let v2: u128;  // [sp-0x20]
    let v3: u64;  // [sp-0x10]
    let v6: u64;  // rax

    if !a1[1] {
        <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "invalid character index 0 for the start position of a field");
        *((&a0[6] as &char + 7) as &i8) = 2;
        return struct56 {
            field_0: v0
            field_16: v1
            field_24: v2 as i64
            field_32: *((&v2 as &char + 8) as &i64)
            field_40: v3
            field_48: a3 as u32
            field_52: (a3 >> 32) as u8
            field_53: v6 as u8
            field_54: 1
            field_55: (v6 as u32 != 2) as u8 as u8
        };
    }
    v6 = a3 >> 40;
    v3 = a1[2];
    v2 = *(&a1 as &i128);
    v1 = a2->field_10;
    v0 = a2->field_0;
    return struct56 {
        field_0: v0
        field_16: v1
        field_24: v2 as i64
        field_32: *((&v2 as &char + 8) as &i64)
        field_40: v3
        field_48: a3 as u32
        field_52: (a3 >> 32) as u8
        field_53: v6 as u8
        field_54: 1
        field_55: (v6 as u32 != 2) as u8 as u8
    };
}
