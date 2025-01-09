fn uu_sort::merge::reader(a0: u32, a1: &u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x1a0]
    let v1: i64;  // [sp-0x198]
    let v2: i64;  // [sp-0x190]
    let v3: i8;  // [bp-0x179]
    let v4: i64;  // [sp-0x178]
    let v5: i64;  // [sp-0x170]
    let v6: i64;  // [sp-0x168]
    let v7: i128;  // [sp-0x160], Other Possible Types: struct16
    let v8: i128;  // [sp-0x158]
    let v9: i128;  // [sp-0x148]
    let v10: i128;  // [sp-0x138]
    let v11: i128;  // [sp-0x128]
    let v12: i128;  // [sp-0x118]
    let v13: i128;  // [sp-0x108]
    let v14: i128;  // [sp-0xf8]
    let v15: i128;  // [sp-0xe8]
    let v16: i128;  // [sp-0xd8]
    let v17: i128;  // [sp-0xc8]
    let v18: i64;  // [sp-0xb8]
    let v19: i1024;  // [sp-0xb0], Other Possible Types: struct128
    let v21: i256;  // ymm0
    let v22: i256;  // ymm1
    let v23: i256;  // ymm2
    let v24: i256;  // ymm3
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm1
    let v32: i256;  // ymm1
    let v33: i128;  // xmm2
    let v34: i256;  // ymm2
    let v35: i128;  // xmm3
    let v36: i64;  // r14
    let v37: i64;  // r14
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v42: i128;  // xmm2
    let v43: i64;  // rdx

    v5 = a0;
    v19 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5, a2);
    if *((&v19 as &char + 8) as &i64) == 0x8000000000000000 {
        return 0;
    }
    v6 = a4;
    do {
        v18 = *((&v19 as &char + 120) as &i64);
        v26 = *((&v19 as &char + 104) as &i128);
        v17 = v26;
        v27 = *((&v19 as &char + 88) as &i128);
        v16 = v27;
        v28 = *((&v19 as &char + 72) as &i128);
        v15 = v28;
        v29 = *((&v19 as &char + 8) as &i128);
        v30 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
        v31 = *((&v19 as &char + 24) as &i128);
        v32 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
        v33 = *((&v19 as &char + 40) as &i128);
        v34 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
        v35 = *((&v19 as &char + 56) as &i128);
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
        v14 = v35;
        v13 = v33;
        v12 = v31;
        v11 = v29;
        v36 = v19 * 56;
        if *((a1 + v36) as &i32) == 3 {
            v7 = v7;
        } else {
            v37 = v36 + a1;
            v2 = a3;
            v1 = v6;
            v7 = uu_sort::chunks::read(v37, &v19, 0, &v3, v37 + 16, v37 + 40, v0);
            v38 = v7;
            if v38 {
                return v38;
            }
            v7 = v7;
            if !*((&v7 as &char + 8) as &i8) {
                v39 = *(v37 as &i64);
                *(v37 as &i64) = 3;
                if v7 == 3 {
                    core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                }
                v7 = v39;
                v40 = *((v37 + 8) as &i128);
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
                v41 = *((v37 + 24) as &i128);
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
                v42 = *((v37 + 40) as &i128);
                v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
                v10 = v42;
                v9 = v41;
                v8 = v40;
                v4 = *((&v10 as &char + 8) as &i64);
                <uu_sort::merge::PlainMergeInput<R> as uu_sort::merge::MergeInput>::finished_reading();
                v7 = v7;
            }
        }
        v7 = v7;
        v19 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5, v43);
    } while (*((&v19 as &char + 8) as &i64) != 0x8000000000000000);
}
