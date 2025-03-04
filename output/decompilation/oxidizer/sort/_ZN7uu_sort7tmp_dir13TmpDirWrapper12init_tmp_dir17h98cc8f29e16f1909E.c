fn uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a0: void*) -> u64 {
    let v0: struct24;  // [sp-0xe0]
    let v1: struct16;  // [bp-0xc8], Other Possible Types: struct17, int, struct8
    let v2: iNone;  // [bp-0xb8]
    let v3: iNone;  // [sp-0xa8]
    let v4: iNone;  // [sp-0x98]
    let v5: Option<struct16>;  // [sp-0x88], Other Possible Types: unsigned int, struct4
    let v6: i64;  // [sp-0x80]
    let v7: i64;  // [sp-0x78]
    let v8: i64;  // [sp-0x70]
    let v9: i64;  // [sp-0x68]
    let v10: i64;  // [sp-0x60]
    let v11: i16;  // [sp-0x58]
    let v12: struct25;  // [sp-0x50], Other Possible Types: struct24
    let v13: i8;  // [bp-0x30]
    let v14: i8;  // [bp-0x20]
    let v16: i64;  // r14
    let v17: i64;  // cc_dep1
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // 4097
    let v22: i64;  // cc_ndep

    if *((a0 + 40) as &i8) != 2 {
        core::panicking::panic("assertion failed: self.temp_dir.is_none()", "src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    if *((a0 + 56) as &i64) {
        v1 = struct8 {
            field_0: 0
        };
        core::panicking::assert_failed(0, a0 + 56, &g_4241f8, &v1, "src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    v10 = 6;
    v8 = 1;
    v9 = 0;
    v11 = 0;
    v5 = struct4 {
        field_0: 0
    };
    v6 = &g_4305f4;
    v7 = 11;
    v0 = tempfile::Builder::tempdir_in(&v5, a0);
    if v0.field_16 as i8 == 2 {
        v12 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(a0, v0.field_0 as i64);
        *(&v2 as &i128) = *(&v12.field_0 as &i128);
        v3 = *(&v13 as &i128);
        v4 = *(&v14 as &i128);
        v1 = struct17 {
            field_0: v18
            field_1: v12.field_8
        };
        v19 = alloc::boxed::Box<T>::new(&v1);
        return v19;
    }
    *((v16 + 16) as &u64) = v0.field_16;
    *(v16 as &u128) = v0.field_0;
    v17 = *((a0 + 40) as &i8);
    if *((a0 + 40) as &i8) == 2 {
        core::option::unwrap_failed("src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
    v12 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((a0 + 24) as &i64), *((a0 + 32) as &i64));
    v20 = *((a0 + 48) as &i64);
    v21 = *(v20 as &i64);
    *(v20 as &unsigned long) = v21 + 1;
    if BinaryOp CasCmpNE {
        goto LABEL_0x548860;
    }
    if amd64g_calculate_condition(14, 24, v21 + 1, 0, amd64g_calculate_rflags_c(5, v17, 2, v22)) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 5540130()
    }
    v1 = *(&v12 as &i256);
    v5 = ctrlc::init_and_set_handler(&v1, 0x1);
    if v5 == 3 {
        v19 = 0;
    } else {
        v1 = struct16 {
            field_0: v5
        };
        v19 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&v1);
    }
    return v19;
}
