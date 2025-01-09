fn uu_sort::merge::replace_output_file_in_input_files(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i128;  // [sp-0x178]
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [bp-0x158]
    let v3: i64;  // [sp-0x148]
    let v4: i192;  // [sp-0x138], Other Possible Types: struct24, struct36, Result<struct24, struct8>, struct1
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: Result<struct24, struct8>;  // [sp-0xf0], Other Possible Types: i200
    let v8: i128;  // [sp-0xd8]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc0]
    let v11: i128;  // [sp-0xb8]
    let v12: i128;  // [sp-0xa8]
    let v13: i64;  // [sp-0x98]
    let v14: i128;  // [sp-0x88]
    let v15: i64;  // [sp-0x78]
    let v16: i128;  // [sp-0x68]
    let v17: i64;  // [sp-0x58]
    let v20: struct16;  // [bp-0x40]
    let v22: i64;  // r12
    let v23: i128;  // xmm0
    let v24: i64;  // rdx
    let v25: i64;  // rsi
    let v26: i64;  // rdx
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i64;  // rax
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0
    let v35: i128;  // xmm0
    let v36: i128;  // xmm0
    let v37: i128;  // xmm0
    let v38: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i64;  // rdx

    v22 = 0x8000000000000000;
    v2 = 0x8000000000000000;
    if !a2 {
        return 0;
    }
    v4 = std::fs::canonicalize(a2, a3);
    v1 = v6;
    v23 = v4;
    v0 = v23;
    v24 = v0;
    v25 = 9223372036854775810;
    if v24 >= 9223372036854775810 {
        v25 = 9223372036854775810;
        v26 = v24;
        v13 = v1;
        v27 = v0;
        v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
        v12 = v27;
        v20 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 24
        };
        v30 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v20);
        if v30 {
            do {
                v7 = std::fs::canonicalize(*((v30 + 8) as &i64), *((v30 + 16) as &i64));
                if v7 == v22 {
                    goto LABEL_0x529ce0;
                }
                v31 = v7;
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
                v8 = v31;
                v9 = *((&v7 as &char + 16) as &i64);
                if <std::path::PathBuf as core::cmp::PartialEq>::eq(*((&v8 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64), *((&v12 as &char + 8) as &i64), v13) as i8 {
                    if v2 != v22 {
                        v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v2);
                        v15 = v6;
                        v32 = v4;
                        v14 = v32;
                        *((v30 + 16) as &i64) = v15;
                        v35 = v14;
                        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
                        *(v30 as &i128) = v35;
                    } else {
                        v4 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4);
                        if v10 == v22 {
                            return v6;
                        }
                        v33 = *((&v4 as &char + 16) as &i128);
                        v10 = v5;
                        v11 = v33;
                        v6 = v9;
                        v34 = v8;
                        v4 = v34;
                        if std::fs::copy(&v4, &v10) {
                            v4 = struct1 {
                                field_0: 4
                            };
                            v5 = v40;
                            v6 = alloc::boxed::Box<T>::new(&v4);
                            return v6;
                        }
                        v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v10);
                        v17 = v6;
                        v36 = v4;
                        v16 = v36;
                        *((v30 + 16) as &i64) = v17;
                        v37 = v16;
                        *(v30 as &i128) = v37;
                        v6 = *((&v11 as &char + 8) as &i64);
                        v38 = v10;
                        v4 = v38;
                        v3 = v6;
                        v39 = v4;
                        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                        v2 = v39;
                        v22 = 0x8000000000000000;
                        continue;
                    }
                }
            } while ((v30 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v20), v30));
        }
        v24 = v0;
    }
}
