fn uu_sort::tmp_dir::TmpDirWrapper::next_file(a0: &struct36, a1: &struct8, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0xb0], Other Possible Types: i192
    let v1: i8;  // [bp-0x94]
    let v2: i192;  // [bp-0x90]
    let v3: i64;  // [sp-0x80]
    let v4: i192;  // [sp-0x78], Other Possible Types: struct17, Result<struct4, struct8>
    let v5: i64;  // [bp-0x70]
    let v6: i192;  // [sp-0x38], Other Possible Types: struct24
    let v8: i64;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i64;  // rdx
    let v14: i64;  // rax

    if *((a1 + 40) as &i8) == 2 {
        v8 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a1);
        if v8 {
            *((a0 + 16) as &i64) = v8;
            *((a0 + 24) as &i64) = v9;
            *((a0 + 8) as &i64) = 0x8000000000000000;
            return a0;
        }
    }
    v4 = std::sync::mutex::Mutex<T>::lock(*((a1 + 48) as &i64) + 16, a2);
    v10 = core::result::Result<T,E>::unwrap(&v4, "src/uu/sort/src/tmp_dir.rs");
    v6 = <T as alloc::string::ToString>::to_string(a1 + 56);
    *((a1 + 56) as &i64) = *((a1 + 56) as &i64) + 1;
    if *((a1 + 40) as &i8) == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v11 = *((a1 + 24) as &i64);
    v12 = *((a1 + 32) as &i64);
    v4 = v6;
    v0 = std::path::Path::join(v11, v12, &v4);
    v4 = std::fs::File::create(&v0, v13);
    match v4 {
        Ok(_) => {
            v2 = v0;
            *(a0 as &i32) = *((&v4 as &char + 4) as &i32);
            v14 = *((&v2 as &char + 8) as &i64);
            *((a0 + 4) as &i8) = v1;
            *((a0 + 16) as &i64) = v14;
            *((a0 + 24) as &i64) = v3;
        },
        Err(v5) => {
            v4 = 4;
            *((a0 + 16) as &double) = alloc::boxed::Box<T>::new(&v4);
            *((a0 + 24) as &&i64) = &g_600f08;
            *((a0 + 8) as &i64) = 0x8000000000000000;
        },
    }
    return a0;
}
