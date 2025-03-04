fn uu_sort::tmp_dir::TmpDirWrapper::next_file(a0: &struct36, a1: &struct8) -> u64 {
    let v0: struct24;  // [sp-0xb0]
    let v2: struct24;  // [sp-0x90]
    let v4: i8;  // [sp-0x78], Other Possible Types: struct24, struct17, Result<struct4, struct8>
    let v5: struct24;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v12: i64;  // rax

    if *((a1 + 40) as &i8) == 2 {
        v7 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a1);
        if v7 {
            *((a0 + 16) as &unsigned long) = v7;
            *((a0 + 24) as &unsigned long) = v8;
            *((a0 + 8) as &i64) = 0x8000000000000000;
        }
    }
    v4 = std::sync::mutex::Mutex<T>::lock(*((a1 + 48) as &i64) + 16);
    v9 = core::result::Result<T,E>::unwrap(&v4, "src/uu/sort/src/tmp_dir.rs");
    v5 = <T as alloc::string::ToString>::to_string(a1 + 56);
    *((a1 + 56) as &i64) = *((a1 + 56) as &i64) + 1;
    if *((a1 + 40) as &i8) == 2 {
        core::option::unwrap_failed("src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    v4 = v5;
    v0 = std::path::Path::join(*((a1 + 24) as &i64), *((a1 + 32) as &i64), &v4);
    v4 = std::fs::File::create(&v0);
    match v4 {
        Ok(_) => {
            v2 = v0;
            v12 = *((&v2.field_0 as &char + 8) as &i64);
            return struct36 {
                field_0: *((&v4 as &char + 4) as &i32)
                field_4: *(&v1 as &i128)
                field_16: <UNKNOWN>
                field_24: <UNKNOWN>
            };
        },
        Err(v4) => {
            v4 = 4;
        },
    }
}
