fn bat::pager::Pager::new(a0: i64, a1: void*, a2: u32, a3: u64, a4: u64, a5: u8, a6: u8) -> long long {
    let v0: struct24;  // [bp-0x50]
    let v1: i64;  // [bp-0x40]
    let v2: struct16;  // [bp-0x38], Other Possible Types: u8
    let v3: i8;  // [bp-0x28]

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v2, a3, a4);
    return struct56 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
        field_24: v2
        field_40: *(&v3 as &i64)
        field_48: a6
        field_49: a5
    };
}
