fn uu_dd::try_get_len_of_block_device(a1: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0xc8]
    let v1: i8;  // [bp-0x90]
    let v3: struct24;  // rax
    let v7: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v0 = std::fs::File::metadata(a1);
    if v0.field_0 as i32 != 2 {
        if (0xf000 & *(&v1 as &i32)) == 0x6000 {
            v7 = <std::fs::File as std::io::Seek>::seek(a1, 1);
            match v7 {
                Err(_) => {
                    return struct16 {
                        field_0: 2
                        field_8: *((&v7 as &char + 8) as &i64)
                    };
                },
                Ok(_) => {
                    v3 = std::io::Seek::rewind(a1);
                    if !v3 {
                        return struct16 {
                            field_0: 1
                            field_8: *((&v7 as &char + 8) as &i64)
                        };
                    }
                },
            }
        } else {
            return struct8 {
                field_0: 0
            };
        }
    }
    return struct16 {
        field_0: 2
        field_8: v3
    };
}
