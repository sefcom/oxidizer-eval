fn uu_cp::platform::linux::check_sparse_detection(a0: &struct9, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xc4]
    let v1: i128;  // [sp-0xc0], Other Possible Types: struct16
    let v2: i8;  // [bp-0x70]
    let v3: i8;  // [bp-0x60]

    vvar_78{stack -196} = std::fs::File::open(a1, a2)?;
    v0 = *((&v1 as &char + 4) as &i32);
    v1 = std::fs::File::metadata(&v0);
    if v1 == 2 {
        return struct9 {
            field_0: 1
            field_8: <UNKNOWN>
        };
    } else if v3 >= v2 >> 9 {
        return struct2 {
            field_0: 0
        };
    } else {
        return struct2 {
            field_0: 0
            field_1: 1
        };
    }
}
