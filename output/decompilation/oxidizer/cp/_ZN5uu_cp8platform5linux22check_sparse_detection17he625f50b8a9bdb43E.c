fn uu_cp::platform::linux::check_sparse_detection(a0: &struct9, a1: u32, a2: u32) -> u64 {
    let v0: struct4;  // [bp-0xc4]
    let v1: struct16;  // [sp-0xc0]
    let v2: i8;  // [bp-0x70]
    let v3: i8;  // [bp-0x60]

    vvar_75{stack -196} = std::fs::File::open(a1, a2)?;
    v0 = struct4 {
        field_0: *((&v1 as &char + 4) as &i32)
    };
    v1 = std::fs::File::metadata(&v0);
    if v1.field_0 as i32 == 2 {
        return struct9 {
            field_0: 1
            field_8: <UNKNOWN>
        };
    } else if *(&v3 as &i64) >= *(&v2 as &i64) >> 9 {
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
