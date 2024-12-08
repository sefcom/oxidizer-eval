fn uu_uniq::Uniq::print_uniq(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i32;  // [sp-0x108]
    let v1: i8;  // [sp-0xfb]
    let v2: i8;  // [sp-0xfa]
    let v3: i8;  // [sp-0xf9]
    let v4: i128;  // [sp-0xf8]
    let v5: i64;  // [sp-0xf0]
    let v6: i64;  // [sp-0xe8]
    let v7: i128;  // [sp-0xc8], Other Possible Types: Option<Result<struct24, struct16>>
    let v8: i64;  // [sp-0xb8]
    let v9: i32;  // [sp-0xa4]
    let v10: i64;  // [sp-0xa0]
    let v11: i64;  // [sp-0x98]
    let v12: i64;  // [sp-0x90]
    let v13: i128;  // [sp-0x88]
    let v14: i64;  // [sp-0x78]
    let v15: struct17;  // [sp-0x68], Other Possible Types: i136
    let v16: i64;  // [sp-0x50]
    let v17: i192;  // [sp-0x48], Other Possible Types: Option<Result<struct24, struct16>>
    let v19: i32;  // ebp
    let v21: i64;  // rax
    let v22: i64;  // r14
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v27: i64;  // r12
    let v28: i64;  // rbx
    let v29: i64;  // rax
    let v31: i64;  // rax
    let v32: i128;  // xmm0
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0
    let v35: i128;  // xmm0
    let v37: i32;  // eax

    v19 = (*((a0 + 53) as &i8) ? 0 : 10);
    v15 = std::io::BufRead::split(a1, a2, v19);
    v7 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v15);
    v21 = v7;
    if v21 == 9223372036854775809 {
        v22 = 0;
    } else if v21 == 0x8000000000000000 {
        v22 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    } else {
        v9 = v19;
        v4 = v21;
        v5 = *((&v7 as &char + 8) as &i64);
        v6 = v8;
        v14 = v15;
        v24 = v15;
        v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
        v13 = v24;
        v3 = *((a0 + 50) as &i8);
        v2 = *((a0 + 48) as &i8);
        v1 = *((a0 + 49) as &i8);
        v27 = 1;
        v28 = 0;
        v16 = 9223372036854775809;
        loop {
            v17 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
            v29 = v17;
            if v29 == v16 {
                break;
            }
            if v29 == 0x8000000000000000 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
                return v22;
            }
            v10 = v29;
            v11 = *((&v17 as &char + 8) as &i64);
            v12 = *((&v17 as &char + 16) as &i64);
            if uu_uniq::Uniq::cmp_keys(a0, v5, v6, v11, v12) as i8 {
                if (!v2 & v27 == 1) || (!(v27 <= 1) & !v1) {
                    v0 = v28 & 1;
                    v31 = uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v27);
                    v28 = v28 | -0x100 | v28 & 1 | -0x100 | 1;
                    if v31 {
                        return v22;
                    }
                }
                v8 = v12;
                v33 = v10;
                v7 = v33;
                v6 = v8;
                v35 = v7;
                v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
                v4 = v35;
                v27 = 1;
            } else if !v3 {
                v27 += 1;
            } else {
                v0 = v28 & 1;
                v31 = uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v27);
                if v31 {
                    return v22;
                }
                v8 = v12;
                v32 = v10;
                v7 = v32;
                v6 = v8;
                v34 = v7;
                v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
                v4 = v34;
                v27 += 1;
                v28 = v28 | -0x100 | v28 & 1 | -0x100 | 1;
            }
        }
        if !(!(!v2 & v27 == 1)) || !(!(!(v27 <= 1) & !v1)) {
            v0 = v28 & 1;
            v31 = uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v27);
            if v31 {
                return v22;
            }
            v37 = *((a0 + 54) as &i8);
            if !(v37) || !(v37 != 3) {
                goto LABEL_470ae7;
            }
        } else if (!*((a0 + 54) as &i8) || *((a0 + 54) as &i8) == 3) && (v28 & 1) {
LABEL_470ae7:
            v7 = v9;
            v31 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a3, a4, &v7, 1));
            if v31 {
                return v22;
            }
            return 0;
        }
        return 0;
    }
    return v22;
}
