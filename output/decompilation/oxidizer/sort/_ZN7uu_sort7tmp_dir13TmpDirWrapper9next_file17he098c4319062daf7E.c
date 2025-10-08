fn uu_sort::tmp_dir::TmpDirWrapper::next_file(a1: i64) -> : struct36 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xb0]
    let v1: u8;  // [bp-0x94]
    let v2: u128;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: core::fmt::rt::Argument;  // [bp-0x80]
    let v5: struct17;  // [bp-0x78], Other Possible Types: u64
    let v6: struct24;  // [bp-0x78]
    let v7: Result<struct4, struct8>;  // [bp-0x78]
    let v8: core::fmt::Arguments;  // [bp-0x74]
    let v9: std::path::PathBuf;  // [bp-0x70]
    let v10: struct16;  // [bp-0x6c]
    let v11: iNone;  // [bp-0x38]
    let v12: u64;  // [bp-0x28]
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rax
    let v18: u32;  // rdx
    let v19: std::path::PathBuf;  // eax
    let v20: core::result::Result<(), core::fmt::Error>;  // rax

    if *((a1 + 40) as &i8) == 2 {
        v14 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a1);
        if v14 {
            *((a0 + 16) as &u64) = v14;
            *((a0 + 24) as &u64) = v15;
            *((a0 + 8) as &i64) = 0x8000000000000000;
            return;
        }
    }
    v5 = std::sync::poison::mutex::Mutex<T>::lock(*((a1 + 48) as &i64) + 16);
    v16 = core::result::Result<T,E>::unwrap(&v5, "src/uu/sort/src/tmp_dir.rs");
    v20 = core::fmt::num::imp::<impl u64>::_fmt(*((a1 + 56) as &i64), &v1) as u64;
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v20 as &i64), v18);
    v12 = v6.field_16;
    *((a1 + 56) as &i64) = *((a1 + 56) as &i64) + 1;
    v11 = *(&v6.field_0 as &i128);
    if *((a1 + 40) as &i8) == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v0 = std::path::Path::join(*((a1 + 24) as &i64), *((a1 + 32) as &i64), &v11);
    v5 = std::fs::File::create(&v0);
    match v5 as u128 {
        Ok(_) => {
            v2 = *(&v0.field_0 as &i128) as u128;
            v4 = v0.field_16;
            return struct40 {
                field_0: v8
                field_4: <UNKNOWN>
                field_16: v4
                field_24: <UNKNOWN>
            };
        },
        Err(_) => {
            v19 = *((&v7 as &char + 8) as &i64) as i32;
            v5 = 9223372036854775811 as u64;
            v9 = v19;
            v10 = 0;
            *((a0 + 16) as &u64) = alloc::boxed::Box<T>::new(&v5 as u128) as u64;
            *((a0 + 24) as &&u8) = &g_58c448;
            *((a0 + 8) as &i64) = 0x8000000000000000;
        },
    }
}
