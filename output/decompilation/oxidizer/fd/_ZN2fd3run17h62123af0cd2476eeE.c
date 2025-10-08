fn fd::run() -> : struct9 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x894]
    let v1: core::fmt::rt::Argument;  // [bp-0x890]
    let v2: Result<struct64, struct8>;  // [bp-0x888]
    let v3: struct40;  // [bp-0x880]
    let v4: i64;  // [bp-0x878]
    let v8: u64;  // [bp-0x858]
    let v9: core::fmt::rt::Argument;  // [bp-0x850]
    let v10: u64;  // [bp-0x848]
    let v11: u64;  // [bp-0x840]
    let v12: struct24;  // [bp-0x838]
    let v13: Result<struct1, struct8>;  // [bp-0x820], Other Possible Types: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>, struct32, struct40
    let v14: Result<struct16, struct8>;  // [bp-0x820]
    let v15: i64;  // [bp-0x818]
    let v16: i64;  // [bp-0x810]
    let v17: i64;  // [bp-0x800]
    let v18: i64;  // [bp-0x7f0]
    let v19: core::fmt::rt::Argument;  // [bp-0x620], Other Possible Types: struct252, u8
    let v20: u64;  // [bp-0x618]
    let v21: i8;  // [bp-0x610]
    let v22: struct16;  // [bp-0x428]
    let v26: u8;  // [bp-0x230]
    let v27: u64;  // [bp-0x228]
    let v28: u64;  // [bp-0x220]
    let v29: u8;  // [bp-0x218]
    let v30: u8;  // [bp-0x4e]
    let v32: struct24;  // rax
    let v33: core::fmt::rt::Argument;  // rax
    let v34: struct16;  // rsi
    let v35: struct16;  // rax
    let v36: core::fmt::rt::Argument;  // r13
    let v37: struct224;  // rax
    let v39: u32;  // ecx

    v22 = clap_builder::derive::Parser::parse();
    v13 = fd::cli::Opts::gen_completions(*(&v26 as &i32));
    if let Err(_) = v13 {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: v32
        };
    }
    if *((&v13 as &char + 1) as &i8) == 5 {
        v32 = fd::set_working_dir(&v22);
        if !v32 {
            v14 = fd::cli::Opts::search_paths(&v22);
            if (((0 ^ v14 as i64) & (0 ^ -(v14 as i64))) >> 63) as char {
                *((a0 + 8) as &unsigned long) = v15;
            }
            v2 = v14 as i64;
            v3 = v15;
            v4 = v16;
            if v16 {
                v33 = fd::ensure_search_pattern_is_not_a_path(&v22);
                if !v33 {
                    v13 = core::iter::traits::iterator::Iterator::chain(*(v34 as &i64), *(v34 as &i64) + *(v35 as &i64) * 24);
                    v18 = &v22;
                    core::iter::traits::iterator::Iterator::collect(&v19, &v13);
                    v36 = v19;
                    if v36 == 0x8000000000000000 {
                        return struct16 {
                            field_0: 1
                            padding_1: <UNKNOWN>
                            field_8: v10
                        };
                    }
                    v9 = v36;
                    v10 = v20;
                    v11 = *(&v21 as &i64);
                    v0 = memcpy(&v13, &v22, 0x200) as u32 & -0x100 | 1;
                    v8 = v11;
                    v19 = fd::construct_config(&v13, v10, v11);
                    v1 = v36;
                    if v19.field_0 == 2 {
                        return struct16 {
                            field_0: 1
                            padding_1: <UNKNOWN>
                            field_8: v20
                        };
                    }
                    v27 = v19.field_0;
                    v28 = v20;
                    v0 = memcpy(&v29, &v19 as u8, 488) as u32 & -0x100 | 1;
                    v37 = fd::ensure_use_hidden_option_for_leading_dot_pattern(v30, v10, v8);
                    if !v37 {
                        v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
                        v17 = &v27;
                        v0 = 0;
                        core::iter::traits::iterator::Iterator::collect(&v19, &v13);
                        v37 = v20;
                        if v19.field_0 != 0x8000000000000000 {
                            v12 = struct24 {
                                field_0: v19.field_0
                                field_8: v37
                                field_16: v19.field_16
                            };
                            memcpy(&v13, &v27, 504);
                            fd::walk::scan(a0, v15 as u32, v16, &v12, &v13);
                            return;
                        }
                    }
                    v0 = v39;
                    return struct16 {
                        field_0: 1
                        padding_1: <UNKNOWN>
                        field_8: v37
                    };
                }
            } else {
                v13 = struct40 {
                    field_0: "No valid search paths given."
                    field_8: 1
                    field_16: 8
                    field_24: 0
                };
                v33 = anyhow::__private::format_err(&v13);
            }
            return struct16 {
                field_0: 1
                padding_1: <UNKNOWN>
                field_8: v33
            };
        }
    } else {
        fd::print_completions(a0, *((&v13 as &char + 1) as &i8));
    }
    return struct16 {
        field_0: 1
        padding_1: <UNKNOWN>
        field_8: v32
    };
}
