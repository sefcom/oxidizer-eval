fn uu_cat::get_input_type(a1: &std::path::Path) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0xe4]
    let v1: struct24;  // [bp-0xe0]
    let v2: u32;  // [bp-0xdc]
    let v3: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v4: u32;  // [bp-0xc0]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1) {
        return struct16 {
            field_0: 9223372036854775814
            field_8: 2
        };
    }
    v3 = std::fs::metadata(a1);
    match v3 {
        Err(_) => {
            v1 = struct24 {
                field_0: std::io::error::repr_bitpacked::decode_repr(v4)
                field_16: v4
            };
            if v1.field_0 as i8 || v2 != 40 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v4
                };
            }
            return struct8 {
                field_0: 9223372036854775813
            };
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v4
            };
        },
        Ok(_) => {
            v0 = *((&v3 as &char + 56) as &i32);
            match ((v0 & 0xf000) - 0x1000 >> 12) {
                0 => {
                    *((a0 + 8) as &i8) = 6;
                }
                1 => {
                    *((a0 + 8) as &i8) = 5;
                }
                3 => {
                    *((a0 + 8) as &i8) = 0;
                }
                5 => {
                    *((a0 + 8) as &i8) = 4;
                }
                7 => {
                    *((a0 + 8) as &i8) = 1;
                }
                9 => {
                    *((a0 + 8) as &i8) = 3;
                }
                11 => {
                    *((a0 + 8) as &i8) = 7;
                }
                _ => {
                    format!("{}", &v0);
                    return;
                }
            }
        },
    }
}
