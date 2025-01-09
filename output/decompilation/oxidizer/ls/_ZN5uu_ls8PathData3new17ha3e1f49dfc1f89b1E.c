fn uu_ls::PathData::new(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x148]
    let v1: i32;  // [sp-0x13c]
    let v2: struct24;  // [sp-0x138], Other Possible Types: i128
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120]
    let v5: struct24;  // [sp-0xe8]
    let v6: i64;  // [sp-0x30]
    let v7: i64;  // [sp-0x28]
    let v8: i64;  // [sp-0x20]
    let v9: i64;  // [sp-0x18]
    let v10: i64;  // [sp-0x10]
    let v11: i64;  // [bp+0x8]
    let v12: i64;  // r15
    let v13: i64;  // r14
    let v14: i64;  // r13
    let v15: i64;  // r12
    let v16: i64;  // rbx
    let v17: i64;  // 4113
    let v18: i64;  // rax
    let v19: i64;  // rdx

    v10 = v12;
    v9 = v13;
    v8 = v14;
    v7 = v15;
    v6 = v16;
    v17 = *(a3 as &i64);
    v4 = a2;
    v0 = a3;
    v1 = a4;
    if v17 != 0x8000000000000000 {
        v3 = *((a3 + 16) as &i64);
        v2 = *(a3 as &i128);
        goto *((4409008 + vvar_5 * 4) as &i32) + 4409008;
    } else if v11 {
        v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
        v2 = v5;
        goto *((4409024 + vvar_5 * 4) as &i32) + 4409024;
    } else {
        v18 = std::path::Path::file_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        if !v18 {
            v18 = uu_ls::PathData::new::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        }
        v5 = std::sys::os_str::bytes::Slice::to_owned(v18, v19);
        v2 = v5;
        goto *((4409008 + vvar_5 * 4) as &i32) + 4409008;
    }
}
