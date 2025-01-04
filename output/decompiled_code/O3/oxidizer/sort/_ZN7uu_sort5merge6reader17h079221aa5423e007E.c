fn uu_sort::merge::reader(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i8;  // [bp-0x1a0]
    let v1: i64;  // [sp-0x190]
    let v2: i8;  // [bp-0x179]
    let v3: i64;  // [sp-0x178]
    let v4: i64;  // [sp-0x170]
    let v5: i64;  // [sp-0x168]
    let v6: i64;  // [sp-0x160], Other Possible Types: struct16
    let v7: i128;  // [sp-0x158]
    let v8: i128;  // [sp-0x148]
    let v9: i128;  // [sp-0x138]
    let v10: i128;  // [sp-0x128]
    let v11: i128;  // [sp-0x118]
    let v12: i128;  // [sp-0x108]
    let v13: i128;  // [sp-0xf8]
    let v14: i128;  // [sp-0xe8]
    let v15: i128;  // [sp-0xd8]
    let v16: i128;  // [sp-0xc8]
    let v17: i64;  // [sp-0xb8]
    let v18: i1024;  // [sp-0xb0], Other Possible Types: struct128
    let v20: i256;  // ymm0
    let v21: i256;  // ymm1
    let v22: i256;  // ymm2
    let v23: i256;  // ymm3
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i128;  // xmm1
    let v31: i256;  // ymm1
    let v32: i128;  // xmm2
    let v33: i256;  // ymm2
    let v34: i128;  // xmm3
    let v35: i64;  // r14
    let v36: i64;  // r14
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i128;  // xmm2
    let v43: i64;  // rdx

    v4 = a0;
    v18 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4, a2);
    if *((&v18 as &char + 8) as &i64) == 0x8000000000000000 {
        return 0;
    }
    v5 = a4;
    do {
        v17 = *((&v18 as &char + 120) as &i64);
        v25 = *((&v18 as &char + 104) as &i128);
        v16 = v25;
        v26 = *((&v18 as &char + 88) as &i128);
        v15 = v26;
        v27 = *((&v18 as &char + 72) as &i128);
        v14 = v27;
        v28 = *((&v18 as &char + 8) as &i128);
        v29 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
        v30 = *((&v18 as &char + 24) as &i128);
        v31 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
        v32 = *((&v18 as &char + 40) as &i128);
        v33 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
        v34 = *((&v18 as &char + 56) as &i128);
        v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
        v13 = v34;
        v12 = v32;
        v11 = v30;
        v10 = v28;
        v35 = v18 * 56;
        if *((a1 + v35) as &i32) == 3 {
            v6 = v6;
        } else {
            v36 = v35 + a1;
            v1 = a3;
            v6 = uu_sort::chunks::read(v36, &v18, 0, &v2, v36 + 16, v36 + 40, v0, v5);
            v37 = v6;
            if v37 {
                return v37;
            }
            v6 = v6;
            if !*((&v6 as &char + 8) as &i8) {
                v38 = *(v36 as &i64);
                *(v36 as &i64) = 3;
                if v6 == 3 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v6 = v38;
                v39 = *((v36 + 8) as &i128);
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                v40 = *((v36 + 24) as &i128);
                v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
                v41 = *((v36 + 40) as &i128);
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
                v9 = v41;
                v8 = v40;
                v7 = v39;
                v3 = *((&v9 as &char + 8) as &i64);
                <uu_sort::merge::PlainMergeInput<R> as uu_sort::merge::MergeInput>::finished_reading(v9, v3);
                v6 = v6;
            }
        }
        v6 = v6;
        v18 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4, v43);
    } while (*((&v18 as &char + 8) as &i64) != 0x8000000000000000);
}
