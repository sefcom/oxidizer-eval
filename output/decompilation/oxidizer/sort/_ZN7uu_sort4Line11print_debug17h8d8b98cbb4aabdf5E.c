fn uu_sort::Line::print_debug(a0: &u8, a1: u32, a2: void*, a3: u64) -> u64 {
    let v0: i64;  // [sp-0x108]
    let v1: i64;  // [sp-0x100]
    let v2: i64;  // [sp-0xf8]
    let v3: i64;  // [sp-0xf0], Other Possible Types: struct25
    let v4: i64;  // [sp-0xe8]
    let v5: i64;  // [sp-0xe0]
    let v6: i64;  // [bp-0xd8], Other Possible Types: int, char
    let v7: i64;  // [sp-0xd0]
    let v8: struct24;  // [bp-0xc0], Other Possible Types: struct9, unsigned long
    let v9: i64;  // [bp-0xb8]
    let v10: i64;  // [sp-0xa0]
    let v11: i64;  // [sp-0x98]
    let v12: struct24;  // [sp-0x90]
    let v13: i64;  // [sp-0x70]
    let v14: i64;  // [sp-0x68]
    let v15: i64;  // [sp-0x60]
    let v16: i64;  // [sp-0x58]
    let v17: i64;  // [sp-0x50]
    let v18: i64;  // [sp-0x40]
    let v19: i64;  // [sp-0x38]
    let v21: i64;  // r14
    let v22: i64;  // rbp
    let v23: i64;  // rcx
    let v24: struct8;  // rax
    let v25: struct8;  // r13
    let v26: i64;  // rsi
    let v27: iNone;  // ymm0
    let v28: i64;  // r12
    let v29: i64;  // rdx
    let v30: i64;  // r14
    let v31: i64;  // r15
    let v32: i64;  // rbp
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // r13
    let v38: i64;  // rbx
    let v39: i64;  // r14
    let v40: i64;  // r13
    let v41: i64;  // rsi
    let v42: i64;  // rax
    let v43: i64;  // r15
    let v44: i64;  // rbx
    let v45: i64;  // rax
    let v46: i64;  // rsi
    let v47: i64;  // rax
    let v50: i64;  // rdx
    let v51: i64;  // rax
    let v52: i64;  // rdi
    let v53: i64;  // rax
    let v54: i64;  // rbx
    let v55: i64;  // r13
    let v56: i64;  // rax
    let v57: i8;  // al
    let v58: i64;  // rax

    v21 = a1;
    v0 = a0;
    v12 = alloc::str::<impl str>::replace(a0, a1);
    v8 = &v12;
    *(&v9 as &void*) = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = &g_5ff8f0;
    v4 = 2;
    v7 = 0;
    v5 = &v8;
    *(&v6 as &i64) = 1;
    v22 = std::io::Write::write_fmt(a3, &v3);
    if v22 {
        return v22;
    }
    v13 = 0;
    v14 = 8;
    v15 = 0;
    uu_sort::tokenize(v0, a1, *((a2 + 120) as &i32), &v13);
    v23 = *((a2 + 8) as &i64);
    v16 = *((a2 + 16) as &i64);
    v17 = v23;
    v18 = v23;
    v19 = v16 * 56 + v23;
    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v24 {
        v25 = v24;
        v26 = v0;
        v2 = "src/uu/sort/src/sort.rs";
        v1 = a1;
        do {
            v28 = uu_sort::FieldSelector::get_range(v25, v26, v21, v14, v15);
            v30 = v29;
            v31 = *((v25 + 53) as &i8);
            if v31 as u32 < 2 {
                v32 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v28, v29);
                v33 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v32, v29, v0, v1);
                if !v33 {
                    vvar_1086{stack -248} = v58;
                }
                v8 = struct9 {
                    field_0: 0x2e00110000
                    field_8: (v31 as u8 == 1) as u8 as u8
                };
                v3 = uu_sort::numeric_str_cmp::NumInfo::parse(v33, a2, &v8);
                v37 = v5;
                v38 = *((&v3.field_24 as &char + 7) as &i64);
                v28 += v37;
                v30 = core::iter::traits::exact_size::ExactSizeIterator::len(v37, v38) + v28;
                if v37 || !core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(v38) {
                    if v31 as u8 != 1 {
                        v44 = v1;
                        v43 = v0;
                    } else {
                        v43 = v0;
                        v44 = v1;
                        v45 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v30, v29, v43, v44);
                        if !v45 {
                            vvar_1074{stack -248} = v58;
                        }
                        v30 += core::str::pattern::Pattern::is_prefix_of(v45, v29) as i32;
                    }
                    loop {
                        v51 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v32, v28, v43, v44);
                        if !v51 {
                            vvar_1071{stack -248} = v58;
                        }
                        if !core::str::pattern::Pattern::is_suffix_of(v51, v29) {
                            break;
                        }
                        v28 -= 1;
                    }
                } else {
                    v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v28, v30), v29, v0, v1);
                    if !v42 {
                        vvar_1083{stack -248} = v58;
                    }
                    v47 = core::str::<impl str>::find(v42, v29);
                    if !v47 {
                        v50 = v47;
                    }
                    v28 += v50;
                    v30 += v50;
                }
                continue;
            } else {
                if v31 as u32 == 2 {
                    v34 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v28, v29), v29, v0, v1);
                    if v34 {
                        v36 = uu_sort::get_leading_gen(v34, v29);
                        v39 = core::iter::traits::exact_size::ExactSizeIterator::len(v36, v29);
                        v28 += v36;
                    }
                } else {
                    if !(v31 as u32 == 3) {
                        continue;
                    }
                    v35 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v28, v29), v29, v0, v1);
                    if !v35 {
                        vvar_1077{stack -248} = v58;
                    }
                    v3 = v35;
                    v4 = v35 + v29;
                    v5 = 0;
                    *(&v6 as &i8) = 0;
                    v40 = core::iter::traits::iterator::Iterator::try_fold(&v3, &v6);
                    if !uu_sort::month_parse(v35, v29) as i32 {
                        v40 = core::option::Option<T>::map_or(v40, v29 as u32, v29, v29);
                        v41 = v29;
                    } else {
                        if v29 as u32 == 0x110000 {
                            core::option::unwrap_failed("src/uu/sort/src/sort.rs"); /* do not return */
                        }
                        v46 = 0x110000;
                        if !core::iter::traits::iterator::Iterator::advance_by(&v3) {
                            v46 = v29 as u32;
                        }
                        v41 = core::option::Option<T>::map_or(core::iter::traits::iterator::Iterator::try_fold(&v3, &v6), v46, v29);
                    }
                    v39 = core::iter::traits::exact_size::ExactSizeIterator::len(v40, v41);
                    v28 += v40;
                }
                v30 = v39 + v28;
            }
            v52 = *((&v12.field_0 as &char + 8) as &i64);
            if v28 {
                v53 = v12.field_16;
                if v28 >= v53 {
                    if v28 != v53 {
                        v0 = v52;
                        v1 = v53;
                        vvar_1080{stack -248} = v58;
                    }
                } else {
                    if *((v52 + v28) as &i8) <= 191 {
                        vvar_1088{stack -264} = v52;
                        vvar_1089{stack -256} = v53;
                        vvar_1093{stack -248} = v58;
                    }
                }
            }
            v8 = alloc::str::<impl str>::repeat(" ", unicode_width::str_width(v52, v28, 0));
            v10 = &v8;
            v11 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = &g_424b80;
            v4 = 1;
            v7 = 0;
            v5 = &v10;
            *(&v6 as &i64) = 1;
            v22 = std::io::Write::write_fmt(a3, &v3);
            if v22 {
                return v22;
            }
            if v28 >= v30 {
                v3 = "^ no match for key\n";
                v4 = 1;
                v5 = 8;
                v27 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *(&v6 as &i128) = 0;
                v22 = std::io::Write::write_fmt(a3, &v3);
                if v22 {
                    return v22;
                }
            } else {
                v54 = *((&v12.field_0 as &char + 8) as &i64);
                v55 = v12.field_16;
                v56 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v28, v30, v54, v55);
                if !v56 {
                    v0 = v54;
                    v1 = v55;
                    v58 = "src/uu/sort/src/sort.rs";
                    v2 = v58;
                }
                v8 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(v56, v29, 0));
                v10 = &v8;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v3 = &g_5ff8f0;
                v4 = 2;
                v7 = 0;
                v5 = &v10;
                *(&v6 as &i64) = 1;
                v22 = std::io::Write::write_fmt(a3, &v3);
                if v22 {
                    return v22;
                }
            }
            v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            v21 = v1;
            v26 = v0;
        } while (v25);
    }
    v57 = *((a2 + 152) as &i8);
    if !(v57 != 5 && !*((a2 + 131) as &i8) && !*((a2 + 132) as &i8) && (*((a2 + 125) as &i32) || v57 != 6 || core::option::Option<T>::map_or((1 <= v16 ? v17 + (v16 - 1) * 56 : 0)))) {
        return 0;
    }
    if !v21 {
        v3 = "^ no match for key\n";
        v4 = 1;
        v5 = 8;
        *(&v6 as &i128) = 0;
        v22 = std::io::Write::write_fmt(a3, &v3);
        if v22 {
            return v22;
        }
    } else {
        v8 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(*((&v12.field_0 as &char + 8) as &i64), v12.field_16, 0));
        v10 = &v8;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_5ff8f0;
        v4 = 2;
        v7 = 0;
        v5 = &v10;
        *(&v6 as &i64) = 1;
        v22 = std::io::Write::write_fmt(a3, &v3);
        if v22 {
            return v22;
        }
    }
}
