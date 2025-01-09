fn uu_cp::copy_fifo(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [sp-0x108]
    let v5: i8;  // [sp-0x100]
    let v6: i8;  // [bp-0xf8]
    let v7: i8;  // [bp-0xe8]
    let v8: i264;  // [sp-0xe0], Other Possible Types: Option<struct1>, struct16, Result<struct32, struct16>
    let v9: i64;  // [sp-0xd8]
    let v10: i64;  // [sp-0xd0]
    let v11: i64;  // [sp-0xc8]
    let v12: i64;  // [sp-0xc0]
    let v19: i64;  // rax
    let v20: i64;  // rcx
    let v21: i64;  // rax
    let v22: i64;  // rcx
    let v23: i64;  // rax

    v8 = std::fs::metadata(a1, a2);
    if v8 != 2 {
        v8 = uu_cp::OverwriteMode::verify(a3, a1, a2, a4);
        return struct64 {
            field_0: v18
            field_16: v17
            field_32: v16
            field_48: v13
        };
        v19 = std::fs::remove_file(a1, a2);
        if v19 {
            v20 = a0;
            *(v20 as &i64) = 2;
            *((v20 + 8) as &i64) = v19;
            v21 = v19;
        }
    }
    v8 = <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(a1, a2);
    if mkfifo(core::result::Result<T,E>::unwrap(&v8), 438) != -1 {
        return struct8 {
            field_0: 13
        };
    }
    v2 = 1;
    v3 = a1;
    v4 = a2;
    v5 = 1;
    v0 = &v2;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = "cannot create fifo ";
    v9 = 2;
    v12 = 0;
    v10 = &v0;
    v11 = 1;
    core::option::Option<T>::map_or_else();
    v22 = a0;
    *((v22 + 24) as &i8) = v7;
    *((v22 + 8) as &i8) = v6;
    *(v22 as &i64) = 4;
    v21 = v23;
}
