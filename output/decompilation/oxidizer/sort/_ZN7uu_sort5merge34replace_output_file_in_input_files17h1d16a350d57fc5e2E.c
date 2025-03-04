fn uu_sort::merge::replace_output_file_in_input_files(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: iNone;  // [sp-0x178]
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [bp-0x158]
    let v3: struct24;  // [sp-0x138], Other Possible Types: char, int, struct36, Result<struct24, struct8>
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: Result<struct24, struct8>;  // [sp-0xf0]
    let v7: iNone;  // [sp-0xd8]
    let v8: i64;  // [sp-0xc8]
    let v9: i64;  // [sp-0xc0]
    let v10: iNone;  // [sp-0xb8]
    let v11: iNone;  // [sp-0xa8]
    let v12: i64;  // [sp-0x98]
    let v13: iNone;  // [sp-0x88]
    let v14: i64;  // [sp-0x78]
    let v15: i64;  // [sp-0x50]
    let v16: i64;  // [sp-0x48]
    let v17: struct16;  // [bp-0x40]
    let v19: i64;  // r12
    let v20: iNone;  // xmm0
    let v21: i64;  // rdx
    let v22: i64;  // rsi
    let v23: i64;  // rax
    let v25: iNone;  // xmm0
    let v26: iNone;  // ymm0
    let v28: i64;  // rax
    let v29: i64;  // rbp
    let v30: iNone;  // xmm0
    let v31: iNone;  // ymm0
    let v33: iNone;  // xmm0
    let v36: i64;  // rdx
    let v37: i64;  // rbx

    v19 = 0x8000000000000000;
    *(&v2 as &i64) = 0x8000000000000000;
    if !a2 {
        return 0;
    }
    v3 = std::fs::canonicalize(a2, a3);
    v1 = v5;
    v20 = v3 as i128;
    v0 = v20;
    v21 = v0 as i64;
    v22 = 9223372036854775810;
    v23 = v21;
    if v21 >= 9223372036854775810 {
        v15 = 9223372036854775810;
        v16 = v21;
        v12 = v1;
        v25 = v0;
        v11 = v25;
        v17 = struct16 {
            field_0: a0
            field_8: a0 + a1 * 24
        };
        v28 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v17);
        if v28 {
            v29 = v28;
            do {
                v6 = std::fs::canonicalize(*((v29 + 8) as &i64), *((v29 + 16) as &i64));
                if v6 as i64 != v19 {
                    v30 = v6 as i128;
                    v31 = ((v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u256;
                    v7 = v30;
                    v8 = *((&v6 as &char + 16) as &i64);
                    if <std::path::PathBuf as core::cmp::PartialEq>::eq((&v7)[8] as i64, *((&v6 as &char + 16) as &i64), (&v11)[8] as i64, v12) as i8 {
                        if v2 != v19 {
                            v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v2);
                            *((v29 + 16) as &unsigned long) = v14;
                            v33 = v13;
                            *(v29 as void*) = v33;
                        } else {
                            v3 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4);
                            if v9 == v19 {
                                goto LABEL_529f81;
                            } else {
                                v9 = v4;
                                v10 = *((&v3.field_4 as &char + 12) as &i128);
                                v5 = v8;
                                v3 = v7;
                                if std::fs::copy(&v3, &v9) {
                                    v3 = 4;
                                    v4 = v36;
LABEL_529f81:
                                    return v37;
                                }
                                v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v9);
                                v19 = 0x8000000000000000;
                            }
                        }
                    }
                }
            } while ((v29 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(&v17), v29));
        }
        v23 = v0 as i64;
        v21 = v16;
        v22 = v15;
    }
}
