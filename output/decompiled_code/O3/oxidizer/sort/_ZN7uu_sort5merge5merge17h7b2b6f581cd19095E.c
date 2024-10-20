fn uu_sort::merge::merge(a0: u32, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x30]
    let v2: u64;  // [bp+0x8]
    let v4: u64;  // r15
    let v5: &u64;  // rbx
    let v6: u64;  // r13
    let v7: u64;  // r12
    let v8: u128;  // xmm0
    let v9: u256;  // ymm0
    let v10: u256;  // ymm0
    let v11: u64;  // rcx
    let v12: &u64;  // r15
    let v13: u256;  // ymm1
    let v14: u64;  // rsi
    let v15: u64;  // rdx
    let v16: u64;  // rax
    let v17: u64;  // rsi
    let v18: u64;  // r12
    let v19: u64;  // rsi
    let v20: u64;  // rdx
    let v21: u64;  // rsi
    let v22: u64;  // r14
    let v23: u64;  // r8
    let v24: u64;  // rbx
    let v25: u8;  // r13b
    let v26: u8;  // al
    let v27: u64;  // rdi
    let v28: u64;  // r8
    let v29: &u64;  // rcx
    let v30: u128;  // xmm0
    let v31: u128;  // xmm1
    let v32: u8;  // cl
    let v33: u16;  // dx
    let v34: &u64;  // rsi
    let v35: u128;  // xmm0
    let v36: u256;  // ymm0
    let v37: u128;  // xmm1
    let v38: u256;  // ymm1
    let v39: u8;  // al
    let v40: &u64;  // rdx
    let v41: u128;  // xmm0
    let v42: u128;  // xmm1
    let v43: u8;  // cl
    let v44: u16;  // dx
    let v45: &u64;  // rsi
    let v46: u128;  // xmm0
    let v47: u128;  // xmm1
    let v48: u64;  // r9
    let v49: &u64;  // rsi
    let v50: u64;  // r12
    let v51: u64;  // rcx
    let v53: u64;  // rbx
    let v54: u64;  // rcx
    let v55: u64;  // rdi
    let v56: u64;  // rdi
    let v58: u64;  // rbx
    let v59: u64;  // rdx
    let v61: u64;  // r12
    let v62: u64;  // rdi
    let v64: u64;  // rax
    let v65: u64;  // r12
    let v66: u64;  // rdx
    let v67: u64;  // rax
    let v68: u128;  // xmm1
    let v69: u64;  // rdx
    let v70: &u64;  // rax
    let v71: u128;  // xmm0
    let v72: u128;  // xmm1
    let v73: u128;  // xmm2
    let v74: &struct_2;  // r15
    let v75: u64;  // rax

    vvar_12{reg 48} = (&v0 & -128) - 0x700;
    *((vvar_12{reg 48} + 248) as &u64) = a3;
    v4 = a2;
    v5 = a1;
    *((vvar_12{reg 48} + 184) as &u64) = a0;
    v6 = 0x8000000000000000;
    *((vvar_12{reg 48} + 192) as &&u64) = a1;
    if a4 {
        v7 = 0x8000000000000000;
        vvar_12{reg 48} = vvar_12{reg 48} - 8;
        *((vvar_12{reg 48} - 8) as &&u8) = &g_4d1c80;
        std::sys::pal::unix::fs::canonicalize(vvar_1532{reg 48} + 896, a4, a5);
        *((vvar_12{reg 48} + 640) as &i64) = *((vvar_12{reg 48} + 912) as &i64);
        v8 = *((vvar_12{reg 48} + 896) as &i128);
        vvar_22{reg 224} = ((vvar_1547{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1546{reg 224}))
        *((vvar_12{reg 48} + 624) as &u128) = v8;
        v11 = *((vvar_12{reg 48} + 624) as &i64);
        *((vvar_12{reg 48} + 176) as &i64) = 0x8000000000000000;
        if v11 < 9223372036854775810 {
LABEL_4d2259:
            if !(v11 == v6) {
                goto LABEL_4d227d;
            }
            vvar_12{reg 48} = vvar_12{reg 48} - 8;
            *((vvar_12{reg 48} - 8) as &&u8) = &g_4d2273;
        } else {
            *((vvar_12{reg 48} + 1560) as &u64) = v11;
            *((vvar_12{reg 48} + 728) as &i64) = *((vvar_12{reg 48} + 632) as &i64);
            *((vvar_12{reg 48} + 504) as &u64) = a2;
            if !a2 {
                *((vvar_12{reg 48} + 176) as &i64) = 0x8000000000000000;
            } else {
                *((vvar_12{reg 48} + 1712) as &i64) = *((vvar_12{reg 48} + 640) as &i64);
                *((vvar_12{reg 48} + 296) as &u64) = a2 * 24;
                v12 = 0;
                *((vvar_12{reg 48} + 176) as &i64) = 0x8000000000000000;
                do {
                    v14 = *((v5 + v12 + 8) as &i64);
                    v15 = *((v5 + v12 + 16) as &i64);
                    vvar_1571{reg 48} = vvar_88{reg 48} - 8;
                    *((vvar_88{reg 48} - 8) as &&u8) = &g_4d1d55;
                    std::sys::pal::unix::fs::canonicalize(vvar_88{reg 48} + 0x200, v14, v15);
                    v16 = *((vvar_1571{reg 48} + 0x200) as &i64);
                    *((vvar_1571{reg 48} + 168) as &u64) = v16;
                    if v16 == v6 {
                        vvar_1578{reg 48} = vvar_1571{reg 48} - 8;
                        *((vvar_1571{reg 48} - 8) as &&u8) = &g_4d1d77;
                        continue;
                    }
                    *((vvar_1571{reg 48} + 216) as &u64) = v7;
                    v17 = *((vvar_1571{reg 48} + 520) as &i64);
                    v18 = *((vvar_1571{reg 48} + 528) as &i64);
                    *((vvar_1571{reg 48} + 288) as &i64) = *((vvar_1571{reg 48} + 520) as &i64);
                    vvar_1584{reg 48} = vvar_1571{reg 48} - 8;
                    *((vvar_1571{reg 48} - 8) as &&u8) = &g_4d1db1;
                    std::path::Path::components(vvar_1571{reg 48} + 1584, v17, v18);
                    v19 = *((vvar_1584{reg 48} + 728) as &i64);
                    v20 = *((vvar_1584{reg 48} + 1712) as &i64);
                    vvar_365{reg 48} = vvar_1584{reg 48} - 8;
                    *((vvar_1584{reg 48} - 8) as &&u8) = &g_4d1dcf;
                    std::path::Path::components(vvar_1584{reg 48} + 736, v19, v20);
                    v21 = *((vvar_365{reg 48} + 1584) as &i64);
                    v22 = *((vvar_365{reg 48} + 1592) as &i64);
                    v23 = *((vvar_365{reg 48} + 736) as &i64);
                    v24 = *((vvar_365{reg 48} + 744) as &i64);
                    if v22 != v24 {
                        v25 = *((vvar_365{reg 48} + 1600) as &i8);
LABEL_4d1e49:
                        if v25 == 6 {
                            goto LABEL_4d1e81;
                        }
LABEL_4d1e51:
                        v29 = vvar_365{reg 48} + 1601;
                        *((vvar_365{reg 48} + 703) as &i64) = *((&v29[3] as &char + 7) as &i64);
                        v30 = *(&v29 as &i128);
                        vvar_408{reg 224} = ((vvar_539{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1655{reg 224}))
                        v31 = *(&v29[2] as &i128);
                        vvar_409{reg 256} = ((vvar_540{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1657{reg 256}))
                        *((vvar_365{reg 48} + 688) as &u128) = v31;
                        *((vvar_365{reg 48} + 672) as &u128) = v30;
LABEL_4d1e81:
                        v32 = *((vvar_402{reg 48} + 1642) as &i8);
                        v33 = *((vvar_402{reg 48} + 1640) as &i16);
                        *((vvar_402{reg 48} + 344) as &u64) = v21;
                        *((vvar_402{reg 48} + 352) as &u64) = v22;
                        *((vvar_402{reg 48} + 360) as &i8) = 6;
                        v34 = vvar_402{reg 48} + 361;
                        *((&v34[3] as &char + 7) as &i64) = *((vvar_402{reg 48} + 703) as &i64);
                        v35 = *((vvar_402{reg 48} + 672) as &i128);
                        vvar_451{reg 224} = ((vvar_408{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1664{reg 224}))
                        v37 = *((vvar_402{reg 48} + 688) as &i128);
                        vvar_452{reg 256} = ((vvar_409{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1666{reg 256}))
                        v34[2] = v37;
                        *(v34) = v35;
                        *((vvar_402{reg 48} + 400) as &u16) = v33;
                        *((vvar_402{reg 48} + 402) as &u8) = v32;
                        v39 = *((vvar_402{reg 48} + 752) as &i8);
                        v6 = 0x8000000000000000;
                        if v39 != 6 {
                            v40 = vvar_402{reg 48} + 753;
                            *((vvar_402{reg 48} + 143) as &i64) = *((&v40[3] as &char + 7) as &i64);
                            v41 = *(&v40 as &i128);
                            vvar_451{reg 224} = ((vvar_451{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1675{reg 224}))
                            v42 = *(&v40[2] as &i128);
                            vvar_452{reg 256} = ((vvar_452{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1677{reg 256}))
                            *((vvar_402{reg 48} + 128) as &u128) = v42;
                            *((vvar_402{reg 48} + 112) as &u128) = v41;
                        }
                        v43 = *((vvar_402{reg 48} + 794) as &i8);
                        v44 = *((vvar_402{reg 48} + 792) as &i16);
                        *((vvar_402{reg 48} + 896) as &u64) = v23;
                        *((vvar_402{reg 48} + 904) as &u64) = v24;
                        *((vvar_402{reg 48} + 912) as &u8) = v39;
                        v45 = vvar_402{reg 48} + 913;
                        *((&v45[3] as &char + 7) as &i64) = *((vvar_402{reg 48} + 143) as &i64);
                        v46 = *((vvar_402{reg 48} + 112) as &i128);
                        vvar_539{reg 224} = ((vvar_451{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1683{reg 224}))
                        v47 = *((vvar_402{reg 48} + 128) as &i128);
                        vvar_540{reg 256} = ((vvar_452{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1685{reg 256}))
                        v45[2] = v47;
                        *(v45) = v46;
                        *((vvar_402{reg 48} + 952) as &u16) = v44;
                        *((vvar_402{reg 48} + 954) as &u8) = v43;
                        vvar_530{reg 48} = vvar_402{reg 48} - 8;
                        *((vvar_402{reg 48} - 8) as &&u8) = &g_4d1f95;
                        v5 = *((vvar_530{reg 48} + 192) as &i64);
                        if !(core::iter::traits::iterator::Iterator::eq_by(vvar_402{reg 48} + 344, vvar_402{reg 48} + 896, v44, v43, v23, v48) & 255 & 255 & 255) {
                            goto LABEL_4d21f7;
                        }
                        if !(*((vvar_1689{reg 48} + 176) as &i64) == 0x8000000000000000) {
                            goto LABEL_4d2166;
                        }
                        goto LABEL_4d1fb3;
                    } else {
                        v25 = *((vvar_365{reg 48} + 1600) as &i8);
                        if !(*((vvar_1590{reg 48} + 1640) as &i8) == *((vvar_1590{reg 48} + 792) as &i8)) || !(*((vvar_1590{reg 48} + 1641) as &i8) == 2) || !(*((vvar_1590{reg 48} + 793) as &i8) == 2) {
                            goto LABEL_4d1e49;
                        }
                        if v25 != 6 {
                            v26 = *((vvar_365{reg 48} + 752) as &i8);
                            if v26 == 6 {
                                if v25 < 3 {
                                    goto LABEL_4d1e51;
                                }
                            } else {
                                if !(!(v26 < 3 ^ v25 < 3)) {
                                    goto LABEL_4d1e51;
                                }
                            }
                        } else if *((vvar_1590{reg 48} + 752) as &i8) <= 2 {
                            goto LABEL_4d1e81;
                        }
                        *((vvar_365{reg 48} + 720) as &u64) = v21;
                        v27 = *((vvar_365{reg 48} + 720) as &i64);
                        *((vvar_365{reg 48} + 1704) as &u64) = v23;
                        vvar_530{reg 48} = vvar_365{reg 48} - 8;
                        *((vvar_365{reg 48} - 8) as &&u8) = &g_4d2136;
                        v21 = *((vvar_530{reg 48} + 720) as &i64);
                        v28 = *((vvar_530{reg 48} + 1704) as &i64);
                        if !(!bcmp(v27, v23, v22) as i64) {
                            goto LABEL_4d1e49;
                        }
                        v6 = 0x8000000000000000;
                        if *((vvar_1637{reg 48} + 176) as &i64) != 0x8000000000000000 {
LABEL_4d2166:
                            v50 = *((vvar_530{reg 48} + 216) as &i64);
                            if *((vvar_607{reg 48} + 104) as &i64) {
                                v56 = *((vvar_530{reg 48} + 104) as &i64);
                                vvar_530{reg 48} = vvar_530{reg 48} - 8;
                                *((vvar_530{reg 48} - 8) as &&u8) = &g_4d219c;
                            }
                            v58 = v53;
                            v59 = *((vvar_667{reg 48} + 104) as &i64);
                            vvar_530{reg 48} = vvar_667{reg 48} - 8;
                            *((vvar_667{reg 48} - 8) as &&u8) = &g_4d21c0;
                            memcpy(v58, v50, v59);
                            v5 = *((vvar_530{reg 48} + 192) as &i64);
                            v64 = *((vvar_530{reg 48} + 104) as &i64);
                            *((v5 + v12) as &u64) = v64;
                            *((v5 + v12 + 8) as &u64) = v58;
                            *((v5 + v12 + 16) as &u64) = v64;
LABEL_4d21f7:
                            if *((vvar_530{reg 48} + 168) as &i64) {
                                vvar_530{reg 48} = vvar_530{reg 48} - 8;
                                *((vvar_530{reg 48} - 8) as &&u8) = &g_4d221b;
                            }
                            v7 = *((vvar_586{reg 48} + 216) as &i64);
                            continue;
                        }
LABEL_4d1fb3:
                        *((vvar_593{reg 48} + 176) as &i64) = 0x8000000000000000;
                        v49 = v2;
                        vvar_701{reg 48} = vvar_593{reg 48} - 8;
                        *((vvar_593{reg 48} - 8) as &&u8) = &g_4d1fcc;
                        uu_sort::tmp_dir::TmpDirWrapper::next_file(vvar_593{reg 48} + 896, v49);
                        v51 = *((vvar_701{reg 48} + 904) as &i64);
                        *((vvar_701{reg 48} + 176) as &u64) = v51;
                        if v51 == 0x8000000000000000 {
                            v68 = *((vvar_701{reg 48} + 912) as &i128);
                            if *((vvar_1700{reg 48} + 168) as &i64) {
                                *((vvar_701{reg 48} + 192) as &u128) = v68;
                                vvar_701{reg 48} = vvar_701{reg 48} - 8;
                                *((vvar_701{reg 48} - 8) as &&u8) = &g_4d5b85;
                            }
                            v74 = *((vvar_701{reg 48} + 184) as &i64);
                            goto LABEL_4d5c45;
                        } else {
                            *((vvar_701{reg 48} + 720) as &i32) = *((vvar_701{reg 48} + 896) as &i32);
                            v7 = *((vvar_701{reg 48} + 912) as &i64);
                            v54 = *((vvar_701{reg 48} + 920) as &i64);
                            v55 = *((vvar_701{reg 48} + 288) as &i64);
                            *((vvar_701{reg 48} + 104) as &i64) = *((vvar_701{reg 48} + 920) as &i64);
                            vvar_789{reg 48} = vvar_701{reg 48} - 8;
                            *((vvar_701{reg 48} - 8) as &&u8) = &g_4d201f;
                            if !std::sys::pal::unix::fs::copy(v55, v18, v7, v54) {
                                if *((vvar_789{reg 48} + 104) as &i64) {
                                    v62 = *((vvar_789{reg 48} + 104) as &i64);
                                    vvar_789{reg 48} = vvar_789{reg 48} - 8;
                                    *((vvar_789{reg 48} - 8) as &&u8) = &g_4d207b;
                                }
                                v65 = v61;
                                v66 = *((vvar_910{reg 48} + 104) as &i64);
                                vvar_1025{reg 48} = vvar_910{reg 48} - 8;
                                *((vvar_910{reg 48} - 8) as &&u8) = &g_4d20b8;
                                memcpy(v65, v7, v66);
                                v5 = *((vvar_1025{reg 48} + 192) as &i64);
                                v67 = *((vvar_1025{reg 48} + 104) as &i64);
                                *((v5 + v12) as &u64) = v67;
                                *((v5 + v12 + 8) as &u64) = v65;
                                *((v5 + v12 + 16) as &u64) = v67;
                                vvar_1801{reg 48} = vvar_1025{reg 48} - 8;
                                *((vvar_1025{reg 48} - 8) as &&u8) = &g_4d20f9;
                            } else {
                                *((vvar_789{reg 48} + 896) as &i8) = 4;
                                *((vvar_789{reg 48} + 904) as &u64) = v69;
                                vvar_960{reg 48} = vvar_789{reg 48} - 8;
                                *((vvar_789{reg 48} - 8) as &&u8) = &g_4d5bc5;
                                v70 = __rust_alloc(64, 8);
                                v71 = *((vvar_960{reg 48} + 896) as &i128);
                                v72 = *((vvar_960{reg 48} + 912) as &i128);
                                v73 = *((vvar_960{reg 48} + 928) as &i128);
                                *(&v70[6] as &i128) = *((vvar_960{reg 48} + 944) as &i128);
                                v70[4] = v73;
                                v70[2] = v72;
                                *(v70) = v71;
                                v74 = *((vvar_960{reg 48} + 184) as &i64);
                                vvar_701{reg 48} = vvar_960{reg 48} - 8;
                                *((vvar_960{reg 48} - 8) as &&u8) = &g_4d5c30;
LABEL_4d5c45:
                                if *((vvar_774{reg 48} + 1560) as &i64) {
                                    *((vvar_774{reg 48} + 192) as &u128) = v68;
                                    *((vvar_774{reg 48} - 8) as &&u8) = &g_4d5c6e;
                                }
                                v74->field_8 = v68;
                                v74->field_0 = 3;
                                return v74;
                            }
                        }
                    }
                } while ((v12 += 24, *((vvar_210{reg 48} + 296) as &i64) != v12));
            }
            v11 = *((vvar_12{reg 48} + 1560) as &i64);
            if v11 {
                vvar_12{reg 48} = vvar_12{reg 48} - 8;
                *((vvar_12{reg 48} - 8) as &&u8) = &g_4d224e;
                v4 = *((vvar_12{reg 48} + 504) as &i64);
                goto LABEL_4d2259;
            } else {
                v4 = *((vvar_12{reg 48} + 504) as &i64);
LABEL_4d227d:
            }
        }
    }
    v75 = &v5[3 * v4];
    if *((*((vvar_12{reg 48} + 248) as &i64) + 48) as &i64) == v6 {
        goto LABEL_0x4d22bd;
    } else {
        goto LABEL_0x4d303d;
    }
}
