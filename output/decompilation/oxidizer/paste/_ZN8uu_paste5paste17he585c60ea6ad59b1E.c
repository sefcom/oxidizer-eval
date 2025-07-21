fn uu_paste::paste(a0: &struct24, a1: i32, a2: i64, a3: i64, a4: i32) -> long long {
    let v0: u8;  // [bp-0x14d]
    let v1: u32;  // [bp-0x14c]
    let v2: &void*;  // [bp-0x148]
    let v3: std::io::stdio::StderrLock;  // [bp-0x140]
    let v4: u128;  // [bp-0x138]
    let v5: void*;  // [bp-0x130], Other Possible Types: u64
    let v6: void*;  // [bp-0x128], Other Possible Types: u64
    let v7: u64;  // [bp-0x120]
    let v8: u64;  // [bp-0x118]
    let v9: u32;  // [bp-0x118]
    let v10: void*;  // [bp-0x110]
    let v11: struct16;  // [bp-0x108], Other Possible Types: struct24, struct32
    let v12: i64;  // [bp-0x100]
    let v14: u64;  // [bp-0xe8]
    let v15: struct16;  // [bp-0xe8]
    let v16: u64;  // [bp-0xe0]
    let v17: void*;  // [bp-0xd8]
    let v18: i64;  // [bp-0xd0]
    let v19: u64;  // [bp-0xc8]
    let v20: Option<struct24>;  // [bp-0xc0]
    let v21: u64;  // [bp-0xc0]
    let v22: u64;  // [bp-0xb8]
    let v23: u64;  // [bp-0xb0]
    let v24: Result<struct16, struct16>;  // [bp-0xa8]
    let v25: Result<struct4, struct8>;  // [bp-0xa8], Other Possible Types: struct32, struct44
    let v26: struct48;  // [bp-0xa8]
    let v27: u64;  // [bp-0xa8]
    let v28: struct8;  // [bp-0xa8]
    let v29: struct16;  // [bp-0xa8]
    let v30: struct24;  // [bp-0xa8]
    let v31: u32;  // [bp-0xa4]
    let v32: u32;  // [bp-0xa4]
    let v33: u64;  // [bp-0xa0]
    let v34: u64;  // [bp-0xa0]
    let v35: u128;  // [bp-0x98]
    let v36: u128;  // [bp-0x98]
    let v37: u128;  // [bp-0x88]
    let v38: u128;  // [bp-0x88]
    let v39: u64;  // [bp-0x58]
    let v40: u128;  // [bp-0x58]
    let v41: u64;  // [bp-0x50]
    let v42: void*;  // [bp-0x48], Other Possible Types: u128
    let v46: i64;  // rax
    let v48: u128;  // xmm0
    let v50: struct24;  // rbp
    let v51: u64;  // rbx
    let v52: u64;  // rdx
    let v53: i64;  // r14
    let v54: u32;  // r13d
    let v55: i64;  // r14
    let v56: u64;  // rax
    let v57: core::result::Result<(), std::io::error::Error>;  // rax
    let v58: core::result::Result<(), std::io::error::Error>;  // rax
    let v59: void*;  // rbx
    let v60: i64;  // rax
    let v61: u64;  // rdx
    let v62: i64;  // r15
    let v64: i64;  // rax
    let v66: core::result::Result<(), std::io::error::Error>;  // rax
    let v67: core::result::Result<(), std::io::error::Error>;  // rax
    let v68: u64;  // rax
    let v70: struct24;  // rax
    let v72: void*;  // [bp-0x138]

    v24 = uu_paste::parse_delimiters(a2, a3);
    v2 = v33;
    match v24 {
        Err(_) => {
            return v2;
        },
        Ok(_) => {
            v7 = *((&v24 as &char + 16) as &i64);
            v10 = 0;
            v18 = a0;
            v27 as u192 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((a0 + 16) as &i64), 0);
            v9 = a1;
            v1 = a4;
            v14 = v33;
            v16 = v30.field_16;
            v17 = 0;
            v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
            v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
            if let Some(_) = v20 {
                do {
                    v6 = v23;
                    v4 = *(&v21 as &i128) as u128;
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "-") as i8 {
                        v46 = core::cell::once::OnceCell<T>::get_or_try_init(&v10) as u64;
                        alloc::rc::RcInnerPtr::inc_strong(*(v46 as &i64));
                    } else {
                        v25 = std::fs::File::open(v5, v6);
                        match v25 {
                            Ok(_) => {
                                v25 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v31 as u64);
                                v40 = v35;
                                v42 = v37;
                            },
                            Err(_) => {
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33);
                            },
                        }
                    }
                    v26 = struct48 {
                        field_0: v48
                        field_16: *(&v39 as &i128)
                        field_32: v42
                    };
                    v15 = alloc::vec::Vec<T,A>::push(&v26);
                    v20 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
                    v31 = v32;
                    v33 = v34;
                    v35 = v36;
                    v37 = v38;
                } while (v20 as i64 != 0x8000000000000000);
            }
            *(&v27 as &std::io::stdio::Stdout) = std::io::stdio::stdout();
            v3 = std::io::stdio::Stderr::lock(&v27 as u192);
            v51 = v1 as u64;
            v0 = v51 as u8;
            v19 = v17;
            v28 = uu_paste::DelimiterState::new(v2, v7);
            v72 = 0;
            v5 = 1;
            v6 = 0;
            if v8 as u8 {
                v11 = struct16 {
                    field_0: <&mut alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14)
                    field_8: v52
                };
                v54 = v51 as u32;
                loop {
LABEL_4abe0d:
                    if !<core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(v53) {
                        return 0;
                    }
                    loop {
                        uu_paste::InputSource::read_until(&v39, v56, v54 as u64, &v72);
                        v50 = v39;
                        if v39 {
                            break;
                        }
                        if v41 {
                            uu_paste::remove_trailing_line_ending_byte(v54 as u8, &v72);
                            v29 = uu_paste::DelimiterState::write_delimiter(&v72);
                        } else {
                            uu_paste::DelimiterState::remove_trailing_delimiter(v29.field_8, v26.field_16 as i64, &v72);
                            v57 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, 0);
                            match v57 {
                                Ok(_) => {
                                    v58 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
                                    if !v58 {
                                        goto LABEL_4abe0d;
                                    }
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v58);
                                },
                                Err(_) => {
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v57);
                                },
                            }
                            v50 = v68;
                            return v50;
                        }
                    }
                }
            } else {
                v11 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v19);
                v8 = "src/uu/paste/src/paste.rs";
                v1 = v51 as u32;
                loop {
                    v6 = 0;
                    v39 = v16;
                    v41 = v17 * 48 + v16;
                    v42 = 0;
                    loop {
                        v60 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v39);
                        if !v61 {
                            break;
                        }
                        v62 = v60;
                        if !*((v12 + v62) as &i8) {
                            uu_paste::InputSource::read_until(&v21 as u8, v61, v1 as u64, v55);
                            v50 = v21;
                            if v21 {
                                return v50;
                            } else if v22 {
                                uu_paste::remove_trailing_line_ending_byte(v1 as u8, v64);
                            } else {
                                *((v12 + v62) as &i8) = 1;
                            }
                        }
                        v29 = uu_paste::DelimiterState::write_delimiter(v55);
                    }
                    if v59 == v19 {
                        return 0;
                    }
                    uu_paste::DelimiterState::remove_trailing_delimiter(v29.field_8, v26.field_16 as i64, v55);
                    v66 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v5, 0);
                    match v66 {
                        Ok(_) => {
                            v67 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, &v0, 1);
                            match v67 {
                                Ok(_) => {
                                    v25 = uu_paste::DelimiterState::reset_to_first_delimiter();
                                },
                                Err(_) => {
                                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v67);
                                    break;
                                },
                            }
                        },
                        Err(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v66);
                        },
                    }
                }
                v50 = v70;
            }
            return v50;
        },
    }
}
