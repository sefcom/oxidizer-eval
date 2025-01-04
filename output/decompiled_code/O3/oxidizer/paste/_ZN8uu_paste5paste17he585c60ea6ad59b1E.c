fn uu_paste::paste(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [sp-0x14d]
    let v1: i32;  // [sp-0x14c]
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [sp-0x140]
    let v4: struct8;  // [bp-0x138], Other Possible Types: i128
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [bp-0x118]
    let v9: i64;  // [sp-0x110]
    let v10: i256;  // [sp-0x108], Other Possible Types: struct32, struct24
    let v11: i64;  // [sp-0x100]
    let v12: i64;  // [sp-0xe8], Other Possible Types: struct16
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc8]
    let v17: i128;  // [sp-0xc0], Other Possible Types: Option<struct24>, struct16
    let v18: i128;  // [sp-0xa8], Other Possible Types: struct16, Result<struct4, struct8>, Option<struct16>, struct24, struct44, struct32
    let v19: i192;  // [sp-0x98]
    let v20: i128;  // [sp-0x88]
    let v21: i64;  // [sp-0x58], Other Possible Types: struct16
    let v22: i64;  // [sp-0x50]
    let v23: i128;  // [bp-0x48]
    let v25: i64;  // 4098
    let v27: i256;  // ymm0
    let v28: i256;  // ymm1
    let v29: i256;  // ymm2
    let v30: i128;  // xmm0
    let v31: i256;  // ymm0
    let v32: i64;  // r15
    let v33: i64;  // rbx
    let v34: i128;  // xmm0
    let v35: i128;  // xmm0
    let v36: i256;  // ymm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm2
    let v39: i64;  // rdx
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v42: i64;  // rsi
    let v43: i64;  // rdx
    let v44: i64;  // rbx
    let v45: i32;  // r13d
    let v46: i64;  // r14
    let v47: struct8;  // rax
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v50: i64;  // rbx
    let v52: struct8;  // r15
    let v55: i64;  // rdx
    let v56: i64;  // rax
    let v57: i64;  // rax

    v18 = uu_paste::parse_delimiters(a2, a3);
    v25 = v18;
    v2 = *((&v18 as &char + 8) as &i64);
    if v25 {
        return v2;
    }
    v7 = *((&v18 as &char + 16) as &i64);
    v9 = 0;
    v15 = a0;
    v18 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a0 + 16) as &i64), 0);
    v8 = a1;
    v1 = a4;
    v12 = *((&v18 as &char + 8) as &i64);
    v13 = *((&v18 as &char + 16) as &i64);
    v14 = 0;
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
    if v17 != 0x8000000000000000 {
        do {
            v6 = *((&v17 as &char + 16) as &i64);
            v30 = v17;
            v31 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
            v4 = v30;
            v32 = v5;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v6, "-") as i8 {
                v33 = *(core::cell::once::OnceCell<T>::get_or_try_init(&v9) as &i64);
                alloc::rc::RcInnerPtr::inc_strong(v33);
                v34 = v33;
                v35 = v34 CONCAT 0;
                v36 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
            } else {
                v18 = std::fs::File::open(v32, v6);
                match v18 {
                    Err(_) => {
                        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v18 as &char + 8) as &i64));
                        return v2;
                    },
                    Ok(_) => {
                        v18 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v18 as &char + 4) as &i32) as u32 as u64);
                        v36 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u352 as u256;
                        v37 = v19;
                        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                        v38 = v20;
                        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u128 as u256;
                        v21 = v37;
                        v23 = v38;
                    },
                }
            }
            v18 = v35;
            v40 = v21;
            v27 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
            v41 = v23;
            v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
            v20 = v41;
            v19 = v40;
            v12 = alloc::vec::Vec<T,A>::push(&v18, v39);
            v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
        } while (v17 != 0x8000000000000000);
    }
    v18 = std::io::stdio::stdout();
    v3 = std::io::stdio::Stderr::lock(&v18, v42, v43);
    v44 = v1;
    v0 = v44;
    v16 = v14;
    v18 = uu_paste::DelimiterState::new(v2, v7);
    v4 = struct8 {
        field_16: 0
    };
    v5 = 1;
    v6 = 0;
    if v8 {
        v10 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
        v11 = v43;
        v45 = v44;
        loop {
LABEL_4abe0d:
            v47 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next();
            if !v47 {
                return 0;
            }
            v6 = 0;
            loop {
                v21 = uu_paste::InputSource::read_until(v47, v45, &v4);
                v2 = v21;
                if v2 {
                    break;
                }
                if v22 {
                    uu_paste::remove_trailing_line_ending_byte(v45, &v4);
                    v18 = uu_paste::DelimiterState::write_delimiter(&v4, v43);
                } else {
                    uu_paste::DelimiterState::remove_trailing_delimiter(v18, v19, &v4);
                    v48 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
                    if v48 {
                        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v48);
LABEL_4ac16e:
                        break;
                    } else {
                        v49 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
                        if v49 {
                            v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v49);
                            goto LABEL_4ac16e;
                        }
                        goto LABEL_4abe0d;
                    }
                }
            }
        }
    } else {
        v10 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v16);
        v46 = &v4;
        *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
        v1 = v44;
        loop {
            v6 = 0;
            v21 = v13;
            v22 = v14 * 48 + v21;
            v23 = 0;
            v50 = 0;
            loop {
                if !v43 {
                    break;
                }
                v52 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                if *((v11 + v52) as &i8) {
LABEL_4abf60:
                    v50 += 1;
                    goto LABEL_4abf63;
                } else {
                    v17 = uu_paste::InputSource::read_until(v43, v1, v46);
                    v46 = v46;
                    v2 = v17;
                    if !(!v2) {
                        goto LABEL_4ac10a;
                    }
                    if *((&v17 as &char + 8) as &i64) {
                        uu_paste::remove_trailing_line_ending_byte(v1, v46);
LABEL_4abf63:
                        v18 = uu_paste::DelimiterState::write_delimiter(v46, v55);
                    } else {
                        if v52 >= *((&v10 as &char + 16) as &i64) {
                            *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
                        }
                        *((v11 + v52) as &i8) = 1;
                        goto LABEL_4abf60;
                        goto LABEL_4abf60;
                    }
                }
            }
            if v50 == v16 {
                return 0;
            }
            uu_paste::DelimiterState::remove_trailing_delimiter(v18, v19, v46);
            v56 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
            if v56 {
                v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v56);
                goto LABEL_4ac104;
            }
            v57 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
            if v57 {
                break;
            }
            v18 = uu_paste::DelimiterState::reset_to_first_delimiter();
        }
        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v57);
LABEL_4ac104:
LABEL_4ac10a:
    }
    return v2;
}
