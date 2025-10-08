fn ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(a1: i64, a2: &struct29) -> : struct24 {
    let a0: i64;  // rdi
    let v0: Result<struct8, struct12>;  // [sp-0xa0], Other Possible Types: u64
    let v1: struct24;  // [bp-0xa0]
    let v2: u32;  // [bp-0x9c]
    let v3: u64;  // [sp-0x98]
    let v4: core::str::iter::CharIndices;  // [bp-0x90], Other Possible Types: u8
    let v5: u32;  // [bp-0x8c], Other Possible Types: unsigned int
    let v6: i64;  // [bp-0x88]
    let v7: i64;  // [bp-0x80]
    let v8: alloc::string::String;  // [bp-0x78], Other Possible Types: struct8
    let v9: Result<struct8, struct12>;  // [bp-0x60]
    let v10: u8;  // [bp-0x48]
    let v12: struct16;  // rbx
    let v13: u64;  // rax
    let v14: u64;  // rdx
    let v15: u64;  // r13
    let v16: Option<struct24>;  // eax
    let v17: u8;  // al
    let v18: u64;  // rbx
    let v19: struct21;  // r15d
    let v20: struct16;  // ebx
    let v21: struct16;  // r12d
    let v22: struct16;  // ebx
    let v24: struct21;  // eax
    let v26: core::option::Option<&str>;  // rax
    let v27: core::option::Option<&str>;  // rax
    let v30: struct4;  // eax
    let v31: i64;  // rax
    let v32: struct16;  // dil

    v12 = a0;
    v13 = core::str::<impl str>::trim_end_matches(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
    if v14 {
        v15 = v13;
        v7 = *((a1 + 136) as &i64);
        v6 = a0;
        if *((ruff_formatter::formatter::Formatter<Context>::options(*(v7 as &i64), *((v7 + 8) as &i64)) + 10) as &i8) {
            v0 = v15;
            v3 = v15 + v14;
            v4 = 0;
            if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v0) as i32, 0x1) {
                ruff_python_formatter::string::docstring::Indentation::text_len(a1 + 112);
                goto LABEL_723c97;
            }
        } else {
            v9 = ruff_python_formatter::string::docstring::Indentation::from_str(v15, v14);
            v0 = v15;
            v3 = v15 + v14;
            v4 = 0;
            v17 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v0) as i32, 0x1);
            v18 = a1 + 112;
            ruff_python_formatter::string::docstring::Indentation::trim_start(&v10, &v9);
            if v17 || *(&v10 as &i32) == 5 {
                ruff_python_formatter::string::docstring::Indentation::text_len(v18);
LABEL_723db8:
                v0 = ruff_python_formatter::string::docstring::Indentation::from_str(v15, v14);
                v27 = ruff_python_formatter::string::docstring::Indentation::columns(&v0) as u64;
                v1 = alloc::slice::<impl [T]>::repeat(v27 - ruff_python_formatter::string::docstring::Indentation::columns(a1 + 112) as u64);
                v8 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v1, core::str::<impl str>::trim_start_matches(v15, v14), v14);
                v0 = <ruff_formatter::builders::Text as ruff_formatter::Format<Context>>::fmt(v8, *(v7 as &i64), *((v7 + 8) as &i64));
                v30 = v0 as i32;
                v12 = v6;
                if v30 != 4 {
                    *((v12 + 20) as &unsigned int) = v5;
                    *((v12 + 4) as &i128) = *((&v1.field_0 as &char + 4) as &i128);
                    *(v12 as &struct4) = v30;
                    return;
                }
                if !*((a2 + 28) as &i8) {
LABEL_723ecf:
                    *((v31 + 24) as &i64)(v32, &v0);
                }
            } else {
                ruff_python_formatter::string::docstring::Indentation::text_len(v18);
                if *(&v10 as &i32) == 3 {
                    goto LABEL_723db8;
                }
LABEL_723c97:
                v19 = v16;
                if *((a1 + 148) as &i8) {
                    v20 = *((a2 + 24) as &i32);
                    core::result::Result<T,E>::unwrap(v14 >> 32, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_text_size/src/traits.rs");
                    v21 = v14 + v20;
                    if __CFADD__(v14, v20) as char {
                        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                    }
                    v22 = v20 + v19;
                    if v22 > v21 {
                        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
                    }
                    v8 = struct8 {
                        field_0: v22
                        field_4: v21
                    };
                    v0 = <ruff_formatter::builders::SourceTextSliceBuilder as ruff_formatter::Format<Context>>::fmt(&v8, v7);
                    if v24 != 4 {
                        *((v6 + 20) as &u32) = v5;
                        *((v6 + 4) as &i128) = *(&v2 as &i128);
                        *(v6 as &struct21) = v24;
                        return;
                    }
                } else {
                    v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v19 as u64, v15, v14) as u64;
                    v0 = <ruff_formatter::builders::Text as ruff_formatter::Format<Context>>::fmt(v26, a2, *(v7 as &i64), *((v7 + 8) as &i64));
                    if v24 != 4 {
                        *((v6 + 20) as &u32) = v5;
                        *((v6 + 4) as &i128) = *(&v2 as &i128);
                        *(v6 as &struct21) = v24;
                        return;
                    }
                }
                v12 = v6;
                if !*((a2 + 28) as &i8) {
                    goto LABEL_723ecf;
                }
            }
        }
    } else if !*((a2 + 28) as &i8) {
        goto LABEL_723ecf;
    }
    *(v12 as &i32) = 4;
    return;
}
