fn uu_cp::copy_source(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a7: i64, a8: i64, a9: i64, a10: i64) -> : struct64 {
    let a0: &u64;  // rsi
    let v0: u64;  // [bp-0x158]
    let v1: u128;  // [bp-0x150]
    let v2: struct24;  // [bp-0x150]
    let v3: u128;  // [bp-0x150]
    let v4: u128;  // [bp-0x150]
    let v5: u64;  // [bp-0x140]
    let v6: u32;  // [bp-0x140]
    let v7: u128;  // [bp-0x138]
    let v8: u64;  // [bp-0x130]
    let v9: u64;  // [bp-0x128]
    let v10: u128;  // [bp-0x118]
    let v11: u64;  // [bp-0x110]
    let v12: u64;  // [bp-0x108]
    let v13: Option<struct32>;  // [bp-0xf8]
    let v14: u64;  // [bp-0xf0]
    let v15: u64;  // [bp-0xe8]
    let v16: u64;  // [bp-0xe0]
    let v17: struct24;  // [bp-0xd8], Other Possible Types: u64
    let v18: struct64;  // [bp-0xd8]
    let v19: i8;  // [bp-0xd0]
    let v20: u64;  // [bp-0xc0]
    let v21: u128;  // [bp-0xb8]
    let v22: u128;  // [bp-0xa8]
    let v23: Result<struct64, struct16>;  // [bp-0x98]
    let v24: u128;  // [bp-0x98]
    let v25: u64;  // [bp-0x88]
    let v26: u128;  // [bp-0x78]
    let v27: struct32;  // [bp-0x50]
    let v28: u64;  // rdi
    let v29: u8;  // r11b
    let v30: i64;  // rdi
    let v31: i64;  // rdi
    let v32: i64;  // rax
    let v33: u64;  // rsi
    let v34: u128;  // xmm0
    let v35: u128;  // xmm1
    let v36: u128;  // xmm1

    if std::path::Path::is_dir(a1, a2) {
        uu_cp::copydir::copy_directory(v28, a0, a1, a2, a3, a4, vvar_6, a7, a8, a9, 1);
        return;
    }
    v29 = *((vvar_6 + 68) as &i32);
    uu_cp::construct_dest_path(a1, a2, a3, a4, vvar_5, *((vvar_6 + 66) as &i8), v29, v0);
    v24 = *(&v19 as &i128);
    v25 = v20;
    if v17 == 13 {
        v7 = v24;
        v9 = v25;
        v23 = uu_cp::copy_file(a0, a1, a2, v8, v25, vvar_6, a7, a8, a9, 1);
        v32 = v31;
        if v29 {
            v0 = vvar_6;
            v17 = uu_cp::aligned_ancestors(a1, a2, v8, v9);
            v27 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v17);
            v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27);
            v33 = v13 as i64;
            if let Some(_) = v13 {
                v0 += 48;
                do {
                    vvar_604{stack -336} = struct24 OrderedDict({0: 𝜙@128b [((5259811, None), vvar_539{stack -336}), ((5259752, None), None)], 16: 𝜙@64b [((5259811, None), vvar_540{stack -320}), ((5259752, None), None)]})
                    uucore::features::fs::canonicalize(&v2, v33, v14, 0, 1);
                    v4 = v3;
                    v5 = v6;
                    if v4 as i64 != 0x8000000000000000 {
                        v12 = v6;
                        v10 = v4;
                        v18 = uu_cp::copy_attributes(v11, v6, v15, v16, v0);
                        if v18.field_0 as i32 == 13 {
                            v4 = v3;
                            v5 = v6;
                        } else {
                            v34 = *(&v18.field_0 as &i128);
                            v35 = *((&v18.field_8 as &char + 8) as &i128);
                            *((v31 + 48) as &u128) = v22;
                            *((v31 + 32) as &u128) = v21;
                            *((v31 + 16) as &u128) = v35;
                            *(v31 as &u128) = v34;
                        }
                    }
                } while ((v5 = v5, v1 = v4, v13 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27), v33 = v13 as i64, v13 as i64));
            }
            v32 = v31;
        }
        v36 = *((&v23 as &char + 16) as &i128);
        *((v32 + 48) as &i128) = *((&v23 as &char + 48) as &i128);
        *((v32 + 32) as &u128) = v26;
        *((v32 + 16) as &u128) = v36;
        *(v32 as &i128) = v23 as i128;
    } else {
        *((v30 + 48) as &u128) = v22;
        *((v30 + 32) as &u128) = v21;
        *((v30 + 24) as &u64) = v25;
        *((v30 + 8) as &u128) = v24;
        *(v30 as &u64) = v17;
    }
    return;
}
