fn uu_paste::paste(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [sp-0x14d]
    let v1: i32;  // [sp-0x14c]
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [sp-0x140]
    let v4: iNone;  // [bp-0x138], Other Possible Types: struct8
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [bp-0x118], Other Possible Types: unsigned int
    let v9: i64;  // [sp-0x110]
    let v10: struct24;  // [sp-0x108], Other Possible Types: unsigned long, struct32
    let v11: i64;  // [sp-0x100]
    let v12: i64;  // [sp-0xe8], Other Possible Types: int, struct16
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: Option<struct24>;  // [sp-0xc0], Other Possible Types: int
    let v17: struct16;  // [sp-0xc0]
    let v18: struct44;  // [sp-0xa8], Other Possible Types: Result<struct4, struct8>, struct32, unsigned long, struct24
    let v19: Result<struct16, struct8>;  // [bp-0xa8], Other Possible Types: struct48, int
    let v20: iNone;  // [sp-0xa8], Other Possible Types: struct16, Option<struct16>
    let v21: iNone;  // [sp-0x98]
    let v22: iNone;  // [sp-0x88]
    let v23: i64;  // [bp-0x58], Other Possible Types: int, struct16
    let v24: i64;  // [sp-0x50]
    let v25: i64;  // [bp-0x48], Other Possible Types: int
    let v28: i64;  // 4098
    let v29: i64;  // rax
    let v32: iNone;  // ymm0
    let v34: iNone;  // ymm1
    let v35: iNone;  // ymm2
    let v36: iNone;  // xmm0
    let v37: iNone;  // ymm0
    let v38: i64;  // r15
    let v39: i64;  // rbx
    let v42: iNone;  // ymm0
    let v43: iNone;  // xmm1
    let v44: iNone;  // xmm2
    let v47: i64;  // rbx
    let v48: i64;  // rdx
    let v49: i32;  // r13d
    let v50: i64;  // r14
    let v51: struct8;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // rbx
    let v56: i64;  // rdx
    let v57: struct8;  // r15
    let v58: i64;  // rax
    let v60: i64;  // rax
    let v61: i64;  // rax

    v18 = uu_paste::parse_delimiters(a2, a3);
    v28 = v18.field_0;
    v2 = v18.field_8;
    if v28 {
        v29 = v2;
        return v29;
    }
    v7 = v18.field_16;
    v9 = 0;
    v14 = a0;
    v19 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a0 + 16) as &i64), 0);
    v8 = a1;
    v1 = a4;
    v12 = *((&v19 as &char + 8) as &i64);
    v12 = *((&v19 as &char + 16) as &i64);
    v13 = 0;
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
    v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
    if v16 as i64 != 0x8000000000000000 {
        do {
            v6 = (&v16)[16] as i64;
            v36 = v16 as i128;
            v37 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u256;
            v4 = v36;
            v38 = v5;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v6, "-") as i8 {
                v39 = *(core::cell::once::OnceCell<T>::get_or_try_init(&v9) as &i64);
                alloc::rc::RcInnerPtr::inc_strong(v39);
                v42 = (v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v39 as u128 CONCAT 0);
                continue;
            } else {
                v18 = std::fs::File::open(v38, v6);
                match v18 {
                    Ok(_) => {
                        v18 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v18 as &char + 4) as &i32) as u32 as u64);
                        v42 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18.field_0 as &i128) as u128 as u256;
                        v43 = v21;
                        v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256;
                        v44 = v22;
                        v35 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256;
                        v23 = v43;
                        v25 = v44;
                    },
                    Err(_) => {
                        goto LABEL_4ac104;
                    },
                }
            }
            v19 = struct48 {
                field_0: v41
                field_16: v31 as u128
                field_32: v33 as u128
            };
            v32 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as i128;
            v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as i128;
            v12 = alloc::vec::Vec<T,A>::push(&v19);
            v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10);
        } while (v16 as i64 != 0x8000000000000000);
    }
    *(&v18 as &u64) = std::io::stdio::stdout();
    v3 = std::io::stdio::Stderr::lock(&v18);
    v47 = v1 as u64;
    v0 = v47 as u8;
    v15 = v13;
    v20 = uu_paste::DelimiterState::new(v2, v7);
    v4 = struct8 {
        field_16: 0
    };
    v5 = 1;
    v6 = 0;
    if v8 as u8 {
        v10 = <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
        v11 = v48;
        v49 = v47 as u32;
        loop {
LABEL_4abe0d:
            v51 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next();
            if !v51 {
                return 0;
            }
            v6 = 0;
            loop {
                v23 = uu_paste::InputSource::read_until(v51, v49 as u64, &v4);
                if v23 {
                    break;
                }
                if v24 {
                    uu_paste::remove_trailing_line_ending_byte(v49 as u64, &v4);
                    v20 = uu_paste::DelimiterState::write_delimiter(&v4);
                } else {
                    uu_paste::DelimiterState::remove_trailing_delimiter(v20 as i64, (&v19)[16] as i64, &v4);
                    v52 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
                    if v52 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v52);
LABEL_4ac16e:
                        goto LABEL_4ac104;
                    } else {
                        v53 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
                        if v53 {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53);
                            goto LABEL_4ac16e;
                        }
                        goto LABEL_4abe0d;
                    }
                }
            }
        }
    } else {
        v10 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v15);
        v50 = &v4;
        *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
        v1 = v47 as u32;
        loop {
            v6 = 0;
            v23 = v12;
            v24 = v13 * 48 + v23;
            *(&v25 as &i64) = 0;
            v54 = 0;
            loop {
                if !v56 {
                    break;
                }
                v57 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
                if *((v11 + v57) as &i8) {
LABEL_4abf60:
                    v54 += 1;
                    goto LABEL_4abf63;
                } else {
                    v17 = uu_paste::InputSource::read_until(v56, v1 as u64, v50);
                    v58 = v50;
                    if v17.field_0 {
                        return v29;
                    }
                    if v17.field_8 {
                        v50 = v58;
                        uu_paste::remove_trailing_line_ending_byte(v1 as u64, v58);
LABEL_4abf63:
                        v20 = uu_paste::DelimiterState::write_delimiter(v50);
                    } else if v57 < v10.field_16 {
                        v50 = v58;
                        *((v11 + v57) as &i8) = 1;
                        goto LABEL_4abf60;
                    } else {
                        *(&v8 as &&str) = "src/uu/paste/src/paste.rs";
                    }
                }
            }
            if v54 == v15 {
                return 0;
            }
            uu_paste::DelimiterState::remove_trailing_delimiter(v20 as i64, (&v19)[16] as i64, v50);
            v60 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, v6);
            if v60 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v60);
                break;
            } else {
                v61 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
                if !v61 {
                    v18 = uu_paste::DelimiterState::reset_to_first_delimiter();
                } else {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v61);
                    break;
                }
            }
        }
LABEL_4ac104:
    }
    v29 = vvar_106{reg 56};
    return v29;
}
