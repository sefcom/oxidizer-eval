fn uu_sort::FieldSelector::new(a0: &struct56, a1: &struct17, a2: void*, a3: u32) -> u64 {
    let v7: u64;  // rax

    if a1[1] {
        v7 = a3 >> 40;
        return struct56 {
            field_0: v0
            field_16: v1
            field_24: v2
            field_32: v3
            field_40: v4
            field_48: a3 as u32
            field_52: (a3 >> 32) as u8
            field_53: v7 as u8
            field_54: 1
            field_55: (v7 as u32 != 2) as u8 as u8
        };
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "invalid character index 0 for the start position of a field");
    *((&a0[6] as &char + 7) as &i8) = 2;
}
