fn uu_split::n_chunks_by_byte(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: u64;  // [bp-0x160]
    let v1: struct24;  // [bp-0x158]
    let v2: u64;  // [bp-0x140]
    let v3: Result<struct24, struct24>;  // [bp-0x138], Other Possible Types: core::fmt::Arguments, struct24, struct_1 *
    let v4: std::io::stdio::Stdout;  // [bp-0x138], Other Possible Types: u128
    let v5: struct16;  // [bp-0x130], Other Possible Types: struct_0 *
    let v6: i64;  // [bp-0x128], Other Possible Types: u64
    let v7: u32;  // [bp-0x120]
    let v8: struct24;  // [bp-0x108], Other Possible Types: void*
    let v9: void*;  // [bp-0x108]
    let v10: u64;  // [bp-0x100]
    let v11: void*;  // [bp-0xf8]
    let v12: u64;  // [bp-0xf0]
    let v14: u64;  // [bp-0xe0]
    let v15: u64;  // [bp-0xd0]
    let v16: struct24;  // [bp-0xc8]
    let v17: u64;  // [bp-0xa8]
    let v18: core::fmt::rt::Argument;  // [bp-0xa8]
    let v19: core::ops::range::RangeInclusive<usize>;  // [bp-0xa0]
    let v20: struct32;  // [bp-0x88]
    let v21: core::fmt::rt::Argument;  // [bp-0x68]
    let v22: u128;  // [bp-0x68]
    let v23: core::fmt::rt::Argument;  // [bp-0x58]
    let v24: u128;  // [bp-0x58]
    let v25: struct24;  // [bp-0x48]
    let v27: u64;  // rdx
    let v28: core::fmt::Arguments;  // r12
    let v29: struct16;  // r14
    let v30: u64;  // 4096
    let v33: u64;  // rax
    let v38: u64;  // r14
    let v39: u64;  // r14
    let v42: core::result::Result<(), std::io::error::Error>;  // rax
    let v43: u64;  // rax
    let v44: i64;  // r15
    let v45: u64;  // r14
    let v47: i64;  // rax
    let v48: i64;  // rbp
    let v49: u64;  // r13
    let v50: u64;  // rax
    let v51: u64;  // rbx
    let v54: core::option::Option<usize>;  // rax:rdx
    let v55: core::option::Option<usize>;  // rax:rdx
    let v56: core::option::Option<usize>;  // rax:rdx

    v16 = struct24 {
        field_0: 0
        field_8: ""
    };
    v17 = a0 + 112;
    v28 = v27;
    if (uu_split::get_input_size(a0 + 112, a1, &v16, *(a0 as &i64), *((a0 + 8) as &i64)) & 1) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
    } else {
        v20 = struct32 {
            field_0: ""
            field_16: a1
            field_24: 0
        };
        if !a3 {
            if a2 < v27 {
                v30 = a2;
            } else {
                v30 = v27;
            }
            if *((a0 + 161) as &i8) {
                a2 = v30;
            }
            if a2 {
LABEL_470ab3:
                v4 = std::io::stdio::stdout();
                v2 = std::io::stdio::Stderr::lock(&v4);
                v8 = 0;
                v10 = 8;
                v11 = 0;
                v12 = v33;
                v14 = a2;
                v8 = 0;
                if !a3 {
                    v3 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, 0);
                    v29 = v5;
                    if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
                        return v29;
                    }
                    v8 = struct24 {
                        field_0: v3 as i64
                        field_8: v29
                        field_16: v6
                    };
                    v8 = v9;
                }
                v0 = v20.field_0;
                v19 = core::ops::range::RangeInclusive<usize> {
                    start: 1
                    end: a2
                    exhausted: 0
                };
                v54 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v19);
                if let Some(_) = v54 {
                    if (a3 as u8 & 1) {
                        loop {
                            v39 = v38;
                            v1 = struct24 {
                                field_0: 0
                                field_8: ""
                            };
                            if !v28 {
                                return v29;
                            }
                            v3 = struct24 {
                                field_0: &v20
                                field_8: v28
                                field_16: v28
                            };
                            if (std::io::default_read_to_end(&v3, &v1) as u8 & 1) {
                                break;
                            }
                            if v39 != a4 {
                                v55 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v19);
                                v27 = *((&v55 as &char + 8) as &i64);
                                if let None = v55 {
                                    return v29;
                                }
                            } else {
                                v42 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v2, 1, 0);
                                match v42 {
                                    Ok(_) => {
                                        return v29;
                                    },
                                    Err(_) => {
                                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
                                        goto LABEL_470f12;
                                    },
                                }
                            }
                        }
LABEL_470e0f:
                        v15 = v51;
                        v21 = v18;
                        v23 = core::fmt::rt::Argument {
                            ty: &v15
                        };
                        v3 = core::fmt::Arguments {
                            pieces: [&g_50b040, ": cannot read from input : "]
                            args: [v22, v24]
                            fmt: 0
                        };
                        v25 = core::option::Option<T>::map_or_else(None, &v3);
                        v7 = 1;
                        v4 = *(&v25.field_0 as &i128) as u128;
                        v6 = v25.field_16;
                        alloc::boxed::Box<T>::new(&v3);
                    }
                    loop {
                        v45 = v38;
                        v1 = struct24 {
                            field_0: 0
                            field_8: ""
                        };
                        if !v28 {
                            break;
                        }
                        if v45 == v14 {
                            v47 = v28;
                        }
                        v3 = &v20;
                        v5 = v47;
                        v6 = v47;
                        if (std::io::default_read_to_end(v44, &v1) as u8 & 1) {
                            goto LABEL_470e0f;
                        }
                        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(v44, &v8, v45 - 1, a0);
                        v29 = v3;
                        v48 = v5;
                        if v3 {
                            break;
                        }
                        v49 = *((v48 + 16) as &i64);
                        if 0 < *(v48 as &i64) - v49 {
                            memcpy(*((v48 + 8) as &i64) + v49, 1, 0);
                            *((v48 + 16) as &u64) = v49;
                            goto LABEL_470d79;
                        }
                        v50 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v48, 1, 0);
                        if !v50 {
LABEL_470d79:
                            v56 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v19);
                            v38 = *((&v56 as &char + 8) as &i64);
                            if let None = v56 {
                                break;
                            }
                        } else {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v50);
LABEL_470f12:
                            v29 = v43;
                            break;
                        }
                    }
                }
            }
        } else if v27 && !(!a2) {
            goto LABEL_470ab3;
        }
    }
    return v29;
}
