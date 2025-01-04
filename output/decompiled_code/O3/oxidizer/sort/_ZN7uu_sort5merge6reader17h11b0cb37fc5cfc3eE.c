fn uu_sort::merge::reader(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i64;  // [sp-0x238]
    let v1: i8;  // [bp-0x230]
    let v2: i64;  // [sp-0x220]
    let v3: i8;  // [bp-0x209]
    let v4: i64;  // [sp-0x208]
    let v5: i128;  // [sp-0x1f8]
    let v6: i128;  // [sp-0x1e8]
    let v7: i128;  // [sp-0x1d8]
    let v8: i128;  // [sp-0x1c8]
    let v9: i128;  // [sp-0x1b8]
    let v10: i64;  // [sp-0x1a8], Other Possible Types: struct16
    let v11: i128;  // [bp-0x1a0]
    let v12: i128;  // [bp-0x198]
    let v13: i128;  // [bp-0x190]
    let v14: i128;  // [bp-0x188]
    let v15: i128;  // [bp-0x180]
    let v16: i128;  // [bp-0x178]
    let v17: i128;  // [bp-0x170]
    let v18: i128;  // [bp-0x168]
    let v19: i128;  // [sp-0x160]
    let v20: i128;  // [sp-0x150]
    let v21: i128;  // [sp-0x140]
    let v22: i128;  // [sp-0x128]
    let v23: i128;  // [sp-0x118]
    let v24: i128;  // [sp-0x108]
    let v25: i128;  // [sp-0xf8]
    let v26: i128;  // [sp-0xe8]
    let v27: i128;  // [sp-0xd8]
    let v28: i128;  // [sp-0xc8]
    let v29: i64;  // [sp-0xb8]
    let v30: i1024;  // [sp-0xb0], Other Possible Types: struct128
    let v32: i256;  // ymm0
    let v33: i256;  // ymm1
    let v34: i256;  // ymm2
    let v35: i256;  // ymm3
    let v37: i128;  // xmm0
    let v38: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i256;  // ymm0
    let v42: i128;  // xmm1
    let v43: i256;  // ymm1
    let v44: i128;  // xmm2
    let v45: i256;  // ymm2
    let v46: i128;  // xmm3
    let v47: i256;  // ymm3
    let v48: i64;  // r12
    let v49: i64;  // r12
    let v50: i64;  // rax
    let v51: i64;  // rax
    let v52: i128;  // xmm0
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm1
    let v57: i128;  // xmm2
    let v58: i128;  // xmm3
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm1
    let v62: i128;  // xmm2
    let v63: i128;  // xmm3
    let v64: i128;  // xmm0
    let v65: i128;  // xmm0
    let v66: i128;  // xmm1
    let v67: i128;  // xmm2
    let v68: i128;  // xmm3
    let v69: i64;  // rdx

    v4 = a0;
    v30 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4, a2);
    if *((&v30 as &char + 8) as &i64) == 0x8000000000000000 {
        return 0;
    }
    do {
        v29 = *((&v30 as &char + 120) as &i64);
        v37 = *((&v30 as &char + 104) as &i128);
        v28 = v37;
        v38 = *((&v30 as &char + 88) as &i128);
        v27 = v38;
        v39 = *((&v30 as &char + 72) as &i128);
        v26 = v39;
        v40 = *((&v30 as &char + 8) as &i128);
        v41 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
        v42 = *((&v30 as &char + 24) as &i128);
        v43 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
        v44 = *((&v30 as &char + 40) as &i128);
        v45 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
        v46 = *((&v30 as &char + 56) as &i128);
        v47 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
        v25 = v46;
        v24 = v44;
        v23 = v42;
        v22 = v40;
        v48 = v30 * 120;
        if *((a1 + v48) as &i32) == 3 {
            v10 = v10;
        } else {
            v49 = v48 + a1;
            v2 = a3;
            v0 = <uu_sort::merge::CompressedTmpMergeInput as uu_sort::merge::MergeInput>::as_read(v49 + 16);
            v10 = uu_sort::chunks::read(v49, &v30, 0, &v3, v49 + 96, v0, v1, a4);
            v50 = v10;
            if v50 {
                return v50;
            }
            v10 = v10;
            if !*((&v10 as &char + 8) as &i8) {
                v51 = *(v49 as &i64);
                *(v49 as &i64) = 3;
                if v10 == 3 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v10 = v51;
                v52 = *((v49 + 104) as &i128);
                v21 = v52;
                v53 = *((v49 + 88) as &i128);
                v20 = v53;
                v54 = *((v49 + 72) as &i128);
                v19 = v54;
                v55 = *((v49 + 8) as &i128);
                v56 = *((v49 + 24) as &i128);
                v57 = *((v49 + 40) as &i128);
                v58 = *((v49 + 56) as &i128);
                v17 = v58;
                v15 = v57;
                v13 = v56;
                v11 = v55;
                v59 = *((&v19 as &char + 8) as &i128);
                v9 = v59;
                v60 = *((&v11 as &char + 8) as &i128);
                v61 = *((&v13 as &char + 8) as &i128);
                v62 = *((&v15 as &char + 8) as &i128);
                v63 = *((&v17 as &char + 8) as &i128);
                v8 = v63;
                v7 = v62;
                v6 = v61;
                v5 = v60;
                v64 = v9;
                v18 = v64;
                v65 = v5;
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
                v66 = v6;
                v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
                v67 = v7;
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
                v68 = v8;
                v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
                v16 = v68;
                v14 = v67;
                v12 = v66;
                v10 = v65;
                v50 = <uu_sort::merge::CompressedTmpMergeInput as uu_sort::merge::MergeInput>::finished_reading(&v10);
                v10 = v10;
                if v50 {
                    return v50;
                }
            }
        }
        v10 = v10;
        v30 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4, v69);
    } while (*((&v30 as &char + 8) as &i64) != 0x8000000000000000);
}
