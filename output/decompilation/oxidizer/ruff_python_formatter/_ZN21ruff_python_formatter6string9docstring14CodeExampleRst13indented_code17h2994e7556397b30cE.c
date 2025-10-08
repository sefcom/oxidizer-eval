fn ruff_python_formatter::string::docstring::CodeExampleRst::indented_code(a0: i64) -> u64 {
    let v0: struct12;  // [bp-0x38], Other Possible Types: u64
    let v1: u64;  // [bp-0x30]
    let v2: struct16;  // [bp-0x28]
    let v3: u64;  // [bp-0x20]
    let v4: struct21;  // [bp-0x18]
    let v5: u64;  // [bp-0x10]
    let v7: u64;  // r15
    let v8: struct21;  // r14
    let v9: u64;  // r13
    let v10: struct16;  // r12
    let v11: u64;  // rbx
    let v12: u64;  // rax
    let v13: i64;  // r12
    let v14: i64;  // r12
    let v15: i64;  // r12
    let v16: struct16;  // rax
    let v17: Option<struct80>;  // rdx, Other Possible Types: u64
    let v19: &str;  // rax:rdx

    if *((a0 + 48) as &i32) == 5 {
        return 8;
    }
    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = v11;
    v0 = v12;
    if !*((a0 + 16) as &i64) {
        return v13;
    }
    v0 = *((a0 + 16) as &i64);
    v13 = *((a0 + 8) as &i64);
    do {
        v15 = v14;
        v19 = core::str::<impl str>::trim_matches(*(v15 as &i64), *((v15 + 8) as &i64), v17);
        if v19.data_ptr {
            v16 = ruff_python_formatter::string::docstring::Indentation::trim_start_str(a0 + 48, *(v15 as &i64), *((v15 + 8) as &i64));
        }
        *((v15 + 40) as &struct16) = v16;
        *((v15 + 48) as &Option<struct80>) = v17;
        v14 = v15 + 56;
    } while (v13 != v0 * 56 + v13);
    return v13;
}
