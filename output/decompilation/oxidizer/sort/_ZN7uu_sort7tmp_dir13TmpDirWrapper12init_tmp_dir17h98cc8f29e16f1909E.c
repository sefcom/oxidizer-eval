fn uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a0: i64) -> int {
    let v0: struct9;  // [bp-0xe0]
    let v1: u8;  // [bp-0xd0]
    let v2: void*;  // [bp-0xc8], Other Possible Types: struct8, u8
    let v3: u64;  // [bp-0xc8]
    let v4: u128;  // [bp-0xb8]
    let v5: i64;  // [bp-0xb0]
    let v6: core::option::Option<u32>;  // [bp-0xa8]
    let v7: u8;  // [bp-0x98]
    let v8: u32;  // [bp-0x88], Other Possible Types: struct16
    let v9: u64;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: u64;  // [bp-0x70]
    let v12: void*;  // [bp-0x68]
    let v13: u64;  // [bp-0x60]
    let v14: u16;  // [bp-0x58]
    let v15: std::path::PathBuf;  // [bp-0x50], Other Possible Types: struct25
    let v16: u128;  // [bp-0x40]
    let v17: u128;  // [bp-0x30]
    let v18: u8;  // [bp-0x20]
    let v20: u64;  // r14
    let v21: u64;  // 4097
    let v22: u64;  // cc_ndep
    let v23: struct8;  // rax

    if *((a0 + 40) as &i8) != 2 {
        core::panicking::panic("assertion failed: self.temp_dir.is_none()"); /* do not return */
    } else if !*((a0 + 56) as &i64) {
        v13 = 6;
        v11 = 1;
        v12 = 0;
        v14 = 0;
        v8 = 0;
        v9 = &g_4305f4;
        v10 = 11;
        v0 = tempfile::Builder::tempdir_in(&v8, a0);
        if v1 == 2 {
            v15 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(a0, v0.field_0);
            v4 = v16;
            memcpy(&v2 as u8, &v15 as u8, 16);
            v6 = v17;
            memcpy(&v7, &v18, 16);
            v2 = v15.field_0;
            v2 = v3 & -0x100 | v2;
            return alloc::boxed::Box<T>::new(&v2);
        }
        v20 = a0 + 24;
        *((v20 + 16) as &u64) = v1;
        *(v20 as &struct9) = v0;
        if *((a0 + 40) as &i8) == 2 {
            core::option::unwrap_failed(); /* do not return */
        }
        v15 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((a0 + 24) as &i64), *((a0 + 32) as &i64));
        v21 = *(*((a0 + 48) as &i64) as &i64);
        vvar_188 = CAS(Load(addr=(vvar_0 + 0x30<64>), size=8, endness=Iend_LE), (vvar_187 + 0x1<64>), vvar_187)
        if BinaryOp CasCmpNE {
            goto LABEL_0x548860;
        }
        if amd64g_calculate_condition(14, 24, v21 + 1, 0, amd64g_calculate_rflags_c(5, *((a0 + 40) as &i8) as u8 as u64, 2, v22)) as char {
            [D] Unsupported jumpkind Ijk_NoDecode at address 5540130()
        }
        v5 = *((a0 + 48) as &i64);
        memcpy(&v2 as u8, &v15, 16);
        v4 = v15.inner.inner.inner.len;
        v8 = ctrlc::init_and_set_handler(&v2 as u8, 1);
        if v8.field_0 as i32 == 3 {
            return v23;
        }
        memcpy(&v2 as u8, &v8, 16);
        v23 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&v2 as u8);
        return v23;
    } else {
        v2 = 0;
        core::panicking::assert_failed(0, a0 + 56, &g_4241f8, &v2, "src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
}
