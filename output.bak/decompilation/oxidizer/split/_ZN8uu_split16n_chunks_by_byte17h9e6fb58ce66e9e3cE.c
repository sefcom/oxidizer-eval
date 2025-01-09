fn uu_split::n_chunks_by_byte(a0: void*, a1: u32, a2: &u64, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x160]
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x130]
    let v7: i64;  // [sp-0x128], Other Possible Types: struct28, struct16, struct24
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
    let v25: String;  // [sp-0x48]
    let v27: i64;  // r14
    let v28: i64;  // rdx
    let v29: i64;  // r15
    let v30: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i32;  // eax
    let v37: i64;  // r13
    let v39: i64;  // rbx
    let v40: i64;  // rbx
    let v42: i64;  // r15
    let v43: i64;  // rbx
    let v44: i64;  // r13
    let v46: i64;  // r15
    let v47: i64;  // rbx
    let v48: i64;  // rsi
    let v49: i64;  // r13
    let v50: i64;  // r14
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rbp

    v16 = 0;
    v17 = 1;
    v18 = 0;
    v27 = a0 + 112;
    v29 = v28;
    if uu_split::get_input_size(v27, a1, &v16, *(a0 as &i64), *((a0 + 8) as &i64)) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
        return v30;
    }
    v22 = v17;
    v23 = a1;
    v24 = 0;
    if a3 != 1 {
        if !(!v33) {
            goto LABEL_4cd1f0;
        }
    } else if v28 && a2 {
LABEL_4cd1f0:
        v7 = std::io::stdio::stdout();
        v3 = std::io::stdio::Stderr::lock(&v7);
        v4 = 0;
        v5 = 8;
        v6 = 0;
        if (v28 | a2) >> 32 {
            v34 = v28;
            v35 = (0 CONCAT v34) % a2 CONCAT (0 CONCAT v34) / a2;
            v11 = ((0 CONCAT v34) % a2 CONCAT (0 CONCAT v34) / a2) >> 64;
        } else {
            v36 = v28;
            v35 = ((0 CONCAT v36) % (a2 & 4294967295) CONCAT (0 CONCAT v36) / (a2 & 4294967295)) & 4294967295;
            v11 = ((0 CONCAT v36) % (a2 & 4294967295) CONCAT (0 CONCAT v36) / (a2 & 4294967295)) >> 32 & 4294967295;
        }
        v10 = v35;
        v12 = a2;
        if a3 != 1 {
            v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, 0);
            v14 = v7;
            if v14 == 0x8000000000000000 {
                goto LABEL_4cd647;
            }
            v4 = v14;
            v5 = v8;
            v6 = v9;
            v37 = v12;
        }
        v19 = 1;
        v20 = v37;
        v21 = 0;
        if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
            return 0;
        }
        if !a3 {
            v15 = v27;
        } else {
            loop {
                v39 = v40;
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if !v29 {
                    goto LABEL_4cd5fe;
                }
                if v39 != v12 {
                    v42 = v10 + (v39 - 1 < v11);
                }
                v7 = &v22;
                v8 = v42;
                if !(!v33) {
                    goto LABEL_4cd50e;
                }
                if v39 == a4 {
                    break;
                }
                v29 -= v28;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    return 0;
                }
            }
            v52 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v1, v2);
            if !v52 {
                goto LABEL_4cd5fe;
            }
            v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v52);
            goto LABEL_4cd637;
        }
        loop {
            v43 = v40;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            if !v29 {
LABEL_4cd5fe:
                return 0;
            }
            v44 = v43 - 1;
            if v43 != v12 {
                v46 = v10 + (v44 < v11);
            }
            v7 = &v22;
            v8 = v46;
            if std::io::default_read_to_end(&v7, &v0, 0, &v22) {
LABEL_4cd50e:
                v13 = v53;
                v25 = format!("{:?}: cannot read from input : {:?}", v54, &v13);
                v7 = struct28 {
                    field_0: v25
                    field_16: *((&v25 as &char + 16) as &i64)
                    field_24: 1
                };
                v30 = alloc::boxed::Box<T>::new(&v7);
                goto LABEL_4cd63d;
            } else {
                v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v4, v44);
                v30 = v7;
                v47 = v8;
                if !(!v33) {
                    goto LABEL_4cd63d;
                }
                v48 = v1;
                v49 = v2;
                v50 = *((v47 + 16) as &i64);
                if v49 < *(v47 as &i64) - v50 {
                    memcpy(*((v47 + 8) as &i64) + v50, v48, v49);
                    *((v47 + 16) as &i64) = v50 + v49;
                    goto LABEL_4cd4e3;
                }
                v51 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v47, v48, v49);
                if v51 {
                    v30 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v51);
LABEL_4cd637:
LABEL_4cd63d:
LABEL_4cd647:
                    return v30;
                }
LABEL_4cd4e3:
                v29 -= v28;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    return 0;
                }
            }
        }
    }
    return v30;
}
