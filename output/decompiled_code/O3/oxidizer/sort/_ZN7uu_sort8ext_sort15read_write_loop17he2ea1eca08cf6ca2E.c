fn uu_sort::ext_sort::read_write_loop(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u64, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x248]
    let v1: i64;  // [sp-0x240]
    let v2: i64;  // [sp-0x238]
    let v3: i64;  // [sp-0x230]
    let v4: i64;  // [sp-0x218]
    let v5: i64;  // [sp-0x208]
    let v6: i64;  // [sp-0x200]
    let v7: i64;  // [sp-0x1f8]
    let v8: i128;  // [bp-0x1f0]
    let v9: i64;  // [sp-0x1e0]
    let v10: i64;  // [sp-0x1d8]
    let v11: i128;  // [bp-0x1d0], Other Possible Types: struct16
    let v12: i128;  // [sp-0x1c0], Other Possible Types: struct16
    let v13: i64;  // [sp-0x1b8]
    let v14: i64;  // [sp-0x1b0]
    let v15: struct8;  // [bp-0x1a8]
    let v16: i64;  // [sp-0x1a0]
    let v17: i64;  // [sp-0x198]
    let v18: struct16;  // [sp-0x188], Other Possible Types: i128
    let v19: i64;  // [sp-0x178], Other Possible Types: struct120, struct8, Result<struct48, struct24>
    let v20: i8;  // [bp-0x170]
    let v21: i128;  // [bp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0xf8], Other Possible Types: struct36, struct120, struct16
    let v24: i256;  // [bp-0x80]
    let v25: i64;  // [sp-0x78]
    let v26: i64;  // [sp-0x60]
    let v27: i64;  // [sp-0x58]
    let v28: i64;  // [sp-0x50]
    let v29: i128;  // [sp-0x48]
    let v30: i64;  // [sp-0x38]
    let v31: i64;  // [bp+0x8]
    let v32: i8;  // [bp+0x10]
    let v33: i128;  // xmm0
    let v34: i64;  // rdx
    let v35: i64;  // rcx
    let v36: i64;  // rax
    let v37: i64;  // 4096
    let v40: i32;  // ebx
    let v41: i64;  // r13
    let v42: i128;  // xmm0
    let v43: i256;  // ymm0
    let v44: i256;  // ymm0
    let v45: i64;  // rax
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: i64;  // r12
    let v50: i64;  // rsi
    let v51: i64;  // rdx
    let v52: i256;  // ymm1
    let v53: i256;  // ymm2
    let v54: i256;  // ymm3
    let v55: i64;  // rax
    let v56: i64;  // rdx
    let v57: i128;  // xmm0
    let v58: i64;  // rdx
    let v59: i64;  // rax
    let v60: i64;  // rcx
    let v61: i128;  // xmm0
    let v65: i128;  // xmm0
    let v66: i128;  // xmm1
    let v67: i128;  // xmm2
    let v69: i64;  // r8
    let v70: i64;  // rax
    let v71: i64;  // rsi
    let v72: i64;  // rdx
    let v73: i64;  // rbx
    let v74: i64;  // rcx
    let v75: i64;  // rax
    let v76: i64;  // rdx
    let v77: i64;  // rcx
    let v78: i64;  // rdx
    let v79: i64;  // rax
    let v80: i64;  // rcx
    let v81: i64;  // rax

    v33 = v32;
    v10 = a1;
    v11 = struct16 {
        field_0: v33
    };
    v19 = <&mut I as core::iter::traits::iterator::Iterator>::next(a1);
    v34 = v19;
    if v34 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v35 = v20;
    v36 = v21;
    if v34 {
        *((a0 + 8) as &i64) = v6;
        *((a0 + 16) as &i64) = v7;
        *(a0 as &i64) = 9223372036854775811;
    }
    v6 = v35;
    v7 = v36;
    *(&v15.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v16 = 1;
    v17 = 0;
    v40 = 0;
    v5 = a3;
    loop {
        v40 = <i32 as core::iter::range::Step>::forward_unchecked(v40) as i32;
        v19 = uu_sort::chunks::RecycledChunk::new(v37);
        v3 = a5;
        v2 = v5;
        v1 = &v10;
        v0 = &v6;
        v23 = uu_sort::chunks::read(&v11, &v19, 1, a4, &v15);
        v41 = v23;
        if v41 {
            v47 = *((&v23 as &char + 8) as &i64);
            v48 = a0;
            *((v48 + 8) as &i64) = v41;
            *((v48 + 16) as &i64) = v47;
            *(v48 as &i64) = 9223372036854775811;
            return v81;
        }
        if !*((&v23 as &char + 8) as &i8) {
            break;
        }
        if v40 >= 2 {
            v42 = v11;
            v44 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
            v8 = v42;
            v12 = 0;
            v13 = 8;
            v14 = 0;
            v45 = a5;
            v9 = (*((v45 + 48) as &i64) == 0x8000000000000000 ? 0 : *((v45 + 56) as &i64));
            v49 = *((v45 + 64) as &i64);
            loop {
                v55 = std::sync::mpmc::Receiver<T>::recv(v31, v50, v51);
                v19 = v55;
                if !v55 {
                    v74 = a0;
                    *((v74 + 16) as &i64) = v14;
                    *(v74 as &i128) = v12;
                    break;
                }
                v4 = v55;
                v23 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a2, v56);
                if v25 == 0x8000000000000000 {
                    v75 = a0;
                    *((v75 + 8) as &i128) = *((&v23 as &char + 16) as &i128);
                    *(v75 as &i64) = 9223372036854775811;
                    goto LABEL_57a627;
                }
                v57 = *((&v23 as &char + 16) as &i128);
                v24 = v23;
                v19 = uu_sort::ext_sort::write(v4, &v24, v9, v49, v5);
                v58 = v19;
                v59 = *((&v19 as &char + 8) as &i64);
                v60 = *((&v19 as &char + 16) as &i64);
                match v19 {
                    Err(_) => {
                        v76 = a0;
                        *((v76 + 8) as &i64) = v27;
                        *((v76 + 16) as &i64) = v28;
                        *(v76 as &i64) = 9223372036854775811;
LABEL_57a627:
                        goto LABEL_57a631;
                    },
                    Ok(_) => {
                        v30 = *((&v19 as &char + 40) as &i64);
                        v61 = *((&v19 as &char + 24) as &i128);
                        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 as u128 as u256;
                        v29 = v61;
                        v26 = v58;
                        v27 = v59;
                        v28 = v60;
                        v12 = alloc::vec::Vec<T,A>::push(&v26, v26);
                        v23 = uu_sort::chunks::Chunk::recycle(v4);
                        v19.field_112 = (stack_base)[136] as i64;
                        v19.field_96 = vvar_364{reg 224};
                        v19.80 = vvar_366{reg 224};
                        v19.field_64 = vvar_368{reg 224};
                        v65 = v23;
                        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v23 as &char + 96) as &i128) as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v23 as &char + 80) as &i128) as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v23 as &char + 64) as &i128) as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 as u128 as u256;
                        v66 = *((&v23 as &char + 16) as &i128);
                        v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u128 as u256;
                        v67 = *((&v23 as &char + 32) as &i128);
                        v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u128 as u256;
                        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v23 as &char + 48) as &i128) as u128 as u256;
                        v19.field_48 = vvar_376{reg 320};
                        v22 = v67;
                        v21 = v66;
                        v19 = v65;
                        v3 = a5;
                        v2 = v5;
                        v1 = &v10;
                        v0 = &v6;
                        v18 = uu_sort::chunks::read(&v8, &v19, 0, v69, &v15);
                        v70 = v18;
                        if v70 {
                            v77 = *((&v18 as &char + 8) as &i64);
                            v78 = a0;
                            *((v78 + 8) as &i64) = v70;
                            *((v78 + 16) as &i64) = v77;
                            *(v78 as &i64) = 9223372036854775811;
LABEL_57a631:
                            break;
                        } else if !*((&v18 as &char + 8) as &i8) {
                            v8 = 3;
                        }
                    },
                }
            }
            return v81;
        }
    }
    v19 = v11;
    v73 = std::sync::mpmc::Receiver<T>::recv(v31, v71, v72);
    if !v73 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = v73;
    v79 = std::sync::mpmc::Receiver<T>::recv(v31, v71, v72);
    v80 = a0;
    *(v80 as &u64) = 9223372036854775811 + -1 - (v79 < 1);
    *((v80 + 8) as &i64) = v73;
    *((v80 + 16) as &i64) = v79;
    return v81;
}
