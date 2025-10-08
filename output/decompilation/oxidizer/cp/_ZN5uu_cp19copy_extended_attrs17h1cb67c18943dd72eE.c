fn uu_cp::copy_extended_attrs(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [bp-0xe0]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v4: u64;  // rax
    let v5: Result<struct4, struct8>;  // rdx
    let v6: struct32;  // rax

    v1 = std::fs::symlink_metadata(a3, a4);
    if let Err(_) = v1 {
        return struct16 {
            field_0: 9223372036854775809
            field_8: v4
        };
    }
    v5 = *((&v1 as &char + 56) as &i32);
    if (v5 as u8 & 146) {
        v4 = uucore::features::fsxattr::copy_xattrs(a1, a2, a3, a4);
        if !v4 {
            return struct8 {
                field_0: 9223372036854775820
            };
        }
    } else {
        v4 = std::fs::set_permissions(a3, a4, v5 as u32 | 146);
        if !v4 {
            v0 = uucore::features::fsxattr::copy_xattrs(a1, a2, a3, a4);
            v2 = std::fs::symlink_metadata(a3, a4);
            match v2 {
                Err(_) => {
                    return struct16 {
                        field_0: 9223372036854775809
                        field_8: v6
                    };
                },
                Ok(_) => {
                    v6 = std::fs::set_permissions(a3, a4, (-147 & *((&v2 as &char + 56) as &i32)) as u32 as u64);
                    if v6 {
                        return struct16 {
                            field_0: 9223372036854775809
                            field_8: v6
                        };
                    }
                    v4 = v0;
                    if !v4 {
                        return struct8 {
                            field_0: 9223372036854775820
                        };
                    }
                },
            }
        }
    }
    return struct16 {
        field_0: 9223372036854775809
        field_8: v4
    };
}
