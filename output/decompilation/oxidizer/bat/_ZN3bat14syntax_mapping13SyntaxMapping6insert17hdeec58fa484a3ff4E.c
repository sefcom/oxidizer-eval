fn bat::syntax_mapping::SyntaxMapping::insert(a1: i64, a2: i64, a3: i64, a4: &struct24) -> Option<struct80> {
    let a0: i64;  // rdi
    let v0: struct9;  // [bp-0xe8]
    let v1: iNone;  // [bp-0xd8]
    let v2: core::fmt::rt::Argument;  // [bp-0xc8]
    let v3: iNone;  // [bp-0xb8]
    let v4: struct76;  // [bp-0xa8]
    let v5: Result<struct96, struct65>;  // [bp-0x90], Other Possible Types: struct88
    let v6: u64;  // [bp-0x90]
    let v7: u128;  // [bp-0x88]
    let v8: iNone;  // [bp-0x78]
    let v9: u128;  // [bp-0x68]
    let v10: iNone;  // [bp-0x58]
    let v11: u128;  // [bp-0x48]
    let v12: core::fmt::Arguments;  // [bp-0x30]
    let v13: u64;  // [bp-0x20]

    v5 = bat::syntax_mapping::make_glob_matcher(a2, a3);
    v0 = v7;
    v1 = v8;
    v2 = v9;
    v3 = v10;
    v4 = v11;
    if !((((0 ^ v5 as i64) & (0 ^ -(v6))) >> 63) as char) {
        v5 = struct88 {
            field_0: v5 as i64
            field_8: v0
            field_24: v1
            field_40: v2
            field_56: v3
            field_72: v4
        };
        v12 = *(a4 as &i128);
        v13 = *((a4 + 16) as &i64);
        alloc::vec::Vec<T,A>::push(a1, &v5);
        return struct1 {
            field_0: 13
        };
    }
    return Some(struct80 {
        field_0: v0
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: v4
    });
}
