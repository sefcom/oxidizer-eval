fn uu_sort::Line::print_debug(a0: u32, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x108]
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [bp-0xf0], Other Possible Types: Arguments, struct25, struct40
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i128;  // [bp-0xd8]
    let v7: struct24;  // [bp-0xc0], Other Possible Types: struct9, Argument
    let v8: Argument;  // [bp-0xa0]
    let v9: struct24;  // [sp-0x90], Other Possible Types: i192
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: i64;  // [sp-0x60]
    let v13: i64;  // [sp-0x58]
    let v14: i64;  // [sp-0x50]
    let v15: i64;  // [sp-0x40]
    let v16: i64;  // [sp-0x38]
    let v18: i64;  // r14
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: struct8;  // rax
    let v23: i256;  // ymm0
    let v24: i64;  // r12
    let v25: i64;  // r15
    let v26: i64;  // rdx
    let v27: i64;  // rdx
    let v28: i64;  // rbp
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // r13
    let v34: i64;  // rbx
    let v35: i64;  // rax
    let v36: i64;  // r14
    let v37: i64;  // r13
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // r15
    let v41: i64;  // rbx
    let v42: i64;  // rax
    let v43: i64;  // rsi
    let v44: i64;  // rsi
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v50: i64;  // r14
    let v51: i64;  // r14
    let v52: i64;  // r14
    let v53: i64;  // rdi
    let v54: i64;  // rax
    let v55: i64;  // rbx
    let v56: i64;  // r13
    let v57: i64;  // rax
    let v58: i8;  // al
    let v60: i64;  // rdx
    let v61: i64;  // rcx

    v18 = a1;
    v0 = a0;
    v9 = alloc::str::<impl str>::replace(a0, a1);
    v7 = Argument {
        value: &v9
        formatter: <alloc::string::String as core::fmt::Display>::fmt
    };
    v3 = Arguments {
        pieces: ["", "\n"]
        args: [&v7]
        fmt: 0
    };
    v19 = std::io::Write::write_fmt(a3, &v3);
    if !v19 {
        v10 = 0;
        v11 = 8;
        v12 = 0;
        uu_sort::tokenize(v0, a1, *((a2 + 120) as &i32), &v10);
        v20 = *((a2 + 8) as &i64);
        v13 = *((a2 + 16) as &i64);
        v14 = v20;
        v15 = v20;
        v16 = v13 * 56 + v20;
        v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v21 {
            v2 = "src/uu/sort/src/sort.rs";
            v1 = a1;
            v0 = v0;
            do {
                v24 = uu_sort::FieldSelector::get_range(v21, v0, v18, v11, v12);
                v25 = *((v21 + 53) as &i8);
                if v25 < 2 {
                    v28 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v27);
                    v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v28, v27, v0, v1);
                    if !v29 {
                        vvar_1116{stack -248} = "src/uu/sort/src/sort.rs";
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v7 = struct9 {
                        field_0: 0x2e00110000
                        field_8: (v25 as i8 == 1) as u8 as u8
                    };
                    v3 = uu_sort::numeric_str_cmp::NumInfo::parse(v29, v27, &v7);
                    v33 = v3.16;
                    v34 = v3.args.len;
                    v24 += v33;
                    v36 = core::iter::traits::exact_size::ExactSizeIterator::len(v33, v34) + v24;
                    if v33 || !core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v34) {
                        if v25 != 1 {
                            v0 = v0;
                            v1 = v1;
                        } else {
                            v40 = v0;
                            v41 = v1;
                            v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v36, v27, v40, v41);
                            if !v42 {
                                vvar_1108{stack -248} = "src/uu/sort/src/sort.rs";
                                core::str::slice_error_fail(); /* do not return */
                            }
                            v36 += core::str::pattern::Pattern::is_prefix_of(v42, v27) as i32;
                        }
                        loop {
                            v49 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v28, v24, v0, v1);
                            if !v49 {
                                vvar_1100{stack -248} = "src/uu/sort/src/sort.rs";
                                core::str::slice_error_fail(); /* do not return */
                            }
                            if !core::str::pattern::Pattern::is_suffix_of(v49, v27) as i8 {
                                break;
                            }
                            v24 -= 1;
                        }
                    } else {
                        v39 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v36), v27, v0, v1);
                        if !v39 {
                            vvar_1112{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v24 += v48;
                        v50 = v36 + v48;
                    }
                } else {
                    if v25 == 2 {
                        v30 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v27), v27, v0, v1);
                        if !v30 {
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v32 = uu_sort::get_leading_gen(v30, v27, v27);
                        v35 = core::iter::traits::exact_size::ExactSizeIterator::len(v32, v27);
                        v24 += v32;
                    } else {
                        if (v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v18 = v1, v0 = v0, v21) {
                            goto LABEL_51f515;
                        }
                        v31 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v27), v27, v0, v1);
                        if !v31 {
                            vvar_1104{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(); /* do not return */
                        }
                        v3 = v31;
                        v4 = v31 + v27;
                        v5 = 0;
                        v6 = 0;
                        v37 = core::iter::traits::iterator::Iterator::try_fold(&v3, &v6, v27);
                        if !uu_sort::month_parse(v31, v27, v27) as i32 {
                            v37 = core::option::Option<T>::map_or(v37, v27 as u32, v27);
                        } else {
                            if v27 as u32 == 0x110000 {
                                core::option::unwrap_failed(); /* do not return */
                            }
                            v43 = 0x110000;
                            if !core::iter::traits::iterator::Iterator::advance_by(v44, v27) {
                                v43 = v27 as u32;
                            }
                            v47 = core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v6, v27), v43, v27);
                        }
                        v35 = core::iter::traits::exact_size::ExactSizeIterator::len(v37, v38);
                        v24 += v37;
                    }
                    v51 = v35 + v24;
                }
LABEL_51f515:
                v52 = v26;
                v53 = *((&v9 as &char + 8) as &i64);
                if v24 {
                    v54 = *((&v9 as &char + 16) as &i64);
                    if v24 >= v54 {
                        if v24 != v54 {
                            v0 = v53;
                            v1 = v54;
                            vvar_1120{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(); /* do not return */
                        }
                    } else {
                        if *((v53 + v24) as &i8) <= 191 {
                            vvar_1123{stack -264} = v53;
                            vvar_1124{stack -256} = v54;
                            vvar_1128{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(); /* do not return */
                        }
                    }
                }
                v7 = alloc::str::<impl str>::repeat(" ", unicode_width::str_width(v53, v24, 0));
                v8 = Argument {
                    value: &v7
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v3 = Arguments {
                    pieces: [""]
                    args: [&v8]
                    fmt: 0
                };
                v19 = std::io::Write::write_fmt(a3, &v3);
                if v19 {
                    goto LABEL_51f874;
                } else if v24 >= v52 {
                    v3 = "^ no match for key\n";
                    v3.field_8 = 1;
                    v5 = 8;
                    v23 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v6 = 0;
                    v19 = std::io::Write::write_fmt(a3, &v3);
                    if !v19 {
                        continue;
                    }
                } else {
                    v55 = *((&v9 as &char + 8) as &i64);
                    v56 = *((&v9 as &char + 16) as &i64);
                    v57 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v24, v52, v55, v56);
                    if !v57 {
                        v0 = v55;
                        v1 = v56;
                        v2 = "src/uu/sort/src/sort.rs";
                        core::str::slice_error_fail(); /* do not return */
                    }
                    v7 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(v57, v27, 0));
                    v8 = Argument {
                        value: &v7
                        formatter: <alloc::string::String as core::fmt::Display>::fmt
                    };
                    v3 = Arguments {
                        pieces: ["", "\n"]
                        args: [&v8]
                        fmt: 0
                    };
                    v19 = std::io::Write::write_fmt(a3, &v3);
                    if v19 {
                        goto LABEL_51f874;
                    }
                }
            } while ((v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v18 = v1, v0 = v0, v21));
        }
        v58 = *((a2 + 152) as &i8);
        if !(v58 != 5) || !(!*((a2 + 131) as &i8)) || !(!*((a2 + 132) as &i8)) {
            return 0;
        }
        if !*((a2 + 127) as &i8) && !*((a2 + 125) as &i8) && !*((a2 + 126) as &i8) && v58 == 6 && !*((a2 + 128) as &i8) {
            v60 = v13;
            v61 = v14 + (v60 - 1) * 56;
            if 1 > v60 {
                v61 = 0;
            }
            if !core::option::Option<T>::map_or(v61) {
                return 0;
            }
        }
        if !v18 {
            v3 = struct40 {
                field_0: "^ no match for key\n"
                field_8: 1
                field_16: 8
                field_24: 0
                field_32: 0
            };
            v19 = std::io::Write::write_fmt(a3, &v3);
            if !v19 {
                return 0;
            }
        } else {
            v7 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(*((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64), 0));
            v8 = Argument {
                value: &v7
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v3 = Arguments {
                pieces: ["", "\n"]
                args: [&v8]
                fmt: 0
            };
            v19 = std::io::Write::write_fmt(a3, &v3);
            if !v19 {
                return 0;
            }
        }
LABEL_51f874:
    }
    return v19;
}
