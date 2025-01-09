fn uu_sort::tmp_dir::TmpDirWrapper::next_file(a0: &struct36, a1: &struct8) -> u64 {
    let v0: struct24;  // [sp-0xb0], Other Possible Types: i192
    let v3: i136;  // [sp-0x78], Other Possible Types: struct17, struct24, Result<struct4, struct8>
    let v4: i64;  // [bp-0x70]
    let v5: struct24;  // [sp-0x38]
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v10: i64;  // rsi
    let v11: i64;  // rdx

    if *((a1 + 40) as &i8) == 2 {
        v7 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a1);
        if v7 {
            *((a0 + 16) as &i64) = v7;
            *((a0 + 24) as &i64) = v8;
            *((a0 + 8) as &i64) = 0x8000000000000000;
        }
    }
    v3 = std::sync::mutex::Mutex<T>::lock(*((a1 + 48) as &i64) + 16);
    v9 = core::result::Result<T,E>::unwrap(&v3, "src/uu/sort/src/tmp_dir.rs");
    v5 = <T as alloc::string::ToString>::to_string(a1 + 56);
    *((a1 + 56) as &i64) = *((a1 + 56) as &i64) + 1;
    if *((a1 + 40) as &i8) == 2 {
        core::option::unwrap_failed("src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    v10 = *((a1 + 24) as &i64);
    v11 = *((a1 + 32) as &i64);
    v3 = struct24 {
        field_0: v5
        field_16: *((&v5 as &char + 16) as &i64)
    };
    v0 = std::path::Path::join(v10, v11, &v3);
    v3 = std::fs::File::create(&v0) as u64;
    return struct36 {
        field_0: *((&v3 as &char + 4) as &i32)
        field_4: v1
        field_16: <UNKNOWN>
        field_24: <UNKNOWN>
    };
    v3 = 4;
    v4 = *((&v3.field_0 as &char + 8) as &i64);
    *((a0 + 16) as &double) = alloc::boxed::Box<T>::new(&v3);
    *((a0 + 24) as &&i64) = &g_600f08;
    *((a0 + 8) as &i64) = 0x8000000000000000;
}
