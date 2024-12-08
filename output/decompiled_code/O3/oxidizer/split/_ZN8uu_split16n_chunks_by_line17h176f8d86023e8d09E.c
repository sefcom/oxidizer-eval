fn uu_split::n_chunks_by_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [sp-0x111]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8]
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [sp-0xe8]
    let v6: i32;  // [bp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: struct16;  // [sp-0xc0], Other Possible Types: i64
    let v10: i64;  // [sp-0xb8]
    let v11: i64;  // [sp-0xb0]
    let v12: i64;  // [sp-0xa8]
    let v13: i64;  // [sp-0xa0]
    let v14: i64;  // [sp-0x98]
    let v15: i64;  // [sp-0x90]
    let v16: i72;  // [sp-0x88], Other Possible Types: struct9, struct16
    let v17: i64;  // [sp-0x78], Other Possible Types: struct24
    let v18: i8;  // [sp-0x60]
    let v19: i8;  // [sp-0x58]
    let v20: i64;  // [sp-0x50]
    let v21: Option<Result<struct24, struct16>>;  // [sp-0x48], Other Possible Types: i192
    let v23: i64;  // rdx
    let v24: i64;  // rax
    let v25: i64;  // rdx
    let v26: i64;  // rsi
    let v27: i64;  // rax
    let v28: i64;  // rbx
    let v29: i32;  // eax
    let v30: i64;  // r13
    let v31: i64;  // rbp
    let v32: i64;  // r12
    let v33: i64;  // r13
    let v34: i64;  // rax
    let v35: i64;  // r15
    let v36: i64;  // r15
    let v38: i64;  // rax
    let v40: i64;  // rax
    let v41: i32;  // ecx
    let v42: i64;  // rbp
    let v43: i64;  // r12

    v13 = 0;
    v14 = 1;
    v15 = 0;
    if uu_split::get_input_size(a0 + 112, a1, &v13, *(a0 as &i64), *((a0 + 8) as &i64)) {
        v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
    } else {
        v8 = v14;
        v6 = v15;
        if v25 || (v24 = 0, a3 != 1 && !*((a0 + 161) as &i8)) {
            v17 = std::io::stdio::stdout();
            v1 = std::io::stdio::Stderr::lock(&v17, v26, v25);
            v2 = 0;
            v3 = 8;
            v4 = 0;
            if !a2 {
                core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
            }
            v5 = a1;
            if !(v25 | a2) >> 32 {
                v29 = v25;
                v7 = (0 CONCAT v29) /m a2 >> 32 & 4294967295;
                v28 = (0 CONCAT v29) /m a2 & 4294967295 & 4294967295;
                if !(a3 == 1) {
                    goto LABEL_4cd92d;
                }
LABEL_4cd901:
                v12 = v25;
                v0 = *((a0 + 161) as &i8);
LABEL_4cd99f:
                v31 = v28 - -1 - (v7 < 1);
                v17 = v8;
                v17.field_8 = (stack_base)[224] as i64;
                v17.field_16 = vvar_570{stack -232};
                v18 = 0;
                v19 = *((a0 + 162) as &i8);
                v5 = a0;
                v20 = *((a0 + 136) as &i64);
                v32 = 1;
                v33 = 0;
                v8 = 9223372036854775809;
                v6 = v19;
                loop {
                    v21 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v17);
                    v34 = v21;
                    if v34 == v8 {
                        return 0;
                    }
                    v35 = *((&v21 as &char + 8) as &i64);
                    if v34 == 0x8000000000000000 {
                        v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
                        break;
                    }
                    v9 = v34;
                    v9.field_8 = vvar_618{reg 136};
                    v11 = *((&v21 as &char + 16) as &i64);
                    if v11 + v33 < v12 {
                        v9 = alloc::vec::Vec<T,A>::push(v6);
                        v36 = v10;
                    }
                    if a3 {
                        if !(a3 == 1) {
                            goto LABEL_4cdb4f;
                        }
                        v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
                        goto LABEL_4cdc19;
                    }
                    v16 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v2, v32 - 1, v5);
                    v24 = v16;
                    if v24 {
                        goto LABEL_4cdc1f;
                    }
                    v16 = uu_split::custom_write_all(v36, v11, *((&v16 as &char + 8) as &i64), v20);
                    if v16 {
                        v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v16 as &char + 8) as &i64));
LABEL_4cdc19:
LABEL_4cdc1f:
                        break;
                    }
LABEL_4cdb4f:
                    v33 += v11;
                    if v31 > v33 {
LABEL_4cdb57:
                        if !(a3 == 1) {
                            goto LABEL_4cda30;
                        }
                        goto LABEL_4cdbad;
                    } else {
                        v40 = 4294967295;
                        v41 = -2;
                        do {
                            v31 = v42 + v28 + (v43 < v7);
                            v32 = v43 + 1;
                            v40 += 1;
                            v41 += 1;
                        } while (v31 <= v33);
                        if !(a3 == 1) {
                            goto LABEL_4cdb57;
                        }
                        if a3 != 1 {
                            v32 -= v40 & 4294967295;
                        } else {
LABEL_4cdbad:
                            if v32 > a4 {
                                return 0;
                            }
                        }
LABEL_4cda30:
                    }
                }
            } else {
                v27 = v25;
                v7 = (0 CONCAT v27) /m a2 >> 64;
                v28 = (0 CONCAT v27) /m a2;
                if a3 == 1 {
                    goto LABEL_4cd901;
                }
LABEL_4cd92d:
                v0 = *((a0 + 161) as &i8);
                v17 = <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(a2, a0, v0);
                v30 = v17;
                v24 = v17.field_8;
                if v30 == 0x8000000000000000 {
                    goto LABEL_4cdc29;
                }
                v12 = v25;
                v2 = v30;
                v3 = v24;
                v4 = v17.field_16;
                goto LABEL_4cd99f;
            }
LABEL_4cdc29:
        }
    }
    return v24;
}
