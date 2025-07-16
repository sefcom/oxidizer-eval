fn uu_sort::tmp_dir::TmpDirWrapper::next_file(a1: i64) -> : struct36 {
    let a0: i64;  // rsi
    let v0: std::path::PathBuf;  // [bp-0xb0]
    let v1: i8;  // [bp-0x94]
    let v2: u8;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v5: core::option::Option<u32>;  // [bp-0x78], Other Possible Types: core::result::Result<std::fs::File, std::io::error::Error>, u128
    let v6: u32;  // [bp-0x74]
    let v7: u64;  // [bp-0x68]
    let v8: struct24;  // [bp-0x38]
    let v10: u64;  // rax
    let v11: i64;  // rdi
    let v12: u64;  // rdx
    let v13: u64;  // rax
    let v14: u64;  // rsi
    let v15: core::result::Result<(), std::io::error::Error>;  // rdx
    let v16: u64;  // r8
    let v17: i64;  // rdi
    let v18: i64;  // rdi

    if *((a0 + 40) as &i8) == 2 {
        v10 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a0);
        if v10 {
            *((v11 + 16) as &u64) = v10;
            *((v11 + 24) as &u64) = v12;
            *((v11 + 8) as &i64) = 0x8000000000000000;
            return;
        }
    }
    std::sync::mutex::Mutex<T>::lock(&v5, *((a0 + 48) as &i64) + 16);
    v13 = core::result::Result<T,E>::unwrap(&v5, "src/uu/sort/src/tmp_dir.rs");
    v8 = <T as alloc::string::ToString>::to_string(a0 + 56);
    *((a0 + 56) as &i64) = *((a0 + 56) as &i64) + 1;
    if *((a0 + 40) as &i8) == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v14 = *((a0 + 24) as &i64);
    v15 = *((a0 + 32) as &i64);
    v7 = v8.field_16;
    v5 = v8.field_0;
    v0 = std::path::Path::join(v14, v15, &v5, v16);
    v5 = std::fs::File::create(&v0, a1);
    match v5 {
        Err(_) => {
            v5 = 4;
            *((v18 + 16) as &double) = alloc::boxed::Box<T>::new(&v5);
            *((v18 + 24) as &&u8) = &g_600f08;
            *((v18 + 8) as &i64) = 0x8000000000000000;
        },
        Ok(_) => {
            memcpy(&v2, &v0, 16);
            v4 = v0.inner.inner.inner.len;
            *(v17 as &u32) = v6;
            *((v17 + 4) as &i128) = *(&v1 as &i128);
            *((v17 + 16) as &u64) = v3;
            *((v17 + 24) as &u64) = v4;
        },
    }
    return;
}
