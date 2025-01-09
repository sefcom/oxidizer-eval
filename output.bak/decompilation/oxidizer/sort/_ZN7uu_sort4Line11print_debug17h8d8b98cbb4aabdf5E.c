fn uu_sort::Line::print_debug(a0: &u8, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x108]
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: Arguments;  // [bp-0xf0], Other Possible Types: struct40, i64, struct25
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i8;  // [bp-0xd8]
    let v7: struct24;  // [bp-0xc0], Other Possible Types: Argument, struct9
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
    let v28: i64;  // rax
    let v29: i64;  // rbp
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // r13
    let v36: i64;  // rbx
    let v37: i64;  // rax
    let v38: i64;  // r14
    let v39: i64;  // r13
    let v40: i64;  // rax
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // r15
    let v44: i64;  // rbx
    let v45: i64;  // rax
    let v46: i64;  // rsi
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v54: i64;  // r14
    let v55: i64;  // rdi
    let v56: i64;  // rax
    let v57: i64;  // rbx
    let v58: i64;  // r13
    let v59: i64;  // rax
    let v60: i8;  // al
    let v62: i64;  // rdx
    let v65: i64;  // rdx
    let v66: i64;  // rcx

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
                    v29 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v27);
                    v30 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v29, v27, v0, v1);
                    if !v30 {
                        vvar_1156{stack -248} = "src/uu/sort/src/sort.rs";
                        core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                    }
                    v7 = struct9 {
                        field_0: 0x2e00110000
                        field_8: (v25 as i8 == 1) as u8 as u8
                    };
                    v3 = uu_sort::numeric_str_cmp::NumInfo::parse(v30, v27, &v7);
                    v35 = v5;
                    v36 = v3.args.len;
                    v24 += v35;
                    v38 = core::iter::traits::exact_size::ExactSizeIterator::len(v35, v36) + v24;
                    if v35 || !core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v36) {
                        if v25 != 1 {
                            v0 = v0;
                            v1 = v1;
                        } else {
                            v43 = v0;
                            v44 = v1;
                            v45 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v38, v27, v43, v44);
                            if !v45 {
                                vvar_1169{stack -248} = "src/uu/sort/src/sort.rs";
                                core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                            }
                            v38 += core::str::pattern::Pattern::is_prefix_of(v45, v27) as i32;
                        }
                        loop {
                            v51 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v29, v24, v0, v1);
                            if !v51 {
                                vvar_1117{stack -248} = "src/uu/sort/src/sort.rs";
                                core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                            }
                            if !core::str::pattern::Pattern::is_suffix_of(v51, v27) {
                                break;
                            }
                            v24 -= 1;
                        }
                    } else {
                        v40 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v38);
                        v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v40, v27, v0, v1);
                        if !v42 {
                            vvar_1143{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                        }
                        v24 += v50;
                        v26 = v38 + v50;
                    }
                } else {
                    if v25 == 2 {
                        v28 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v27);
                        v32 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v28, v27, v0, v1);
                        if !v32 {
                            core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                        }
                        v34 = uu_sort::get_leading_gen(v32, v27);
                        v37 = core::iter::traits::exact_size::ExactSizeIterator::len(v34, v27);
                        v24 += v34;
                    } else {
                        if (v5 = v5, v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v18 = v1, v0 = v0, v21) {
                            goto LABEL_5204a5;
                        }
                        v31 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v24, v27);
                        v33 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v31, v27, v0, v1);
                        if !v33 {
                            vvar_1130{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                        }
                        v3 = v33;
                        v4 = v33 + v27;
                        v5 = 0;
                        v6 = 0;
                        v39 = core::iter::traits::iterator::Iterator::try_fold(&v3, &v6);
                        if !uu_sort::month_parse(v33, v27) as i32 {
                            v39 = core::option::Option<T>::map_or(v39, v27 as u32, v27, v27);
                        } else {
                            if v27 as u32 == 0x110000 {
                                core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
                            }
                            v46 = 0x110000;
                            if !core::iter::traits::iterator::Iterator::advance_by() {
                                v46 = v27 as u32;
                            }
                            v49 = core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v6), v46, v27);
                        }
                        v37 = core::iter::traits::exact_size::ExactSizeIterator::len(v39, v41);
                        v24 += v39;
                    }
                    v26 = v37 + v24;
                }
LABEL_5204a5:
                v54 = v26;
                v55 = *((&v9 as &char + 8) as &i64);
                if v24 {
                    v56 = *((&v9 as &char + 16) as &i64);
                    if v24 >= v56 {
                        if v24 != v56 {
                            v0 = v55;
                            v1 = v56;
                            vvar_1182{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                        }
                    } else {
                        if *((v55 + v24) as &i8) <= 191 {
                            vvar_1190{stack -264} = v55;
                            vvar_1191{stack -256} = v56;
                            vvar_1201{stack -248} = "src/uu/sort/src/sort.rs";
                            core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                        }
                    }
                }
                v7 = alloc::str::<impl str>::repeat(" ", unicode_width::str_width(v55, v24, 0));
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
                    goto LABEL_5207ef;
                } else if v24 >= v54 {
                    v3 = struct40 {
                        field_0: "^ no match for key\n"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                        field_32: 0
                    };
                    v23 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v19 = std::io::Write::write_fmt(a3, &v3);
                    v5 = v5;
                    if !v19 {
                        continue;
                    }
                } else {
                    v57 = *((&v9 as &char + 8) as &i64);
                    v58 = *((&v9 as &char + 16) as &i64);
                    v59 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v24, v54, v57, v58);
                    if !v59 {
                        v0 = v57;
                        v1 = v58;
                        v2 = "src/uu/sort/src/sort.rs";
                        core::str::slice_error_fail(v0, v1, v28, v62, v2); /* do not return */
                    }
                    v7 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(v59, v27, 0));
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
                        v5 = v5;
                    } else {
                        goto LABEL_5207ef;
                    }
                }
            } while ((v5 = v5, v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v18 = v1, v0 = v0, v21));
        }
        v60 = *((a2 + 152) as &i8);
        if !(v60 != 5) || !(!*((a2 + 131) as &i8)) || !(!*((a2 + 132) as &i8)) {
            return 0;
        }
        if !*((a2 + 125) as &i32) && v60 == 6 {
            v65 = v13;
            v66 = v14 + (v65 - 1) * 56;
            if 1 > v65 {
                v66 = 0;
            }
            if !core::option::Option<T>::map_or(v66) {
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
LABEL_5207ef:
    }
    return v19;
}
