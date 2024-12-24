fn uu_sort::ext_sort::read_write_loop(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u64, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i64;  // [sp-0x210]
    let v2: i64;  // [sp-0x208]
    let v3: i64;  // [sp-0x200]
    let v4: i64;  // [sp-0x1f0]
    let v5: i64;  // [sp-0x1e8]
    let v6: i64;  // [sp-0x1e0]
    let v7: i64;  // [sp-0x1d8]
    let v8: i64;  // [bp-0x1d0]
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
    let v22: struct24;  // [sp-0xe0], Other Possible Types: i64
    let v23: i64;  // [sp-0xd8]
    let v24: i64;  // [sp-0xd0]
    let v25: i128;  // [sp-0xc8], Other Possible Types: struct24, struct120, struct16
    let v26: i256;  // [bp-0x50]
    let v27: i64;  // [sp-0x48]
    let v28: i64;  // [bp+0x8]
    let v29: i8;  // [bp+0x10]
    let v30: i128;  // xmm0
    let v31: i64;  // rdx
    let v32: i64;  // rcx
    let v33: i64;  // rax
    let v34: i64;  // 4096
    let v37: i32;  // ebx
    let v38: i64;  // r13
    let v39: i128;  // xmm0
    let v40: i256;  // ymm0
    let v41: i256;  // ymm0
    let v42: i64;  // r15
    let v44: i64;  // rax
    let v45: i64;  // rcx
    let v46: i64;  // r12
    let v47: i64;  // rsi
    let v48: i64;  // rdx
    let v49: i256;  // ymm1
    let v50: i256;  // ymm2
    let v51: i256;  // ymm3
    let v52: i64;  // rax
    let v53: i64;  // rdx
    let v59: i128;  // xmm0
    let v63: i64;  // r8
    let v64: i64;  // rax
    let v65: i64;  // rsi
    let v66: i64;  // rdx
    let v67: i64;  // rbx
    let v68: i64;  // rcx
    let v69: i64;  // rax
    let v70: i64;  // rdx
    let v71: i64;  // rcx
    let v72: i64;  // rdx
    let v73: i64;  // rax
    let v74: i64;  // rcx
    let v75: i64;  // rax

    v30 = v29;
    v10 = a1;
    v11 = v30;
    v19 = <&mut I as core::iter::traits::iterator::Iterator>::next(a1);
    v31 = v19;
    if v31 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v32 = v20;
    v33 = v21;
    if v31 {
        *((a0 + 8) as &i64) = v6;
        *((a0 + 16) as &i64) = v7;
        *(a0 as &i64) = 9223372036854775811;
    }
    v6 = v32;
    v7 = v33;
    *(&v15.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v16 = 1;
    v17 = 0;
    v37 = 0;
    v5 = a3;
    loop {
        v37 = <i32 as core::iter::range::Step>::forward_unchecked(v37) as i32;
        v19 = uu_sort::chunks::RecycledChunk::new(v34);
        v3 = a5;
        v2 = v5;
        v1 = &v10;
        v0 = &v6;
        v25 = uu_sort::chunks::read(&v11, &v19, 1, a4, &v15);
        v38 = v25;
        if v38 {
            v44 = *((&v25 as &char + 8) as &i64);
            v45 = a0;
            *((v45 + 8) as &i64) = v38;
            *((v45 + 16) as &i64) = v44;
            *(v45 as &i64) = 9223372036854775811;
            return v75;
        }
        if !*((&v25 as &char + 8) as &i8) {
            break;
        }
        if v37 >= 2 {
            v39 = v11;
            v41 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
            v8 = v39;
            v12 = 0;
            v13 = 8;
            v14 = 0;
            v42 = a5;
            v9 = (*((a5 + 48) as &i64) == 0x8000000000000000 ? 0 : *((v42 + 56) as &i64));
            v46 = *((v42 + 64) as &i64);
            loop {
                v52 = std::sync::mpmc::Receiver<T>::recv(v28, v47, v48);
                v19 = v52;
                if !v52 {
                    v68 = a0;
                    *((v68 + 16) as &i64) = v14;
                    *(v68 as &i128) = v12;
                    break;
                }
                v4 = v52;
                v19 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a2, v53);
                if v27 == 0x8000000000000000 {
                    v69 = a0;
                    *((v69 + 8) as &struct36) = v19.16;
                    *(v69 as &i64) = 9223372036854775811;
                    goto LABEL_57a00a;
                }
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v19.16) as u256;
                v26 = v19;
                v25 = uu_sort::ext_sort::write(v4, &v26, v9, v46, v5);
                if v22 == 0x8000000000000000 {
                    v70 = a0;
                    *((v70 + 8) as &i64) = v23;
                    *((v70 + 16) as &i64) = v24;
                    *(v70 as &i64) = 9223372036854775811;
LABEL_57a00a:
                    goto LABEL_57a014;
                } else {
                    v22 = struct24 {
                        field_0: v53
                        field_8: v54
                        field_16: v55
                    };
                    v12 = alloc::vec::Vec<T,A>::push(&v22, v22);
                    v25 = uu_sort::chunks::Chunk::recycle(v4);
                    v19.field_112 = (stack_base)[88] as i64;
                    v19.field_96 = vvar_361{reg 224};
                    v19.80 = vvar_363{reg 224};
                    v19.field_64 = vvar_365{reg 224};
                    v59 = v25;
                    v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v25 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v25 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v25 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
                    v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v25 as &char + 16) as &i128);
                    v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v25 as &char + 32) as &i128);
                    v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v25 as &char + 48) as &i128);
                    v19.field_48 = vvar_373{reg 320};
                    v19.32 = vvar_371{reg 288};
                    v19.16 = vvar_369{reg 256};
                    v19 = v59;
                    v3 = v42;
                    v2 = v5;
                    v1 = &v10;
                    v0 = &v6;
                    v18 = uu_sort::chunks::read(&v8, &v19, 0, v63, &v15);
                    v64 = v18;
                    if v64 {
                        v71 = *((&v18 as &char + 8) as &i64);
                        v72 = a0;
                        *((v72 + 8) as &i64) = v64;
                        *((v72 + 16) as &i64) = v71;
                        *(v72 as &i64) = 9223372036854775811;
LABEL_57a014:
                        break;
                    } else if !*((&v18 as &char + 8) as &i8) {
                        v8 = 3;
                    }
                }
            }
            return v75;
        }
    }
    v19 = v11;
    v67 = std::sync::mpmc::Receiver<T>::recv(v28, v65, v66);
    if !v67 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = v67;
    v73 = std::sync::mpmc::Receiver<T>::recv(v28, v65, v66);
    v74 = a0;
    *(v74 as &u64) = 9223372036854775811 + -1 - (v73 < 1);
    *((v74 + 8) as &i64) = v67;
    *((v74 + 16) as &i64) = v73;
    return v75;
}
