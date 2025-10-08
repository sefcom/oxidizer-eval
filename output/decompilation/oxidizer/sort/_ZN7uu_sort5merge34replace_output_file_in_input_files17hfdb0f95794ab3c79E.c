fn uu_sort::merge::replace_output_file_in_input_files(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u32;  // [bp-0x13c]
    let v1: u64;  // [bp-0x138]
    let v2: u128;  // [bp-0x138]
    let v4: u64;  // [bp-0x128]
    let v5: struct24;  // [bp-0x120]
    let v6: u64;  // [bp-0x110]
    let v7: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x108], Other Possible Types: struct16, struct24, struct36
    let v8: u128;  // [bp-0x108]
    let v9: u64;  // [bp-0x100]
    let v10: struct24;  // [bp-0x100]
    let v11: u64;  // [bp-0xf8]
    let v12: u128;  // [bp-0xc8]
    let v13: u64;  // [bp-0xc8]
    let v14: u64;  // [bp-0xb8]
    let v15: u64;  // [bp-0x98]
    let v16: u64;  // [bp-0x90]
    let v17: u128;  // [bp-0x88]
    let v18: struct8;  // [bp-0x78]
    let v21: iNone;  // [bp-0x48]
    let v22: u64;  // [bp-0x38]
    let v24: &mut [u8];  // r15
    let v25: std::path::PathBuf;  // rbx
    let v26: std::path::PathBuf;  // rbx
    let v27: u64;  // rbx
    let v28: core::result::Result<(), std::io::error::Error>;  // rbx
    let v29: u64;  // rdx
    let v30: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xa0]

    v1 = 0x8000000000000000;
    if !a2 {
        return v28;
    }
    v24 = a0;
    v7 = std::fs::canonicalize(a2, a3);
    v14 = v11;
    v12 = v7 as i128;
    if v13 >= 9223372036854775810 {
        v18 = v14;
        v17 = v12;
        if a1 {
            do {
                v26 = v25;
                v30 = std::fs::canonicalize(*((v24 + 8) as &i64), *((v24 + 16) as &i64));
                if v30 as i64 == 0x8000000000000000 || !<std::path::PathBuf as core::cmp::PartialEq>::eq(v15, v16) {
                    continue;
                }
                v7 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4);
                if v9 != 0x8000000000000000 {
                    v0 = v7.field_0;
                    v5 = v10;
                    if !(std::fs::copy(&v30, &v5) & 1) {
                        v7 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v5.field_8 as i64, v6);
                        v22 = v11;
                        v21 = *(&v7.field_0 as &i128);
                        *((v24 + 16) as &u64) = v22;
                        *(v24 as void*) = v21;
                        v11 = v6;
                        v8 = *(&v5.field_0 as &i128);
                        v4 = v11;
                        v2 = v8;
                    } else {
                        v7 = struct16 {
                            field_0: 9223372036854775811
                            field_8: v29
                        };
                        v28 = alloc::boxed::Box<T>::new(&v7) as u64;
                    }
                } else {
                    v28 = v11;
                }
                v24 += 24;
                v27 = v26 - 24;
                v25 = v27;
            } while (v26 != 24);
        }
    }
    return v28;
}
