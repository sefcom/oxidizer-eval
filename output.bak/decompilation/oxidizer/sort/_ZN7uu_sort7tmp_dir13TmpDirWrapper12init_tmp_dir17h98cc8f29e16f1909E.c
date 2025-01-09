fn uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a0: void*) -> u64 {
    let v0: i192;  // [sp-0xe0], Other Possible Types: struct24
    let v1: i8;  // [bp-0xc8], Other Possible Types: struct8, struct32, struct16
    let v2: i128;  // [bp-0xc7]
    let v3: i128;  // [bp-0xb8]
    let v4: i128;  // [sp-0xa8]
    let v5: i128;  // [sp-0x98]
    let v6: Option<struct16>;  // [bp-0x88], Other Possible Types: struct4, i32
    let v7: i64;  // [sp-0x80]
    let v8: i64;  // [sp-0x78]
    let v9: i64;  // [sp-0x70]
    let v10: i64;  // [sp-0x68]
    let v11: i64;  // [sp-0x60]
    let v12: i16;  // [sp-0x58]
    let v13: struct24;  // [sp-0x50], Other Possible Types: i200, struct25
    let v14: i8;  // [bp-0x30]
    let v15: i8;  // [bp-0x20]
    let v17: i64;  // r14
    let v18: i8;  // al
    let v19: i64;  // rax
    let v20: i64;  // cc_dep1
    let v21: i64;  // rax
    let v22: i64;  // 4097
    let v23: i64;  // cc_ndep

    if *((a0 + 40) as &i8) != 2 {
        core::panicking::panic("assertion failed: self.temp_dir.is_none()", "src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    if *((a0 + 56) as &i64) {
        v1 = struct8 {
            field_0: 0
        };
        core::panicking::assert_failed(0, a0 + 56, &g_4241f8, &v1, "src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    v11 = 6;
    v9 = 1;
    v10 = 0;
    v12 = 0;
    v6 = struct4 {
        field_0: 0
    };
    v7 = &g_4305f4;
    v8 = 11;
    v0 = tempfile::Builder::tempdir_in(&v6, a0);
    if *((&v0 as &char + 16) as &i8) == 2 {
        v13 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(a0, v0);
        v18 = v13;
        v3 = v13;
        v2 = *((&v13 as &char + 1) as &i128);
        v4 = v14;
        v5 = v15;
        v1 = v18;
        v19 = alloc::boxed::Box<T>::new(&v1);
        return v19;
    }
    v17 = a0 + 24;
    *((v17 + 16) as &i64) = *((&v0 as &char + 16) as &i64);
    *(v17 as &i192) = v0;
    v20 = *((a0 + 40) as &i8);
    if *((a0 + 40) as &i8) == 2 {
        core::option::unwrap_failed("src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    v13 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((a0 + 24) as &i64), *((a0 + 32) as &i64));
    v21 = *((a0 + 48) as &i64);
    v22 = *(v21 as &i64);
    *(v21 as &i64) = v22 + 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x548860;
    }
    if amd64g_calculate_condition(14, 24, v22 + 1, 0, amd64g_calculate_rflags_c(5, v20, 2, v23)) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 5540130()
    }
    v1 = struct32 {
        field_0: v13
        field_16: *((&v13 as &char + 16) as &i64)
        field_24: *((a0 + 48) as &i64)
    };
    v6 = ctrlc::init_and_set_handler(&v1, 0x1);
    if v6 == 3 {
        v19 = 0;
    } else {
        v1 = struct16 {
            field_0: v6
        };
        v19 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&v1);
    }
    return v19;
}
