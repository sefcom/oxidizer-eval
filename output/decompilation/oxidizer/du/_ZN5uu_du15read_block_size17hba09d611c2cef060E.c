fn uu_du::read_block_size(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xd0]
    let v1: core::fmt::rt::Argument;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xb0]
    let v4: struct32;  // [bp-0x70]
    let v5: struct32;  // [bp-0x50]
    let v8: u64;  // rax
    let v9: u64;  // rdx

    if a1 {
        v4 = uucore::features::parser::parse_size::parse_size_u64(a1, a2);
        if v4.field_0 as i32 == 4 {
            return Ok(struct16 {
                field_0: 0
                field_8: *((&v4.field_0 as &char + 8) as &i64)
            });
        }
        return Ok(struct16 {
            field_0: uu_du::read_block_size::{{closure}}(a1, a2, &v4)
            field_8: &g_545bc0
        });
    } else {
        v0 as u512 = struct64 {
            field_0: 0
            field_8: 3
            field_16: "DU_BLOCK_SIZE"
            field_32: "BLOCK_SIZE"
            field_48: "BLOCKSIZE"
        };
        v8 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v0 as u512);
        if v8 {
            loop {
                v0 = std::env::var(v8, v9);
                match v0 {
                    Err(_) => {
                        v8 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v0 as u512);
                        if !v8 {
                            break;
                        }
                    },
                    Ok(_) => {
                        v5 = uucore::features::parser::parse_size::parse_size_u64(v1, v2);
                        if v5.field_0 as i32 == 4 {
                            return struct16 {
                                field_0: 0
                                field_8: *((&v5.field_0 as &char + 8) as &i64)
                            };
                        }
                        v8 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v0 as u512);
                        if !v8 {
                            break;
                        }
                    },
                }
            }
        }
        v3 = std::env::var("POSIXLY_CORRECT");
        match v3 {
            Ok(_) => {
                return struct16 {
                    field_0: 0
                    field_8: 0x200
                };
            },
            Err(_) => {
                return struct16 {
                    field_0: 0
                    field_8: 0x400
                };
            },
        }
    }
}
