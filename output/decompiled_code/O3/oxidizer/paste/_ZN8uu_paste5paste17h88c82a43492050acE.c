fn uu_paste::paste(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [sp-0x14d]
    let v1: i32;  // [sp-0x14c]
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [sp-0x140]
    let v4: i128;  // [bp-0x138], Other Possible Types: struct8
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [bp-0x118]
    let v9: i64;  // [sp-0x110]
    let v10: i192;  // [sp-0x108], Other Possible Types: struct24, struct32
    let v11: i128;  // [sp-0xe8], Other Possible Types: struct16
    let v12: i64;  // [sp-0xe0]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i192;  // [sp-0xc0], Other Possible Types: Option<struct24>, struct16
    let v17: i128;  // [sp-0xa8], Other Possible Types: struct16, Result<struct16, struct8>, struct24, struct44, Option<struct16>, struct32
    let v18: i128;  // [sp-0x98]
    let v19: i128;  // [sp-0x88]
    let v20: i128;  // [sp-0x58], Other Possible Types: struct16
    let v21: i64;  // [sp-0x50]
    let v22: i64;  // [bp-0x48]
    let v24: i64;  // 4098
    let v26: i256;  // ymm0
    let v27: i256;  // ymm1
    let v28: i256;  // ymm2
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i64;  // r15
    let v32: i64;  // rbx
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0
    let v35: i256;  // ymm0
    let v36: i128;  // xmm1
    let v37: i128;  // xmm2
    let v38: i64;  // rdx
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i64;  // rsi
    let v42: i64;  // rdx
    let v43: i64;  // rbx
    let v44: i32;  // r13d
    let v45: i64;  // r14
    let v46: struct8;  // rax
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // rbx
    let v51: struct8;  // r15
    let v54: i64;  // rdx
    let v55: i64;  // rax
    let v56: i64;  // rax

    v17 = uu_paste::parse_delimiters(a2, a3);
    v24 = v17;
    v2 = *((&v17 as &char + 8) as &i64);
    if v24 {
        return v2;
    }
    v7 = *((&v17 as &char + 16) as &i64);
    v9 = 0;
    v14 = a0;
    v17 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a0 + 16) as &i64), 0);
    v8 = a1;
    v1 = a4;
    v11 = *((&v17 as &char + 8) as &i64);
    v12 = *((&v17 as &char + 16) as &i64);
    v13 = 0;
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
    if v16 != 0x8000000000000000 {
        do {
            v6 = *((&v16 as &char + 16) as &i64);
            v29 = v16;
            v30 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
            v4 = v29;
            v31 = v5;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v31, v6, "-") as i8 {
                v32 = *(core::cell::once::OnceCell<T>::get_or_try_init(&v9) as &i64);
                alloc::rc::RcInnerPtr::inc_strong(v32);
                v33 = v32;
                v34 = v33 CONCAT 0;
                v35 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
            } else {
                v17 = std::fs::File::open(v31, v6);
                match v17 {
                    Err(_) => {
                        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v17 as &char + 8) as &i64));
                        return v2;
                    },
                    Ok(_) => {
                        v17 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v17 as &char + 4) as &i32) as u32 as u64);
                        v35 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as u352 as u256;
                        v36 = v17.field_16;
                        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u128 as u256;
                        v37 = v17.field_32;
                        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                        v20 = v36;
                        v22 = v37;
                    },
                }
            }
            v17 = v34;
            v39 = v20;
            v26 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
            v40 = v22;
            v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
            v19 = v40;
            v18 = v39;
            v11 = alloc::vec::Vec<T,A>::push(&v17, v38);
            v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
        } while (v16 != 0x8000000000000000);
    }
    *(&v17 as &long long) = std::io::stdio::stdout();
    v3 = std::io::stdio::Stderr::lock(&v17, v41, v42);
    v43 = v1;
    v0 = v43;
    v15 = v13;
    v17 = uu_paste::DelimiterState::new(v2, v7);
    v4 = struct8 {
        field_16: 0
    };
    v5 = 1;
    v6 = 0;
    if v8 {
        v10 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
        v10.field_8 = vvar_409{reg 32};
        v44 = v43;
        loop {
LABEL_4ac0ad:
            v46 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next();
            if !v46 {
                return 0;
            }
            v6 = 0;
            loop {
                v20 = uu_paste::InputSource::read_until(v46, v44, &v4);
                v2 = v20;
                if v2 {
                    break;
                }
                if v20.field_8 {
                    uu_paste::remove_trailing_line_ending_byte(v44, &v4);
                    v17 = uu_paste::DelimiterState::write_delimiter(&v4, v42);
                } else {
                    uu_paste::DelimiterState::remove_trailing_delimiter(v17, *((&v17 as &char + 16) as &i64), &v4);
                    v47 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
                    if v47 {
                        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v47);
LABEL_4ac40e:
                        break;
                    } else {
                        v48 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
                        if v48 {
                            v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v48);
                            goto LABEL_4ac40e;
                        }
                        goto LABEL_4ac0ad;
                    }
                }
            }
        }
    } else {
        v10 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v15);
        v45 = &v4;
        *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
        v1 = v43;
        loop {
            v6 = 0;
            v20 = v11.field_8;
            v21 = v13 * 48 + v20;
            v22 = 0;
            v49 = 0;
            loop {
                if !v42 {
                    break;
                }
                v51 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                if *((v10.field_8 + v51) as &i8) {
LABEL_4ac200:
                    v49 += 1;
                    goto LABEL_4ac203;
                } else {
                    v16 = uu_paste::InputSource::read_until(v42, v1, v45);
                    v45 = v45;
                    v2 = v16;
                    if !(!v2) {
                        goto LABEL_4ac3aa;
                    }
                    if *((&v16 as &char + 8) as &i64) {
                        uu_paste::remove_trailing_line_ending_byte(v1, v45);
LABEL_4ac203:
                        v17 = uu_paste::DelimiterState::write_delimiter(v45, v54);
                    } else if v51 < *((&v10 as &char + 16) as &i64) {
                        *((v10.field_8 + v51) as &i8) = 1;
                        goto LABEL_4ac200;
                    } else {
                        *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
                    }
                }
            }
            if v49 == v15 {
                return 0;
            }
            uu_paste::DelimiterState::remove_trailing_delimiter(v17, *((&v17 as &char + 16) as &i64), v45);
            v55 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
            if v55 {
                v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v55);
                goto LABEL_4ac3a4;
            }
            v56 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
            if v56 {
                break;
            }
            v17 = uu_paste::DelimiterState::reset_to_first_delimiter();
        }
        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v56);
LABEL_4ac3a4:
LABEL_4ac3aa:
    }
    return v2;
}
