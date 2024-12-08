fn uu_split::n_chunks_by_byte(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x160]
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: i64;  // [sp-0x138]
    let v6: i64;  // [sp-0x130]
    let v7: i64;  // [sp-0x128], Other Possible Types: struct24, struct28, struct16
    let v8: i64;  // [sp-0xf0]
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xd0]
    let v13: i64;  // [sp-0xc8]
    let v14: i64;  // [sp-0xc0]
    let v15: i64;  // [sp-0xb8]
    let v16: i64;  // [sp-0xb0]
    let v17: i64;  // [sp-0xa0]
    let v18: i64;  // [sp-0x98]
    let v19: i8;  // [sp-0x90]
    let v20: i128;  // [sp-0x88]
    let v21: i64;  // [sp-0x78]
    let v22: i8;  // [sp-0x70]
    let v23: i192;  // [sp-0x48]
    let v25: i64;  // r14
    let v26: i64;  // rdx
    let v27: i64;  // r15
    let v28: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rsi
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i32;  // eax
    let v36: i64;  // r13
    let v38: i64;  // rbx
    let v39: i64;  // rbx
    let v43: i64;  // r13
    let v46: i64;  // rbx
    let v47: i64;  // rsi
    let v48: i64;  // r13
    let v49: i64;  // r14
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v52: i64;  // rbp

    v14 = 0;
    v15 = 1;
    v16 = 0;
    v25 = a0 + 112;
    v27 = v26;
    if uu_split::get_input_size(v25, a1, &v14, *(a0 as &i64), *((a0 + 8) as &i64)) {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
        return v28;
    }
    v20 = v15;
    v21 = a1;
    v22 = 0;
    if a3 != 1 {
        if !(!v31) {
            goto LABEL_4cd2c0;
        }
    } else if v26 && a2 {
LABEL_4cd2c0:
        v7 = std::io::stdio::stdout();
        v3 = std::io::stdio::Stderr::lock(&v7, v32, v26);
        v4 = 0;
        v5 = 8;
        v6 = 0;
        if (v26 | a2) >> 32 {
            v33 = v26;
            v34 = (0 CONCAT v33) /m a2;
            v9 = (0 CONCAT v33) /m a2 >> 64;
        } else {
            v35 = v26;
            v34 = (0 CONCAT v35) /m a2 & 4294967295;
            v9 = (0 CONCAT v35) /m a2 >> 32 & 4294967295;
        }
        v8 = v34;
        v10 = a2;
        if a3 != 1 {
            v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, 0);
            v12 = v7;
            if v12 == 0x8000000000000000 {
                goto LABEL_4cd717;
            }
            v4 = v12;
            v5 = v7.field_8;
            v6 = v7.field_16;
            v36 = v10;
        }
        v17 = 1;
        v18 = v36;
        v19 = 0;
        if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
            return 0;
        }
        if !a3 {
            v13 = v25;
        } else {
            loop {
                v38 = v39;
                v0 = 0;
                v1 = 1;
                v2 = 0;
                if !v27 {
                    goto LABEL_4cd6ce;
                }
                v7 = &v20;
                v7.field_8 = vvar_200{reg 16};
                if !(!v31) {
                    goto LABEL_4cd5de;
                }
                if v38 == a4 {
                    break;
                }
                v27 -= v26;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    return 0;
                }
            }
            v51 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v3, v1, v2);
            if !v51 {
                goto LABEL_4cd6ce;
            }
            v28 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v51);
            goto LABEL_4cd707;
        }
        loop {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            if !v27 {
LABEL_4cd6ce:
                return 0;
            }
            v43 = v39 - 1;
            v7 = &v20;
            v7.field_8 = vvar_199{reg 16};
            if std::io::default_read_to_end() as i64 {
LABEL_4cd5de:
                v11 = v52;
                v23 = format!("{:?}: cannot read from input : {:?}", v53, &v11);
                v7 = struct28 {
                    field_0: v23
                    field_16: *((&v23 as &char + 16) as &i64)
                    field_24: 1
                };
                v28 = alloc::boxed::Box<T>::new(&v7);
                goto LABEL_4cd70d;
            } else {
                v7 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v4, v43, a0);
                v28 = v7;
                v46 = v7.field_8;
                if !(!v31) {
                    goto LABEL_4cd70d;
                }
                v47 = v1;
                v48 = v2;
                v49 = *((v46 + 16) as &i64);
                if v48 < *(v46 as &i64) - v49 {
                    memcpy(*((v46 + 8) as &i64) + v49, v47, v48);
                    *((v46 + 16) as &i64) = v49 + v48;
                    goto LABEL_4cd5b3;
                }
                v50 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v46, v47, v48);
                if v50 {
                    v28 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v50);
LABEL_4cd707:
LABEL_4cd70d:
LABEL_4cd717:
                    return v28;
                }
LABEL_4cd5b3:
                v27 -= v26;
                if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next() {
                    return 0;
                }
            }
        }
    }
    return v28;
}
