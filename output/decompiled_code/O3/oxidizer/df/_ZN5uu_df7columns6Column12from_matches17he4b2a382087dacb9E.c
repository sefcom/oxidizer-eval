fn uu_df::columns::Column::from_matches(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0xf8]
    let v1: i64;  // [sp-0xe8], Other Possible Types: struct16
    let v2: i64;  // [sp-0xe0]
    let v3: i64;  // [sp-0xd8]
    let v4: i128;  // [sp-0xd0], Other Possible Types: struct16
    let v5: i64;  // [sp-0xc8]
    let v6: i64;  // [sp-0xc0]
    let v7: i192;  // [sp-0xb8], Other Possible Types: struct64, struct24
    let v8: i128;  // [sp-0x78], Other Possible Types: struct56
    let v10: i8;  // r15b
    let v11: i8;  // bpl
    let v12: i8;  // al
    let v13: i64;  // rax
    let v14: i64;  // rdi
    let v16: i64;  // rsi
    let v17: i64;  // rdx
    let v18: struct8;  // rax
    let v19: i64;  // rdx
    let v20: i32;  // ebp

    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "print-type") as i32;
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "inodes") as i32;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "output") as i8;
    if v12 != 3 {
        if !v10 {
            if v11 {
                if v12 == 2 {
                    core::panicking::panic(); /* do not return */
                }
                v13 = alloc::alloc::Global::alloc_impl(6);
                *(v13 as &i32) = 0x8070600;
                *((v13 + 4) as &i16) = 1289;
                alloc::slice::hack::into_vec(v14, v13, 6);
                return struct8 {
                    field_0: 0
                };
            } else {
                if v12 == 2 {
                    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a1);
                    v7 = clap_builder::parser::error::MatchesError::unwrap("output", &v8);
                    if !v7 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v8.field_64 = (stack_base)[136] as i128;
                    v8.field_32 = (stack_base)[152] as i128;
                    v8.field_16 = (stack_base)[168] as i128;
                    v8 = v7;
                    v1 = 0;
                    v2 = 8;
                    v3 = 0;
                    v4 = 0;
                    v5 = 1;
                    v6 = 0;
                    loop {
                        v18 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v16, v17);
                        if !v18 {
                            *((a0 + 24) as &i64) = v6;
                            *((a0 + 8) as &i128) = v4;
                            *(a0 as &i64) = 0;
                            break;
                        } else {
                            v0 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(*((v18 + 8) as &i64), *((v18 + 16) as &i64));
                            if !<T as core::slice::cmp::SliceContains>::slice_contains(&v0, v2, v3) as i8 {
                                v1 = alloc::vec::Vec<T,A>::push(v0, v19);
                                v20 = uu_df::columns::Column::parse(v0, v19) as i32;
                                core::result::Result<T,E>::unwrap(v20);
                                v4 = alloc::vec::Vec<T,A>::push(v20, v19);
                            } else {
                                v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(v0, v19);
                                *((a0 + 24) as &i64) = *((&v7 as &char + 16) as &i64);
                                *((a0 + 8) as &i192) = v7;
                                *(a0 as &i64) = 1;
                                break;
                            }
                        }
                    }
                    return a0;
                } else {
                    v13 = alloc::alloc::Global::alloc_impl(6);
                    *(v13 as &i32) = 0x3020100;
                    *((v13 + 4) as &i16) = 1284;
                    v14 = a0 + 8;
                    alloc::slice::hack::into_vec(v14, v13, 6);
                    *(a0 as &i64) = 0;
                    return a0;
                }
            }
        } else {
            if !v11 {
                if v12 == 2 {
                    core::panicking::panic(); /* do not return */
                }
                v13 = alloc::alloc::Global::alloc_impl(7);
                *(v13 as &i32) = 0x2010b00;
                *((v13 + 4) as &i16) = 1027;
                *((v13 + 6) as &i8) = 5;
                v14 = a0 + 8;
                alloc::slice::hack::into_vec(v14, v13, 7);
                return struct8 {
                    field_0: 0
                };
            } else {
                if v12 == 2 {
                    core::panicking::panic(); /* do not return */
                }
            }
        }
    } else {
        if !v10 {
            if v11 {
                vvar_430{reg 16} = alloc::alloc::Global::alloc_impl(6);
                *(v13 as &i32) = 0x8070600;
                *((v13 + 4) as &i16) = 1289;
                alloc::slice::hack::into_vec(v14, v13, 6);
                return struct8 {
                    field_0: 0
                };
            }
            vvar_402{reg 16} = alloc::alloc::Global::alloc_impl(6);
            *(v13 as &i32) = 0x3020100;
            *((v13 + 4) as &i16) = 1284;
            alloc::slice::hack::into_vec(v14, v13, 6);
            return struct8 {
                field_0: 0
            };
        } else {
            if !v11 {
                vvar_416{reg 16} = alloc::alloc::Global::alloc_impl(7);
                *(v13 as &i32) = 0x2010b00;
                *((v13 + 4) as &i16) = 1027;
                *((v13 + 6) as &i8) = 5;
                alloc::slice::hack::into_vec(v14, v13, 7);
                return struct8 {
                    field_0: 0
                };
            }
        }
    }
    v13 = alloc::alloc::Global::alloc_impl(7);
    *(v13 as &i32) = 0x7060b00;
    *((v13 + 4) as &i16) = 2312;
    *((v13 + 6) as &i8) = 5;
    alloc::slice::hack::into_vec(v14, v13, 7);
    return struct8 {
        field_0: 0
    };
}
