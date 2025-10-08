fn uu_sort::Line::print_debug(a0: u64, a1: u64, a2: i64, a3: u64) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0xf0], Other Possible Types: core::fmt::Arguments, u64
    let v1: core::fmt::Arguments;  // [bp-0xf0], Other Possible Types: u64
    let v2: Result<struct24, struct24>;  // [bp-0xf0]
    let v3: u64;  // [bp-0xf0]
    let v4: u64;  // [bp-0xe8]
    let v5: void*;  // [bp-0xe0]
    let v6: void*;  // [bp-0xe0], Other Possible Types: u64
    let v7: void*;  // [bp-0xe0]
    let v8: void*;  // [bp-0xe0]
    let v9: u128;  // [bp-0xd8]
    let v10: u64;  // [bp-0xd8]
    let v11: u64;  // [bp-0xd0]
    let v12: u8;  // [bp-0xc8]
    let v13: u32;  // [bp-0xc0]
    let v14: u16;  // [bp-0xbc]
    let v15: u16;  // [bp-0xba]
    let v16: core::fmt::rt::Argument;  // [bp-0xb8], Other Possible Types: u128
    let v17: u128;  // [bp-0xb8]
    let v18: u64;  // [bp-0xb8]
    let v19: i8;  // [bp-0xb0]
    let v20: void*;  // [bp-0xa8], Other Possible Types: u64
    let v21: core::fmt::rt::Argument;  // [bp-0x98]
    let v22: u128;  // [bp-0x98]
    let v23: u64;  // [bp-0x88]
    let v24: struct24;  // [bp-0x80]
    let v25: i64;  // [bp-0x68]
    let v26: struct24;  // [bp-0x60]
    let v27: u64;  // [bp-0x58]
    let v28: u64;  // [bp-0x50]
    let v29: u64;  // [bp-0x48]
    let v30: void*;  // [bp-0x40]
    let v31: i64;  // [bp-0x38]
    let v33: void*;  // r15
    let v34: i64;  // r12
    let v36: u64;  // rbp
    let v37: u64;  // r14
    let v38: void*;  // rdx
    let v41: core::option::Option<&str>;  // rax
    let v42: u8;  // al
    let v43: u64;  // r14
    let v44: u64;  // rsi
    let v45: u64;  // rdi
    let v47: u64;  // rax
    let v48: void*;  // rdx, Other Possible Types: unsigned long
    let v51: core::option::Option<&str>;  // rax
    let v53: u64;  // r15
    let v55: void*;  // r14
    let v56: void*;  // rbx
    let v58: u64;  // r12
    let v59: u64;  // r14
    let v60: core::option::Option<&str>;  // rax
    let v61: core::option::Option<&str>;  // rax
    let v62: u64;  // rdx
    let v69: void*;  // rbx
    let v72: core::option::Option<&str>;  // rax
    let v77: core::option::Option<&str>;  // rax
    let v97: u64;  // 4103
    let v101: u64;  // [bp-0xf0]

    v26 = alloc::str::<impl str>::replace(a0, a1);
    v16 = core::fmt::rt::Argument {
        ty: &v26
    };
    v0 = core::fmt::Arguments {
        pieces: [&g_58ce68, "\n"]
        args: [v17]
        fmt: 0
    };
    std::io::Write::write_fmt(a3, &v0);
    if v33 {
        return v33;
    }
    v24 = struct24 {
        field_0: 0
        field_8: ""
    };
    uu_sort::tokenize(a0, a1, *((a2 + 120) as &i32), &v24);
    v23 = *((a2 + 16) as &i64) * 56 + *((a2 + 8) as &i64);
    v29 = *((a2 + 16) as &i64);
    if v29 {
        loop {
            v31 = v34;
            v36 = uu_sort::FieldSelector::get_range(v34, a0, a1, 8, 0);
            v37 = *((v34 + 53) as &i8);
            if v37 >= 2 {
                if v37 != 2 {
                    v38 = v48;
                    if v37 != 3 {
                        goto LABEL_4d1224;
                    }
                    v41 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v36, v48), v48, a0, a1) as u64;
                    v101 = v41;
                    v4 = v41 + v48;
                    v5 = 0;
                    v9 = 0;
                    v42 = uu_sort::month_parse(v41, v48);
                    v43 = core::iter::traits::iterator::Iterator::try_fold(&v101, &v9);
                    if v42 {
                        core::option::unwrap(v48 as u32);
                        if !core::iter::traits::iterator::Iterator::advance_by(&v101) {
                            core::iter::traits::iterator::Iterator::try_fold(&v101, &v9);
                        }
                        core::option::Option<T>::map_or(v45, v44, v48);
                    } else {
                        core::option::Option<T>::map_or(v43, v48 as u32, v48, v48);
                    }
                    core::iter::traits::exact_size::ExactSizeIterator::len(v43, v48);
                } else {
                    v51 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(<core::ops::range::Range<Idx> as core::clone::Clone>::clone(v36, v48), v48, a0, a1) as u64;
                    v43 = uu_sort::get_leading_gen(v51, v48);
                    core::iter::traits::exact_size::ExactSizeIterator::len(v43, v48);
                }
                v38 = v47 + v36 + v43;
            } else {
                v53 = <core::ops::range::Range<Idx> as core::clone::Clone>::clone(v36, v48);
                v30 = v48;
                v19 = v37 == 1;
                v18 = 0x2e00110000;
                uu_sort::numeric_str_cmp::NumInfo::parse(&v101, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v53, v48, a0, a1) as u64, a2);
                v55 = v5;
                v36 += v55;
                v56 = core::iter::traits::exact_size::ExactSizeIterator::len(v55, 1) + v36;
                if *((v34 + 53) as &i8) == 1 {
                    v58 = a0;
                    v59 = a1;
                    v60 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v56, v30, v58, v59) as u64;
                    v56 += core::str::pattern::Pattern::is_prefix_of(v60, v48);
                } else {
                    v59 = a1;
                    v58 = a0;
                }
                core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v53, v36, v58, v59);
                loop {
                    v38 = v56;
                    if !core::str::pattern::Pattern::is_suffix_of(v61, v62) {
                        break;
                    }
                    core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v53, v36 - 1, v58, v59);
                }
            }
LABEL_4d1224:
            v69 = v38;
            v72 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v36, v27, v28) as u64;
            v0 = alloc::slice::<impl [T]>::repeat(&g_42ac20, core::iter::traits::double_ended::DoubleEndedIterator::rfold(v72, v48 + v72));
            v20 = v5;
            v16 = v0 as i128;
            v21 = core::fmt::rt::Argument {
                ty: &v18
            };
            v1 = core::fmt::Arguments {
                pieces: [&g_4275d0]
                args: [v22]
                fmt: 0
            };
            std::io::Write::write_fmt(a3, &v1);
            if v33 {
                break;
            }
            if v36 < v69 {
                v77 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v36, v69, v27, v28) as u64;
                v2 = alloc::slice::<impl [T]>::repeat(&g_42ac34, core::iter::traits::double_ended::DoubleEndedIterator::rfold(v77, v48 + v77));
                v20 = v6;
                v17 = v2 as i128;
                v21 = core::fmt::rt::Argument {
                    ty: &v18
                };
                v1 = core::fmt::Arguments {
                    pieces: [&g_58ce68, "\n"]
                    args: [v22]
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v1);
                v1 = v3;
                v7 = v6;
                if v33 {
                    break;
                }
            } else {
                v1 = core::fmt::Arguments {
                    pieces: ["^ no match for key\n"]
                    args: []
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v1);
                v1 = v3;
                v7 = v6;
                if v33 {
                    break;
                }
            }
            v5 = v7;
            v101 = v1;
            v34 = v31;
            if v34 != v23 {
                continue;
                if v34 == v23 {
                    goto LABEL_4d1416;
                }
            } else if v34 == v23 {
                goto LABEL_4d1416;
            }
        }
    } else {
LABEL_4d1416:
        if *((v25 + 152) as &i8) != 5 && !*((v25 + 131) as &i8) && !*((v25 + 132) as &i8) {
            if !*((v25 + 127) as &i8) && *((v25 + 125) as &i8) != 1 && !*((v25 + 126) as &i8) && *((v25 + 152) as &i8) == 6 && !*((v25 + 128) as &i8) {
                v97 = v23;
                v23 = v97 - 56;
                if !!v97 - 56 && !!v29 {
                    v10 = 1;
                    v11 = 1;
                    v12 = 0;
                    v6 = 2;
                    v13 = -1 & <uu_sort::KeySettings as core::default::Default>::default();
                    v14 = 0;
                    v15 = 0;
                    if <uu_sort::FieldSelector as core::cmp::PartialEq>::eq(v23, &v101) {
                        return v33;
                    }
                }
            }
            if a1 {
                v0 = alloc::slice::<impl [T]>::repeat(&g_42ac34, core::iter::traits::double_ended::DoubleEndedIterator::rfold(v27, v28 + v27));
                v20 = v8;
                v16 = v0 as i128;
                v21 = core::fmt::rt::Argument {
                    ty: &v18
                };
                v0 = core::fmt::Arguments {
                    pieces: [&g_58ce68, "\n"]
                    args: [v22]
                    fmt: 0
                };
                std::io::Write::write_fmt(a3, &v0);
            } else {
                v0 = "^ no match for key\n";
                v4 = 1;
                v6 = 8;
                v9 = 0;
                std::io::Write::write_fmt(a3, &v0);
            }
        }
    }
    return v33;
}
