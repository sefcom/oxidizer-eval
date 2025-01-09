fn uu_sort::merge::reader(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x1d8]
    let v1: i8;  // [bp-0x1d0]
    let v2: i64;  // [sp-0x1c8]
    let v3: i64;  // [sp-0x1c0]
    let v4: i8;  // [bp-0x1a9]
    let v5: i64;  // [sp-0x1a8]
    let v6: i64;  // [sp-0x198], Other Possible Types: struct32, struct16
    let v7: i128;  // [bp-0x190]
    let v8: i128;  // [sp-0x180]
    let v9: i128;  // [sp-0x170]
    let v10: i128;  // [sp-0x160]
    let v11: i128;  // [sp-0x148]
    let v12: i128;  // [sp-0x138]
    let v13: i128;  // [sp-0x128]
    let v14: i128;  // [sp-0x118]
    let v15: i128;  // [sp-0x108]
    let v16: i128;  // [sp-0xf8]
    let v17: i128;  // [sp-0xe8]
    let v18: i128;  // [sp-0xd8]
    let v19: i128;  // [sp-0xc8]
    let v20: i64;  // [sp-0xb8]
    let v21: i1024;  // [sp-0xb0], Other Possible Types: struct128
    let v24: i256;  // ymm0
    let v26: i256;  // ymm1
    let v27: i256;  // ymm2
    let v28: i256;  // ymm3
    let v30: i128;  // xmm0
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i128;  // xmm0
    let v34: i256;  // ymm0
    let v35: i128;  // xmm1
    let v36: i256;  // ymm1
    let v37: i128;  // xmm2
    let v38: i256;  // ymm2
    let v39: i128;  // xmm3
    let v40: i256;  // ymm3
    let v41: i64;  // rax
    let v42: i64;  // r12
    let v43: i64;  // rax
    let v44: i64;  // rax
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i128;  // xmm2
    let v48: i128;  // xmm3
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i64;  // rdx

    v5 = a0;
    v21 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5, a2);
    if *((&v21 as &char + 8) as &i64) == 0x8000000000000000 {
        return 0;
    }
    do {
        v20 = *((&v21 as &char + 120) as &i64);
        v30 = *((&v21 as &char + 104) as &i128);
        v19 = v30;
        v31 = *((&v21 as &char + 88) as &i128);
        v18 = v31;
        v32 = *((&v21 as &char + 72) as &i128);
        v17 = v32;
        v33 = *((&v21 as &char + 8) as &i128);
        v34 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
        v35 = *((&v21 as &char + 24) as &i128);
        v36 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
        v37 = *((&v21 as &char + 40) as &i128);
        v38 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
        v39 = *((&v21 as &char + 56) as &i128);
        v40 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
        v16 = v39;
        v15 = v37;
        v14 = v35;
        v13 = v33;
        v41 = v21 * 9;
        if *((a1 + v41 * 8) as &i32) == 3 {
            v6 = v6;
        } else {
            v42 = a1 + v41 * 8;
            v3 = a3;
            v2 = a4;
            v0 = <uu_sort::merge::PlainTmpMergeInput as uu_sort::merge::MergeInput>::as_read(v42 + 16);
            v6 = uu_sort::chunks::read(v42, &v21, 0, &v4, v42 + 48, v0, v1);
            v43 = v6;
            if v43 {
                return v43;
            }
            v6 = v6;
            if !*((&v6 as &char + 8) as &i8) {
                v44 = *(v42 as &i64);
                *(v42 as &i64) = 3;
                if v6 == 3 {
                    core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                }
                v6 = v44;
                v45 = *((v42 + 8) as &i128);
                v46 = *((v42 + 24) as &i128);
                v47 = *((v42 + 40) as &i128);
                v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
                v48 = *((v42 + 56) as &i128);
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
                v10 = v48;
                v9 = v47;
                v8 = v46;
                v7 = v45;
                v49 = *((&v7 as &char + 8) as &i128);
                v50 = *((&v8 as &char + 8) as &i128);
                v12 = v50;
                v11 = v49;
                v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
                v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12;
                v6 = struct32 {
                    field_0: v23 as u128
                    field_16: v25 as u128
                };
                <uu_sort::merge::PlainTmpMergeInput as uu_sort::merge::MergeInput>::finished_reading(&v6);
                v6 = v6;
            }
        }
        v6 = v6;
        v21 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5, v51);
    } while (*((&v21 as &char + 8) as &i64) != 0x8000000000000000);
}
