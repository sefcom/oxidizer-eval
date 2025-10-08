fn uu_cp::copy_source(a1: i64, a2: &std::path::Path, a3: &std::path::Path, a4: i8, a5: i64, a6: i64, a7: i64, a8: i64) -> : struct56 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x118]
    let v1: &u64;  // [bp-0x110]
    let v2: u64;  // [bp-0x108]
    let v3: u64;  // [bp-0xf8]
    let v4: u64;  // [bp-0xf0]
    let v5: u64;  // [bp-0xe8]
    let v6: struct24;  // [bp-0xe0], Other Possible Types: struct56
    let v7: Option<struct56>;  // [bp-0xe0]
    let v8: u64;  // [bp-0xc8]
    let v9: u128;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb0]
    let v11: iNone;  // [bp-0xa8], Other Possible Types: struct8
    let v12: u64;  // [bp-0x98]
    let v13: u128;  // [bp-0x88]
    let v14: u64;  // [bp-0x78]
    let v15: Option<struct32>;  // [bp-0x70], Other Possible Types: core::result::Result<usize, std::io::error::Error>
    let v16: u64;  // [bp-0x70]
    let v17: Option<struct32>;  // [bp-0x70]
    let v18: u64;  // [bp-0x68]
    let v19: u64;  // [bp-0x60]
    let v20: &u64;  // [bp-0x58]
    let v21: struct32;  // [bp-0x50]
    let v22: u64;  // rcx
    let v23: u64;  // r9
    let v24: core::fmt::Arguments;  // bl
    let v25: u64;  // rcx
    let v26: u8;  // r9
    let v27: iNone;  // xmm0
    let v29: iNone;  // xmm1

    if std::path::Path::is_dir(a2) {
        uu_cp::copydir::copy_directory(a0, a1, a2, v22, a3, v23, a5, a6, a7);
        return;
    }
    v24 = *((a5 + 92) as &i32);
    v6 = uu_cp::construct_dest_path(a2, v25, a3, v26, a4, *((a5 + 90) as &i8));
    v11 = v6.field_8;
    v12 = v8;
    if v6.field_0 != 9223372036854775820 {
        return struct56 {
            field_0: v6.field_0
            field_8: v11
            field_24: v12
            field_32: v9
            field_48: v10
        };
    }
    *(&v0 as void*) = v11;
    v2 = v12;
    v11 = uu_cp::copy_file(a1, a2, v25, v1, v12, a5, a6, a7, a8);
    if (v24 & 1) {
        v6 = uu_cp::aligned_ancestors(a2, v25, v1);
        v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
        v15 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
        if let Some(_) = v15 {
            v15 = v16;
            do {
                uucore::features::fs::canonicalize(&v3, v15, v18, 0, 1);
                if v3 != 0x8000000000000000 {
                    v7 = uu_cp::copy_attributes(v4, v5, v19, v20, a5 + 72);
                    if let Some(_) = v7 {
                        v27 = v7 as i128;
                        return struct56 {
                            field_0: v27
                            field_16: *((&v7 as &char + 16) as &i128)
                            field_32: v9
                            field_48: v10
                        };
                    }
                }
                v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v21);
                v15 = v16;
            } while (v15 as i64);
        }
    }
    *((a0 + 48) as &u64) = v14;
    v29 = *(&v12 as &i128);
    *((a0 + 32) as &u128) = v13;
    *((a0 + 16) as void*) = v29;
    *(a0 as &struct8) = v11;
}
