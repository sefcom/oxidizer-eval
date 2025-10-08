fn bat::config::get_pager_executable(a1: i64, a2: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: struct56;  // [bp-0x80]
    let v1: struct32;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: struct32;  // [bp-0x68]
    let v4: iNone;  // [bp-0x58], Other Possible Types: struct32
    let v5: struct32;  // [bp-0x48]
    let v6: struct32;  // [bp-0x38]
    let v7: iNone;  // [bp-0x28]

    v0 = bat::pager::get_pager(a1, a2);
    if v0.field_0 as i64 != 9223372036854775809 {
        v7 = v4;
        v6 = v3;
        v5 = *((&v0.field_0 as &char + 8) as &i128);
        if v0.field_0 as i64 != 0x8000000000000000 {
            v1 = v5;
            v4 = v7;
            v3 = v6;
            return Some(struct24 {
                field_0: v0.field_0 as i64
                field_8: v1.field_0
                field_16: v2
            });
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
