fn uu_sort::Line::print_debug(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i64;  // [bp-0x108]
    let v1: i64;  // [bp-0x108]
    let v2: struct16;  // [bp-0x100]
    let v5: struct25;  // [bp-0xf0], Other Possible Types: struct32, core::fmt::Arguments, u64
    let v6: u64;  // [bp-0xf0]
    let v7: core::fmt::Arguments;  // [bp-0xf0]
    let v8: u64;  // [bp-0xe0]
    let v9: u64;  // [bp-0xe0]
    let v10: u64;  // [bp-0xd8]
    let v11: u64;  // [bp-0xd8]
    let v12: alloc::string::String;  // [bp-0xc0], Other Possible Types: struct9, u128
    let v13: core::fmt::rt::Argument;  // [bp-0xc0], Other Possible Types: alloc::string::String, u64
    let v14: u64;  // [bp-0xc0]
    let v15: core::fmt::rt::Argument;  // [bp-0xa0]
    let v16: u128;  // [bp-0xa0]
    let v17: u8;  // [bp-0x90]
    let v18: i64;  // [bp-0x88]
    let v19: u64;  // [bp-0x80]
    let v20: struct24;  // [bp-0x70]
    let v21: u64;  // [bp-0x58]
    let v22: u64;  // [bp-0x50]
    let v23: u64;  // [bp-0x40]
    let v24: u64;  // [bp-0x38]
    let v26: std::io::stdio::Stdout;  // r14
    let v27: u64;  // rbp
    let v28: u64;  // rcx
    let v29: core::cell::UnsafeCell<u64>;  // rax
    let v30: core::cell::UnsafeCell<u64>;  // r13
    let v32: i64;  // r12
    let v33: u64;  // r15
    let v34: i64;  // rdx
    let v35: i64;  // rdx
    let v36: i64;  // rbp
    let v37: core::option::Option<&str>;  // rax
    let v38: u64;  // rbp
    let v39: core::option::Option<&str>;  // rax
    let v40: core::option::Option<&str>;  // rax
    let v41: u64;  // rax
    let v42: u64;  // r13
    let v43: u8;  // al
    let v44: i64;  // r14
    let v45: u64;  // r14
    let v46: struct24;  // r13
    let v48: core::option::Option<&str>;  // rax
    let v50: i64;  // r15
    let v51: alloc::string::String;  // rbx
    let v52: core::option::Option<&str>;  // rax
    let v53: u64;  // rsi
    let v54: u64;  // rdi
    let v57: core::option::Option<&str>;  // rax
    let v60: std::fs::File;  // r14
    let v65: u64;  // rax
    let v66: u64;  // rsi

    v0 = a0;
    alloc::str::<impl str>::replace(&v17, a0, a1);
    v13 = core::fmt::rt::Argument {
        ty: &v17
    };
    v7 = core::fmt::Arguments {
        pieces: [&g_5ff8f0, "\n"]
        args: [v12]
        fmt: 0
    };
    std::io::Write::write_fmt(a3, &v7);
    if v27 {
        return v27;
    }
    v20 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    uu_sort::tokenize(v0, a1, *((a2 + 120) as &i32), &v20);
    v28 = *((a2 + 8) as &i64);
    v21 = *((a2 + 16) as &i64);
    v22 = v28;
    v23 = v28;
    v24 = *((a2 + 16) as &i64) * 56 + v28;
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a1);
    if v29 {
        v2 = struct16 {
            field_0: a1
            field_8: "src/uu/sort/src/sort.rs"
        };
        v1 = v0;
        do {
            v32 = uu_sort::FieldSelector::get_range(v30, v1, v26, 8, 0);
            v33 = *((v30 + 53) as &i8);
            if v33 >= 2 {
                if v33 != 2 {
                    v13 = v12;
                    v34 = v35;
                    if !(v33 == 3) {
                        continue;
                    }
                    v36 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v35);
                    v40 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v36, v35, v0, v2.field_0) as u64;
                    v5 = struct32 {
                        field_0: v40
                        field_8: v40 + v35
                        field_16: 0
                        field_24: 0
                    };
                    v11 = v10 & -0x100;
                    v43 = uu_sort::month_parse(v40, v35) as i32;
                    v46 = core::iter::traits::iterator::Iterator::try_fold(&v5, &v11);
                    if !v43 {
                        core::option::Option<T>::map_or(v46, v35 as u32, v35, v35);
                    } else if v35 as u32 != 0x110000 {
                        if !core::iter::traits::iterator::Iterator::advance_by(&v5) {
                            core::iter::traits::iterator::Iterator::try_fold(&v5, &v11);
                        }
                        core::option::Option<T>::map_or(v54, v53, v35);
                    } else {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    core::iter::traits::exact_size::ExactSizeIterator::len(v46, v35);
                } else {
                    v38 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v35);
                    v39 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v38, v35, v0, v2.field_0) as u64;
                    v41 = uu_sort::get_leading_gen(v39, v35);
                    core::iter::traits::exact_size::ExactSizeIterator::len(v41, v35);
                }
                v13 = v12;
                v34 = v45 + v32;
            } else {
                v36 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v35);
                v37 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v36, v35, v0, v2.field_0) as u64;
                v12 = struct9 {
                    field_0: 0x2e00110000
                    field_8: (v33 as u8 == 1) as u8 as u8
                };
                v5 = uu_sort::numeric_str_cmp::NumInfo::parse(v37, a2, &v12);
                v42 = v8;
                v32 += v42;
                v44 = core::iter::traits::exact_size::ExactSizeIterator::len(v42, 1) + v32;
                if !v42 && core::cmp::impls::<impl core::cmp::PartialEq for usize>::eq(0x1, a1) {
                    v36 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v32, v44);
                    v48 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v36, v35, v0, v2.field_0) as u64;
                    v13 = v14;
                    v34 = v44;
                } else {
                    if v33 == 1 {
                        v52 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v44, v35, v50, v2.field_0) as u64;
                        v44 += core::str::pattern::Pattern::is_prefix_of(v52, v35) as i32;
                    }
                    do {
                        v57 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v36, v32, v0, v51) as u64;
                    } while ((v13 = v14, v34 = v44, core::str::pattern::Pattern::is_suffix_of(v57, v35)));
                }
                continue;
            }
            v60 = v34;
            v12 = v13;
            v13 = alloc::str::<impl str>::repeat(" ", unicode_width::str_width(v18, v32, 0));
            v15 = core::fmt::rt::Argument {
                ty: &v13
            };
            v5 = core::fmt::Arguments {
                pieces: [&g_424b80]
                args: [v16]
                fmt: 0
            };
            std::io::Write::write_fmt(a3, &v5);
            if v27 {
                return v27;
            }
            if v32 < v60 {
                v65 = unicode_width::str_width(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v32, v60, v18, v19) as u64, v35, 0);
                v13 = alloc::str::<impl str>::repeat("_", v65);
                v15 = core::fmt::rt::Argument {
                    ty: &v13
                };
                v5 = core::fmt::Arguments {
                    pieces: [&g_5ff8f0, "\n"]
                    args: [v16]
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v5);
                if v27 {
                    return v27;
                }
                v5 = v6;
                v8 = v9;
            } else {
                v5 = core::fmt::Arguments {
                    pieces: ["^ no match for key\n"]
                    args: []
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v5);
                v5 = v6;
                v8 = v9;
                if v27 {
                    return v27;
                }
            }
            <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v66);
            v1 = v0;
        } while (v29);
    }
    if !(*((a2 + 152) as &i8) != 5 && !*((a2 + 131) as &i8) && !*((a2 + 132) as &i8) && (*((a2 + 125) as &i32) || *((a2 + 152) as &i8) != 6 || core::option::Option<T>::map_or((1 <= v21 ? v22 + (v21 - 1) * 56 : 0)))) {
        return 0;
    }
    if a1 {
        v12 = alloc::str::<impl str>::repeat("_", unicode_width::str_width(v18, v19, 0));
        v15 = core::fmt::rt::Argument {
            ty: &v12
        };
        v5 = core::fmt::Arguments {
            pieces: [&g_5ff8f0, "\n"]
            args: [v16]
            fmt: 0
        };
        std::io::Write::write_fmt(a3, &v5);
    } else {
        v5 = core::fmt::Arguments {
            pieces: ["^ no match for key\n"]
            args: []
            fmt: 0
        };
        std::io::Write::write_fmt(a3, &v5);
    }
    return 0;
}
