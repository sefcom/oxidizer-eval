fn uu_cp::platform::linux::check_sparse_detection(a0: i64, a1: u32, a2: u32) -> int {
    let v0: u64;  // [bp-0xc4]
    let v1: Result<struct4, struct8>;  // [bp-0xc0]
    let v2: struct16;  // [bp-0xc0]
    let v3: struct4;  // [bp-0xbc]
    let v4: i8;  // [bp-0x70]
    let v5: i8;  // [bp-0x60]

    v1 = std::fs::File::open(a1, a2);
    match v1 {
        Err(_) => {
            return struct16 {
                field_0: 1
                padding_1: <UNKNOWN>
                field_8: *((&v1 as &char + 8) as &i64)
            };
        },
        Ok(v0) => {
            v2 = std::fs::File::metadata(&v0);
            if v2.field_0 as i32 == 2 {
                return struct16 {
                    field_0: 1
                    padding_1: <UNKNOWN>
                    field_8: v2.field_8
                };
            } else if *(&v5 as &i64) < *(&v4 as &i64) >> 9 {
                return struct2 {
                    field_0: 0
                    field_1: 1
                };
            } else {
                return struct2 {
                    field_0: 0
                };
            }
        },
    }
}
