fn uu_df::table::Row::new(a0: &struct184) -> int {
    let v0: i192;  // [sp-0x70], Other Possible Types: struct24
    let v1: i128;  // [sp-0x58]
    let v2: i64;  // [sp-0x48]
    let v3: i128;  // [sp-0x38]
    let v4: i64;  // [sp-0x28]
    let v5: i64;  // [sp-0x20]
    let v10: i128;  // xmm0
    let v11: i128;  // xmm0

    v5 = 0x8000000000000000;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("total");
    v2 = *((&v0 as &char + 16) as &i64);
    v1 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    v4 = *((&v0 as &char + 16) as &i64);
    v3 = v0;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    v10 = v0;
    v11 = v5;
    return struct184 {
        field_0: 0
        field_16: <UNKNOWN>
        field_32: 0
        field_48: 0
        field_64: 0
        field_80: 0
        field_96: v1
        field_104: <UNKNOWN>
        field_120: v3
        field_128: <UNKNOWN>
        field_144: v10
        field_152: <UNKNOWN>
        field_168: v11
        field_176: <UNKNOWN>
        field_192: 0
    };
}
