fn uu_sort::tmp_dir::TmpDirWrapper::next_file(a0: &struct36, a1: &struct8) -> u64 {
    let v0: i192;  // [sp-0xb0], Other Possible Types: struct24
    let v2: i192;  // [bp-0x90]
    let v4: i8;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>, struct24, struct17
    let v5: struct24;  // [sp-0x70]
    let v6: struct24;  // [sp-0x38]
    let v8: i64;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rax
    let v13: i64;  // rax

    if *((a1 + 40) as &i8) == 2 {
        v8 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a1);
        if v8 {
            *((a0 + 16) as &i64) = v8;
            *((a0 + 24) as &i64) = v9;
            *((a0 + 8) as &i64) = 0x8000000000000000;
        }
    }
    v4 = std::sync::mutex::Mutex<T>::lock(*((a1 + 48) as &i64) + 16);
    v10 = core::result::Result<T,E>::unwrap(&v4, "src/uu/sort/src/tmp_dir.rs");
    v6 = <T as alloc::string::ToString>::to_string(a1 + 56);
    *((a1 + 56) as &i64) = *((a1 + 56) as &i64) + 1;
    if *((a1 + 40) as &i8) == 2 {
        core::option::unwrap_failed("src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    v4 = v6;
    v0 = std::path::Path::join(*((a1 + 24) as &i64), *((a1 + 32) as &i64), &v4);
    v4 = std::fs::File::create(&v0);
    match v4 {
        Ok(_) => {
            v5 as u192 = v0;
            v13 = *((&v2 as &char + 8) as &i64);
            return struct36 {
                field_0: *((&v4 as &char + 4) as &i32)
                field_4: v1
                field_16: <UNKNOWN>
                field_24: <UNKNOWN>
            };
        },
        Err(v5) => {
            v4 = 4;
        },
    }
}
