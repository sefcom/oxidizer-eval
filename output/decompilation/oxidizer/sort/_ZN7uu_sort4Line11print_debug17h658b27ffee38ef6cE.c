fn uu_sort::Line::print_debug(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i64;  // [bp-0x108]
    let v1: i64;  // [bp-0x108]
    let v2: u64;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: core::fmt::Arguments;  // [bp-0xf0], Other Possible Types: u64
    let v5: u64;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0], Other Possible Types: void*
    let v7: u64;  // [bp-0xe0]
    let v8: u64;  // [bp-0xd8]
    let v9: u64;  // [bp-0xd8]
    let v10: u64;  // [bp-0xc0], Other Possible Types: struct25, alloc::string::String
    let v11: alloc::string::String;  // [bp-0xc0], Other Possible Types: core::fmt::rt::Argument
    let v12: i8;  // [bp-0xb8]
    let v13: core::fmt::rt::Argument;  // [bp-0xa0]
    let v14: core::fmt::rt::Argument;  // [bp-0xa0], Other Possible Types: core::fmt::Arguments
    let v15: u8;  // [bp-0x90]
    let v16: i64;  // [bp-0x88]
    let v17: u64;  // [bp-0x80]
    let v18: void*;  // [bp-0x70]
    let v19: u64;  // [bp-0x68]
    let v20: void*;  // [bp-0x60]
    let v21: u64;  // [bp-0x58]
    let v22: u64;  // [bp-0x50]
    let v23: u64;  // [bp-0x40]
    let v24: u64;  // [bp-0x38]
    let v26: std::io::stdio::Stdout;  // r14
    let v27: u64;  // rbp
    let v28: u64;  // rcx
    let v29: alloc::raw_vec::Cap;  // rax
    let v30: alloc::raw_vec::Cap;  // r13
    let v32: i64;  // r12
    let v33: u64;  // r15
    let v34: i64;  // rdx
    let v35: i64;  // rdx
    let v36: i64;  // rbp
    let v37: core::option::Option<&str>;  // rax
    let v39: core::option::Option<&str>;  // rax
    let v40: core::option::Option<&str>;  // rax
    let v41: u64;  // r8
    let v42: u64;  // rax
    let v43: u64;  // r13
    let v44: u8;  // al
    let v45: i64;  // r14
    let v46: u64;  // r14
    let v47: struct24;  // r13
    let v49: core::option::Option<&str>;  // rax
    let v51: i64;  // r15
    let v52: alloc::string::String;  // rbx
    let v53: core::option::Option<&str>;  // rax
    let v54: u64;  // rsi
    let v55: u64;  // rdi
    let v58: core::option::Option<&str>;  // rax
    let v61: std::fs::File;  // r14
    let v66: u64;  // rax
    let v67: u64;  // rsi

    v0 = a0;
    alloc::str::<impl str>::replace(&v15, a0, a1);
    v11 = core::fmt::rt::Argument {
        ty: &v15
    };
    v4 = core::fmt::Arguments {
        pieces: [&g_5ff8f0, "\n"]
        args: [v10]
        fmt: 0
    };
    std::io::Write::write_fmt(a3, &v4);
    if v27 {
        return v27;
    }
    v18 = 0;
    v19 = 8;
    v20 = 0;
    uu_sort::tokenize(v0, a1, *((a2 + 120) as &i32), &v18);
    v28 = *((a2 + 8) as &i64);
    v21 = *((a2 + 16) as &i64);
    v22 = v28;
    v23 = v28;
    v24 = *((a2 + 16) as &i64) * 56 + v28;
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a1);
    if v29 {
        v3 = "src/uu/sort/src/sort.rs";
        v2 = a1;
        v1 = v0;
        do {
            v32 = uu_sort::FieldSelector::get_range(v30, v1, v26, 8, 0);
            v33 = *((v30 + 53) as &i8);
            if v33 >= 2 {
                if v33 != 2 {
                    v34 = v35;
                    if !(v33 == 3) {
                        continue;
                    }
                    v40 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v35), v35, v0, v2) as u64;
                    v4 = v40;
                    v5 = v40 + v35;
                    v6 = 0;
                    v8 = 0;
                    v8 = v9 & -0x100;
                    v44 = uu_sort::month_parse(v40, v35) as i32;
                    v47 = core::iter::traits::iterator::Iterator::try_fold(&v4, &v8);
                    if !v44 {
                        core::option::Option<T>::map_or(v47, v35 as u32, v35, v35);
                    } else if v35 as u32 != 0x110000 {
                        if !core::iter::traits::iterator::Iterator::advance_by(&v4) {
                            core::iter::traits::iterator::Iterator::try_fold(&v4, &v8);
                        }
                        core::option::Option<T>::map_or(v55, v54, v35);
                    } else {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    core::iter::traits::exact_size::ExactSizeIterator::len(v47, v35);
                } else {
                    v39 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v35), v35, v0, v2) as u64;
                    v42 = uu_sort::get_leading_gen(v39, v35);
                    core::iter::traits::exact_size::ExactSizeIterator::len(v42, v35);
                }
                v34 = v46 + v32;
            } else {
                v37 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v35), v35, v0, v2) as u64;
                v12 = v33 == 1;
                v10 = 0x2e00110000;
                uu_sort::numeric_str_cmp::NumInfo::parse(v37, a2, &v10, v41);
                v43 = v6;
                v32 += v43;
                v45 = core::iter::traits::exact_size::ExactSizeIterator::len(v43, 1) + v32;
                if !v43 && core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(0x1, a1) {
                    v49 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v45), v35, v0, v2) as u64;
                    v34 = v45;
                } else {
                    if v33 == 1 {
                        v53 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v45, v35, v51, v52) as u64;
                        v45 += core::str::pattern::Pattern::is_prefix_of(v53, v35) as i32;
                    }
                    do {
                        v58 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v36, v32, v0, v2) as u64;
                    } while ((v34 = v45, core::str::pattern::Pattern::is_suffix_of(v58, v35)));
                }
                continue;
            }
            v61 = v34;
            v11 = alloc::str::<impl str>::repeat(" ", unicode_width::str_width(v16, v32, 0));
            v13 = core::fmt::rt::Argument {
                ty: &v11
            };
            v4 = core::fmt::Arguments {
                pieces: [&g_424b80]
                args: [v14]
                fmt: 0
            };
            std::io::Write::write_fmt(a3, &v4);
            if v27 {
                return v27;
            }
            if v32 < v61 {
                v66 = unicode_width::str_width(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v32, v61, v16, v17) as u64, v35, 0);
                v11 = alloc::str::<impl str>::repeat("_", v66);
                v13 = core::fmt::rt::Argument {
                    ty: &v11
                };
                v4 = core::fmt::Arguments {
                    pieces: [&g_5ff8f0, "\n"]
                    args: [v14]
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v4);
                if v27 {
                    return v27;
                }
                v6 = v7;
            } else {
                v4 = core::fmt::Arguments {
                    pieces: ["^ no match for key\n"]
                    args: []
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v4);
                v6 = v7;
                if v27 {
                    return v27;
                }
            }
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v67);
            v1 = v0;
        } while (v29);
    }
    if !(*((a2 + 152) as &i8) != 5 && !*((a2 + 131) as &i8) && !*((a2 + 132) as &i8) && (*((a2 + 125) as &i32) || *((a2 + 152) as &i8) != 6 || core::option::Option<T>::map_or((1 <= v21 ? v22 + (v21 - 1) * 56 : 0)))) {
        return 0;
    }
    if a1 {
        v10 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(v16, v17, 0));
        v13 = core::fmt::rt::Argument {
            ty: &v10
        };
        v4 = core::fmt::Arguments {
            pieces: [&g_5ff8f0, "\n"]
            args: [v14]
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
