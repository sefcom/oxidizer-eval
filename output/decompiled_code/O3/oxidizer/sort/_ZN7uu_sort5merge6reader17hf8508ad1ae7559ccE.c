fn uu_sort::merge::reader(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32) -> u64 {
    let v0: i64;  // [sp-0x1d8]
    let v1: i8;  // [bp-0x1d0]
    let v2: i64;  // [sp-0x1c0]
    let v3: i8;  // [bp-0x1a9]
    let v4: i64;  // [sp-0x1a8]
    let v5: i64;  // [sp-0x198], Other Possible Types: struct32, struct16
    let v6: i128;  // [bp-0x190]
    let v7: i128;  // [sp-0x180]
    let v8: i128;  // [sp-0x170]
    let v9: i128;  // [sp-0x160]
    let v10: i128;  // [sp-0x148]
    let v11: i128;  // [sp-0x138]
    let v12: i128;  // [sp-0x128]
    let v13: i128;  // [sp-0x118]
    let v14: i128;  // [sp-0x108]
    let v15: i128;  // [sp-0xf8]
    let v16: i128;  // [sp-0xe8]
    let v17: i128;  // [sp-0xd8]
    let v18: i128;  // [sp-0xc8]
    let v19: i64;  // [sp-0xb8]
    let v20: i1024;  // [sp-0xb0], Other Possible Types: struct128
    let v23: i256;  // ymm0
    let v25: i256;  // ymm1
    let v26: i256;  // ymm2
    let v27: i256;  // ymm3
    let v29: i128;  // xmm0
    let v30: i128;  // xmm0
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i128;  // xmm1
    let v35: i256;  // ymm1
    let v36: i128;  // xmm2
    let v37: i256;  // ymm2
    let v38: i128;  // xmm3
    let v39: i256;  // ymm3
    let v40: i64;  // rax
    let v41: i64;  // r12
    let v42: i64;  // rax
    let v43: i64;  // rax
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm2
    let v47: i128;  // xmm3
    let v48: i128;  // xmm0
    let v49: i128;  // xmm1
    let v50: i64;  // rsi
    let v51: i64;  // rdx

    v4 = a0;
    v20 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    if *((&v20 as &char + 8) as &i64) == 0x8000000000000000 {
        return 0;
    }
    do {
        v19 = *((&v20 as &char + 120) as &i64);
        v29 = *((&v20 as &char + 104) as &i128);
        v18 = v29;
        v30 = *((&v20 as &char + 88) as &i128);
        v17 = v30;
        v31 = *((&v20 as &char + 72) as &i128);
        v16 = v31;
        v32 = *((&v20 as &char + 8) as &i128);
        v33 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
        v34 = *((&v20 as &char + 24) as &i128);
        v35 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
        v36 = *((&v20 as &char + 40) as &i128);
        v37 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36;
        v38 = *((&v20 as &char + 56) as &i128);
        v39 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
        v15 = v38;
        v14 = v36;
        v13 = v34;
        v12 = v32;
        v40 = v20 * 9;
        if *((a1 + (v40 << 3)) as &i32) == 3 {
            v5 = v5;
        } else {
            v41 = a1 + v40 * 8;
            v2 = a3;
            v0 = <uu_sort::merge::PlainTmpMergeInput as uu_sort::merge::MergeInput>::as_read(v41 + 16);
            v5 = uu_sort::chunks::read(v41, &v20, 0, &v3, v41 + 48, v0, v1, a4);
            v42 = v5;
            if v42 {
                return v42;
            }
            v5 = v5;
            if !*((&v5 as &char + 8) as &i8) {
                v43 = *(v41 as &i64);
                *(v41 as &i64) = 3;
                if v5 == 3 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v5 = v43;
                v44 = *((v41 + 8) as &i128);
                v45 = *((v41 + 24) as &i128);
                v46 = *((v41 + 40) as &i128);
                v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v47 = *((v41 + 56) as &i128);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
                v9 = v47;
                v8 = v46;
                v7 = v45;
                v6 = v44;
                v48 = *((&v6 as &char + 8) as &i128);
                v49 = *((&v7 as &char + 8) as &i128);
                v11 = v49;
                v10 = v48;
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10;
                v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
                v5 = struct32 {
                    field_0: v22 as u128
                    field_16: v24 as u128
                };
                <uu_sort::merge::PlainTmpMergeInput as uu_sort::merge::MergeInput>::finished_reading(&v5, v50, v51);
                v5 = v5;
            }
        }
        v5 = v5;
        v20 = <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    } while (*((&v20 as &char + 8) as &i64) != 0x8000000000000000);
}
