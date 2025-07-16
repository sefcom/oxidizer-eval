fn uu_od::parse_formats::parse_type_string(a0: i64, a1: i64, a2: i64) -> int {
    let v0: u8;  // [bp-0x135]
    let v2: u8;  // [bp-0x134]
    let v3: i64;  // [bp-0x130]
    let v4: void*;  // [bp-0x118], Other Possible Types: u64
    let v5: u64;  // [bp-0x111]
    let v6: u64;  // [bp-0x110]
    let v7: void*;  // [bp-0x108]
    let v8: u64;  // [bp-0x100]
    let v9: u64;  // [bp-0x100]
    let v10: u8;  // [bp-0xf8]
    let v11: u56;  // [bp-0xf7]
    let v12: u64;  // [bp-0xf0]
    let v13: u64;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe8]
    let v15: void*;  // [bp-0xd8]
    let v16: struct16;  // [bp-0xd8]
    let v17: u64;  // [bp-0xd0]
    let v18: void*;  // [bp-0xc8]
    let v19: u192;  // [bp-0xc0]
    let v22: u128;  // [bp-0xa8]
    let v23: u128;  // [bp-0x98]
    let v24: u64;  // [bp-0x88]
    let v25: u64;  // [bp-0x78]
    let v26: u64;  // [bp-0x71]
    let v27: i64;  // [bp-0x60]
    let v28: u64;  // [bp-0x58]
    let v29: u64;  // [bp-0x50]
    let v30: u192;  // [bp-0x48]
    let v33: u32;  // edx
    let v34: u32;  // ebp
    let v35: u8;  // al
    let v36: u8;  // al
    let v37: u8;  // r12b
    let v38: u8;  // r14b
    let v39: u8;  // dl
    let v40: u8;  // r14b
    let v41: u64;  // rdx
    let v42: u64;  // rcx
    let v43: core::option::Option<u32>;  // rax:rax
    let v44: core::option::Option<u32>;  // rax:rax
    let v45: core::option::Option<u32>;  // rax:rax
    let v46: core::option::Option<u32>;  // rax:rax
    let v47: core::result::Result<u8, core::num::error::ParseIntError>;  // rax:rax
    let v48: core::option::Option<u32>;  // rax:rax

    v15 = 0;
    v17 = 8;
    v18 = 0;
    v22 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v46 = core::str::validations::next_code_point(&v22) as u128;
    if let Some(_) = v46 {
        v34 = v33;
        if v33 != 0x110000 {
            do {
                v8 = v8;
                match (v34) {
                    97 => {
                        break;
                    }
                    _ => {
                        v19 = struct24 {
                            field_0: &v2 as u32
                            field_8: a1
                            field_16: a2
                        };
                        uu_od::parse_formats::parse_type_string::{{closure}}(&v8, &v19);
                        v36 = v10;
                        v4 = *(&v11 as &i64) as u64;
                        v5 = v12;
                        if v8 != 0x8000000000000000 {
                            v41 = v4;
                            *((v3 + 24) as &u64) = v5;
                            *((v3 + 17) as &u64) = v41;
                            *((v3 + 8) as &u64) = v8;
                            *((v3 + 16) as &u8) = v36;
                            *(v3 as &i64) = 1;
                            return;
                        }
                    }
                }
                v37 = v35;
                v38 = ((v37 * 8 & 63) ? (0x2010101010000 >> (v37 * 8 & 63)) as i32 : (0x2010101010000 >> (v37 * 8 & 63)) as i32) as i8;
                v45 = core::str::validations::next_code_point(&v22) as u128;
                v0 = 0;
                if uu_od::parse_formats::is_format_size_char((!v45 as i32 ? 0x110000 : v33) as u32 as u64, v38, &v0) as i8 {
                    v44 = core::str::validations::next_code_point(&v22) as u128;
                    if let None = v44 {
                        continue;
                    }
                    v34 = v33;
                } else {
                    v4 = 0 as void*;
                    v6 = 1;
                    for (v7 = 0; uu_od::parse_formats::is_format_size_decimal(v34 as u64, v38, &v4 as u8) as i8; v48 = core::str::validations::next_code_point(&v22) as u128);
                    if v7 {
                        v47 = core::num::<impl core::str::traits::FromStr for u8>::from_str(1, 0) as u128;
                        v27 = &v4 as u8;
                        v28 = a1;
                        v29 = a2;
                        if (v47 as i8 & 1) {
                            uu_od::parse_formats::parse_type_string::{{closure}}(&v8, &v27);
                            v25 = *(&v11 as &i64) as u64;
                            v26 = v12;
                            if v8 != 0x8000000000000000 {
                                v42 = v25;
                                *((v3 + 24) as &u64) = v26;
                                *((v3 + 17) as &u64) = v42;
                                *((v3 + 8) as &u64) = v8;
                                *((v3 + 16) as &u8) = v39;
                                *(v3 as &i64) = 1;
                                return;
                            }
                        }
                    }
                }
                if v34 == 122 {
                    v43 = core::str::validations::next_code_point(&v22) as u128;
                }
                uu_od::parse_formats::od_format_type(&v8, v37);
                if v8 == 3 {
                    v30 = struct24 {
                        field_0: &v0
                        field_8: a1
                        field_16: a2
                    };
                    uu_od::parse_formats::parse_type_string::{{closure}}(&v4 as u8, &v30);
                    memcpy(&v23, &v4, 16);
                    v24 = v7;
                    *((v3 + 24) as &void*) = v7;
                    *((v3 + 8) as &u128) = v23;
                    *(v3 as &i64) = 1;
                    return;
                }
                memcpy(&v23, &v10, 16);
                v24 = v13;
                v8 = struct33 {
                    field_0: v8
                    field_8: *(&v10 as &i128)
                    field_24: v24
                    field_32: v40
                };
                v16 = alloc::vec::Vec<T,A>::push(&v8);
                v8 = v9;
                v13 = v14;
            } while (v34 != 0x110000);
        }
    }
    *((v3 + 24) as &i64) = 0;
    *((v3 + 8) as &i128) = *(&v16.field_0 as &i128);
    *(v3 as &i64) = 0;
    return;
}
