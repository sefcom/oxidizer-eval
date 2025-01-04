fn uu_sort::ext_sort::read_write_loop(a0: &Option<struct16>, a1: u32, a2: &u64, a3: u32, a4: u64, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i64;  // [sp-0x210]
    let v2: i64;  // [sp-0x208]
    let v3: i64;  // [sp-0x200]
    let v4: i64;  // [sp-0x1f0]
    let v5: i64;  // [sp-0x1e8]
    let v6: i64;  // [sp-0x1e0]
    let v7: i64;  // [sp-0x1d8]
    let v8: i128;  // [bp-0x1d0]
    let v9: i64;  // [sp-0x1b8]
    let v10: i64;  // [sp-0x1b0]
    let v11: i128;  // [sp-0x1a8]
    let v12: i64;  // [sp-0x198], Other Possible Types: struct16
    let v13: i64;  // [sp-0x190]
    let v14: i64;  // [sp-0x188]
    let v15: struct8;  // [bp-0x180]
    let v16: i64;  // [sp-0x178]
    let v17: i64;  // [sp-0x170]
    let v18: i128;  // [sp-0x168], Other Possible Types: struct16
    let v19: i128;  // [sp-0x158], Other Possible Types: struct36, struct8, struct120
    let v20: i8;  // [bp-0x150]
    let v21: i8;  // [bp-0x148]
    let v22: i128;  // [sp-0x138]
    let v23: i128;  // [sp-0x128]
    let v24: i128;  // [sp-0x118]
    let v25: i128;  // [sp-0x108]
    let v26: i128;  // [sp-0xf8]
    let v27: i64;  // [sp-0xe8]
    let v28: struct24;  // [sp-0xe0], Other Possible Types: i64
    let v29: i64;  // [sp-0xd8]
    let v30: i64;  // [sp-0xd0]
    let v31: i128;  // [sp-0xc8], Other Possible Types: struct120, struct24, struct16
    let v32: i256;  // [bp-0x50]
    let v33: i64;  // [sp-0x48]
    let v34: i64;  // [bp+0x8]
    let v35: i8;  // [bp+0x10]
    let v36: i128;  // xmm0
    let v37: i64;  // rdx
    let v38: i64;  // rcx
    let v39: i64;  // rax
    let v40: i64;  // 4096
    let v43: i32;  // ebx
    let v44: i64;  // r13
    let v45: i128;  // xmm0
    let v46: i256;  // ymm0
    let v47: i256;  // ymm0
    let v48: i64;  // r15
    let v50: i64;  // rax
    let v51: i64;  // rcx
    let v52: i64;  // r12
    let v53: i64;  // rsi
    let v54: i64;  // rdx
    let v55: i256;  // ymm1
    let v56: i256;  // ymm2
    let v57: i256;  // ymm3
    let v58: i64;  // rax
    let v59: i64;  // rdx
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i128;  // xmm0
    let v66: i128;  // xmm1
    let v67: i128;  // xmm2
    let v68: i128;  // xmm3
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

    v36 = v35;
    v10 = a1;
    v11 = v36;
    v19 = <&mut I as core::iter::traits::iterator::Iterator>::next(a1);
    v37 = v19;
    if v37 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v38 = v20;
    v39 = v21;
    if v37 {
        *((a0 + 8) as &i64) = v6;
        *((a0 + 16) as &i64) = v7;
        *(a0 as &i64) = 9223372036854775811;
    }
    v6 = v38;
    v7 = v39;
    *(&v15.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v16 = 1;
    v17 = 0;
    if a4 >= 8000 {
        v40 = 8000;
    }
    v43 = 0;
    v5 = a3;
    loop {
        v43 = <i32 as core::iter::range::Step>::forward_unchecked(v43) as i32;
        v19 = uu_sort::chunks::RecycledChunk::new(v40);
        v3 = a5;
        v2 = v5;
        v1 = &v10;
        v0 = &v6;
        v31 = uu_sort::chunks::read(&v11, &v19, 0x1, a4, &v15);
        v44 = v31;
        if v44 {
            v50 = *((&v31 as &char + 8) as &i64);
            v51 = a0;
            *((v51 + 8) as &i64) = v44;
            *((v51 + 16) as &i64) = v50;
            *(v51 as &i64) = 9223372036854775811;
            return v81;
        }
        if !*((&v31 as &char + 8) as &i8) {
            break;
        }
        if v43 >= 2 {
            v45 = v11;
            v47 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
            v8 = v45;
            v12 = 0;
            v13 = 8;
            v14 = 0;
            v48 = a5;
            v9 = (*((a5 + 48) as &i64) == 0x8000000000000000 ? 0 : *((v48 + 56) as &i64));
            v52 = *((v48 + 64) as &i64);
            loop {
                v58 = std::sync::mpmc::Receiver<T>::recv(v34, v53, v54);
                v19 = v58;
                if !v58 {
                    v74 = a0;
                    *((v74 + 16) as &i64) = v14;
                    *(v74 as &i128) = v12;
                    break;
                }
                v4 = v58;
                v19 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a2, v59);
                if v33 == 0x8000000000000000 {
                    v75 = a0;
                    *((v75 + 8) as &i128) = v21;
                    *(v75 as &i64) = 9223372036854775811;
                    goto LABEL_568a4a;
                }
                v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
                v32 = v19;
                v31 = uu_sort::ext_sort::write(v4, &v32, v9, v52, v5);
                if v28 == 0x8000000000000000 {
                    v76 = a0;
                    *((v76 + 8) as &i64) = v29;
                    *((v76 + 16) as &i64) = v30;
                    *(v76 as &i64) = 9223372036854775811;
LABEL_568a4a:
                    goto LABEL_568a54;
                } else {
                    v28 = struct24 {
                        field_0: v59
                        field_8: v60
                        field_16: v61
                    };
                    v12 = alloc::vec::Vec<T,A>::push(&v28, v28);
                    v31 = uu_sort::chunks::Chunk::recycle(v4);
                    v27 = *((&v31 as &char + 112) as &i64);
                    v62 = *((&v31 as &char + 96) as &i128);
                    v26 = v62;
                    v63 = *((&v31 as &char + 80) as &i128);
                    v25 = v63;
                    v64 = *((&v31 as &char + 64) as &i128);
                    v24 = v64;
                    v65 = v31;
                    v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
                    v66 = *((&v31 as &char + 16) as &i128);
                    v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
                    v67 = *((&v31 as &char + 32) as &i128);
                    v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
                    v68 = *((&v31 as &char + 48) as &i128);
                    v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
                    v23 = v68;
                    v22 = v67;
                    v21 = v66;
                    v19 = v65;
                    v3 = v48;
                    v2 = v5;
                    v1 = &v10;
                    v0 = &v6;
                    v18 = uu_sort::chunks::read(&v8, &v19, None, v69, &v15);
                    v70 = v18;
                    if v70 {
                        v77 = *((&v18 as &char + 8) as &i64);
                        v78 = a0;
                        *((v78 + 8) as &i64) = v70;
                        *((v78 + 16) as &i64) = v77;
                        *(v78 as &i64) = 9223372036854775811;
LABEL_568a54:
                        break;
                    } else if !*((&v18 as &char + 8) as &i8) {
                        v8 = 3;
                    }
                }
            }
            return v81;
        }
    }
    v19 = v11;
    v73 = std::sync::mpmc::Receiver<T>::recv(v34, v71, v72);
    if !v73 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = v73;
    v79 = std::sync::mpmc::Receiver<T>::recv(v34, v71, v72);
    v80 = a0;
    *(v80 as &u64) = 9223372036854775811 + -1 - (v79 < 1);
    *((v80 + 8) as &i64) = v73;
    *((v80 + 16) as &i64) = v79;
    return v81;
}
