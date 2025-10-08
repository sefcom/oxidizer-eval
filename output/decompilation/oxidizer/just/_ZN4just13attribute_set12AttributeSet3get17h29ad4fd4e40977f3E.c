fn just::attribute_set::AttributeSet::get(a0: i64, a1: i8) -> u64 {
    let v0: u8;  // [bp-0x49]
    let v1: &mut [u8];  // [bp-0x48], Other Possible Types: struct72
    let v3: u64;  // rax
    let v4: i64;  // rdx
    let v5: u64;  // rax

    v0 = a1;
    v3 = *(a0 as &i64);
    v4 = v3;
    v5 = v3;
    if v5 {
        v5 = *((a0 + 16) as &i64);
    }
    v1 = struct72 {
        field_0: (v3) as u8 as u64
        field_8: 0
        field_16: v3
        field_24: *((a0 + 8) as &i64)
        field_32: v1
        field_40: 0
        field_48: v3
        field_56: *((a0 + 8) as &i64)
        field_64: v5
    };
    return core::iter::traits::iterator::Iterator::try_fold(&v1, &v0);
}
