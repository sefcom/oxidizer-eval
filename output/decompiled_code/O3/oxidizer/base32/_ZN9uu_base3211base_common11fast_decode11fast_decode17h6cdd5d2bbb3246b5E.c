fn uu_base32::base_common::fast_decode::fast_decode() -> u32 {
    let v0: i64;  // [sp-0x1f8], Other Possible Types: Enum
    let v1: i64;  // [sp-0x1f0]
    let v2: i64;  // [sp-0x1e8]
    let v3: struct16;  // [sp-0x1e0], Other Possible Types: i64
    let v4: i64;  // [sp-0x1d8]
    let v5: i64;  // [sp-0x1d0]
    let v6: i64;  // [sp-0x1c8]
    let v7: i64;  // [sp-0x1c0]
    let v8: i64;  // [sp-0x1b8]
    let v9: struct8;  // [bp-0x1b0]
    let v10: i64;  // [sp-0x1a8]
    let v11: i64;  // [sp-0x1a0]
    let v12: i64;  // [sp-0x198]
    let v13: i64;  // [sp-0x180]
    let v14: Enum;  // [sp-0x178], Other Possible Types: i128
    let v15: i8;  // [bp-0x168]
    let v16: i64;  // [sp-0x158]
    let v17: i64;  // [sp-0x150]
    let v18: i112;  // [sp-0x130], Other Possible Types: struct14
    let v20: i64;  // rsi
    let v21: i64;  // rcx
    let v23: i64;  // r12
    let v24: i64;  // r12
    let v25: i64;  // cc_ndep
    let v26: i64;  // rdx
    let v27: i32;  // r8d
    let v29: i64;  // rdi
    let v30: i64;  // rbp
    let v31: i64;  // r14
    let v33: i64;  // rax
    let v35: i64;  // rbp
    let v36: i64;  // rbx
    let v37: i64;  // rcx
    let v38: i64;  // r12
    let v39: i64;  // rbx
    let v40: i64;  // rax
    let v41: i64;  // rax

    v13 = v20;
    v23 = *((v21 + 56) as &i64)();
    v24 = v23 * 0x400;
    if amd64g_calculate_condition(4, 32, v23 << 10, v23 << 9, v25) as char {
        core::panicking::panic(); /* do not return */
    }
    v18 = uu_base32::base_common::fast_decode::alphabet_to_table(*((v21 + 24) as &i64)(), v26, v27);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(0x8000, 1);
    v6 = *((&v14 as &char + 8) as &i64);
    v7 = v15;
    v8 = 0x8000;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9 = struct8 {
        field_16: 0
    };
    v10 = 1;
    v11 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v30 = *((*((v29 + 8) as &i64) + 24) as &i64);
    v12 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/base32/src/base_common.rs";
    v17 = *(v29 as &i64);
    v16 = v30;
    loop {
        if v30() {
            goto *((4269508 + (vvar_230{reg 32} & 3) * 4) as &i32) + 4269508;
        }
        if !v26 {
            if !(!*((v21 + 32) as &i64)()) {
                goto LABEL_444bcb;
            }
            v41 = uu_base32::base_common::fast_decode::write_to_output(&v9, &v13, &g_4ff138);
            if v41 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
            } else {
                break;
            }
            goto LABEL_444bcb;
        } else {
            if v8 < v26 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            v31 = v7;
            loop {
                v33 = 0;
                if v26 == v33 {
                    break;
                }
                if !*((&v18 as &u8 + *((v31 + v33) as &i8)) as &i8) {
                    v5 = 0;
                    v35 = 0;
                    v36 = 0;
                    do {
                        v38 = *((v31 + v35) as &i8);
                        if *((&v18 as &u8 + v38) as &i8) {
                            if v36 == v3 {
                                v3 = alloc::raw_vec::RawVec<T,A>::grow_one();
                            }
                            *((v4 + v36) as &i8) = v38;
                            v36 += 1;
                            v5 = v36;
                        }
                    } while ((v35 += 1, v26 != v35));
                    v31 = v4;
                    v24 = v24;
                    v30 = v16;
                    v37 = v24 - v2;
                    if v37 <= v36 {
                        goto LABEL_444af5;
                    }
                    goto LABEL_444aa0;
                }
            }
            v36 = v26;
            v37 = v24 - v2;
            if v37 > v26 {
LABEL_444aa0:
                v0 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v31, v36 + v31);
                if v2 >= v24 {
                    v12 = "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/base32/src/base_common.rs";
                    core::panicking::panic(); /* do not return */
                }
                goto LABEL_4449e0;
            }
LABEL_444af5:
            if !(!uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(v26, v21, v24, v37, v31, v39, &v9, &v0)) {
                goto LABEL_444bcb;
            }
            if v2 >= v24 {
                core::panicking::panic(); /* do not return */
            }
            v40 = uu_base32::base_common::fast_decode::write_to_output(&v9, &v13, &g_4ff138);
            if !v40 {
LABEL_4449e0:
            } else {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v40);
LABEL_444bcb:
                break;
            }
        }
    }
    return;
}
