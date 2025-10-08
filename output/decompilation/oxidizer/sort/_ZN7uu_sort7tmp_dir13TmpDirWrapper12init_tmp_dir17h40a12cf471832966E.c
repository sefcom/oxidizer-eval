fn uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(a0: void*) -> long long {
    let v0: iNone;  // [bp-0x118]
    let v1: core::str::pattern::CharSearcher;  // [bp-0x108], Other Possible Types: u64
    let v2: void*;  // [bp-0xf8], Other Possible Types: struct112
    let v3: struct16;  // [bp-0xf8]
    let v4: struct24;  // [bp-0xf0]
    let v5: Result<struct112, struct24>;  // [bp-0xe0]
    let v6: iNone;  // [bp-0xd8]
    let v7: iNone;  // [bp-0xc8]
    let v8: struct24;  // [bp-0xb8]
    let v9: u64;  // [bp-0xa8]
    let v10: struct16;  // [bp-0xa0], Other Possible Types: u32
    let v11: &str;  // [bp-0x98]
    let v12: u64;  // [bp-0x88]
    let v13: void*;  // [bp-0x80]
    let v14: u64;  // [bp-0x78]
    let v15: u16;  // [bp-0x70]
    let v16: std::path::PathBuf;  // [bp-0x68], Other Possible Types: struct32
    let v17: struct24;  // [bp-0x58]
    let v18: &mut [u8];  // [bp-0x50]
    let v19: iNone;  // [bp-0x48]
    let v20: iNone;  // [bp-0x38]
    let v21: struct24;  // [bp-0x28]
    let v22: &mut [u8];  // [bp-0x18]
    let v24: &mut [u8];  // rcx
    let v25: iNone;  // xmm0
    let v26: u64;  // r14
    let v27: u64;  // 4097

    if a0[40] as i8 != 2 {
        core::panicking::panic("assertion failed: self.temp_dir.is_none()"); /* do not return */
    } else if !a0[56] as i64 {
        v14 = 6;
        v12 = 1;
        v13 = 0;
        v15 = 0;
        v10 = 0;
        v11 = "uutils_sort";
        v8 = tempfile::Builder::tempdir_in(&v10, a0);
        if v8.field_16 as i8 == 2 {
            v16 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(a0[8] as i64, a0[16] as i64, v8.field_0 as i64);
            v24 = v18;
            v22 = v18;
            v25 = v16.field_8;
            v21 = v16.field_8;
            v7 = v20;
            v6 = v19;
            v0 = v21;
            v1 = v22;
            v4 = v21;
            v5 = v1;
            v2 = v16.field_0;
            return alloc::boxed::Box<T>::new(&v2) as u64;
        }
        v26 = a0 + 24;
        v0 = v8.field_0;
        v1 = v9;
        *((v26 + 16) as &u64) = v1;
        *(v26 as void*) = v0;
        if a0[40] as i8 == 2 {
            core::option::unwrap_failed(); /* do not return */
        }
        v16 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0[24] as i64, a0[32] as i64);
        v27 = atomic_fetch_add(a0[48] as i64);
        if _ccall(14, 24, v27 + 1, 0, (a0[40] as i8 < 2) as u8 as u64) as char {
            [D] Unsupported jumpkind Ijk_NoDecode at address 5045207()
        }
        v3 as u256 = struct32 {
            field_0: *(&v16.inner.inner.inner.buf.inner.cap as &i128)
            field_16: v17
            field_24: a0[48] as i64
        };
        v10 = ctrlc::init_and_set_handler(&v3 as u256);
        if v10.field_0 as i32 == 3 {
            return 0;
        }
        v3.field_0 = v10.field_0;
        return uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::{{closure}}(&v3 as u256);
    } else {
        v2 = 0;
        core::panicking::assert_failed(0, a0 + 56, &g_426a60, &v2, "src/uu/sort/src/tmp_dir.rs"); /* do not return */
    }
}
