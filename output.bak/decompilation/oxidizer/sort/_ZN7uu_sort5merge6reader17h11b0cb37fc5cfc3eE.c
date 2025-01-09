fn uu_sort::merge::reader(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x238]
    let v1: i8;  // [bp-0x230]
    let v2: i64;  // [sp-0x228]
    let v3: i64;  // [sp-0x220]
    let v4: i8;  // [bp-0x209]
    let v5: i64;  // [sp-0x208]
    let v6: i128;  // [sp-0x1f8]
    let v7: i128;  // [sp-0x1e8]
    let v8: i128;  // [sp-0x1d8]
    let v9: i128;  // [sp-0x1c8]
    let v10: i128;  // [sp-0x1b8]
    let v11: i64;  // [sp-0x1a8], Other Possible Types: struct80, struct16
    let v12: i128;  // [bp-0x1a0]
    let v13: i128;  // [bp-0x190]
    let v14: i128;  // [bp-0x180]
    let v15: i128;  // [bp-0x170]
    let v16: i128;  // [sp-0x160]
    let v17: i128;  // [sp-0x150]
    let v18: i128;  // [sp-0x140]
    let v19: i128;  // [sp-0x128]
    let v20: i128;  // [sp-0x118]
    let v21: i128;  // [sp-0x108]
    let v22: i128;  // [sp-0xf8]
    let v23: i128;  // [sp-0xe8]
    let v24: i128;  // [sp-0xd8]
    let v25: i128;  // [sp-0xc8]
    let v26: i64;  // [sp-0xb8]
    let v27: i1024;  // [sp-0xb0], Other Possible Types: struct128
    let v30: i256;  // ymm0
    let v32: i256;  // ymm1
    let v34: i256;  // ymm2
    let v36: i256;  // ymm3
    let v38: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i256;  // ymm0
    let v43: i128;  // xmm1
    let v44: i256;  // ymm1
    let v45: i128;  // xmm2
    let v46: i256;  // ymm2
    let v47: i128;  // xmm3
    let v48: i256;  // ymm3
    let v49: i64;  // r12
    let v50: i64;  // r12
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm1
    let v58: i128;  // xmm2
    let v59: i128;  // xmm3
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2
    let v64: i128;  // xmm3
    let v65: i64;  // rdx

    v5 = a0;
    v27 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5, a2);
    if *((&v27 as &char + 8) as &i64) == 0x8000000000000000 {
        return 0;
    }
    do {
        v26 = *((&v27 as &char + 120) as &i64);
        v38 = *((&v27 as &char + 104) as &i128);
        v25 = v38;
        v39 = *((&v27 as &char + 88) as &i128);
        v24 = v39;
        v40 = *((&v27 as &char + 72) as &i128);
        v23 = v40;
        v41 = *((&v27 as &char + 8) as &i128);
        v42 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
        v43 = *((&v27 as &char + 24) as &i128);
        v44 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
        v45 = *((&v27 as &char + 40) as &i128);
        v46 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
        v47 = *((&v27 as &char + 56) as &i128);
        v48 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v22 = v47;
        v21 = v45;
        v20 = v43;
        v19 = v41;
        v49 = v27 * 120;
        if *((a1 + v49) as &i32) == 3 {
            v11 = v11;
        } else {
            v50 = v49 + a1;
            v3 = a3;
            v2 = a4;
            v0 = <uu_sort::merge::CompressedTmpMergeInput as uu_sort::merge::MergeInput>::as_read(v50 + 16);
            v11 = uu_sort::chunks::read(v50, &v27, 0, &v4, v50 + 96, v0, v1);
            v51 = v11;
            if v51 {
                return v51;
            }
            v11 = v11;
            if !*((&v11 as &char + 8) as &i8) {
                v52 = *(v50 as &i64);
                *(v50 as &i64) = 3;
                if v11 == 3 {
                    core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                }
                v11 = v52;
                v53 = *((v50 + 104) as &i128);
                v18 = v53;
                v54 = *((v50 + 88) as &i128);
                v17 = v54;
                v55 = *((v50 + 72) as &i128);
                v16 = v55;
                v56 = *((v50 + 8) as &i128);
                v57 = *((v50 + 24) as &i128);
                v58 = *((v50 + 40) as &i128);
                v59 = *((v50 + 56) as &i128);
                v15 = v59;
                v14 = v58;
                v13 = v57;
                v12 = v56;
                v60 = *((&v16 as &char + 8) as &i128);
                v10 = v60;
                v61 = *((&v12 as &char + 8) as &i128);
                v62 = *((&v13 as &char + 8) as &i128);
                v63 = *((&v14 as &char + 8) as &i128);
                v64 = *((&v15 as &char + 8) as &i128);
                v9 = v64;
                v8 = v63;
                v7 = v62;
                v6 = v61;
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
                v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
                v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8;
                v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9;
                v11 = struct80 {
                    field_0: v29 as u128
                    field_16: v31 as u128
                    field_32: v33 as u128
                    field_48: v35 as u128
                    field_64: v29 as u128
                };
                v51 = <uu_sort::merge::CompressedTmpMergeInput as uu_sort::merge::MergeInput>::finished_reading(&v11);
                v11 = v11;
                if v51 {
                    return v51;
                }
            }
        }
        v11 = v11;
        v27 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5, v65);
    } while (*((&v27 as &char + 8) as &i64) != 0x8000000000000000);
}
