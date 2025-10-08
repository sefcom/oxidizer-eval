fn ruff_python_formatter::string::docstring::DocstringLinePrinter::format(a0: i64, a1: i64, a2: i64) -> int {
    let v0: void*;  // [bp-0x1c8]
    let v1: struct16;  // [bp-0x1c0]
    let v2: struct21;  // [bp-0x1b0]
    let v3: struct21;  // [bp-0x1a8]
    let v4: u64;  // [bp-0x1a0]
    let v5: u128;  // [bp-0x198]
    let v6: u64;  // [bp-0x190]
    let v7: u64;  // [bp-0x188]
    let v8: struct16;  // [bp-0x180]
    let v9: i64;  // [bp-0x178], Other Possible Types: struct_2 *
    let v10: u64;  // [bp-0x170]
    let v11: Result<struct112, struct48>;  // [bp-0x168], Other Possible Types: struct24, u64
    let v12: struct88;  // [bp-0x168]
    let v13: u64;  // [bp-0x160]
    let v14: i64;  // [bp-0x158], Other Possible Types: struct_9 *, u64
    let v15: u64;  // [bp-0x150]
    let v16: void*;  // [bp-0x148], Other Possible Types: u64
    let v17: struct12;  // [bp-0x138]
    let v18: struct12;  // [bp-0x128]
    let v19: u128;  // [bp-0xf8]
    let v20: u32;  // [bp-0xf0]
    let v21: u64;  // [bp-0xe8]
    let v22: u8;  // [bp-0xd8]
    let v23: u64;  // [bp-0xd0]
    let v24: struct21;  // [bp-0xc8], Other Possible Types: u8
    let v25: struct12;  // [bp-0xb8]
    let v26: struct12;  // [bp-0xa8]
    let v27: struct12;  // [bp-0x98]
    let v28: u64;  // [bp-0x88]
    let v29: struct24;  // [bp-0x80], Other Possible Types: u8
    let v30: u64;  // [bp-0x70]
    let v31: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v32: u16;  // [bp-0x38]
    let v34: void*;  // rbx
    let v35: struct24;  // rbp
    let v36: struct16;  // r12b
    let v37: u32;  // eax
    let v39: &mut [u8];  // r12w
    let v40: u64;  // cc_ndep
    let v41: struct21;  // r13
    let v42: struct21;  // rax
    let v43: struct21;  // rax
    let v44: u32;  // eax
    let v45: u16;  // _bp
    let v46: i64;  // rax
    let v47: struct12;  // rdx
    let v48: struct12;  // rdx
    let v50: i64;  // r13
    let v51: Result<struct24, struct20>;  // r13
    let v52: &str;  // r12
    let v53: struct12;  // rdx
    let v54: i64;  // rax
    let v55: core::fmt::rt::Argument;  // bpl
    let v56: u64;  // rax
    let v57: u64;  // rax
    let v58: struct16;  // r15
    let v59: struct20;  // r14
    let v60: i64;  // rax
    let v61: void*;  // rax

    v34 = *((a1 + 136) as &i64);
    if !*((ruff_formatter::formatter::Formatter<Context>::options(*(v34 as &i64), v34[8] as i64) + 2) as &i16) {
        v35 = *((ruff_formatter::formatter::Formatter<Context>::options(*(v34 as &i64), v34[8] as i64) + 4) as &i16);
        v36 = *((ruff_formatter::formatter::Formatter<Context>::options(*(v34 as &i64), v34[8] as i64) + 6) as &i8);
        v37 = ruff_python_formatter::context::IndentLevel::to_ascii_spaces(*((*((v34[8] as i64 + 48) as &i64)(*(v34 as &i64)) as i64 + 40) as &i32), *((ruff_formatter::formatter::Formatter<Context>::options(*(v34 as &i64), v34[8] as i64) + 6) as &i8));
        v11 = ruff_python_formatter::string::docstring::CodeExampleKind::indent(a2);
        v41 = ruff_python_formatter::string::docstring::Indentation::columns(&v11) as u64;
        v42 = ruff_python_formatter::string::docstring::Indentation::columns(a1 + 112) as u64;
        v44 = core::cmp::Ord::max((_ccall(2, 6, v35 & 65535, (_ccall(3, 2, v43 & 65535, v39 as u64, v40) as char ? (v43 as u32 & -0x10000 | (v43 as u16 + v39) as u32) as u64 : 65535) & 65535, v40) as char ? 0 : (v35 - (_ccall(3, 2, v43 & 65535, v39 as u64, v40) as char ? v43 as u32 & -0x10000 | (v43 as u16 + v39) as u32 : 65535)) as u32), a1);
        core::result::Result<T,E>::expect(v44);
    }
    v46 = ruff_python_formatter::string::docstring::CodeExampleKind::code(a2);
    v48 = v47 * 56;
    if !v47 {
        v50 = 0;
    } else {
        v50 = v46;
    }
    v51 = v50;
    v52 = v46 + v48 - 56;
    if !v47 {
        v53 = v47;
    } else {
        v53 = v52;
    }
    if (!v53 | !v51) == 1 {
        *(&v0[8] as &i64) = 0x8000000000000000;
        *(v0 as &i64) = 0;
        return;
    }
    core::iter::traits::iterator::Iterator::collect(&v22, v46, v48 + v46);
    v11 = alloc::str::join_generic_copy(v23, *(&v24 as &i64));
    v21 = v14;
    v19 = *(&v11.field_0 as &i128);
    v54 = ruff_formatter::formatter::Formatter<Context>::options(*(v34 as &i64), v34[8] as i64);
    v1 = struct16 {
        field_0: *(v54 as &i32)
        field_4: v45
        field_6: *((v54 + 6) as &i32)
        field_10: 1
        field_11: *((v54 + 11) as &i8)
        field_12: 0
        field_13: *((v54 + 13) as &i16)
        field_15: *((v54 + 15) as &i8)
    };
    v55 = *((a1 + 149) as &i8);
    v12 = ruff_python_formatter::string::docstring::docstring_format_source(&v1, v55 as u64, v20, v21);
    if v12.field_0 == 0x8000000000000000 {
        v56 = v0 + 8;
        if &v12 as u8 == ")" {
            *((v56 + 16) as &u64) = v16;
            *(v56 as &u128) = v12.field_16;
            v57 = 1;
        } else {
            *(v56 as &i64) = 0x8000000000000000;
            v57 = 0;
        }
        *(v0 as &u64) = v57;
    } else {
        v28 = v12.field_80;
        v27 = v18;
        v26 = v17;
        v25 = v12.field_32;
        v24 = v12.field_16;
        v22 = *(&v12.field_0 as &i128);
        if v55 {
            v58 = v23;
            v59 = v24.field_0;
            v2 = v58;
            v3 = v59;
            v9 = &v2;
            v10 = <&T as core::fmt::Display>::fmt;
            v11 = "\"\"\"";
            v13 = 2;
            v16 = 0;
            v14 = &v9;
            v15 = 1;
            core::option::Option<T>::map_or_else(&v29, &v11);
        } else {
            v58 = v23;
            v59 = v24.field_0;
            v2 = v58;
            v3 = v59;
            v9 = &v2;
            v10 = <&T as core::fmt::Display>::fmt;
            v11 = "'''";
            v13 = 2;
            v16 = 0;
            v14 = &v9;
            v15 = 1;
            core::option::Option<T>::map_or_else(&v29, &v11);
        }
        v8 = v58;
        v5 = *(&v29 as &i128);
        v7 = v30;
        v60 = ruff_formatter::formatter::Formatter<Context>::options(*(v34 as &i64), v34[8] as i64);
        v11 = ruff_python_parser::parse(v6, v7, (2 <= *((v60 + 7) as &i8)) * 3 + 0x90300);
        match v11 {
            Err(_) => {
                *(&v0[8] as &i64) = 0x8000000000000000;
                *(v0 as &i64) = 0;
            },
            Ok(_) => {
                v31 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v8, v59);
                v32 = 0;
                v29 = struct24 {
                    field_0: v51
                    field_8: 0
                    field_16: v59
                };
                core::iter::traits::iterator::Iterator::collect(&v2, &v29);
                v61 = v4 * 32 + v3;
                if !v61 == 32 && !!v4 {
                    *(&v61[4] as &u8) = (!*((v53 + 16) as &i64)) as u8 as u8;
                }
                *(&v0[24] as &u64) = v4;
                *(&v0[8] as &i128) = *(&v2.field_0 as &i128);
                *(v0 as &i64) = 0;
            },
        }
    }
    return;
}
