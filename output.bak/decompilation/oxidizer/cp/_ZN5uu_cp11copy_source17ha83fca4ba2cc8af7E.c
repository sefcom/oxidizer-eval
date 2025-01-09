fn uu_cp::copy_source(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x188]
    let v1: i64;  // [sp-0x180]
    let v2: i64;  // [sp-0x178]
    let v3: i64;  // [sp-0x170]
    let v4: i64;  // [sp-0x168]
    let v5: i64;  // [sp-0x160]
    let v6: i64;  // [sp-0x158]
    let v7: Result<struct24, struct8>;  // [sp-0x150], Other Possible Types: i200
    let v8: i128;  // [sp-0x138]
    let v9: i64;  // [sp-0x128]
    let v10: i128;  // [sp-0x118]
    let v11: i64;  // [sp-0x108]
    let v12: i256;  // [sp-0xf8], Other Possible Types: Option<struct32>
    let v13: i192;  // [sp-0xd8], Other Possible Types: struct64, Option<Result<struct64, struct24>>, struct24
    let v14: struct16;  // [sp-0x98], Other Possible Types: i128
    let v15: i64;  // [sp-0x88]
    let v16: i8;  // [bp-0x78]
    let v17: i8;  // [bp-0x68]
    let v18: struct32;  // [sp-0x50], Other Possible Types: i256
    let v19: i64;  // [bp+0x8]
    let v20: i8;  // [bp+0x10]
    let v21: i8;  // [bp+0x18]
    let v22: i8;  // [bp+0x20]
    let v23: i8;  // [bp+0x28]
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rax
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm0
    let v32: i64;  // rsi
    let v35: i128;  // xmm0
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm2
    let v39: i128;  // xmm1
    let v40: i128;  // xmm2

    if std::path::Path::is_dir(a2, a3) as i8 {
        v4 = 1;
        v3 = v23;
        v2 = v22;
        v1 = v21;
        v24 = uu_cp::copydir::copy_directory(a0, a1, a2, a3, a4, a5);
        return v24;
    }
    v25 = v20;
    v5 = *((v25 + 68) as &i32);
    v4 = *((v25 + 66) as &i8);
    v13 = uu_cp::construct_dest_path(a2, a3, a4, a5, v19);
    v26 = v13;
    v27 = *((&v13 as &char + 8) as &i128);
    v14 = v27;
    v15 = *((&v13 as &char + 24) as &i64);
    if v26 != 13 {
        v31 = *((&v13 as &char + 32) as &i128);
        *((a0 + 48) as &i128) = *((&v13 as &char + 48) as &i128);
        *((a0 + 32) as &i128) = v31;
        *((a0 + 24) as &i64) = v15;
        *((a0 + 8) as &i128) = v14;
        *(a0 as &i64) = v26;
    } else {
        v28 = v14;
        v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
        v8 = v28;
        v9 = v15;
        v4 = 1;
        v3 = v23;
        v2 = v22;
        v1 = v21;
        v0 = v20;
        v14 = uu_cp::copy_file(a1, a2, a3, *((&v8 as &char + 8) as &i64), v15, v0);
        if v5 {
            v6 = v0;
            v13 = uu_cp::aligned_ancestors(a2, a3, *((&v8 as &char + 8) as &i64), v9);
            v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
            v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18);
            v32 = v12;
            if v32 {
                v6 += 48;
                do {
                    v7 = uucore::features::fs::canonicalize(v32, *((&v12 as &char + 8) as &i64), 0, 1);
                    if v7 == 0x8000000000000000 {
                        goto LABEL_0x504210;
                    }
                    v11 = *((&v7 as &char + 16) as &i64);
                    v35 = v7;
                    v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
                    v10 = v35;
                    v13 = uu_cp::copy_attributes(*((&v10 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64), *((&v12 as &char + 16) as &i64), *((&v12 as &char + 24) as &i64), v6);
                    if v13 != 13 {
                        v36 = v13;
                        v37 = *((&v13 as &char + 16) as &i128);
                        v38 = *((&v13 as &char + 32) as &i128);
                        *((a0 + 48) as &i128) = *((&v13 as &char + 48) as &i128);
                        *((a0 + 32) as &i128) = v38;
                        *((a0 + 16) as &i128) = v37;
                        *(a0 as &i128) = v36;
                        goto LABEL_50433a;
                    }
                } while ((v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18), v32 = v12, v32));
            }
        }
        v39 = v15;
        v40 = v16;
        *((a0 + 48) as &i8) = v17;
        *((a0 + 32) as &i128) = v40;
        *((a0 + 16) as &i128) = v39;
        *(a0 as &struct16) = v14;
LABEL_50433a:
    }
    return v24;
}
