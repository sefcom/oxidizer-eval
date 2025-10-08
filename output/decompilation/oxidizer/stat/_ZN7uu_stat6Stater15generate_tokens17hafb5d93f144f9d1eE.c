fn uu_stat::Stater::generate_tokens(a0: i64, a1: u64, a2: u64, a3: u32) -> void {
    let v0: struct32;  // [bp-0xc4]
    let v1: core::fmt::Arguments;  // [bp-0xc0]
    let v2: struct16;  // [bp-0xb8]
    let v4: struct16;  // [bp-0xb8]
    let v5: void*;  // [bp-0xa0]
    let v6: struct12;  // [bp-0x98], Other Possible Types: u32
    let v7: core::fmt::rt::Argument;  // [bp-0x98], Other Possible Types: struct12
    let v8: core::fmt::rt::Argument;  // [bp-0x90]
    let v9: core::fmt::rt::Argument;  // [bp-0x90]
    let v10: u64;  // [bp-0x88]
    let v11: core::fmt::Arguments;  // [bp-0x80]
    let v12: u8;  // [bp-0x70]
    let v13: i64;  // [bp-0x68]
    let v14: u64;  // [bp-0x60]
    let v15: struct12;  // [bp-0x58]
    let v16: u64;  // [bp-0x48]
    let v17: iNone;  // [bp-0x40]
    let v19: &mut [u8];  // rdi
    let v20: struct16;  // eax
    let v21: u64;  // rdx
    let v24: &mut [u8];  // rax:rdx

    v0 = struct32 {
        field_0: a3
        padding_4: <UNKNOWN>
        field_12: <UNKNOWN>
        field_20: <UNKNOWN>
        field_28: <UNKNOWN>
    };
    core::iter::traits::iterator::Iterator::collect(&v12, a1, a2 + a1);
    v1 = 0;
    if a2 {
        do {
            v20 = *((v13 + v19 * 4) as &i32);
            match (v20) {
                37 => {
                    uu_stat::Stater::handle_percent_case(&v7, v13, v14, &v1, a2, a1, a2);
                    if v7 == 5 {
                        *(&v5[8] as &i64) = *(&v7.field_8 as &i64);
                        *(&v5[16] as &u64) = v10;
                        *(v5 as &i64) = 0x8000000000000000;
                        return;
                    }
                    v17 = v11;
                    v15 = v6;
                    v16 = v10;
                    v2 = alloc::vec::Vec<T,A>::push(&v15, "src/uu/stat/src/stat.rs");
                    v9 = v9;
                    v7 = v7;
                    break;
                }
                92 => {
                    if v0.field_0 as i8 {
                        uu_stat::Stater::handle_escape_sequences(&v7, v13, v14, &v1, a2, a1, a2);
                        v2 = alloc::vec::Vec<T,A>::push(&v7, "src/uu/stat/src/stat.rs");
                        v9 = v9;
                        v7 = v7;
                        break;
                    } else {
                        v7 = struct12 {
                            field_0: 3
                            field_8: 92
                        };
                        v2 = alloc::vec::Vec<T,A>::push(&v7, "src/uu/stat/src/stat.rs");
                        v9 = v8;
                        v7 = v6;
                        break;
                    }
                }
                _ => {
                    v7 = struct12 {
                        field_0: 3
                        field_8: v20
                    };
                    v2 = alloc::vec::Vec<T,A>::push(&v7, "src/uu/stat/src/stat.rs");
                    v9 = v8;
                    v7 = v6;
                }
            }
            v19 = v1 + 1;
            v1 = v19;
        } while (v1 < a2);
    }
    if !v0.field_0 as i8 {
        v6 = 0;
        v24 = core::char::methods::encode_utf8_raw(10, &v6, v21);
        if !core::slice::<impl [T]>::ends_with(a1, a2, v24.data_ptr, v24.length) {
            v6 = struct12 {
                field_0: 3
                field_8: 10
            };
            v4 = alloc::vec::Vec<T,A>::push(&v6, "src/uu/stat/src/stat.rs");
        }
    }
    *(&v5[16] as &i64) = 0;
    *(v5 as &i128) = *((&v0.field_12 as &char + 4) as &i128);
    return;
}
