fn uu_split::n_chunks_by_byte(a0: void*, a1: u32, a2: &u64, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x160]
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x130]
    let v7: i64;  // [sp-0x128], Other Possible Types: struct24, struct16
    let v8: i64;  // [sp-0x120]
    let v9: i64;  // [sp-0x118]
    let v10: i32;  // [bp-0x110]
    let v11: i64;  // [sp-0xf0]
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i64;  // [sp-0xd0]
    let v16: i64;  // [sp-0xc8]
    let v17: i64;  // [sp-0xc0]
    let v18: i64;  // [sp-0xb8]
    let v19: i64;  // [sp-0xb0]
    let v20: i64;  // [sp-0xa0]
    let v21: i64;  // [sp-0x98]
    let v22: i8;  // [sp-0x90]
    let v23: iNone;  // [sp-0x88]
    let v24: i64;  // [sp-0x78]
    let v25: i8;  // [sp-0x70]
    let v26: String;  // [sp-0x48]
    let v28: i64;  // r13
    let v29: i64;  // r14
    let v30: i64;  // rdx
    let v31: i64;  // r15
    let v32: i64;  // r13
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i32;  // eax
    let v37: i64;  // r13
    let v38: i64;  // rbx
    let v40: i64;  // rax
    let v41: i64;  // rbp
    let v42: i64;  // r13
    let v43: i64;  // rax
    let v44: i64;  // r13
    let v45: i64;  // rbx
    let v46: i64;  // rsi
    let v47: i64;  // r13
    let v48: i64;  // r14
    let v49: i64;  // rax
    let v51: i64;  // rax
    let v53: i64;  // r13

    v28 = a2;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v29 = a0 + 112;
    v31 = v30;
    if uu_split::get_input_size(v29, a1, &v17, *(a0 as &i64), *((a0 + 8) as &i64)) {
        v32 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
        return v32;
    }
    v23 = *(&v18 as &i128);
    v24 = a1;
    v25 = 0;
    if a3 != 1 {
        v33 = a2;
        if v30 < a2 {
            v33 = v30;
        }
        if *((a0 + 161) as &i8) {
            v28 = v33;
        }
        if !(!v28) {
            goto LABEL_4cd1f0;
        }
    } else if v30 && a2 {
LABEL_4cd1f0:
        v7 = std::io::stdio::stdout();
        v3 = std::io::stdio::Stderr::lock(&v7);
        v4 = 0;
        v5 = 8;
        v6 = 0;
        if (v30 | v28) >> 32 {
            v34 = v30;
            v35 = (0 CONCAT v34) % v28 as u128 CONCAT (0 CONCAT v34) / v28 as u128;
            v12 = ((0 CONCAT v34) % v28 as u128 CONCAT (0 CONCAT v34) / v28 as u128) >> 64;
        } else {
            v36 = v30 as u32;
            v35 = (((0 CONCAT v36) % (v28 & 4294967295)) as u32 CONCAT ((0 CONCAT v36) / (v28 & 4294967295)) as u32) & 4294967295;
            v12 = (((0 CONCAT v36) % (v28 & 4294967295)) as u32 CONCAT ((0 CONCAT v36) / (v28 & 4294967295)) as u32) >> 32 & 4294967295;
        }
        v11 = v35;
        v13 = v28;
        if a3 != 1 {
            v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(v28, a0, 0);
            v37 = v8;
            v15 = v7;
            if v15 == 0x8000000000000000 {
                return v32;
            }
            v4 = v15;
            v5 = v37;
            v6 = v9;
            v28 = v13;
        }
        v20 = 1;
        v21 = v28;
        v22 = 0;
        if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
            return 0;
        }
        v38 = v30;
        if !a3 {
            v16 = v29;
            loop {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if !v31 {
                    break;
                }
                v42 = v38 - 1;
                v43 = v11 + (v42 < v12);
                if v38 == v13 {
                    v43 = v31;
                }
                v7 = &v23;
                v8 = v43;
                v41 = v30;
                if std::io::default_read_to_end(&v7, &v0, 0, &v23) {
                    v14 = v41;
                    v26 = format!("{}: cannot read from input : {}", v29, &v14);
                    *(&v10 as &i32) = 1;
                    v32 = v53;
                    return v32;
                }
                v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v4, v42);
                v44 = v7;
                v45 = v8;
                if v44 {
                    return v32;
                }
                v46 = v1;
                v47 = v2;
                v48 = *((v45 + 16) as &i64);
                if v47 < *(v45 as &i64) - v48 {
                    memcpy(*((v45 + 8) as &i64) + v48, v46, v47);
                    *((v45 + 16) as &unsigned long) = v48 + v47;
                } else {
                    v49 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v45, v46, v47);
                    if v49 {
                        v32 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v49);
                        return v32;
                    }
                }
                v31 -= v30;
                v38 = v30;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    break;
                }
            }
        } else {
            loop {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if !v31 {
                    return 0;
                }
                v40 = v11 + (v38 - 1 < v12);
                if v38 == v13 {
                    v40 = v31;
                }
                v7 = &v23;
                v8 = v40;
                if std::io::default_read_to_end(&v7, &v0, 0, &v23) {
                    vvar_830{stack -216} = v41;
                    vvar_831{stack -72} = format!("{}: cannot read from input : {}", v29, &v14);
                    *(&v10 as &i32) = 1;
                    return v32;
                }
                if v38 == a4 {
                    break;
                }
                v31 -= v30;
                v38 = v30;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    return 0;
                }
            }
            v51 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v1, v2);
            if !v51 {
                return 0;
            }
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v51);
            return v32;
        }
    }
    return 0;
}
