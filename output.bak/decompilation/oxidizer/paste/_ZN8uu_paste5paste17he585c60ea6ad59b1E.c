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
    let v10: i192;  // [sp-0x108], Other Possible Types: struct24, struct32
    let v11: i64;  // [sp-0x100]
    let v12: i64;  // [sp-0xe8], Other Possible Types: struct16
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc8]
    let v17: i128;  // [sp-0xc0], Other Possible Types: Option<struct24>, struct16
    let v18: i192;  // [sp-0xa8], Other Possible Types: struct16, Result<struct16, struct8>, struct32, struct44, Option<struct16>, struct24, struct48
    let v19: i128;  // [sp-0x98]
    let v20: i128;  // [sp-0x88]
    let v21: i64;  // [sp-0x58], Other Possible Types: struct16
    let v22: i64;  // [sp-0x50]
    let v23: i64;  // [bp-0x48]
    let v25: i64;  // 4098
    let v28: i256;  // ymm0
    let v30: i256;  // ymm1
    let v31: i256;  // ymm2
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i64;  // r15
    let v35: i64;  // rbx
    let v36: i256;  // ymm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm2
    let v39: i64;  // rbx
    let v40: i64;  // rdx
    let v41: i32;  // r13d
    let v42: i64;  // r14
    let v43: struct8;  // rax
    let v44: i64;  // rax
    let v45: i64;  // rax
    let v46: i64;  // rbx
    let v48: i64;  // rdx
    let v49: struct8;  // r15
    let v51: i64;  // rax
    let v52: i64;  // rax

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
            v19 = v19;
            v20 = v20;
            v6 = *((&v17 as &char + 16) as &i64);
            v32 = v17;
            v33 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
            v4 = v32;
            v34 = v5;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v6, "-") as i8 {
                v35 = *(core::cell::once::OnceCell<T>::get_or_try_init(&v9) as &i64);
                alloc::rc::RcInnerPtr::inc_strong(v35);
                v36 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v35 CONCAT 0);
            } else {
                v18 = std::fs::File::open(v34, v6) as u64;
                match v18 {
                    Err(_) => {
                        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v18 as &char + 8) as &i64));
                        return v2;
                    },
                    Ok(_) => {
                        v18 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v18 as &char + 4) as &i32) as u32 as u64);
                        v36 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u352 as u256;
                        v37 = v19;
                        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                        v38 = v20;
                        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u128 as u256;
                        v21 = v37;
                        v23 = v38;
                    },
                }
            }
            v18 = struct48 {
                field_0: v27 as u128
                field_16: v27 as u128
                field_32: v29 as u128
            };
            v28 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
            v12 = alloc::vec::Vec<T,A>::push(&v18);
            v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
            v20 = v20;
            v19 = v19;
        } while (v17 != 0x8000000000000000);
    }
    v18 = std::io::stdio::stdout();
    v3 = std::io::stdio::Stderr::lock(&v18);
    v39 = v1;
    v0 = v39;
    v16 = v14;
    v18 = uu_paste::DelimiterState::new(v2, v7);
    v4 = struct8 {
        field_16: 0
    };
    v5 = 1;
    v6 = 0;
    if v8 {
        v10 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
        v11 = v40;
        v41 = v39;
        loop {
LABEL_4abe0d:
            v43 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next();
            if !v43 {
                return 0;
            }
            v6 = 0;
            loop {
                v21 = uu_paste::InputSource::read_until(v43, v41, &v4);
                v2 = v21;
                if v2 {
                    break;
                }
                if v22 {
                    uu_paste::remove_trailing_line_ending_byte(v41, &v4);
                    v18 = uu_paste::DelimiterState::write_delimiter(&v4);
                } else {
                    uu_paste::DelimiterState::remove_trailing_delimiter(v18, *((&v18 as &char + 16) as &i64), &v4);
                    v44 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
                    if v44 {
                        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v44);
LABEL_4ac16e:
                        break;
                    } else {
                        v45 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
                        if v45 {
                            v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v45);
                            goto LABEL_4ac16e;
                        }
                        goto LABEL_4abe0d;
                    }
                }
            }
        }
    } else {
        v10 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v16);
        v42 = &v4;
        *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
        v1 = v39;
        loop {
            v6 = 0;
            v21 = v13;
            v22 = v14 * 48 + v21;
            v23 = 0;
            v46 = 0;
            loop {
                if !v48 {
                    break;
                }
                v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                if *((v11 + v49) as &i8) {
LABEL_4abf60:
                    v46 += 1;
                    goto LABEL_4abf63;
                } else {
                    v17 = uu_paste::InputSource::read_until(v48, v1, v42);
                    v42 = v42;
                    v2 = v17;
                    if !(!v2) {
                        goto LABEL_4ac10a;
                    }
                    if *((&v17 as &char + 8) as &i64) {
                        uu_paste::remove_trailing_line_ending_byte(v1, v42);
LABEL_4abf63:
                        v18 = uu_paste::DelimiterState::write_delimiter(v42);
                    } else {
                        if v49 >= *((&v10 as &char + 16) as &i64) {
                            *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
                        }
                        *((v11 + v49) as &i8) = 1;
                        goto LABEL_4abf60;
                        goto LABEL_4abf60;
                    }
                }
            }
            if v46 == v16 {
                return 0;
            }
            uu_paste::DelimiterState::remove_trailing_delimiter(v18, *((&v18 as &char + 16) as &i64), v42);
            v51 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
            if v51 {
                v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v51);
                goto LABEL_4ac104;
            }
            v52 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
            if v52 {
                break;
            }
            v18 = uu_paste::DelimiterState::reset_to_first_delimiter();
        }
        v2 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v52);
LABEL_4ac104:
LABEL_4ac10a:
    }
    return v2;
}
