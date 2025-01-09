fn uu_split::n_chunks_by_byte(a0: void*, a1: u32, a2: &u64, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x160]
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x130]
    let v7: i224;  // [sp-0x128], Other Possible Types: struct24, struct16, struct28
    let v8: i64;  // [sp-0x120]
    let v9: i64;  // [sp-0x118]
    let v10: i64;  // [sp-0xf0]
    let v11: i64;  // [sp-0xe8]
    let v12: i64;  // [sp-0xe0]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i64;  // [sp-0xc0]
    let v17: i64;  // [sp-0xb8]
    let v18: i64;  // [sp-0xb0]
    let v19: i64;  // [sp-0xa0]
    let v20: i64;  // [sp-0x98]
    let v21: i8;  // [sp-0x90]
    let v22: i128;  // [sp-0x88]
    let v23: i64;  // [sp-0x78]
    let v24: i8;  // [sp-0x70]
    let v25: Argument;  // [bp-0x68]
    let v26: Argument;  // [bp-0x58]
    let v27: struct24;  // [sp-0x48]
    let v29: i64;  // r14
    let v30: i64;  // rdx
    let v31: i64;  // r15
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i32;  // eax
    let v38: i64;  // r13
    let v41: i64;  // rbx
    let v42: i64;  // rbx
    let v44: i64;  // r15
    let v45: i64;  // rbx
    let v46: i64;  // r13
    let v48: i64;  // r15
    let v49: i64;  // rbx
    let v50: i64;  // rsi
    let v51: i64;  // r13
    let v52: i64;  // r14
    let v53: i64;  // rax
    let v55: i64;  // rax
    let v56: i64;  // rbp
    let v57: i64;  // r13

    v16 = 0;
    v17 = 1;
    v18 = 0;
    v29 = a0 + 112;
    v31 = v30;
    if uu_split::get_input_size(v29, a1, &v16, *(a0 as &i64), *((a0 + 8) as &i64)) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
        return v57;
    }
    v22 = v17;
    v23 = a1;
    v24 = 0;
    if a3 != 1 {
        if !(!v34) {
            goto LABEL_4cd1f0;
        }
    } else if v30 && a2 {
LABEL_4cd1f0:
        v7 = std::io::stdio::stdout();
        v3 = std::io::stdio::Stderr::lock(&v7);
        v4 = 0;
        v5 = 8;
        v6 = 0;
        if (v30 | a2) >> 32 {
            v35 = v30;
            v36 = (0 CONCAT v35) % a2 CONCAT (0 CONCAT v35) / a2;
            v11 = ((0 CONCAT v35) % a2 CONCAT (0 CONCAT v35) / a2) >> 64;
        } else {
            v37 = v30;
            v36 = ((0 CONCAT v37) % (a2 & 4294967295) CONCAT (0 CONCAT v37) / (a2 & 4294967295)) & 4294967295;
            v11 = ((0 CONCAT v37) % (a2 & 4294967295) CONCAT (0 CONCAT v37) / (a2 & 4294967295)) >> 32 & 4294967295;
        }
        v10 = v36;
        v12 = a2;
        if a3 != 1 {
            v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, 0);
            v14 = v7;
            if v14 == 0x8000000000000000 {
                return v57;
            }
            v4 = v14;
            v5 = v8;
            v6 = v9;
            v38 = v12;
        }
        v19 = 1;
        v20 = v38;
        v21 = 0;
        if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
            return 0;
        }
        if !a3 {
            v15 = v29;
            loop {
                v45 = v42;
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if !v31 {
                    break;
                }
                v46 = v45 - 1;
                if v45 != v12 {
                    v48 = v10 + (v46 < v11);
                }
                v7 = &v22;
                v8 = v48;
                if std::io::default_read_to_end(&v7, &v0, 0, &v22) {
                    v13 = v56;
                    v25 = Argument {
                        value: v29
                        formatter: <alloc::string::String as core::fmt::Display>::fmt
                    };
                    v26 = Argument {
                        value: &v13
                        formatter: <std::io::error::Error as core::fmt::Display>::fmt
                    };
                    v7 = struct28 {
                        field_0: &g_548580
                        field_16: &v25
                        field_24: <UNKNOWN>
                    };
                    v27 = core::option::Option<T>::map_or_else(None, &v7);
                    alloc::boxed::Box<T>::new(&v7);
                    return v57;
                }
                v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v4, v46);
                v49 = v8;
                if v7 {
                    return v57;
                }
                v50 = v1;
                v51 = v2;
                v52 = *((v49 + 16) as &i64);
                if v51 < *(v49 as &i64) - v52 {
                    memcpy(*((v49 + 8) as &i64) + v52, v50, v51);
                    *((v49 + 16) as &i64) = v52 + v51;
                } else {
                    v53 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v49, v50, v51);
                    if v53 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53);
                        return v57;
                    }
                }
                v31 -= v30;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    break;
                }
            }
        } else {
            loop {
                v41 = v42;
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if !v31 {
                    return 0;
                }
                if v41 != v12 {
                    v44 = v10 + (v41 - 1 < v11);
                }
                v7 = &v22;
                v8 = v44;
                if std::io::default_read_to_end(&v7, &v0, 0, &v22) {
                    vvar_847{stack -216} = v56;
                    v25 = Argument {
                        value: v29
                        formatter: <alloc::string::String as core::fmt::Display>::fmt
                    };
                    v26 = Argument {
                        value: &v13
                        formatter: <std::io::error::Error as core::fmt::Display>::fmt
                    };
                    v7 = struct28 {
                        field_0: &g_548580
                        field_16: &v25
                        field_24: <UNKNOWN>
                    };
                    vvar_848{stack -72} = core::option::Option<T>::map_or_else(None, &v7);
                    alloc::boxed::Box<T>::new(&v7);
                    return v57;
                }
                if v41 == a4 {
                    break;
                }
                v31 -= v30;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    return 0;
                }
            }
            v55 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v1, v2);
            if !v55 {
                return 0;
            }
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v55);
            return v57;
        }
    }
    return v57;
}
