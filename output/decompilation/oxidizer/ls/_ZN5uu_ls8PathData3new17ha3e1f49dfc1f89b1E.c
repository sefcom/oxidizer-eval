fn uu_ls::PathData::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32, a5: i32, a6: i8) -> void {
    let v0: i64;  // [bp-0x148]
    let v1: u32;  // [bp-0x13c]
    let v2: u128;  // [bp-0x138]
    let v3: u64;  // [bp-0x128]
    let v4: u64;  // [bp-0x120]
    let v5: std::sys::os_str::bytes::Buf;  // [bp-0xe8], Other Possible Types: struct24
    let v6: u64;  // [bp-0x30]
    let v7: u64;  // [bp-0x28]
    let v8: u64;  // [bp-0x20]
    let v9: u64;  // [bp-0x18]
    let v10: u64;  // [bp-0x10]
    let v11: u64;  // r15
    let v12: u64;  // r14
    let v13: u64;  // r13
    let v14: u64;  // r12
    let v15: u64;  // rbx
    let v16: core::option::Option<&std::ffi::os_str::OsStr>;  // rax

    v10 = v11;
    v9 = v12;
    v8 = v13;
    v7 = v14;
    v6 = v15;
    v4 = a2;
    v0 = a3;
    v1 = a4;
    if a6 {
        v5 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1);
        v3 = v5.field_16;
        memcpy(&v2, &v5, 16);
        goto ((&g_4346c0.field_0)[a5] + &g_4346c0.field_0) as i64;
    } else {
        v16 = std::path::Path::file_name(*((a1 + 8) as &i64), *((a1 + 16) as &i64)) as u64;
        if let None = v16 {
            v16 = uu_ls::PathData::new::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64)) as u64;
        }
        v5 = std::sys::os_str::bytes::Slice::to_owned(v16, a2);
        v3 = v5.inner.len;
        memcpy(&v2, &v5, 16);
        goto ((&g_4346b0.field_0)[a5] + &g_4346b0.field_0) as i64;
    }
}
