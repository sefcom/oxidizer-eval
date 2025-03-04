fn uu_cp::copy_source(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u8, a7: void*, a8: u32, a9: u32, a10: u32) -> u64 {
    let v0: u8;  // [bp-0x168]
    let v1: u64;  // [sp-0x160]
    let v2: &u64;  // [sp-0x158], Other Possible Types: &struct_0
    let v3: struct16;  // [sp-0x150]
    let v4: u8;  // [bp-0x140]
    let v5: u128;  // [sp-0x138]
    let v6: u64;  // [sp-0x128]
    let v7: u128;  // [sp-0x118]
    let v8: u64;  // [sp-0x108]
    let v9: Option<struct32>;  // [sp-0xf8], Other Possible Types: u256
    let v10: Option<Result<struct64, struct24>>;  // [sp-0xd8], Other Possible Types: struct64
    let v11: struct16;  // [sp-0x98], Other Possible Types: u128
    let v12: u64;  // [sp-0x88]
    let v13: i8;  // [bp-0x78]
    let v14: i8;  // [bp-0x68]
    let v15: struct32;  // [sp-0x50]
    let v16: u64;  // rax
    let v17: u64;  // rax
    let v18: u128;  // xmm0
    let v19: u128;  // xmm0
    let v20: u256;  // ymm0
    let v21: u256;  // ymm0
    let v22: u128;  // xmm0
    let v23: &struct_1;  // rax
    let v24: u64;  // rsi
    let v27: u128;  // xmm0
    let v28: u128;  // xmm1
    let v29: u128;  // xmm2

    if std::path::Path::is_dir(a2, a3) as i8 {
        v16 = uu_cp::copydir::copy_directory(a0, a1, a2, a3, a4, a5, a7, a8, a9, a10, v0);
        return v16;
    }
    v1 = a7->field_44;
    v10 = uu_cp::construct_dest_path(a2, a3, a4, a5, a6, v0, v1);
    v17 = v10 as i64;
    v18 = *((&v10 as &char + 8) as &i128);
    v11 = v18;
    v12 = *((&v10 as &char + 24) as &i64);
    if v17 != 13 {
        v22 = *((&v10 as &char + 32) as &i128);
        a0->field_20 = *((&v10 as &char + 48) as &i128);
        a0->field_10 = v22;
        *((&a0->field_8 as &char + 8) as &u64) = v12;
        (&a0->field_0)[1] = v11;
        a0->field_0 = v17;
    } else {
        v19 = v11;
        v21 = (v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
        v5 = v19;
        v6 = v12;
        v11 = uu_cp::copy_file(a1, a2, a3, *((&v5 as &char + 8) as &i64), v12, a7);
        v23 = a0;
        if v1 {
            v2 = a7;
            uu_cp::aligned_ancestors(&v10, a2, a3, *((&v5 as &char + 8) as &i64), v6);
            v15 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
            v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v15);
            v24 = v9 as i64;
            match v9 {
                Some(_) => {
                    v2 += 48;
                    do {
                        v3 = uucore::features::fs::canonicalize(v24, *((&v9 as &char + 8) as &i64), 0, 1);
                        if v3.field_0 != 0x8000000000000000 {
                            v8 = *(&v4 as &i64);
                            v27 = *(&v3.field_0 as &i128);
                            v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256;
                            v7 = v27;
                            v10 = uu_cp::copy_attributes(*((&v7 as &char + 8) as &i64), *(&v4 as &i64), *((&v9 as &char + 16) as &i64), *((&v9 as &char + 24) as &i64), v2);
                            if v10.field_0 as i32 != 13 {
                                return v16;
                            }
                        }
                    } while ((v9 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v15), v24 = v9 as i64, v24));
                },
                None => {
                    v23 = a0;
                },
            }
        }
        v28 = *(&v12 as &i128);
        v29 = *(&v13 as &i128);
        v23->field_20 = *(&v14 as &i128);
        v23->field_10 = v29;
        v23->field_8 = v28;
        *(&v23->field_0 as &struct16) = v11;
    }
    return v16;
}
