fn flealib::browserhistory::get_history(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: struct24;  // [bp-0x190], Other Possible Types: struct72, u8
    let v1: struct64;  // [bp-0x190]
    let v2: i8;  // [bp-0x188], Other Possible Types: u64
    let v3: u64;  // [bp-0x180]
    let v4: u128;  // [bp-0x178]
    let v5: u128;  // [bp-0x168]
    let v6: struct24;  // [bp-0x158], Other Possible Types: u128
    let v7: u128;  // [bp-0x148]
    let v8: std::fs::File;  // [bp-0x138]
    let v9: u128;  // [bp-0x128]
    let v10: u128;  // [bp-0x118]
    let v11: core::result::Result<(), std::io::error::Error>;  // [bp-0x108]
    let v12: struct24;  // [bp-0xf8]
    let v13: struct72;  // [bp-0xe8], Other Possible Types: u128
    let v14: u128;  // [bp-0xd8]
    let v15: u128;  // [bp-0xc8]
    let v16: struct24;  // [bp-0xb8], Other Possible Types: u128
    let v17: u128;  // [bp-0xa8]
    let v18: std::fs::File;  // [bp-0x98]
    let v19: struct96;  // [bp-0x88]
    let v21: u64;  // rax
    let v22: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // xmm0
    let v23: u128;  // xmm2

    v21 = rusqlite::Connection::open_with_flags(&v0, a1, a2) as u64;
    if (v0 & 1) {
        v22 = *(&v2 as &i128);
        v16 = v6;
        v15 = v5;
        v14 = v4;
        *(&v13 as &core::result::Result<std::path::PathBuf, std::io::error::Error>) = v22;
        return struct64 {
            field_0: v22
            field_16: v4
            field_32: v5
            field_48: v6
        };
    }
    v18 = v8;
    v17 = v7;
    v23 = *(&v2 as &i128);
    v16 = v6;
    v19 = struct96 {
        field_0: v23
        field_16: v4
        field_32: v5
        field_48: v6
        field_64: v17
        field_80: v18
    };
    v0 = rusqlite::Connection::prepare_with_flags(&v19, a3, a4);
    v9 = *(&v0.field_8 as &i128);
    v10 = v4;
    v11 = v5;
    v12 = v6;
    if !v0.field_0 {
        return struct64 {
            field_0: v9
            field_16: v10
            field_32: v11
            field_48: v12
        };
    }
    v13 = struct72 {
        field_0: v0.field_0
        field_8: v9
        field_24: v10
        field_40: v11
        field_56: v12
    };
    v1 = rusqlite::statement::Statement::query_map(&v13);
    if v1.field_0 != 9223372036854775826 {
        return struct64 {
            field_0: v1.field_0
            field_8: v2
            field_16: v3
            field_24: v4
            field_40: v5
            field_56: v1.field_56
        };
    }
    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    core::iter::traits::iterator::Iterator::fold(v2, v3, &v0);
    return struct32 {
        field_0: 9223372036854775826
        field_8: *(&v0.field_0 as &i128)
        field_24: 0
    };
}
