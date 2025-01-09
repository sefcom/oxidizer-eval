fn uu_sort::Line::print_debug(a0: &u8, a1: u32, a2: void*, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x108]
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: struct40;  // [bp-0xf0], Other Possible Types: i64, struct25
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i64;  // [bp-0xd8]
    let v7: i192;  // [sp-0xc0], Other Possible Types: struct24, struct9
    let v8: i64;  // [bp-0xb8]
    let v9: i64;  // [sp-0xa0]
    let v10: i64;  // [sp-0x98]
    let v11: i192;  // [sp-0x90], Other Possible Types: struct24
    let v12: i64;  // [sp-0x70]
    let v13: i64;  // [sp-0x68]
    let v14: i64;  // [sp-0x60]
    let v15: i64;  // [sp-0x58]
    let v16: i64;  // [sp-0x50]
    let v17: i64;  // [sp-0x40]
    let v18: i64;  // [sp-0x38]
    let v20: i64;  // r14
    let v21: i64;  // rcx
    let v22: struct8;  // rax
    let v24: i256;  // ymm0
    let v25: i64;  // r12
    let v26: i64;  // r15
    let v27: i64;  // rdx
    let v28: i64;  // rdx
    let v29: i64;  // rbp
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // r13
    let v35: i64;  // rbx
    let v36: i64;  // rax
    let v37: i64;  // r14
    let v38: i64;  // r13
    let v39: i64;  // rdx
    let v40: i64;  // rax
    let v41: i64;  // r15
    let v42: i64;  // rbx
    let v43: i64;  // rax
    let v44: i64;  // rsi
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // rax
    let v52: i64;  // r14
    let v53: i64;  // rdi
    let v54: i64;  // rax
    let v55: i64;  // rbx
    let v56: i64;  // r13
    let v57: i64;  // rax
    let v58: i8;  // al
    let v60: i64;  // rdx
    let v61: i64;  // rcx
    let v62: i64;  // rbp

    v20 = a1;
    v0 = a0;
    v11 = alloc::str::<impl str>::replace(a0, a1);
    v7 = &v11;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = struct40 {
        field_0: &g_5ff8f0
        field_8: 2
        field_16: &v7
        field_24: <UNKNOWN>
        field_32: 0
    };
    v6 = 1;
    if std::io::Write::write_fmt(a3, &v3) {
        return v62;
    }
    v12 = 0;
    v13 = 8;
    v14 = 0;
    uu_sort::tokenize(v0, a1, *((a2 + 120) as &i32), &v12);
    v21 = *((a2 + 8) as &i64);
    v15 = *((a2 + 16) as &i64);
    v16 = v21;
    v17 = v21;
    v18 = v15 * 56 + v21;
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v22 {
        v2 = "src/uu/sort/src/sort.rs";
        v1 = a1;
        v0 = v0;
        do {
            v25 = uu_sort::FieldSelector::get_range(v22, v0, v20, v13, v14);
            v26 = *((v22 + 53) as &i8);
            if v26 < 2 {
                v29 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v25, v28);
                v30 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v29, v28, v0, v1);
                if !v30 {
                    vvar_1100{stack -248} = "src/uu/sort/src/sort.rs";
                }
                v7 = struct9 {
                    field_0: 0x2e00110000
                    field_8: (v26 as i8 == 1) as u8 as u8
                };
                v3 = uu_sort::numeric_str_cmp::NumInfo::parse(v30, v28, &v7);
                v34 = v5;
                v35 = *((&v3 as &char + 24) as &i64);
                v25 += v34;
                v37 = core::iter::traits::exact_size::ExactSizeIterator::len(v34, v35) + v25;
                if v34 || !core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v35) {
                    if v26 != 1 {
                        v0 = v0;
                        v1 = v1;
                    } else {
                        v41 = v0;
                        v42 = v1;
                        v43 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v37, v28, v41, v42);
                        if !v43 {
                            vvar_1094{stack -248} = "src/uu/sort/src/sort.rs";
                        }
                        v37 += core::str::pattern::Pattern::is_prefix_of(v43, v28) as i32;
                    }
                    loop {
                        v49 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v29, v25, v0, v1);
                        if !v49 {
                            vvar_1088{stack -248} = "src/uu/sort/src/sort.rs";
                        }
                        if !core::str::pattern::Pattern::is_suffix_of(v49, v28) {
                            break;
                        }
                        v25 -= 1;
                    }
                } else {
                    v40 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v25, v37), v28, v0, v1);
                    if !v40 {
                        vvar_1097{stack -248} = "src/uu/sort/src/sort.rs";
                    }
                    v25 += v48;
                    v27 = v37 + v48;
                }
                continue;
            } else {
                if v26 == 2 {
                    v31 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v25, v28), v28, v0, v1);
                    if v31 {
                        v33 = uu_sort::get_leading_gen(v31, v28);
                        v36 = core::iter::traits::exact_size::ExactSizeIterator::len(v33, v28);
                        v25 += v33;
                    }
                } else {
                    if !(v26 == 3) {
                        continue;
                    }
                    v32 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v25, v28), v28, v0, v1);
                    if !v32 {
                        vvar_1091{stack -248} = "src/uu/sort/src/sort.rs";
                    }
                    v3 = v32;
                    v4 = v32 + v28;
                    v5 = 0;
                    v6 = 0;
                    v38 = core::iter::traits::iterator::Iterator::try_fold(&v3, &v6);
                    if !uu_sort::month_parse(v32, v28) as i32 {
                        v38 = core::option::Option<T>::map_or(v38, v28 as u32, v28, v28);
                    } else {
                        if v28 as u32 == 0x110000 {
                            core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
                        }
                        v44 = 0x110000;
                        if !core::iter::traits::iterator::Iterator::advance_by() {
                            v44 = v28 as u32;
                        }
                        v47 = core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v6), v44, v28);
                    }
                    v36 = core::iter::traits::exact_size::ExactSizeIterator::len(v38, v39);
                    v25 += v38;
                }
                v27 = v36 + v25;
            }
            v52 = v27;
            v53 = *((&v11 as &char + 8) as &i64);
            if v25 {
                v54 = *((&v11 as &char + 16) as &i64);
                if v25 >= v54 {
                    if v25 != v54 {
                        v0 = v53;
                        v1 = v54;
                        vvar_1103{stack -248} = "src/uu/sort/src/sort.rs";
                    }
                } else {
                    if *((v53 + v25) as &i8) <= 191 {
                        vvar_1114{stack -264} = v53;
                        vvar_1115{stack -256} = v54;
                        vvar_1119{stack -248} = "src/uu/sort/src/sort.rs";
                    }
                }
            }
            v7 = alloc::str::<impl str>::repeat(" ", unicode_width::str_width(v53, v25, 0));
            v9 = &v7;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = struct40 {
                field_0: &g_424b80
                field_8: 1
                field_16: &v9
                field_24: <UNKNOWN>
                field_32: 0
            };
            v6 = 1;
            if std::io::Write::write_fmt(a3, &v3) {
                return v62;
            }
            if v25 >= v52 {
                v3 = struct40 {
                    field_0: "^ no match for key\n"
                    field_8: 1
                    field_16: 8
                    field_24: <UNKNOWN>
                    field_32: 0
                };
                v24 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v6 = 0;
                if std::io::Write::write_fmt(a3, &v3) {
                    return v62;
                }
            } else {
                v55 = *((&v11 as &char + 8) as &i64);
                v56 = *((&v11 as &char + 16) as &i64);
                v57 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v25, v52, v55, v56);
                if !v57 {
                    v0 = v55;
                    v1 = v56;
                    v2 = "src/uu/sort/src/sort.rs";
                }
                v7 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(v57, v28, 0));
                v9 = &v7;
                v10 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = struct40 {
                    field_0: &g_5ff8f0
                    field_8: 2
                    field_16: &v9
                    field_24: <UNKNOWN>
                    field_32: 0
                };
                v6 = 1;
                if std::io::Write::write_fmt(a3, &v3) {
                    return v62;
                }
            }
            v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v20 = v1;
            v0 = v0;
        } while (v22);
    }
    v58 = *((a2 + 152) as &i8);
    if v58 != 5 && !*((a2 + 131) as &i8) && !*((a2 + 132) as &i8) {
        if !*((a2 + 125) as &i32) && v58 == 6 {
            v60 = v15;
            v61 = v16 + (v60 - 1) * 56;
            if 1 > v60 {
                v61 = 0;
            }
            if !core::option::Option<T>::map_or(v61) {
                return 0;
            }
        }
        if v20 {
            v7 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), 0));
            v9 = &v7;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = struct40 {
                field_0: &g_5ff8f0
                field_8: 2
                field_16: &v9
                field_24: <UNKNOWN>
                field_32: 0
            };
            v6 = 1;
            if std::io::Write::write_fmt(a3, &v3) {
                return v62;
            }
            return 0;
        } else {
            v3 = struct40 {
                field_0: "^ no match for key\n"
                field_8: 1
                field_16: 8
                field_24: <UNKNOWN>
                field_32: 0
            };
            v6 = 0;
            if !std::io::Write::write_fmt(a3, &v3) {
                return 0;
            }
            return v62;
        }
    }
    v62 = 0;
    return 0;
}
