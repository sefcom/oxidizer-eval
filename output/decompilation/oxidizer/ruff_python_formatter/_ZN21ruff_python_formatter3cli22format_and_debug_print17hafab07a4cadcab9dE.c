fn ruff_python_formatter::cli::format_and_debug_print(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> Result<struct24, struct16> {
    let a0: void*;  // rdi
    let v0: struct24;  // [bp-0x3c0]
    let v1: u64;  // [bp-0x3b8]
    let v2: u32;  // [bp-0x3b0]
    let v3: struct12;  // [bp-0x3a8], Other Possible Types: u8
    let v4: u8;  // [bp-0x3a8]
    let v5: u8;  // [bp-0x3a8]
    let v6: struct12;  // [bp-0x39c], Other Possible Types: u8
    let v7: u8;  // [bp-0x39c]
    let v8: Result<struct76, struct16>;  // [bp-0x388], Other Possible Types: u64
    let v9: Result<struct88, struct16>;  // [bp-0x388]
    let v10: u64;  // [bp-0x388]
    let v11: struct16;  // [bp-0x388], Other Possible Types: u128
    let v12: u64;  // [bp-0x380]
    let v13: u64;  // [bp-0x378]
    let v14: u128;  // [bp-0x378]
    let v15: u64;  // [bp-0x370]
    let v16: u128;  // [bp-0x368]
    let v17: u64;  // [bp-0x360]
    let v18: iNone;  // [bp-0x358]
    let v19: iNone;  // [bp-0x348]
    let v20: u128;  // [bp-0x338]
    let v21: struct12;  // [bp-0x30c]
    let v22: u64;  // [bp-0x300]
    let v23: u32;  // [bp-0x2f9]
    let v24: u8;  // [bp-0x2f5]
    let v25: u32;  // [bp-0x2f4]
    let v26: Result<struct88, struct16>;  // [bp-0x2f0], Other Possible Types: u64
    let v27: u64;  // [bp-0x2f0]
    let v28: Option<struct80>;  // [bp-0x2f0], Other Possible Types: u640
    let v29: u64;  // [bp-0x2f0]
    let v30: void*;  // [bp-0x2e8]
    let v31: void*;  // [bp-0x2e8]
    let v32: u128;  // [bp-0x2e0]
    let v33: iNone;  // [bp-0x2d0]
    let v34: iNone;  // [bp-0x2c0]
    let v35: iNone;  // [bp-0x2b0]
    let v36: u64;  // [bp-0x2a0]
    let v37: u64;  // [bp-0x290]
    let v38: struct24;  // [bp-0x288]
    let v39: u64;  // [bp-0x278]
    let v40: Result<struct112, struct48>;  // [bp-0x270], Other Possible Types: struct189, struct24, u64
    let v41: struct15;  // [bp-0x270], Other Possible Types: u64
    let v43: u64;  // [bp-0x268]
    let v44: u8;  // [bp-0x262]
    let v45: u64;  // [bp-0x260]
    let v46: u64;  // [bp-0x260]
    let v47: struct16;  // [bp-0x190]
    let v48: u64;  // [bp-0x180]
    let v49: u64;  // [bp-0x178]
    let v50: u64;  // [bp-0x170]
    let v51: void*;  // [bp-0x168]
    let v52: u128;  // [bp-0x160]
    let v53: iNone;  // [bp-0x150]
    let v54: iNone;  // [bp-0x140]
    let v55: iNone;  // [bp-0x130]
    let v56: u64;  // [bp-0x120]
    let v57: u64;  // [bp-0x118]
    let v58: u64;  // [bp-0x110]
    let v59: u128;  // [bp-0x108]
    let v60: u128;  // [bp-0xf8]
    let v61: u64;  // [bp-0xf0]
    let v62: iNone;  // [bp-0xe8]
    let v63: iNone;  // [bp-0xd8]
    let v64: u64;  // [bp-0xc8]
    let v65: u64;  // [bp-0xc0]
    let v66: u64;  // [bp-0xb8]
    let v67: iNone;  // [bp-0xb0]
    let v68: iNone;  // [bp-0xa0]
    let v69: iNone;  // [bp-0x90]
    let v70: u128;  // [bp-0x80]
    let v71: iNone;  // [bp-0x70]
    let v72: iNone;  // [bp-0x60]
    let v73: struct32;  // [bp-0x50]
    let v75: u8;  // al
    let v76: iNone;  // xmm0
    let v77: iNone;  // xmm1
    let v78: void*;  // rbx
    let v79: iNone;  // xmm0
    let v80: core::result::Result<(), std::io::error::Error>;  // xmm0
    let v81: u64;  // rdi
    let v82: u32;  // edx
    let v85: u64;  // [bp-0x160]

    v75 = ruff_python_ast::PySourceType::try_from_path(a4, a5);
    v40 = ruff_python_parser::parse(a1, a2, (v75 != 3 ? (2 <= v75) * 3 + 0x90300 : 0x90300));
    v8 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v40);
    if (((0 ^ v8 as i64) & (0 ^ -(v10))) >> 63) as char {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v12
        };
    }
    v72 = *((&v8 as &char + 96) as &i128);
    v71 = v20;
    v76 = *((&v8 as &char + 16) as &i128);
    v77 = *((&v8 as &char + 32) as &i128);
    *(&v70 as void*) = v19;
    v69 = v18;
    v68 = v77;
    v67 = v76;
    v65 = v8 as i64;
    v66 = v12;
    v41 = ruff_python_formatter::options::PyFormatOptions::from_extension(a4, a5);
    v44 = *((a3 + 25) as &i8);
    v22 = *(&v41.field_0 as &i64);
    v23 = *((&v41.field_2 as &char + 3) as &i32);
    v24 = *((a3 + 28) as &i8);
    v25 = v41.field_8;
    v0 = ruff_python_parser::<impl core::convert::From<&ruff_python_parser::Tokens> for ruff_python_trivia::comment_ranges::CommentRanges>::from(&v65);
    v40 = ruff_python_formatter::format_module_ast(&v65, &v0, a1, a2, &v22);
    v78 = a0;
    v9 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v40);
    match v9 {
        Err(_) => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v58
            };
        },
        Ok(_) => {
            v64 = *((&v9 as &char + 80) as &i64);
            v79 = *((&v9 as &char + 16) as &i128);
            v63 = v19;
            v62 = v18;
            v60 = *((&v9 as &char + 32) as &i128) as u128;
            v59 = v79;
            v57 = v9 as i64;
            v58 = v12;
            if *((a3 + 26) as &i8) {
                v10 = v58;
                v12 = v59 as i64;
                v13 = a1;
                v15 = a2;
                println!("{}", &v10);
            }
            v27 = v26;
            if *((a3 + 27) as &i8) {
                v38 = ruff_python_formatter::comments::visitor::collect_comments(&v70 as u8, a1, a2, v1, v2);
                if v39 {
                    println!("# Comment decoration: Range, Preceding, Following, Enclosing, Comment");
                }
                v73 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v38);
                v28 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v73);
                if let Some(_) = v28 {
                    do {
                        v19 = v35;
                        v80 = v28 as i128;
                        v18 = v34;
                        *(&v16 as void*) = v33;
                        v14 = v32;
                        *(&v11 as &core::result::Result<(), std::io::error::Error>) = v80;
                        v37 = v19 as i64;
                        if v13 == 94 {
                            v3 = 94;
                            v81 = v16 as i64;
                            v4 = v3;
                            if v81 == 94 {
                                continue;
                            }
                        } else {
                            v40 = v13;
                            v43 = v15;
                            v3 = struct12 {
                                field_0: ruff_python_ast::generated::AnyNodeRef::kind(v13) as u32 as u8
                                padding_1: <UNKNOWN>
                                field_4: <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v40 as u704) as u32
                                field_8: v82
                            };
                            v81 = v16 as i64;
                            v4 = v5;
                            v3 = v5;
                            if v81 == 94 {
                                continue;
                            }
                        }
                        v41 = v81;
                        v43 = v17;
                        v6 = struct12 {
                            field_0: ruff_python_ast::generated::AnyNodeRef::kind(v81) as u32 as u8
                            padding_1: <UNKNOWN>
                            field_4: <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v40 as u704) as u32
                            field_8: v82
                        };
                        v6 = v7;
                        v47 = v11;
                        v21 = struct12 {
                            field_0: ruff_python_ast::generated::AnyNodeRef::kind(v47.field_0) as u32 as u8
                            padding_1: <UNKNOWN>
                            field_4: <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v47) as u32
                            field_8: v82
                        };
                        v48 = ruff_formatter::source_code::SourceCodeSlice::text(&v19, a1, a2);
                        v49 = v82 as u64;
                        println!("{}, {}, {}, {}, {}", &v37, &v3, &v6, &v21, &v48);
                        v28 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v73);
                    } while (v28 as i32 != 94);
                }
                v8 = v61 + 16;
                v12 = a1;
                v13 = a2;
                println!("{}", &v8);
                v78 = a0;
                v27 = v29;
                v30 = v31;
                v45 = v46;
            }
            v40 = ruff_formatter::Formatted<Context>::create_printer(&v57);
            v8 = ruff_formatter::printer::Printer::print(&v40, &v57);
            v26 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v8);
            match v26 {
                Ok(_) => {
                    v56 = v36;
                    v55 = v35;
                    v54 = v34;
                    v53 = v33;
                    v52 = v32;
                    v50 = v26 as i64;
                    v51 = v30;
                    v40 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, v85);
                    *(&v78[16] as &u64) = v45;
                    *(v78 as &i128) = *(&v40.field_0 as &i128);
                },
                Err(_) => {
                    *(&v78[8] as &void*) = v30;
                    *(v78 as &i64) = 0x8000000000000000;
                },
            }
        },
    }
}
