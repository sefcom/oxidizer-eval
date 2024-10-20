fn uu_wc::wc(a0: void*, a1: void*) -> u64 {
    let v1: i64;  // [sp-0x250]
    let v3: i64;  // [sp-0x240]
    let v5: i64;  // [sp-0x230]
    let v14: i64;  // [sp-0x1e8]
    let v15: i64;  // [sp-0x1e0]
    let v16: i64;  // [sp-0x1d8]
    let v17: i64;  // [sp-0x1d0]
    let v18: i128;  // [bp-0x1c8]
    let v20: i128;  // [sp-0x1b8]
    let v21: i128;  // [sp-0x1a8]
    let v22: i64;  // [sp-0x198]
    let v25: i1408;  // [sp-0x180], Other Possible Types: Enum, struct74
    let v26: i8;  // [bp-0x178]
    let v27: i64;  // [sp-0x170]
    let v30: i64;  // [sp-0xd0]
    let v31: i64;  // [sp-0xc8]
    let v32: i64;  // [sp-0xc0]
    let v33: i64;  // [sp-0xb8]
    let v34: i64;  // [sp-0xb0]
    let v35: i64;  // [sp-0xa8]
    let v36: i64;  // [sp-0xa0]
    let v40: i128;  // [sp-0x68]
    let v41: i128;  // [sp-0x58]
    let v42: i64;  // [sp-0x48]
    let v43: i64;  // [sp-0x38]
    let v44: i64;  // [sp-0x10]
    let v46: i64;  // rsi
    let v47: i64;  // r15
    let v48: i64;  // r13
    let v49: i256;  // ymm0
    let v50: i256;  // ymm0
    let v51: i64;  // r12
    let v52: i64;  // rcx
    let v53: i128;  // xmm0
    let v54: i256;  // ymm1
    let v55: i64;  // rcx
    let v56: i64;  // rcx
    let v57: i128;  // xmm0
    let v58: i256;  // ymm1
    let v59: i64;  // rbx
    let v60: i64;  // r13
    let v61: i64;  // rbx
    let v63: i64;  // rdx
    let v64: i32;  // eax
    let v65: i64;  // rax
    let v66: i64;  // rcx
    let v67: i64;  // rdx
    let v68: i32;  // ecx
    let v69: i64;  // rsi
    let v70: i64;  // rdx
    let v71: i64;  // rax
    let v73: i64;  // rax
    let v74: i64;  // rsi
    let v75: i64;  // rdx
    let v76: i256;  // ymm0
    let v77: i64;  // r14
    let v78: i64;  // rsi
    let v79: i128;  // xmm0
    let v80: i64;  // rax
    let v81: i64;  // rax
    let v82: i128;  // xmm0
    let v83: i128;  // xmm1
    let v84: i128;  // xmm0
    let v85: i128;  // xmm0
    let v86: i128;  // xmm1
    let v87: i128;  // xmm2
    let v88: i128;  // xmm0
    let v89: i128;  // xmm0
    let v90: i128;  // xmm1
    let v91: i128;  // xmm2
    let v92: i64;  // rcx
    let v93: i64;  // rdi
    let v94: i64;  // rdx
    let v95: i64;  // rcx
    let v96: i64;  // rcx
    let v97: i64;  // rcx
    let v98: i64;  // rbp
    let v99: i64;  // r12

    v46 = a1;
    v44 = v47;
    v48 = 0x8000000000000000;
    v50 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v41 = 0;
    v40 = 0;
    v42 = 0;
    v3 = a1;
    v51 = *(a0 as &i64);
    v1 = 1;
    v30 = *((a1 + 29) as &i8);
    if v30 == 2 {
LABEL_48a5b5:
        if !v51 {
            goto LABEL_48a6ff;
        }
        if v51 == 2 {
            goto LABEL_48a763;
        }
        v59 = *((a0 + 24) as &i64);
        goto LABEL_48a8fb;
    } else {
        if !v51 {
            v52 = v3;
            vvar_507{reg 224} = Conv(32->128, Load(addr=(vvar_505{reg 24} + 0x19<64>), size=4, endness=Iend_LE))
            vvar_30{reg 224} = ((vvar_30{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_507{reg 224}))
            vvar_34{reg 256} = (((vvar_511{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (amd64g_calculate_mmx_psadbw(Conv(128->64, (vvar_507{reg 224} >> 0x40<8>)), 0x0<64>) CONCAT amd64g_calculate_mmx_psadbw(Conv(128->64, vvar_507{reg 224}), 0x0<64>))))
            v55 = (v54 + *((v52 + 24) as &i8) == 1 ? 7 : 1);
            v1 = v55;
LABEL_48a6ff:
            v25 = 9223372036854775809;
            v26 = 1;
            v78 = __rust_alloc(24, 8);
            *((v78 + 16) as &i64) = v27;
            v79 = v25;
            vvar_30{reg 224} = ((vvar_30{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_727{reg 224}))
            *(v78 as &i128) = v79;
            v80 = &g_4f3190;
            goto LABEL_48a93b;
        }
        if v51 != 1 {
            v1 = 1;
LABEL_48a763:
            if *((a0 + 8) as &i64) == 9223372036854775809 {
                v25 = uu_wc::files0_iter_stdin(v74, v75);
                v78 = __rust_alloc(88, 8);
                *((v78 + 80) as &i64) = *((&v25 as &char + 80) as &i64);
                v84 = *((&v25 as &char + 64) as &i128);
                *((v78 + 64) as &i128) = v84;
                v85 = v25;
                vvar_30{reg 224} = ((((vvar_47{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_776{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_778{reg 224}))
                v86 = *((&v25 as &char + 16) as &i128);
                vvar_34{reg 256} = ((vvar_51{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_780{reg 256}))
                v87 = *((&v25 as &char + 32) as &i128);
                *((v78 + 48) as &i128) = *((&v25 as &char + 48) as &i128);
                *((v78 + 32) as &i128) = v87;
                *((v78 + 16) as &i128) = v86;
                *(v78 as &i128) = v85;
                v80 = &g_4f3238;
                goto LABEL_48a93b;
            } else {
                v25 = uu_wc::files0_iter_file(*((a0 + 16) as &i64), *((a0 + 24) as &i64));
                v81 = *((&v25 as &char + 8) as &i64);
                if v15 == 9223372036854775809 {
                    return v81;
                }
                v22 = *((&v25 as &char + 72) as &i64);
                v82 = *((&v25 as &char + 24) as &i128);
                v83 = *((&v25 as &char + 40) as &i128);
                v21 = *((&v25 as &char + 56) as &i128);
                v20 = v83;
                v18 = v82;
                v15 = v25;
                v16 = v81;
                v17 = v27;
                v78 = __rust_alloc(80, 8);
                v88 = *((&v21 as &char + 8) as &i128);
                *((v78 + 64) as &i128) = v88;
                v89 = v15;
                vvar_30{reg 224} = ((((((vvar_47{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_761{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_797{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_799{reg 224}))
                v90 = v17;
                vvar_34{reg 256} = ((((vvar_51{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_763{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_801{reg 256}))
                v91 = *((&v18 as &char + 8) as &i128);
                *((v78 + 48) as &i128) = *((&v20 as &char + 8) as &i128);
                *((v78 + 32) as &i128) = v91;
                *((v78 + 16) as &i128) = v90;
                *(v78 as &i128) = v89;
                v80 = &g_4f3200;
                goto LABEL_48a93b;
            }
        }
        v56 = v3;
        vvar_531{reg 224} = Conv(32->128, Load(addr=(vvar_530{reg 24} + 0x19<64>), size=4, endness=Iend_LE))
        vvar_30{reg 224} = ((vvar_30{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_531{reg 224}))
        vvar_34{reg 256} = (((vvar_534{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (amd64g_calculate_mmx_psadbw(Conv(128->64, (vvar_531{reg 224} >> 0x40<8>)), 0x0<64>) CONCAT amd64g_calculate_mmx_psadbw(Conv(128->64, vvar_531{reg 224}), 0x0<64>))))
        v59 = *((a0 + 24) as &i64);
        if (!(v54 + *((v56 + 24) as &i8) == 1) || !(v59 == 1)) && !(!v59) {
            v60 = *((a0 + 16) as &i64);
            v1 = 1;
            v61 = 0;
            v5 = 0;
            do {
                if *((v60 + v61) as &i64) == 9223372036854775809 {
                    v1 = 7;
                } else {
                    v25 = std::sys::pal::unix::fs::stat(*((v60 + v61 + 8) as &i64), *((v60 + v61 + 16) as &i64));
                    if v25 != 2 {
                        v64 = *((&v25 as &char + 56) as &i32) & 0xf000;
                        v65 = *((&v25 as &char + 80) as &i64);
                        if v64 != 0x8000 {
                            v65 = 0;
                        }
                        v63 = 7;
                        v1 = 7;
                        v5 += v65;
                    }
                }
            } while ((v61 += 24, (v59 << 3) + (v59 << 4) != v61));
            v46 = v5;
            if !v46 {
                v48 = 0x8000000000000000;
                goto LABEL_48a5b5;
            } else {
                v66 = v46 >> 10;
                v67 = v46 / 0x2540be400;
                v68 = (v66 < 9765625 ? 0 : 10);
                v48 = 0x8000000000000000;
                if v69 >= 100000 {
                    v70 = (v69 >> 5) / 3125;
                    v68 |= 5;
                }
                v46 = v70 + 524188 & v70 + 393206;
                v63 = (v70 + 514288 & v70 + 916504 ^ v46) >> 17;
                v71 = v68 + v63 + 1;
                v1 = v73;
                goto LABEL_48a5b5;
            }
        } else {
            v1 = 1;
LABEL_48a8fb:
            v77 = *((a0 + 16) as &i64);
            v78 = __rust_alloc(16, 8);
            *(v78 as &i64) = v77;
            *((v78 + 8) as &i64) = v77 + v59 * 24;
            v80 = &g_4f31c8;
LABEL_48a93b:
            v92 = *(v3 as &i64);
            v93 = 9223372036854775809;
            v94 = 9223372036854775810;
            if v92 == 9223372036854775809 {
                v94 = *((v3 + 8) as &i8);
                v96 = v48 + 1;
            } else if v92 != 9223372036854775810 {
                v97 = v3;
                v94 = *((v97 + 8) as &i64);
                v93 = *((v97 + 16) as &i64);
            }
            v31 = v95;
            v32 = v94;
            v43 = v93;
            v33 = v43;
            v34 = v78;
            v35 = v80;
            v36 = 0;
            v98 = 0;
            v99 = &v25;
            v5 = v48 + 3;
            v14 = v48 + 1;
        }
    }
}
