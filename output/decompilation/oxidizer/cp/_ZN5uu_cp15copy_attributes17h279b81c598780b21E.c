fn uu_cp::copy_attributes(a1: &std::path::Path, a2: i64, a3: i64, a4: i64) -> Option<struct56> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x220], Other Possible Types: struct24, u64
    let v1: u64;  // [bp-0x218]
    let v2: u64;  // [bp-0x210]
    let v3: alloc::string::String;  // [bp-0x208]
    let v4: u64;  // [bp-0x200]
    let v5: u64;  // [bp-0x1f8]
    let v6: u64;  // [bp-0x1f0]
    let v7: u64;  // [bp-0x1e8]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1c0]
    let v9: Option<struct56>;  // [bp-0x1c0]
    let v10: Option<struct56>;  // [bp-0x1c0]
    let v11: Option<struct56>;  // [bp-0x1c0]
    let v12: Option<struct56>;  // [bp-0x1c0]
    let v13: u64;  // [bp-0x1b8]
    let v16: u64;  // [bp-0x108]
    let v17: u64;  // [bp-0x100]
    let v18: u128;  // [bp-0xf8]
    let v19: struct24;  // [bp-0xe0], Other Possible Types: u64
    let v20: core::fmt::Arguments;  // [bp-0xd8], Other Possible Types: u64
    let v21: u64;  // [bp-0xd0]
    let v22: core::fmt::rt::Argument;  // [bp-0xd0]
    let v23: u8;  // [bp-0xc8]
    let v24: u8;  // [bp-0xc0]
    let v26: u64;  // rsi
    let v27: u64;  // rdx

    v4 = a2;
    v5 = a3;
    v0 = 1;
    v1 = v26;
    v2 = v27;
    v3 = 1;
    v19 = 1;
    v20 = a2;
    v22 = a3;
    v23 = 1;
    format!("{} -> {}", &v0, &v19);
    v6 = v16;
    v7 = v17;
    v8 = std::fs::symlink_metadata(a1);
    match v8 {
        Err(_) => {
            v19 = struct24 {
                field_0: v6
                field_8: v7
                field_16: v13
            };
            <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v8, &v19);
            return Some(struct56 {
                field_0: v10 as i128
                field_16: *((&v8 as &char + 16) as &i128)
                field_32: *((&v10 as &char + 32) as &i128)
                field_48: *((&v10 as &char + 48) as &i64)
            });
        },
        Ok(_) => {
            v18 = *((&v8 as &char + 16) as &i128);
            memcpy(&v24, &v8 as u64, 144);
            v19 = v8 as i64;
            v20 = v21;
            v21 = v18;
            v0 = struct24 {
                field_0: &v19
                field_8: &v4
                field_16: &v6
            };
            v9 = uu_cp::handle_preserve(*(a4 as &i8), *((a4 + 1) as &i8) as u8 as u64, &v0);
            match v9 {
                Some(_) => {
                    return Some(struct56 {
                        field_0: v10 as i128
                        field_16: *((&v9 as &char + 16) as &i128)
                        field_32: *((&v10 as &char + 32) as &i128)
                        field_48: *((&v10 as &char + 48) as &i64)
                    });
                },
                None => {
                    v0 = struct24 {
                        field_0: &v4
                        field_8: &v19
                        field_16: &v6
                    };
                    v10 = uu_cp::handle_preserve(*((a4 + 2) as &i8), *((a4 + 3) as &i8), &v0);
                    match v10 {
                        Some(_) => {
                            return Some(struct56 {
                                field_0: v10 as i128
                                field_16: *((&v10 as &char + 16) as &i128)
                                field_32: *((&v10 as &char + 32) as &i128)
                                field_48: *((&v10 as &char + 48) as &i64)
                            });
                        },
                        None => {
                            v11 = uu_cp::handle_preserve(*((a4 + 4) as &i8), *((a4 + 5) as &i8) as u8 as u64, &v19, &v4);
                            match v11 {
                                Some(_) => {
                                    return Some(struct56 {
                                        field_0: v11 as i64
                                        field_8: *((&v12 as &char + 8) as &i128)
                                        field_24: *((&v12 as &char + 24) as &i128)
                                        field_40: *((&v12 as &char + 40) as &i128)
                                    });
                                },
                                None => {
                                    v0 = struct32 {
                                        field_0: v26
                                        field_8: v27
                                        field_16: *(&v4 as &i128)
                                    };
                                    v12 = uu_cp::handle_preserve(*((a4 + 10) as &i8), *((a4 + 11) as &i8) as u8 as u64, &v0);
                                    match v12 {
                                        Some(_) => {
                                            return Some(struct56 {
                                                field_0: v12 as i64
                                                field_8: *((&v12 as &char + 8) as &i128)
                                                field_24: *((&v12 as &char + 24) as &i128)
                                                field_40: *((&v12 as &char + 40) as &i128)
                                            });
                                        },
                                        None => {
                                            return struct8 {
                                                field_0: 9223372036854775820
                                            };
                                        },
                                    }
                                },
                            }
                        },
                    }
                },
            }
        },
    }
}
