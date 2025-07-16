fn uu_uniq::Uniq::print_uniq(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0xfb]
    let v1: u8;  // [bp-0xfa]
    let v2: u8;  // [bp-0xf9]
    let v3: u128;  // [bp-0xf8]
    let v4: u128;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf8]
    let v6: u64;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: struct24;  // [bp-0xc8], Other Possible Types: u128
    let v9: u128;  // [bp-0xc8]
    let v10: u64;  // [bp-0xc0]
    let v11: u64;  // [bp-0xb8]
    let v12: u32;  // [bp-0xa4]
    let v13: u64;  // [bp-0xa0]
    let v14: u64;  // [bp-0x98]
    let v15: u64;  // [bp-0x90]
    let v16: u128;  // [bp-0x88]
    let v17: u64;  // [bp-0x78]
    let v18: struct17;  // [bp-0x68]
    let v19: u64;  // [bp-0x58]
    let v20: u64;  // [bp-0x50]
    let v21: struct24;  // [bp-0x48]
    let v22: u64;  // [bp-0x40]
    let v24: u32;  // ebp
    let v25: u64;  // r14
    let v26: u64;  // rax
    let v27: void*;  // r14, Other Possible Types: u64
    let v28: u64;  // r12
    let v29: u8;  // bl
    let v30: u64;  // rbp
    let v33: u8;  // [bp-0xc8]

    v24 = (*((a0 + 53) as &i8) ? 0 : 10);
    v18 = std::io::BufRead::split(a1, a2, v24);
    v8 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v18);
    v25 = 0x8000000000000000;
    v26 = v8.field_0;
    if v26 == 9223372036854775809 {
        return v27;
    }
    if v26 == 0x8000000000000000 {
        v27 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    } else {
        v12 = v24;
        v5 = v26;
        v6 = v10;
        v7 = v11;
        v17 = v19;
        v16 = *(&v18.field_0 as &i128);
        v2 = *((a0 + 50) as &i8);
        v1 = *((a0 + 48) as &i8);
        v0 = *((a0 + 49) as &i8);
        v28 = 1;
        v20 = 9223372036854775809;
        loop {
            v21 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v16);
            if v21.field_0 as i64 == 9223372036854775809 {
                if !(!v1 & v28 == 1) && !(v28 > 1 & !v0) {
                    if (!*((a0 + 54) as &i8) || *((a0 + 54) as &i8) == 3) && (v29 & 1) || !(v29 & 1) {
                        break;
                    }
                } else {
                    v27 = uu_uniq::Uniq::print_line(a0, a3, a4, v6, v7, v28, v29 & 1);
                    if v27 || *((a0 + 54) as &i8) && *((a0 + 54) as &i8) != 3 {
                        break;
                    }
                }
                v33 = v12;
                v27 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a3, a4, &v33, 1) as u64);
                break;
            } else if v21.field_0 != v25 {
                v30 = v25;
                v13 = v21.field_0;
                v14 = v22;
                v15 = v21.field_16;
                if uu_uniq::Uniq::cmp_keys(a0, v6, v7, v14, v21.field_16) as i8 {
                    if ((!v1 & v28 == 1) || (v28 > 1 & !v0)) && !((v27 = uu_uniq::Uniq::print_line(a0, a3, a4, v6, v7, v28, v29 & 1), v29 = 1, !v27)) {
                        break;
                    }
                    v11 = v15;
                    v9 = *(&v13 as &i128);
                    v7 = v11;
                    v4 = *(&v33 as &i128);
                    v28 = 1;
                    v25 = v30;
                } else if v2 {
                    v27 = uu_uniq::Uniq::print_line(a0, a3, a4, v6, v7, v28, v29 & 1);
                    if v27 {
                        break;
                    }
                    v11 = v15;
                    v8 = *(&v13 as &i128);
                    v7 = v11;
                    v3 = *(&v33 as &i128);
                    v28 += 1;
                    v29 = 1;
                    v25 = v30;
                } else {
                    v25 = v30;
                    v28 += 1;
                }
            } else {
                v27 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
                break;
            }
        }
    }
    return v27;
}
