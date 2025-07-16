fn uu_sort::Line::print_debug(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i64;  // [bp-0x108]
    let v1: i64;  // [bp-0x108]
    let v2: std::io::stdio::Stdout;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: u384;  // [bp-0xf0], Other Possible Types: struct25
    let v5: u64;  // [bp-0xf0]
    let v6: u384;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: u64;  // [bp-0xe0], Other Possible Types: void*
    let v9: u64;  // [bp-0xe0]
    let v10: u64;  // [bp-0xd8]
    let v11: u64;  // [bp-0xd8]
    let v12: u128;  // [bp-0xc0], Other Possible Types: alloc::string::String
    let v13: alloc::string::String;  // [bp-0xc0], Other Possible Types: u64, int
    let v14: u64;  // [bp-0xc0]
    let v15: u128;  // [bp-0xa0]
    let v16: u128;  // [bp-0xa0]
    let v17: u8;  // [bp-0x90]
    let v18: i64;  // [bp-0x88]
    let v19: u64;  // [bp-0x80]
    let v20: void*;  // [bp-0x70]
    let v21: u64;  // [bp-0x68]
    let v22: void*;  // [bp-0x60]
    let v23: u64;  // [bp-0x58]
    let v24: u64;  // [bp-0x50]
    let v25: u64;  // [bp-0x40]
    let v26: u64;  // [bp-0x38]
    let v28: std::io::stdio::Stdout;  // r14
    let v29: u64;  // rbp
    let v30: u64;  // rcx
    let v31: core::cell::UnsafeCell<u64>;  // rax
    let v32: core::cell::UnsafeCell<u64>;  // r13
    let v34: i64;  // r12
    let v35: u64;  // r15
    let v36: i64;  // rdx
    let v37: i64;  // rdx
    let v38: i64;  // rbp
    let v39: core::option::Option<&str>;  // rax
    let v41: core::option::Option<&str>;  // rax
    let v42: core::option::Option<&str>;  // rax
    let v43: u64;  // rax
    let v44: u64;  // r13
    let v45: u8;  // al
    let v46: i64;  // r14
    let v47: u64;  // r14
    let v48: u64;  // r13
    let v50: core::option::Option<&str>;  // rax
    let v52: i64;  // r15
    let v53: alloc::string::String;  // rbx
    let v54: core::option::Option<&str>;  // rax
    let v55: u64;  // rsi
    let v56: u64;  // rdi
    let v59: core::option::Option<&str>;  // rax
    let v62: i64;  // r14
    let v67: u64;  // rax
    let v68: u64;  // rsi

    v0 = a0;
    alloc::str::<impl str>::replace(&v17, a0, a1);
    v13 = core::fmt::rt::Argument {
        ty: &v17
    };
    v6 = core::fmt::Arguments {
        pieces: [&g_5ff8f0, "\n"]
        args: [v12]
        fmt: 0
    };
    std::io::Write::write_fmt(a3, &v6);
    if v29 {
        return v29;
    }
    v20 = 0;
    v21 = 8;
    v22 = 0;
    uu_sort::tokenize(v0, a1, *((a2 + 120) as &i32), &v20);
    v30 = *((a2 + 8) as &i64);
    v23 = *((a2 + 16) as &i64);
    v24 = v30;
    v25 = v30;
    v26 = *((a2 + 16) as &i64) * 56 + v30;
    v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a1);
    if v31 {
        v3 = "src/uu/sort/src/sort.rs";
        v2 = a1;
        v1 = v0;
        do {
            v34 = uu_sort::FieldSelector::get_range(v32, v1, v28, 8, 0);
            v35 = *((v32 + 53) as &i8);
            if v35 >= 2 {
                if v35 != 2 {
                    v13 = v12;
                    v36 = v37;
                    if !(v35 == 3) {
                        continue;
                    }
                    v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v34, v37), v37, v0, v2) as u64;
                    v4 = v42;
                    v7 = v42 + v37;
                    v8 = 0;
                    v10 = 0;
                    v10 = v11 & -0x100;
                    v45 = uu_sort::month_parse(v42, v37) as i32;
                    v48 = core::iter::traits::iterator::Iterator::try_fold(&v4, &v10);
                    if !v45 {
                        core::option::Option<T>::map_or(v48, v37 as u32, v37, v37);
                    } else if v37 as u32 != 0x110000 {
                        if !core::iter::traits::iterator::Iterator::advance_by(&v4) {
                            core::iter::traits::iterator::Iterator::try_fold(&v4, &v10);
                        }
                        core::option::Option<T>::map_or(v56, v55, v37);
                    } else {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    core::iter::traits::exact_size::ExactSizeIterator::len(v48, v37);
                } else {
                    v41 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v34, v37), v37, v0, v2) as u64;
                    v43 = uu_sort::get_leading_gen(v41, v37);
                    core::iter::traits::exact_size::ExactSizeIterator::len(v43, v37);
                }
                v13 = v12;
                v36 = v47 + v34;
            } else {
                v39 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v34, v37), v37, v0, v2) as u64;
                v12 = struct9 {
                    field_0: 0x2e00110000
                    field_8: (v35 as u8 == 1) as u8 as u8
                };
                v4 = uu_sort::numeric_str_cmp::NumInfo::parse(v39, a2, &v12);
                v44 = v8;
                v34 += v44;
                v46 = core::iter::traits::exact_size::ExactSizeIterator::len(v44, 1) + v34;
                if !v44 && core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(0x1, a1) {
                    v50 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v34, v46), v37, v0, v2) as u64;
                    v13 = v14;
                    v36 = v46;
                } else {
                    if v35 == 1 {
                        v54 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v46, v37, v52, v53) as u64;
                        v46 += core::str::pattern::Pattern::is_prefix_of(v54, v37) as i32;
                    }
                    do {
                        v59 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v38, v34, v0, v2) as u64;
                    } while ((v13 = v14, v36 = v46, core::str::pattern::Pattern::is_suffix_of(v59, v37)));
                }
                continue;
            }
            v62 = v36;
            v12 = v13;
            v13 = alloc::str::<impl str>::repeat(" ", unicode_width::str_width(v18, v34, 0));
            v15 = core::fmt::rt::Argument {
                ty: &v13
            };
            v4 = core::fmt::Arguments {
                pieces: [&g_424b80]
                args: [v16]
                fmt: 0
            };
            std::io::Write::write_fmt(a3, &v4);
            if v29 {
                return v29;
            }
            if v34 < v62 {
                v67 = unicode_width::str_width(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v34, v62, v18, v19) as u64, v37, 0);
                v13 = alloc::str::<impl str>::repeat("_", v67);
                v15 = core::fmt::rt::Argument {
                    ty: &v13
                };
                v4 = core::fmt::Arguments {
                    pieces: [&g_5ff8f0, "\n"]
                    args: [v16]
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v4);
                if v29 {
                    return v29;
                }
                v4 = v5;
                v8 = v9;
            } else {
                v4 = core::fmt::Arguments {
                    pieces: ["^ no match for key\n"]
                    args: []
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v4);
                v4 = v5;
                v8 = v9;
                if v29 {
                    return v29;
                }
            }
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v68);
            v1 = v0;
        } while (v31);
    }
    if !(*((a2 + 152) as &i8) != 5 && !*((a2 + 131) as &i8) && !*((a2 + 132) as &i8) && (*((a2 + 125) as &i32) || *((a2 + 152) as &i8) != 6 || core::option::Option<T>::map_or((1 <= v23 ? v24 + (v23 - 1) * 56 : 0)))) {
        return 0;
    }
    if a1 {
        v12 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(v18, v19, 0));
        v15 = core::fmt::rt::Argument {
            ty: &v12
        };
        v4 = core::fmt::Arguments {
            pieces: [&g_5ff8f0, "\n"]
            args: [v16]
            fmt: 0
        };
        std::io::Write::write_fmt(a3, &v4);
    } else {
        v4 = core::fmt::Arguments {
            pieces: ["^ no match for key\n"]
            args: []
            fmt: 0
        };
        std::io::Write::write_fmt(a3, &v4);
    }
    return 0;
}
