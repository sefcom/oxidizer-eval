fn uu_sort::ext_sort::read_write_loop(a0: &Option<struct16>, a1: u32, a2: &u64, a3: u32, a4: u64, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x248]
    let v1: i64;  // [sp-0x240]
    let v2: i64;  // [sp-0x238]
    let v3: i64;  // [sp-0x230]
    let v4: i64;  // [sp-0x218]
    let v5: i64;  // [sp-0x208]
    let v6: i64;  // [sp-0x200]
    let v7: i64;  // [sp-0x1f8]
    let v8: i64;  // [bp-0x1f0]
    let v9: i64;  // [sp-0x1e0]
    let v10: i64;  // [sp-0x1d8]
    let v11: i128;  // [sp-0x1d0]
    let v12: i128;  // [sp-0x1c0], Other Possible Types: struct16
    let v13: i64;  // [sp-0x1b8]
    let v14: i64;  // [sp-0x1b0]
    let v15: struct8;  // [bp-0x1a8]
    let v16: i64;  // [sp-0x1a0]
    let v17: i64;  // [sp-0x198]
    let v18: i128;  // [sp-0x188], Other Possible Types: struct16
    let v19: i64;  // [sp-0x178], Other Possible Types: Result<struct48, struct24>, struct8, struct120
    let v20: i8;  // [bp-0x170]
    let v21: i8;  // [bp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0x148]
    let v24: i128;  // [sp-0x138]
    let v25: i128;  // [sp-0x128]
    let v26: i128;  // [sp-0x118]
    let v27: i64;  // [sp-0x108]
    let v28: i960;  // [sp-0xf8], Other Possible Types: struct36, struct120, struct16
    let v29: i256;  // [bp-0x80]
    let v30: i64;  // [sp-0x78]
    let v31: i64;  // [sp-0x60]
    let v32: i64;  // [sp-0x58]
    let v33: i64;  // [sp-0x50]
    let v34: i128;  // [sp-0x48]
    let v35: i64;  // [sp-0x38]
    let v36: i64;  // [bp+0x8]
    let v37: i8;  // [bp+0x10]
    let v38: i128;  // xmm0
    let v39: i64;  // rdx
    let v40: i64;  // rcx
    let v41: i64;  // rax
    let v42: i64;  // 4096
    let v45: i32;  // ebx
    let v46: i64;  // r13
    let v47: i128;  // xmm0
    let v48: i256;  // ymm0
    let v49: i256;  // ymm0
    let v50: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rcx
    let v54: i64;  // r12
    let v55: i64;  // rsi
    let v56: i64;  // rdx
    let v57: i256;  // ymm1
    let v58: i256;  // ymm2
    let v59: i256;  // ymm3
    let v60: i64;  // rax
    let v61: i64;  // rdx
    let v62: i128;  // xmm0
    let v63: i64;  // rdx
    let v64: i64;  // rax
    let v65: i64;  // rcx
    let v66: i128;  // xmm0
    let v67: i128;  // xmm0
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i128;  // xmm1
    let v72: i128;  // xmm2
    let v73: i128;  // xmm3
    let v74: i64;  // r8
    let v75: i64;  // rax
    let v76: i64;  // rsi
    let v77: i64;  // rdx
    let v78: i64;  // rbx
    let v79: i64;  // rcx
    let v80: i64;  // rax
    let v81: i64;  // rdx
    let v82: i64;  // rcx
    let v83: i64;  // rdx
    let v84: i64;  // rax
    let v85: i64;  // rcx
    let v86: i64;  // rax

    v38 = v37;
    v10 = a1;
    v11 = v38;
    v19 = <&mut I as core::iter::traits::iterator::Iterator>::next(a1);
    v39 = v19;
    if v39 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v40 = v20;
    v41 = v21;
    if v39 {
        *((a0 + 8) as &i64) = v6;
        *((a0 + 16) as &i64) = v7;
        *(a0 as &i64) = 9223372036854775811;
    }
    v6 = v40;
    v7 = v41;
    *(&v15.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v16 = 1;
    v17 = 0;
    if a4 >= 8000 {
        v42 = 8000;
    }
    v45 = 0;
    v5 = a3;
    loop {
        v45 = <i32 as core::iter::range::Step>::forward_unchecked(v45) as i32;
        v19 = uu_sort::chunks::RecycledChunk::new(v42);
        v3 = a5;
        v2 = v5;
        v1 = &v10;
        v0 = &v6;
        v28 = uu_sort::chunks::read(&v11, &v19, 0x1, a4, &v15);
        v46 = v28;
        if v46 {
            v52 = *((&v28 as &char + 8) as &i64);
            v53 = a0;
            *((v53 + 8) as &i64) = v46;
            *((v53 + 16) as &i64) = v52;
            *(v53 as &i64) = 9223372036854775811;
            return v86;
        }
        if !*((&v28 as &char + 8) as &i8) {
            break;
        }
        if v45 >= 2 {
            v47 = v11;
            v49 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
            v8 = v47;
            v12 = 0;
            v13 = 8;
            v14 = 0;
            v50 = a5;
            v9 = (*((v50 + 48) as &i64) == 0x8000000000000000 ? 0 : *((v50 + 56) as &i64));
            v54 = *((v50 + 64) as &i64);
            loop {
                v60 = std::sync::mpmc::Receiver<T>::recv(v36, v55, v56);
                v19 = v60;
                if !v60 {
                    v79 = a0;
                    *((v79 + 16) as &i64) = v14;
                    *(v79 as &i128) = v12;
                    break;
                }
                v4 = v60;
                v28 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a2, v61);
                if v30 == 0x8000000000000000 {
                    v80 = a0;
                    *((v80 + 8) as &i128) = *((&v28 as &char + 16) as &i128);
                    *(v80 as &i64) = 9223372036854775811;
                    goto LABEL_568467;
                }
                v62 = *((&v28 as &char + 16) as &i128);
                v29 = v28;
                v19 = uu_sort::ext_sort::write(v4, &v29, v9, v54, v5);
                v63 = v19;
                v64 = *((&v19 as &char + 8) as &i64);
                v65 = *((&v19 as &char + 16) as &i64);
                match v19 {
                    Err(_) => {
                        v81 = a0;
                        *((v81 + 8) as &i64) = v32;
                        *((v81 + 16) as &i64) = v33;
                        *(v81 as &i64) = 9223372036854775811;
LABEL_568467:
                        goto LABEL_568471;
                    },
                    Ok(_) => {
                        v35 = *((&v19 as &char + 40) as &i64);
                        v66 = *((&v19 as &char + 24) as &i128);
                        v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u128 as u256;
                        v34 = v66;
                        v31 = v63;
                        v32 = v64;
                        v33 = v65;
                        v12 = alloc::vec::Vec<T,A>::push(&v31, v31);
                        v28 = uu_sort::chunks::Chunk::recycle(v4);
                        v27 = *((&v28 as &char + 112) as &i64);
                        v67 = *((&v28 as &char + 96) as &i128);
                        v26 = v67;
                        v68 = *((&v28 as &char + 80) as &i128);
                        v25 = v68;
                        v69 = *((&v28 as &char + 64) as &i128);
                        v24 = v69;
                        v70 = v28;
                        v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u128 as u256;
                        v71 = *((&v28 as &char + 16) as &i128);
                        v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 as u128 as u256;
                        v72 = *((&v28 as &char + 32) as &i128);
                        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 as u128 as u256;
                        v73 = *((&v28 as &char + 48) as &i128);
                        v59 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 as u128 as u256;
                        v23 = v73;
                        v22 = v72;
                        v21 = v71;
                        v19 = v70;
                        v3 = a5;
                        v2 = v5;
                        v1 = &v10;
                        v0 = &v6;
                        v18 = uu_sort::chunks::read(&v8, &v19, None, v74, &v15);
                        v75 = v18;
                        if v75 {
                            v82 = *((&v18 as &char + 8) as &i64);
                            v83 = a0;
                            *((v83 + 8) as &i64) = v75;
                            *((v83 + 16) as &i64) = v82;
                            *(v83 as &i64) = 9223372036854775811;
LABEL_568471:
                            break;
                        } else if !*((&v18 as &char + 8) as &i8) {
                            v8 = 3;
                        }
                    },
                }
            }
            return v86;
        }
    }
    v19 = v11;
    v78 = std::sync::mpmc::Receiver<T>::recv(v36, v76, v77);
    if !v78 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = v78;
    v84 = std::sync::mpmc::Receiver<T>::recv(v36, v76, v77);
    v85 = a0;
    *(v85 as &u64) = 9223372036854775811 + -1 - (v84 < 1);
    *((v85 + 8) as &i64) = v78;
    *((v85 + 16) as &i64) = v84;
    return v86;
}
