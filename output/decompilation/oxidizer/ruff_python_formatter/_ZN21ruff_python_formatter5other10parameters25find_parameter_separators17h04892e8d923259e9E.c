fn ruff_python_formatter::other::parameters::find_parameter_separators(a1: &str, a2: i64, a3: i64, a4: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: core::fmt::Arguments;  // [bp-0xa0]
    let v1: Result<struct24, struct16>;  // [bp-0x9c], Other Possible Types: unsigned int
    let v2: struct12;  // [bp-0x98], Other Possible Types: u128
    let v3: struct12;  // [bp-0x98]
    let v4: struct12;  // [bp-0x98]
    let v5: struct12;  // [bp-0x98]
    let v7: iNone;  // [bp-0x88]
    let v8: iNone;  // [bp-0x78]
    let v9: i64;  // [bp-0x68]
    let v10: struct21;  // [bp-0x60]
    let v11: struct12;  // [bp-0x60]
    let v12: struct12;  // [bp-0x60]
    let v14: iNone;  // [bp-0x50]
    let v15: i8;  // [bp-0x40]
    let v17: struct12;  // rax, Other Possible Types: u64
    let v18: u8;  // r13b
    let v19: struct16;  // ebp, Other Possible Types: u32
    let v20: u64;  // rsi
    let v21: u32;  // rdx
    let v22: i64;  // 4096
    let v23: i64;  // 4096
    let v24: struct104;  // rsi
    let v25: struct12;  // edx, Other Possible Types: u32
    let v28: u32;  // eax
    let v29: struct16;  // rcx
    let v30: u64;  // r8
    let v31: struct16;  // r9d
    let v32: i64;  // r11
    let v33: struct16;  // r15d, Other Possible Types: u32
    let v34: core::fmt::Arguments;  // r12d, Other Possible Types: u32
    let v35: u64;  // rdi
    let v38: struct16;  // esi
    let v41: u64;  // [bp-0x90]

    if !(v17 && v17 != 88) {
        v22 = a2;
        v23 = a2;
        if !*((v22 + 80) as &i64) {
            goto LABEL_714d42;
        } else {
            goto LABEL_714eb1;
        }
    } else if v19 <= *((a2 + 76) as &i32) {
        v10 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(v20, v21, *((*((a2 + 16) as &i64) * 88 + *((a2 + 8) as &i64) - 84) as &i32), *((a2 + 76) as &i32));
        v8 = *(&v15 as &i128);
        v7 = v14;
        v2 = *(&v10.field_0 as &i128);
        v11 = core::iter::traits::iterator::Iterator::try_fold(&v2);
        if &v12 as u8 == "Z" {
            core::option::expect_failed("The function definition can't end here"); /* do not return */
        }
        v12 = core::iter::traits::iterator::Iterator::try_fold(&v2);
        if &v12 as u8 == "Z" {
            core::option::expect_failed("The function definition can't end here"); /* do not return */
        }
        v1 = v12.field_0 as i32;
        if !*((a2 + 80) as &i64) {
            goto LABEL_714d42;
        } else {
            goto LABEL_714eb1;
        }
    } else {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
LABEL_714d42:
    v23 = v22;
    if !*((a2 + 64) as &i64) {
        goto LABEL_714eb1;
    }
    v9 = *((a2 + 56) as &i64);
    if (!*((a2 + 40) as &i64) || *((a2 + 40) as &i64) * 88 + *((a2 + 32) as &i64) == 88) && v18 {
        v10 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(v24, v25, *((a2 + 72) as &i32), *((a2 + 76) as &i32));
        v2 = core::iter::traits::iterator::Iterator::try_fold(&v10);
        match (v28) {
            5 => {
                v3 = core::iter::traits::iterator::Iterator::try_fold(&v10);
                if &v41 == "Z" {
                    core::option::expect_failed("The function definition can't end here"); /* do not return */
                }
                break;
            }
            90 => {
                core::option::expect_failed("The function definition can't end here"); /* do not return */
            }
            _ => {
LABEL_714eb1:
                if *((a2 + 88) as &i64) {
                    v38 = v31;
                    if !v35 {
                        v38 = *(*((a2 + 88) as &i64) as &i32);
                    }
                    if (v30 || v32) {
                        break;
                    }
                } else {
                    break;
                }
                return struct40 {
                    field_0: (v18 ^ 1) as u32
                    field_4: v1
                    field_8: v34
                    field_12: v19
                    field_16: v38
                    field_20: v35 as u32
                    field_24: v17 as u32
                    field_28: v29 as u32
                    field_32: v33
                    field_36: v25
                };
            }
        }
    }
    v0 = v34;
    if v34 > *((a2 + 76) as &i32) {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v10 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(v24, v25, v33, *((a2 + 76) as &i32));
    v4 = core::iter::traits::iterator::Iterator::try_fold(&v10);
    if &v41 == "Z" {
        core::option::expect_failed("The function definition can't end here"); /* do not return */
    }
    v5 = core::iter::traits::iterator::Iterator::try_fold(&v10);
    if &v41 == "Z" {
        core::option::expect_failed("The function definition can't end here"); /* do not return */
    }
    v34 = v0;
    if &v41 == "Z" {
        core::option::expect_failed("The function definition can't end here"); /* do not return */
    }
}
