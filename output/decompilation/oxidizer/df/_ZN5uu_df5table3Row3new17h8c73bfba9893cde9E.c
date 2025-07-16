fn uu_df::table::Row::new() -> : struct184 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x70]
    let v1: u64;  // [bp-0x60]
    let v2: u128;  // [bp-0x58]
    let v3: u64;  // [bp-0x48]
    let v4: u128;  // [bp-0x38]
    let v5: u64;  // [bp-0x28]
    let v6: u64;  // [bp-0x20]
    let v7: i8;  // [bp-0x10]

    v6 = 0x8000000000000000;
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("total");
    v3 = v1;
    v2 = *(&v0.field_0 as &i128);
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    v5 = v1;
    memcpy(&v4, &v0, 16);
    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
    return struct216 {
        field_0: 0
        field_16: <UNKNOWN>
        field_32: 0
        field_48: 0
        field_64: 0
        field_80: 0
        field_96: v2
        field_104: v3
        field_120: <UNKNOWN>
        field_128: *(&v0.field_0 as &i128)
        field_144: v1
        field_152: <UNKNOWN>
        field_168: 0
        field_176: 0
        field_192: <UNKNOWN>
    };
}
