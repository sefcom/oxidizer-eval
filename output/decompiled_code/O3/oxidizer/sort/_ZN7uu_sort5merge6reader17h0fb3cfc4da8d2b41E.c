fn uu_sort::merge::reader(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i8;  // [bp-0x1a0]
    let v1: i64;  // [sp-0x190]
    let v2: i8;  // [bp-0x179]
    let v3: i64;  // [sp-0x178]
    let v4: i64;  // [sp-0x170]
    let v5: i64;  // [sp-0x168]
    let v6: i64;  // [sp-0x160], Other Possible Types: struct16
    let v7: i128;  // [sp-0x148]
    let v8: i128;  // [sp-0x138]
    let v9: i128;  // [sp-0x128]
    let v10: i128;  // [sp-0x118]
    let v11: i128;  // [sp-0x108]
    let v12: i128;  // [sp-0xf8]
    let v13: i128;  // [sp-0xe8]
    let v14: i128;  // [sp-0xd8]
    let v15: i128;  // [sp-0xc8]
    let v16: i64;  // [sp-0xb8]
    let v17: i1024;  // [sp-0xb0], Other Possible Types: struct128
    let v19: i256;  // ymm0
    let v20: i256;  // ymm1
    let v21: i256;  // ymm2
    let v22: i256;  // ymm3
    let v24: i128;  // xmm0
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i128;  // xmm1
    let v30: i256;  // ymm1
    let v31: i128;  // xmm2
    let v32: i256;  // ymm2
    let v33: i128;  // xmm3
    let v34: i64;  // r14
    let v35: i64;  // r14
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v39: i128;  // xmm1
    let v40: i128;  // xmm2

    v4 = a0;
    v17 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    if *((&v17 as &char + 8) as &i64) == 0x8000000000000000 {
        return 0;
    }
    v5 = a4;
    do {
        v16 = *((&v17 as &char + 120) as &i64);
        v24 = *((&v17 as &char + 104) as &i128);
        v15 = v24;
        v25 = *((&v17 as &char + 88) as &i128);
        v14 = v25;
        v26 = *((&v17 as &char + 72) as &i128);
        v13 = v26;
        v27 = *((&v17 as &char + 8) as &i128);
        v28 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
        v29 = *((&v17 as &char + 24) as &i128);
        v30 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
        v31 = *((&v17 as &char + 40) as &i128);
        v32 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
        v33 = *((&v17 as &char + 56) as &i128);
        v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
        v12 = v33;
        v11 = v31;
        v10 = v29;
        v9 = v27;
        v34 = v17 * 56;
        if *((a1 + v34) as &i32) == 3 {
            v6 = v6;
        } else {
            v35 = v34 + a1;
            v1 = a3;
            v6 = uu_sort::chunks::read(v35, &v17, 0, &v2, v35 + 16, v35 + 40, v0, v5);
            v36 = v6;
            if v36 {
                return v36;
            }
            v6 = v6;
            if !*((&v6 as &char + 8) as &i8) {
                v37 = *(v35 as &i64);
                *(v35 as &i64) = 3;
                if v6 == 3 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v6 = v37;
                v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((v35 + 8) as &i128);
                v39 = *((v35 + 24) as &i128);
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                v40 = *((v35 + 40) as &i128);
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
                v8 = v40;
                v7 = v39;
                v6.8 = vvar_162{reg 224};
                v3 = *((&v8 as &char + 8) as &i64);
                <uu_sort::merge::PlainMergeInput<R> as uu_sort::merge::MergeInput>::finished_reading(v8, v3);
                v6 = v6;
            }
        }
        v6 = v6;
        v17 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    } while (*((&v17 as &char + 8) as &i64) != 0x8000000000000000);
}
