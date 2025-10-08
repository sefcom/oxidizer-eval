fn uu_uniq::Uniq::print_uniq(a0: i64, a1: u32, a2: u32, a3: u64, a4: u64) -> long long {
    let v0: u8;  // [bp-0xb1]
    let v1: u64;  // [bp-0xb0]
    let v2: struct24;  // [bp-0xb0]
    let v3: u64;  // [bp-0xb0]
    let v4: u8;  // [bp-0xa1]
    let v5: u64;  // [bp-0xa0]
    let v6: struct24;  // [bp-0x80], Other Possible Types: u8
    let v7: u64;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: u64;  // [bp-0x68]
    let v10: u64;  // [bp-0x60]
    let v11: u64;  // [bp-0x58]
    let v12: u32;  // [bp-0x4c]
    let v13: struct17;  // [bp-0x48]
    let v15: void*;  // r14
    let v16: u64;  // r14
    let v17: u64;  // r13
    let v18: u64;  // r14
    let v19: u64;  // r15
    let v20: u64;  // r12
    let v21: u8;  // bpl
    let v22: u64;  // r12
    let v23: u64;  // r14
    let v24: u64;  // r12

    v12 = (*((a0 + 53) as &i8) ? 0 : 10);
    v13 = std::io::BufRead::split(a1, a2, v12);
    v6 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
    v9 = 9223372036854775809;
    if v6.field_0 as i64 != 9223372036854775809 {
        v5 = v6.field_0;
        if v5 == 0x8000000000000000 {
            v15 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        } else {
            v1 = v7;
            v16 = v8;
            v10 = v13.field_0;
            v11 = v13.field_8;
            v0 = *((a0 + 49) as &i8);
            v4 = *((a0 + 48) as &i8);
            if (*((a0 + 50) as &i8) & 1) {
                v17 = 1;
                for (v18 = v16; true; v18 = v8) {
                    v23 = v18;
                    v6 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
                    v5 = v6.field_0;
                    if v5 == v9 {
                        break;
                    }
                    v19 = v7;
                    if v5 == 0x8000000000000000 {
                        goto LABEL_0x45d5eb;
                    }
                    if uu_uniq::Uniq::cmp_keys(a0, v1, v23, v19, v8) {
                        if v17 {
                            if v17 == 1 {
                                if !(v4 & 1) {
                                    goto LABEL_45d235;
                                }
                            } else {
                                if !(v0 & 1) {
LABEL_45d235:
                                    v15 = uu_uniq::Uniq::print_line(a0, a3, a4, v1, v23, v17, v21);
                                    v21 = 1;
                                    if v15 {
                                        goto LABEL_45d6a5;
                                    }
                                }
                            }
                        }
                        v1 = v19;
                        v17 = 1;
                    } else {
                        v15 = uu_uniq::Uniq::print_line(a0, a3, a4, v1, v23, v17, v21);
                        if v15 {
                            goto LABEL_45d6a5;
                        }
                        v17 += 1;
                        v21 = 1;
                        v1 = v19;
                    }
                }
                goto LABEL_45d57e;
            } else if (*((a0 + 48) as &i8) & 1) {
                v17 = 1;
                v23 = v16;
                loop {
                    v6 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
                    v20 = v6.field_0;
                    if v20 == v9 {
                        break;
                    }
                    v19 = v7;
                    if v20 == 0x8000000000000000 {
                        goto LABEL_0x45d5eb;
                    }
                    if !uu_uniq::Uniq::cmp_keys(a0, v1, v23, v19, v8) {
                        continue;
                    }
                    if !((v17 < 2 | v0) & 1) {
                        v15 = uu_uniq::Uniq::print_line(a0, a3, a4, v1, v23, v17, v21);
                        v21 = 1;
                        if v15 {
                            goto LABEL_45d6a5;
                        }
                    }
                    v2 = struct24 {
                        field_0: v19
                        padding_8: <UNKNOWN>
                        field_16: v20
                    };
                    v17 = 1;
                    v1 = v3;
                    v23 = v8;
                }
                goto LABEL_45d57e;
            } else if (v0 & 1) {
                v17 = 1;
                v23 = v16;
                loop {
                    v6 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
                    v22 = v6.field_0;
                    if v22 == v9 {
                        break;
                    }
                    v19 = v7;
                    if v22 == 0x8000000000000000 {
                        goto LABEL_0x45d5eb;
                    }
                    if !uu_uniq::Uniq::cmp_keys(a0, v1, v23, v19, v8) {
                        continue;
                    }
                    if v17 == 1 {
                        v15 = uu_uniq::Uniq::print_line(a0, a3, a4, v1, v23, 1, v21);
                        v21 = 1;
                        if v15 {
                            goto LABEL_45d6a5;
                        }
                    }
                    v2 = struct24 {
                        field_0: v19
                        padding_8: <UNKNOWN>
                        field_16: v22
                    };
                    v17 = 1;
                    v1 = v3;
                    v23 = v8;
                }
                goto LABEL_45d57e;
            } else {
                v17 = 1;
                v23 = v16;
                loop {
                    v6 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
                    v24 = v6.field_0;
                    if v24 == v9 {
                        break;
                    }
                    v19 = v7;
                    if v24 == 0x8000000000000000 {
                        goto LABEL_0x45d5eb;
                    }
                    if !uu_uniq::Uniq::cmp_keys(a0, v1, v23, v19, v8) {
                        continue;
                    }
                    if v17 {
                        v15 = uu_uniq::Uniq::print_line(a0, a3, a4, v1, v23, v17, v21);
                        v21 = 1;
                        if v15 {
                            goto LABEL_45d6a5;
                        }
                    }
                    v2 = struct24 {
                        field_0: v19
                        padding_8: <UNKNOWN>
                        field_16: v24
                    };
                    v17 = 1;
                    v1 = v3;
                    v23 = v8;
                }
LABEL_45d57e:
                if !v17 {
LABEL_45d598:
                    if (!*((a0 + 54) as &i8) || *((a0 + 54) as &i8) == 3) && (v21 & 1) {
                        goto LABEL_45d5b8;
                    }
                    goto LABEL_45d674;
                } else if v17 == 1 {
                    if !(v4 & 1) {
                        goto LABEL_45d620;
                    }
                    goto LABEL_45d598;
                } else {
                    if (v0 & 1) {
                        goto LABEL_45d598;
                    }
LABEL_45d620:
                    v15 = uu_uniq::Uniq::print_line(a0, a3, a4, v1, v23, v17, v21);
                    if v15 {
                        goto LABEL_45d6a5;
                    }
                    if *((a0 + 54) as &i8) == 3 || !*((a0 + 54) as &i8) {
LABEL_45d5b8:
                        v6 = v12;
                        v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a3, a4, &v6, 1) as u64);
                        if v15 {
                            goto LABEL_45d6a5;
                        }
                    }
LABEL_45d674:
                    v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::flush(a3, a4) as u64);
                }
            }
        }
    }
LABEL_45d6a5:
    return v15;
}
