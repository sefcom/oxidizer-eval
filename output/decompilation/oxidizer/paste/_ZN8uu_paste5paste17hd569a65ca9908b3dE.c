fn uu_paste::paste(a0: &struct24, a1: i32, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: u8;  // [bp-0x135]
    let v1: u32;  // [bp-0x134]
    let v2: void*;  // [bp-0x130], Other Possible Types: Option<struct24>
    let v3: u64;  // [bp-0x130]
    let v4: &u8;  // [bp-0x128], Other Possible Types: u64
    let v5: void*;  // [bp-0x120], Other Possible Types: u64
    let v6: void*;  // [bp-0x118], Other Possible Types: struct8
    let v7: void*;  // [bp-0x110], Other Possible Types: u64
    let v8: u64;  // [bp-0x108]
    let v9: u64;  // [bp-0x100]
    let v10: u64;  // [bp-0xf8]
    let v11: struct24;  // [bp-0xf0], Other Possible Types: struct32
    let v12: i64;  // [bp-0xe8]
    let v13: iNone;  // [bp-0xe0]
    let v14: struct16;  // [bp-0xd0], Other Possible Types: u64
    let v15: void*;  // [bp-0xc0]
    let v16: u64;  // [bp-0xb8]
    let v17: i64;  // [bp-0xb0]
    let v18: u64;  // [bp-0xa8]
    let v19: void*;  // [bp-0xa8], Other Possible Types: u128
    let v20: u64;  // [bp-0xa0]
    let v21: void*;  // [bp-0x98], Other Possible Types: int
    let v22: Result<struct16, struct16>;  // [bp-0x88]
    let v23: Result<struct4, struct8>;  // [bp-0x88], Other Possible Types: struct44, struct8, u64
    let v24: struct48;  // [bp-0x88]
    let v26: struct16;  // [bp-0x88]
    let v27: struct32;  // [bp-0x88]
    let v28: u32;  // [bp-0x84]
    let v29: u32;  // [bp-0x84]
    let v30: u64;  // [bp-0x80]
    let v31: u64;  // [bp-0x80]
    let v32: u128;  // [bp-0x78]
    let v33: u128;  // [bp-0x78]
    let v34: iNone;  // [bp-0x68]
    let v35: iNone;  // [bp-0x68]
    let v36: struct16;  // [bp-0x40]
    let v38: u256;  // ymm0
    let v40: iNone;  // xmm0
    let v41: u256;  // ymm0
    let v42: u64;  // rbx
    let v43: u64;  // rbx
    let v44: void*;  // r15
    let v45: u64;  // rdx
    let v46: u64;  // r12
    let v47: u64;  // r15
    let v48: u8;  // r13b
    let v53: void*;  // rdx
    let v54: void*;  // r14
    let v55: i64;  // rbx
    let v56: i64;  // rax
    let v57: i64;  // r12
    let v58: u64;  // rsi
    let v60: core::result::Result<(), std::io::error::Error>;  // rax
    let v61: core::result::Result<(), std::io::error::Error>;  // rax
    let v63: u64;  // rax

    v22 = uu_paste::parse_delimiters(a2, a3);
    v8 = v30;
    match v22 {
        Err(_) => {
            return v8;
        },
        Ok(_) => {
            v7 = a1;
            v1 = a4;
            v10 = *((&v22 as &char + 16) as &i64);
            v6 = 0;
            v17 = a0;
            v14 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*((a0 + 16) as &i64), 8, 48, "src/uu/paste/src/paste.rs");
            v15 = 0;
            v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a0);
            v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
            if !((((0 ^ v2 as i64) & (0 ^ -(v3))) >> 63) as char) {
                do {
                    v34 = v34;
                    v28 = v28;
                    v32 = v32;
                    v30 = v30;
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5) as u8 {
                        v6 = core::cell::once::OnceCell<T>::get_or_try_init();
                        alloc::rc::RcInnerPtr::inc_strong(v6);
                    } else {
                        v23 = std::fs::File::open(v4, v5);
                        match v23 {
                            Ok(_) => {
                                v23 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v28 as u64);
                                v41 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v23.field_0 as &i128) as u128 as u256;
                                v19 = v32;
                                v21 = v34;
                            },
                            Err(_) => {
                                v42 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
                            },
                        }
                    }
                    v38 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18 as &i128) as u128 as u256;
                    v23 as u384 = struct48 {
                        field_0: v40
                        field_16: *(&v18 as &i128)
                        field_32: v21
                    };
                    v14 = alloc::vec::Vec<T,A>::push(&v23 as u384);
                    v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11);
                    v30 = v31;
                    v32 = v33;
                    v28 = v29;
                    v34 = v35;
                } while (v2 as i64 != 0x8000000000000000);
            }
            *(&v23 as &std::io::stdio::Stdout) = std::io::stdio::stdout();
            v9 = std::io::stdio::Stderr::lock(&v23 as u384) as u64;
            v43 = v1 as u64;
            v0 = v43 as u8;
            v44 = v15;
            v23 = uu_paste::DelimiterState::new(v8, v10);
            v2 = 0;
            v4 = 1;
            v5 = 0;
            if v7 as i8 {
                v46 = v45;
                v47 = v44 * 48 + v46;
                v48 = v43 as u8;
                v7 = v47;
            } else {
                v11 = <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v44);
                v16 = "src/uu/paste/src/paste.rs";
                v1 = v43 as u32;
                v7 = v44;
                loop {
                    v5 = 0;
                    v19 = v53;
                    v20 = v15 * 48 + v19;
                    v21 = 0;
                    v54 = 0;
                    v55 = &v2;
                    loop {
                        v56 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19);
                        if !v53 {
                            break;
                        }
                        v57 = v56;
                        v58 = v13 as i64;
                        if !*((v12 + v57) as &i8) {
                            v36 = uu_paste::InputSource::read_until(v53, v1 as u8, v55);
                            v42 = v36.field_0;
                            if v36.field_0 {
                                goto LABEL_0x456c28;
                            }
                            if v36.field_8 {
                                v55 = &v2;
                                uu_paste::remove_trailing_line_ending_byte(v1 as u8, &v2);
                            } else {
                                *((v12 + v57) as &i8) = 1;
                            }
                        }
                        v26 = uu_paste::DelimiterState::write_delimiter(v55);
                    }
                    if v54 == v7 {
                        break;
                    }
                    uu_paste::DelimiterState::remove_trailing_delimiter(v26.field_0, v24.field_16 as i64, v55);
                    v60 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v9, v4, 0);
                    if let Err(_) = v60 {
                        v63 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v60);
                        goto LABEL_456bd4;
                    }
                    v61 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v9, &v0, 1);
                    match v61 {
                        Ok(_) => {
                            v27 = uu_paste::DelimiterState::reset_to_first_delimiter();
                        },
                        Err(_) => {
                            v63 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v61);
LABEL_456bd4:
                            v42 = v63;
                            break;
                        },
                    }
                }
                return 0;
            }
        },
    }
}
