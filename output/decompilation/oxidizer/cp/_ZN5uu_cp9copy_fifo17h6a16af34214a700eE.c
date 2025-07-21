fn uu_cp::copy_fifo(a1: i64, a2: i64, a3: i32, a4: i32) -> : struct8 {
    let a0: u64;  // rsi
    let v0: i64;  // [bp-0x130]
    let v1: i64;  // [bp-0x128]
    let v2: u64;  // [bp-0x120]
    let v3: Result<struct24, struct12>;  // [bp-0x118]
    let v4: struct12;  // [bp-0x110]
    let v5: u64;  // [bp-0x108]
    let v6: u8;  // [bp-0x100]
    let v7: u128;  // [bp-0xf8]
    let v8: u64;  // [bp-0xe8]
    let v9: struct24;  // [bp-0xe0], Other Possible Types: core::result::Result<alloc::ffi::c_str::CString, alloc::ffi::c_str::NulError>, u64
    let v10: u64;  // [bp-0xd8]
    let v11: i64;  // [bp-0xd0]
    let v12: u64;  // [bp-0xc8]
    let v13: void*;  // [bp-0xc0]
    let v16: u128;  // xmm0
    let v17: u128;  // xmm1
    let v18: u128;  // xmm2
    let v19: u64;  // r13
    let v20: i64;  // rdi

    v9 = std::fs::metadata(a0, a1);
    if let Ok(_) = v9 {
        uu_cp::OverwriteMode::verify(a2 as u64, a0 as u8, a1, a3, a4);
        if let Ok(_) = v9 {
            v16 = v9 as i128;
            v17 = *((&v9 as &char + 16) as &i128);
            v18 = *((&v9 as &char + 32) as &i128);
            *((v0 + 48) as &i128) = *((&v9 as &char + 48) as &i128);
            *((v0 + 32) as &u128) = v18;
            *((v0 + 16) as &u128) = v17;
            *(v0 as &u128) = v16;
            return;
        }
    }
    v9 = <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(a0, a1);
    v19 = core::result::Result<T,E>::unwrap(&v9);
    if mkfifo(v19, 438) == -1 {
        v3 = 1;
        v4 = a0;
        v5 = a1;
        v6 = 1;
        v1 = &v3;
        v2 = <os_display::Quoted as core::fmt::Display>::fmt;
        v9 = "cannot create fifo ";
        v10 = 2;
        v13 = 0;
        v11 = &v1;
        v12 = 1;
        v9 = core::option::Option<T>::map_or_else(a1);
        *((v0 + 24) as &u64) = v8;
        *((v0 + 8) as &u128) = v7;
        *(v0 as &i64) = 4;
        return;
    }
    *(v20 as &i64) = 13;
    return;
}
