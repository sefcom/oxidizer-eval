fn uu_csplit::SplitWriter::do_to_match(a0: i64, a1: i64, a2: void*, a3: u32, a4: void*, a5: u64, a6: i32, a7: i64) -> int {
    let v0: void*;  // [bp-0x1a8]
    let v1: struct16;  // [bp-0x198], Other Possible Types: struct32, struct_5 *, Option<struct24>, u128
    let v2: struct40;  // [bp-0x198], Other Possible Types: struct_6 *, struct48
    let v3: Option<struct24>;  // [bp-0x198]
    let v4: void*;  // [bp-0x190], Other Possible Types: u64
    let v5: u64;  // [bp-0x188]
    let v6: void*;  // [bp-0x180]
    let v7: u64;  // [sp-0x178]
    let v8: u8;  // [sp-0x170]
    let v9: i64;  // [bp-0x160], Other Possible Types: struct_2 *, u64
    let v10: struct48;  // [sp-0x158], Other Possible Types: struct24
    let v11: u64;  // [bp-0x158]
    let v12: u128;  // [bp-0x150]
    let v13: u64;  // [bp-0x150]
    let v14: void*;  // [bp-0x150]
    let v15: void*;  // [bp-0x150]
    let v16: u64;  // [bp-0x148]
    let v17: void*;  // [bp-0x148]
    let v18: u128;  // [sp-0x128]
    let v19: struct32;  // [bp-0x128]
    let v20: struct32;  // [bp-0x128]
    let v22: u64;  // [bp-0x120]
    let v23: u64;  // [bp-0x118]
    let v24: void*;  // [bp-0x110]
    let v25: i64;  // [bp-0xf8]
    let v26: struct24;  // [bp-0xe8]
    let v27: struct24;  // [bp-0xd0]
    let v28: u128;  // [bp-0xb8]
    let v29: u64;  // [bp-0xa0]
    let v30: u128;  // [bp-0x98]
    let v31: u64;  // [bp-0x88]
    let v32: u128;  // [bp-0x80]
    let v35: struct40;  // [bp-0x58]
    let v36: u128;  // [bp-0x48]
    let v37: i64;  // rax
    let v38: u64;  // rax
    let v39: u64;  // rax
    let v40: u64;  // r13
    let v41: void*;  // rbx
    let v42: u64;  // r14
    let v43: core::option::Option<&str>;  // rax
    let v44: u64;  // rdx
    let v45: u64;  // rax
    let v46: u8;  // r12b
    let v47: u8;  // bpl
    let v48: i32;  // r13d
    let v49: u64;  // rax
    let v50: u64;  // rax
    let v51: u64;  // r13
    let v52: void*;  // r14
    let v53: u64;  // rbx
    let v54: core::option::Option<&str>;  // rax
    let v55: u64;  // rdx
    let v56: u64;  // rax
    let v57: i64;  // rax
    let v59: i64;  // rax
    let v60: u64;  // rax
    let v61: i64;  // r13

    v9 = a5;
    if a6 >= 0 {
        alloc::vec::Vec<T,A>::drain(&v1, a7);
        if v1 != v4 {
            loop {
                v37 = v1;
                v1 = v37 + 32;
                if *((v37 + 8) as &i64) == 9223372036854775809 {
                    goto LABEL_516f19;
                }
                v29 = *((v37 + 8) as &i64);
                v30 = *((v37 + 16) as &i128);
                v10 = core::result::Result<T,E>::unwrap(&v29, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/csplit/src/csplit.rs");
                v18 = *(&v15 as &i128);
                if v10.field_0 as i64 == 0x8000000000000000 {
                    goto LABEL_516f19;
                }
                v11 = v10.field_0;
                v12 = v18;
                v38 = uu_csplit::SplitWriter::writeln(a1, v15, v16);
                v1 = v1;
                goto LABEL_516f19;
            }
        } else {
LABEL_516f19:
            *((a7 + 48) as &i64) = 1;
            v19 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a7);
            v39 = v22;
            if v22 != 9223372036854775809 {
                do {
                    v40 = v23;
                    v41 = v24;
                    if v39 == 0x8000000000000000 {
                        *(v0 as &i64) = 12;
                        *(&v0[8] as &u64) = v40;
                        *(&v0[16] as &void*) = v41;
                        return;
                    }
                    v42 = v19.field_0;
                    v27 = struct24 {
                        field_0: v39
                        field_8: v40
                        field_16: v41
                    };
                    v43 = <&str as core::str::pattern::Pattern>::strip_suffix_of("\r\n", v40, v41) as u64;
                    if let None = v43 {
                        v43 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v40, v41);
                    }
                    v1 = struct16 {
                        field_24: 0
                        field_32: v43
                    };
                    v5 = v44;
                    v6 = 0;
                    v7 = v44;
                    v8 = 1;
                    regex_automata::util::search::Input::set_span(&v1, v44);
                    v10 = v2;
                    v1 = regex_automata::meta::regex::Regex::search_half(a4, v9, &v10);
                    if let Some(_) = v1 {
                        v9 = &v27;
                        v46 = *((*((a1 + 32) as &i64) + 99) as &i8);
                        if v46 {
                            v47 = 1;
                            if !a6 {
                                goto LABEL_51777a;
                            }
                            v45 = uu_csplit::SplitWriter::writeln(a1, v40, v41);
                        } else if a6 {
                            v45 = uu_csplit::SplitWriter::writeln(a1, v40, v41);
                        } else {
                            v1 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a7, v42, &v27);
                            v46 = 0;
                            if let Some(_) = v1 {
                                panic!("the buffer is big enough to contain 1 line");
                            }
LABEL_51777a:
                            uu_csplit::SplitWriter::finish_split(a1);
                            if v46 {
                                v1 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a7);
                            }
                            *(v0 as &i64) = 13;
                            return;
                        }
                        if v45 {
LABEL_5175ce:
                            *(v0 as &i64) = 0;
                            *(&v0[8] as &u64) = v45;
                            goto LABEL_5175ea__5;
                        } else {
                            v47 = 1;
                            if a6 >= 2 {
                                do {
                                    v1 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a7);
                                    if v4 == 9223372036854775809 {
                                        uu_csplit::SplitWriter::finish_split(a1);
                                        v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a2, a3);
                                        *(&v0[24] as &u64) = v16;
                                        *(&v0[8] as &u128) = v10.field_0;
                                        *(v0 as &i64) = 1;
                                        goto LABEL_5175ea__5;
                                    } else if v4 != 0x8000000000000000 {
                                        v11 = v4;
                                        v13 = v5;
                                        v17 = v6;
                                        v49 = uu_csplit::SplitWriter::writeln(a1, v13, v17);
                                        if v49 {
                                            *(v0 as &i64) = 0;
                                            *(&v0[8] as &u64) = v49;
                                        }
                                    } else {
                                        *(v0 as &i64) = 12;
                                        *(&v0[8] as &u64) = v13;
                                        *(&v0[16] as &void*) = v17;
                                        goto LABEL_5175ea__5;
                                    }
                                    v48 -= 1;
                                } while (v48 > 2);
                            }
                            goto LABEL_51777a;
                        }
                    }
                    v45 = uu_csplit::SplitWriter::writeln(a1, v40, v41);
                    if v45 {
                        goto LABEL_5175ce;
                    }
                    v19 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a7);
                    v39 = v22;
                } while (v22 != 9223372036854775809);
                goto LABEL_0x5175ea;
            }
        }
    } else {
        v25 = -(a6) as u64;
        *((a7 + 48) as &unsigned long) = v25;
        v20 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a7);
        v50 = v22;
        if v22 != 9223372036854775809 {
            do {
                v51 = v23;
                v52 = v24;
                if v50 == 0x8000000000000000 {
                    *(v0 as &i64) = 12;
                    *(&v0[8] as &u64) = v51;
                    *(&v0[16] as &void*) = v52;
                    return;
                }
                v53 = v20.field_0;
                v26 = struct24 {
                    field_0: v50
                    field_8: v51
                    field_16: v52
                };
                v54 = <&str as core::str::pattern::Pattern>::strip_suffix_of("\r\n", v51, v52) as u64;
                if let None = v54 {
                    v54 = uu_csplit::SplitWriter::do_to_match::{{closure}}(v51, v52);
                }
                v1 = struct16 {
                    field_24: 0
                    field_32: v54
                };
                v5 = v55;
                v6 = 0;
                v7 = v55;
                v8 = 1;
                regex_automata::util::search::Input::set_span(&v1, v55);
                v10 = v2;
                v3 = regex_automata::meta::regex::Regex::search_half(a4, v9, &v10);
                match v3 {
                    None => {
                        v1 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a7, v53, &v26);
                        if let None = v1 {
                            continue;
                        }
                        v56 = uu_csplit::SplitWriter::writeln(a1, v4, v5);
                        if v56 {
                            *(v0 as &i64) = 0;
                            *(&v0[8] as &u64) = v56;
                            goto LABEL_5175ea__5;
                        }
                    },
                    Some(_) => {
                        v9 = &v26;
                        v35 = uu_csplit::InputSplitter<I>::shrink_buffer_to_size(a7);
                        v7 = v35.field_32;
                        v5 = v36;
                        v1 = *(&v35.field_0 as &i128) as u128;
                        v59 = v1 as i64;
                        if v1 as i64 == v4 {
LABEL_51754c:
                            if *((*((a1 + 32) as &i64) + 99) as &i8) {
                                v1 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a7, v53, &v26);
                                v61 = v25;
                            } else {
                                v61 = v25;
                                *((a7 + 48) as &unsigned long) = v25 + 1;
                                v1 = uu_csplit::InputSplitter<I>::add_line_to_buffer(a7, v53, &v26);
                                if let Some(_) = v1 {
                                    panic!("should be big enough to hold every lines");
                                }
                            }
                            uu_csplit::SplitWriter::finish_split(a1);
                            if *((a7 + 16) as &i64) >= v61 {
                                *(v0 as &i64) = 13;
                                return;
                            }
                            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v0 + 8, a2, a3);
                            *(v0 as &i64) = 1;
                            return;
                        }
                        loop {
                            v2 = v59 + 32;
                            if *((v59 + 8) as &i64) == 9223372036854775809 {
                                goto LABEL_51754c;
                            }
                            v31 = *((v59 + 8) as &i64);
                            v32 = *((v59 + 16) as &i128);
                            v10 = core::result::Result<T,E>::unwrap(&v31, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/csplit/src/csplit.rs");
                            v28 = *((&v10.field_0 as &char + 8) as &i128);
                            if v10.field_0 as i64 == 0x8000000000000000 {
                                goto LABEL_51754c;
                            }
                            v12 = v28;
                            if uu_csplit::SplitWriter::writeln(a1, v14, v16) {
                                break;
                            }
                            v59 = v2;
                            goto LABEL_51754c;
                        }
                        *(v0 as &i64) = 0;
                        *(&v0[8] as &u64) = v60;
                    },
                }
                v20 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(a7);
                v50 = v22;
            } while (v22 != 9223372036854775809);
LABEL_5175ea__5:
            return;
        }
        vvar_1378{stack -408} = struct40 OrderedDict([(0, 𝜙@64b [((5337677, None), vvar_1287{stack -408}), ((5336974, None), None)]), (8, 𝜙@64b [((5337677, None), vvar_1288{stack -400}), ((5336974, None), None)])])
        alloc::vec::Vec<T,A>::drain(&v2, a7);
        v57 = v2.field_0;
    }
}
