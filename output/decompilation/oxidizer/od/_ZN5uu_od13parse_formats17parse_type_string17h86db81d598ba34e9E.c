fn uu_od::parse_formats::parse_type_string(a0: i64, a1: i64, a2: i64) {
    let v0: u8;  // [bp-0x135]
    let v2: u8;  // [bp-0x134]
    let v3: void*;  // [bp-0x130]
    let v4: void*;  // [bp-0x118], Other Possible Types: struct24, u64
    let v5: void*;  // [bp-0x111]
    let v6: u64;  // [bp-0x110]
    let v7: void*;  // [bp-0x108]
    let v8: void*;  // [bp-0x100]
    let v9: struct16;  // [bp-0x100]
    let v10: u64;  // [bp-0xf8]
    let v11: void*;  // [bp-0xf0]
    let v12: u64;  // [bp-0xe8]
    let v13: struct33;  // [bp-0xe8], Other Possible Types: u64
    let v14: u64;  // [bp-0xe8]
    let v15: u8;  // [bp-0xe0]
    let v16: iNone;  // [bp-0xdf]
    let v17: void*;  // [bp-0xd8]
    let v18: u64;  // [bp-0xd0]
    let v19: u64;  // [bp-0xd0]
    let v20: struct24;  // [bp-0xc0]
    let v23: core::slice::iter::Iter<u8>;  // [bp-0xa8]
    let v24: iNone;  // [bp-0x98], Other Possible Types: struct24
    let v25: u64;  // [bp-0x88]
    let v26: u64;  // [bp-0x78]
    let v27: void*;  // [bp-0x71]
    let v28: struct24;  // [bp-0x60]
    let v29: struct24;  // [bp-0x48]
    let v31: u32;  // edx
    let v33: u32;  // ebp
    let v34: i64;  // rdi
    let v35: u8;  // al
    let v36: u8;  // al
    let v37: u8;  // r14b
    let v38: u8;  // r15b
    let v39: u8;  // dl
    let v40: u8;  // r15b
    let v41: u64;  // rcx
    let v42: u64;  // rdx
    let v43: core::option::Option<u32>;  // rax:rax
    let v44: core::option::Option<u32>;  // rax:rax
    let v45: core::option::Option<u32>;  // rax:rax
    let v46: core::result::Result<u8, core::num::error::ParseIntError>;  // rax:rax
    let v47: core::option::Option<u32>;  // rax:rax
    let v48: core::option::Option<u32>;  // rax:rax

    v8 = 0;
    v10 = 8;
    v11 = 0;
    v23 = core::slice::iter::Iter<u8> {
        ptr: core::ptr::non_null::NonNull<u8> {
            pointer: a1
        }
        end_or_len: a1 + a2
        _marker: core::marker::PhantomData<&u8> { }
    };
    v47 = core::str::validations::next_code_point(&v23) as u128;
    if (v31 != 0x110000 & v47 as i8) == 1 {
        v33 = v31;
        do {
            v12 = v13;
            match (v33) {
                97 => {
                    break;
                }
                _ => {
                    v20 = struct24 {
                        field_0: a1
                        field_8: a2
                        field_16: &v2 as u32
                    };
                    uu_od::parse_formats::parse_type_string::{{closure}}(v34, &v20);
                    v36 = v15;
                    v4 = v16 as i64;
                    v5 = v17;
                    if v12 != 0x8000000000000000 {
                        v42 = v4;
                        *(&v3[24] as &void*) = v5;
                        *(&v3[17] as &u64) = v42;
                        *(&v3[8] as &u64) = v12;
                        *(&v3[16] as &u8) = v36;
                        *(v3 as &i64) = 1;
                        return;
                    }
                }
            }
            v37 = v35;
            v38 = ((v37 * 8 & 63) ? 0x2010101010000 >> (v37 * 8 & 63) : 0x2010101010000 >> (v37 * 8 & 63));
            v44 = core::str::validations::next_code_point(&v23) as u128;
            v0 = 0;
            if uu_od::parse_formats::is_format_size_char((!(v44 as i8 & 1) ? 0x110000 : v31), v38, &v0) {
                v48 = core::str::validations::next_code_point(&v23) as u128;
                if let None = v48 {
                    continue;
                }
                v33 = v31;
                if v31 != 122 {
                    continue;
                }
            } else {
                v4 = 0;
                v6 = 1;
                for (v7 = 0; uu_od::parse_formats::is_format_size_decimal(v33, v38, &v4 as u8); v43 = core::str::validations::next_code_point(&v23) as u128);
                if v7 {
                    v46 = core::num::<impl u8>::from_ascii_radix(1, 0, a2) as u128;
                    v28 = struct24 {
                        field_0: &v4 as u8
                        field_8: a1
                        field_16: a2
                    };
                    if let Err(_) = v46 {
                        uu_od::parse_formats::parse_type_string::{{closure}}(&v12 as u8, &v28);
                        v26 = v16 as i64 as u64;
                        v27 = v17;
                        if v12 != 0x8000000000000000 {
                            v41 = v26;
                            *(&v3[24] as &void*) = v27;
                            *(&v3[17] as &u64) = v41;
                            *(&v3[8] as &u64) = v12;
                            *(&v3[16] as &u8) = v39;
                            *(v3 as &i64) = 1;
                            return;
                        }
                    }
                }
                if v33 != 122 {
                    continue;
                }
            }
            v45 = core::str::validations::next_code_point(&v23) as u128;
            uu_od::parse_formats::od_format_type(&v12, v37);
            if v12 == 3 {
                v29 = struct24 {
                    field_0: a1
                    field_8: a2
                    field_16: &v0
                };
                uu_od::parse_formats::parse_type_string::{{closure}}(&v4 as u8, &v29);
                v24 = v4;
                *(&v3[24] as &void*) = v7;
                *(&v3[8] as &i128) = *(&v24.field_0 as &i128);
                *(v3 as &i64) = 1;
                return;
            }
            v24 = *(&v15 as &i128);
            v25 = v18;
            v13 = struct33 {
                field_0: v12
                field_16: <UNKNOWN>
                field_32: v40
            };
            v9 = alloc::vec::Vec<T,A>::push(&v13, "src/uu/od/src/parse_formats.rs");
            v13 = v14;
            v18 = v19;
        } while (v33 != 0x110000);
    }
    *(&v3[24] as &i64) = 0;
    *(&v3[8] as &i128) = *(&v9.field_0 as &i128);
    *(v3 as &i64) = 0;
    return;
}
