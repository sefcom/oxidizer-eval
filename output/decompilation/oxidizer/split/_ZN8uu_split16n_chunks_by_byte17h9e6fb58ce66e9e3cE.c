fn uu_split::n_chunks_by_byte(a0: i64, a1: i32, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: struct24;  // [bp-0x160]
    let v1: std::io::stdio::StderrLock;  // [bp-0x148]
    let v2: void*;  // [bp-0x140], Other Possible Types: struct24
    let v3: struct24;  // [bp-0x140]
    let v4: u64;  // [bp-0x138]
    let v5: void*;  // [bp-0x130]
    let v6: std::io::stdio::Stdout;  // [bp-0x128], Other Possible Types: struct24, struct16, u64
    let v7: u128;  // [bp-0x128]
    let v8: i64;  // [bp-0x120], Other Possible Types: u64
    let v9: i64;  // [bp-0x118], Other Possible Types: u64
    let v10: u64;  // [bp-0x110]
    let v11: void*;  // [bp-0x108]
    let v12: u64;  // [bp-0xf0]
    let v13: u64;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe0]
    let v15: u64;  // [bp-0xd8]
    let v16: u64;  // [bp-0xd0]
    let v17: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xc8]
    let v18: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xc8]
    let v19: void*;  // [bp-0xc0]
    let v20: u64;  // [bp-0xb8]
    let v21: void*;  // [bp-0xb0]
    let v22: core::ops::range::RangeInclusive<usize>;  // [bp-0xa0], Other Possible Types: struct24
    let v23: struct32;  // [bp-0x88]
    let v24: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x68]
    let v25: u64;  // [bp-0x60]
    let v26: i64;  // [bp-0x58]
    let v27: u64;  // [bp-0x50]
    let v28: u128;  // [bp-0x48]
    let v29: i8;  // [bp-0x38]
    let v31: core::result::Result<&str, core::str::error::Utf8Error>;  // r14
    let v32: u64;  // rdx
    let v33: struct56;  // r15
    let v34: u64;  // r13
    let v35: u64;  // rdx
    let v38: u64;  // rax
    let v40: u64;  // r13
    let v43: u64;  // rbx
    let v44: u64;  // rbx
    let v46: core::fmt::Arguments;  // r15
    let v47: u64;  // rbx
    let v50: i64;  // rbx
    let v51: u64;  // r14
    let v52: core::result::Result<(), std::io::error::Error>;  // rax
    let v53: core::result::Result<(), std::io::error::Error>;  // rax
    let v54: u64;  // rbp
    let v55: u64;  // rcx
    let v56: u64;  // rax
    let v58: core::option::Option<usize>;  // rax:rdx
    let v59: core::option::Option<usize>;  // rax:rdx
    let v60: core::option::Option<usize>;  // rax:rdx

    v19 = 0;
    v20 = 1;
    v21 = 0;
    v33 = v32;
    if uu_split::get_input_size(a0 + 112, a1, &v19, *(a0 as &i64), *((a0 + 8) as &i64)) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
        goto LABEL_0x4cd668;
    }
    v23 = struct32 {
        field_0: *(&v20 as &i128)
        field_16: a1
        field_24: 0
    };
    if a3 == 1 {
        if v32 && a2 {
            goto LABEL_4cd1f6;
        }
        goto LABEL_0x4cd668;
    } else {
        if v32 < a2 {
            v35 = v32;
        } else {
            v35 = a2;
        }
        if *((a0 + 161) as &i8) {
            a2 = v35;
        }
        if !a2 {
            goto LABEL_0x4cd668;
        }
LABEL_4cd1f6:
        v6 = std::io::stdio::stdout();
        v1 = std::io::stdio::Stderr::lock(&v6);
        v2 = 0;
        v4 = 8;
        v5 = 0;
        v12 = v38;
        v14 = a2;
        v2 = 0;
        v40 = a2;
        if a3 != 1 {
            v6 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, 0);
            v16 = v6.field_0;
            if v6.field_0 as i64 == 0x8000000000000000 {
                return v56;
            }
            v2 = struct24 {
                field_0: v16
                field_8: v34
                field_16: v9
            };
            v2 = v3;
            v40 = v14;
            goto LABEL_4cd2f1;
            return v56;
        } else {
LABEL_4cd2f1:
            v22 = struct24 {
                field_0: 1
                field_8: v40
                field_16: 0
            };
            v22 = core::ops::range::RangeInclusive<usize> {
                start: 1
                end: v40
                exhausted: 0
            };
            v58 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v22);
            if !v58 as i64 {
                return 0;
            } else if a3 {
                loop {
                    v44 = v43;
                    v0 = struct24 {
                        field_0: 0
                        field_8: 1
                        field_16: 0
                    };
                    if !v33 {
                        break;
                    }
                    if v44 == v14 {
                        v46 = v33;
                    } else {
                        v46 = v12 + (v44 - 1 < v13);
                    }
                    v6 = struct16 {
                        field_0: &v23
                        field_8: v46
                    };
                    v6 = struct16 {
                        field_0: &v23
                        field_8: v46
                    };
                    if !(!std::io::default_read_to_end(&v6, &v0, 0, &v23)) {
                        goto LABEL_4cd50e;
                    }
                    if v44 != a4 {
                        v60 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v22);
                        v43 = *((&v60 as &char + 8) as &i64);
                        if let None = v60 {
                            break;
                        }
                    } else {
                        v53 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, 1, 0);
                        if let Ok(_) = v53 {
                            break;
                        }
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53);
                    }
                }
            } else {
                v17 = v31;
            }
        }
    }
    loop {
        v47 = v43;
        v0 = struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
        if !v33 {
            goto LABEL_0x4cd668;
        }
        v6 = struct16 {
            field_0: &v23
            field_8: v33
        };
        if !std::io::default_read_to_end(&v6, &v0, 0, &v23) {
            v6 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v2, v47 - 1);
            v50 = v8;
            if !v6.field_0 {
                goto LABEL_4cd48d;
            } else {
                goto LABEL_0x4cd668;
            }
        } else {
LABEL_4cd50e:
            v15 = v54;
            v24 = v18;
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            v26 = &v15;
            v27 = <std::io::error::Error as core::fmt::Display>::fmt;
            v6 = &g_548580;
            v8 = 2;
            v11 = 0;
            v9 = &v24;
            v10 = 2;
            core::option::Option<T>::map_or_else(None, &v6, v55);
            v10 = 1;
            v7 = v28;
            v9 = *(&v29 as &i64);
            alloc::boxed::Box<T>::new(&v6);
        }
LABEL_4cd48d:
        v51 = *((v50 + 16) as &i64);
        if 0 < *(v50 as &i64) - v51 {
            memcpy(*((v50 + 8) as &i64) + v51, 1, 0);
            *((v50 + 16) as &u64) = v51;
            v18 = v17;
            goto LABEL_4cd4e3;
        }
        v52 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v50, 1, 0);
        v18 = v17;
        match v52 {
            Ok(_) => {
LABEL_4cd4e3:
                v59 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v22);
                v43 = *((&v59 as &char + 8) as &i64);
                if let None = v59 {
                    goto LABEL_0x4cd668;
                }
            },
            Err(_) => {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v52);
                goto LABEL_0x4cd668;
            },
        }
    }
}
