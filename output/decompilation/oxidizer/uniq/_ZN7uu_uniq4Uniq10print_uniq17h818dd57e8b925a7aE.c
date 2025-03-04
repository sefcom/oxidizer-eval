fn uu_uniq::Uniq::print_uniq(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x108]
    let v1: i8;  // [sp-0xfb]
    let v2: i8;  // [sp-0xfa]
    let v3: i8;  // [sp-0xf9]
    let v4: iNone;  // [bp-0xf8], Other Possible Types: unsigned long
    let v5: i64;  // [sp-0xf0]
    let v6: i64;  // [sp-0xe8]
    let v7: Option<Result<struct24, struct8>>;  // [sp-0xc8], Other Possible Types: char
    let v8: i64;  // [sp-0xb8]
    let v9: i32;  // [sp-0xa4]
    let v10: i64;  // [sp-0xa0]
    let v11: i64;  // [sp-0x98]
    let v12: i64;  // [sp-0x90]
    let v13: iNone;  // [sp-0x88]
    let v14: i64;  // [sp-0x78]
    let v15: struct17;  // [sp-0x68]
    let v16: i64;  // [sp-0x50]
    let v17: Option<Result<struct24, struct8>>;  // [sp-0x48]
    let v19: i32;  // ebp
    let v20: i64;  // r14
    let v21: i64;  // rax
    let v23: iNone;  // xmm0
    let v24: iNone;  // ymm0
    let v25: iNone;  // ymm0
    let v26: i64;  // r12
    let v28: i64;  // rbx
    let v29: i64;  // rax
    let v31: i64;  // rbp
    let v32: iNone;  // xmm0
    let v34: iNone;  // xmm0
    let v36: i32;  // eax
    let v38: i64;  // r14

    v19 = (*((a0 + 53) as &i8) ? 0 : 10);
    v15 = std::io::BufRead::split(a1, a2, v19 as u64);
    v7 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v15);
    v20 = 0x8000000000000000;
    v21 = v7 as i64;
    if v21 == 9223372036854775809 {
        return v38;
    }
    if v21 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    } else {
        v9 = v19;
        v4 = v21;
        v5 = *((&v7 as &char + 8) as &i64);
        v6 = v8;
        v14 = v15.field_0;
        v23 = *(&v15.field_0 as &i128);
        v25 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256;
        v13 = v23;
        v3 = *((a0 + 50) as &i8);
        v2 = *((a0 + 48) as &i8);
        v1 = *((a0 + 49) as &i8);
        v26 = 1;
        v16 = 9223372036854775809;
        v28 = 0;
        loop {
            v17 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
            v29 = v17 as i64;
            if v29 == v16 {
                break;
            }
            if v29 == v20 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
                goto LABEL_470937;
            }
            v31 = v20;
            v10 = v29;
            v11 = *((&v17 as &char + 8) as &i64);
            v12 = *((&v17 as &char + 16) as &i64);
            if !uu_uniq::Uniq::cmp_keys(a0, v5, v6, v11, v12) as i8 {
                if !v3 {
                    v20 = v31;
                    v26 += 1;
                    continue;
                }
                if !(!uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v26, v0)) {
                    goto LABEL_470937;
                }
                v6 = v8;
                v32 = v7 as i128;
                v25 = (v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256;
                v4 = v32;
                v26 += 1;
                v20 = v31;
                v28 = (v28 & -0x100 | v28 as u8 & 1) & -0x100 | 1;
            } else {
                if !(!v2 & v26 == 1) && !(!(v26 <= 1) & !v1) || !uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v26, v0) {
                    v6 = v8;
                    v34 = v7 as i128;
                    v25 = (v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256;
                    v4 = v34;
                    v26 = 1;
                    v20 = v31;
                    continue;
                }
LABEL_470937:
                goto LABEL_4709a8;
            }
        }
        if !(!v2 & v26 == 1) && !(!(v26 <= 1) & !v1) {
            v36 = *((a0 + 54) as &i8);
            if !((!v36 || v36 == 3) && (v28 as u8 & 1)) {
                goto LABEL_4709c1;
            }
        } else {
            if !(!uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v26, v0)) {
                goto LABEL_4709a8;
            }
            if *((a0 + 54) as &i8) && *((a0 + 54) as &i8) != 3 {
LABEL_4709c1:
                return v38;
            }
        }
        *(&v7 as &u8) = v9 as u8;
        if !<core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a3, a4, &v7, 1)) {
            return v38;
        }
LABEL_4709a8:
    }
}
