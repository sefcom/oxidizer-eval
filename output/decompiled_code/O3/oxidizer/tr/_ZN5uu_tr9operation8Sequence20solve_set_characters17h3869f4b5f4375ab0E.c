fn uu_tr::operation::Sequence::solve_set_characters(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x200]
    let v1: i64;  // [sp-0x1f8]
    let v2: i64;  // [sp-0x1f0]
    let v3: i64;  // [sp-0x1e8]
    let v4: i64;  // [sp-0x1e0]
    let v5: i64;  // [sp-0x1d8]
    let v6: i32;  // [sp-0x1cc]
    let v7: struct24;  // [sp-0x1c8], Other Possible Types: i192
    let v8: i64;  // [sp-0x1b8]
    let v9: i192;  // [sp-0x1a8], Other Possible Types: struct24, struct8
    let v10: i8;  // [bp-0x1a0]
    let v11: i64;  // [sp-0x198]
    let v12: i8;  // [bp-0x190]
    let v14: i64;  // [sp-0x170]
    let v15: i192;  // [sp-0x168], Other Possible Types: struct24
    let v16: i64;  // [sp-0x150]
    let v17: i64;  // [sp-0x148]
    let v18: i64;  // [sp-0x140]
    let v19: i64;  // [sp-0x138]
    let v20: struct11;  // [bp-0x130]
    let v21: i64;  // [sp-0x120]
    let v22: Enum;  // [bp-0x118]
    let v23: struct8;  // [bp-0x100]
    let v24: i64;  // [sp-0xf0]
    let v25: i64;  // [sp-0xe0]
    let v26: i64;  // [sp-0xd8]
    let v27: i64;  // [sp-0xd0]
    let v28: struct8;  // [bp-0xc8]
    let v29: i64;  // [sp-0xb8]
    let v30: i64;  // [sp-0xa8]
    let v31: i64;  // [sp-0xa0]
    let v32: i64;  // [sp-0x98]
    let v33: struct24;  // [bp-0x90]
    let v34: i64;  // [sp-0x70]
    let v35: i192;  // [bp-0x60]
    let v36: i64;  // [sp-0x40]
    let v38: i8;  // [bp+0x10]
    let v39: i64;  // rbx
    let v40: i64;  // r14
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i64;  // rcx
    let v44: i64;  // rax
    let v45: i64;  // rcx
    let v46: i256;  // ymm0
    let v47: i256;  // ymm0
    let v48: i256;  // ymm1
    let v49: i256;  // ymm1
    let v50: i64;  // rax
    let v51: i256;  // ymm4
    let v52: i256;  // ymm5
    let v53: i128;  // xmm4
    let v54: i64;  // r8
    let v55: i128;  // xmm5
    let v56: i128;  // xmm4
    let v57: i128;  // xmm4
    let v58: i128;  // xmm4
    let v59: i128;  // xmm4
    let v60: i128;  // xmm4
    let v61: i128;  // xmm0
    let v62: i128;  // xmm5
    let v63: i128;  // xmm5
    let v64: i128;  // xmm4
    let v65: i128;  // xmm4
    let v66: i128;  // xmm4
    let v67: i128;  // xmm1
    let v69: i128;  // xmm1
    let v70: i256;  // ymm1
    let v71: i256;  // ymm0
    let v72: i64;  // rdx
    let v73: i64;  // rax
    let v75: i256;  // ymm4
    let v76: i256;  // ymm5
    let v77: i64;  // r9
    let v78: i64;  // rbp
    let v79: i64;  // r13
    let v80: i64;  // r12
    let v81: i64;  // rcx
    let v82: i64;  // rax
    let v83: i64;  // rcx
    let v84: i256;  // ymm0
    let v85: i256;  // ymm1
    let v86: i64;  // rax
    let v87: i128;  // xmm4
    let v88: i128;  // xmm5
    let v89: i128;  // xmm4
    let v90: i128;  // xmm4
    let v91: i128;  // xmm4
    let v92: i128;  // xmm4
    let v93: i128;  // xmm4
    let v94: i128;  // xmm0
    let v95: i128;  // xmm5
    let v96: i128;  // xmm5
    let v97: i128;  // xmm4
    let v98: i128;  // xmm4
    let v99: i128;  // xmm4
    let v100: i128;  // xmm1
    let v101: i64;  // rdx
    let v102: i64;  // rdx
    let v103: i64;  // rax
    let v104: i64;  // rcx
    let v105: i64;  // r12
    let v106: i64;  // r13
    let v107: i64;  // r12
    let v108: i64;  // rax
    let v110: i64;  // rcx
    let v111: i64;  // rax
    let v112: i64;  // rdx
    let v113: i64;  // rax
    let v114: i64;  // rbp
    let v117: i64;  // rdx
    let v118: i64;  // r12
    let v119: i64;  // rbx
    let v120: i64;  // rax
    let v121: i64;  // r14
    let v122: i64;  // rbp
    let v123: i64;  // rbx
    let v124: i64;  // r10
    let v125: i64;  // r13
    let v126: i64;  // rax
    let v127: i64;  // r12
    let v128: i8;  // dl
    let v129: i8;  // al
    let v130: i64;  // rax
    let v131: i64;  // rcx
    let v133: i64;  // rcx
    let v134: i64;  // rdx
    let v135: i8;  // dil
    let v136: i8;  // sil
    let v137: i64;  // rax
    let v139: i64;  // r9
    let v140: i64;  // r9
    let v141: i8;  // dil
    let v142: i8;  // sil
    let v143: i64;  // rdx
    let v145: i64;  // r9
    let v146: i64;  // r9
    let v147: i64;  // rax
    let v148: i64;  // rcx
    let v149: i8;  // dl

    v9 = uu_tr::operation::Sequence::from_str(a1, a2, a3, a4, a5);
    v39 = v10;
    v40 = v11;
    v41 = v12;
    if v9 {
        *((a0 + 8) as &i64) = v39;
        *((a0 + 16) as &i64) = v40;
        *((a0 + 24) as &i64) = v1;
        *(a0 as &i64) = 0x8000000000000000;
        return a0;
    }
    v1 = v41;
    if v1 {
        v42 = v1;
        if v42 < 4 {
            v43 = 0;
            v44 = 0;
            goto LABEL_48849a;
        } else {
            v44 = v42 & -4;
            v45 = v40 + 48;
            v47 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v49 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do {
                vvar_626{reg 352} = Conv(32->128, ((Load(addr=(vvar_41{reg 24} - 0x20<64>), size=4, endness=Iend_LE) * 0x100<32>) | Conv(8->32, Load(addr=(vvar_41{reg 24} - 0x30<64>), size=1, endness=Iend_LE))))
                v54 = *(v45 as &i32) * 0x100 | *((v45 - 16) as &i8);
                vvar_631{reg 384} = Conv(64->128, vvar_11{reg 80})
                v56 = BinaryOp CmpEQV;
                v57 = BinaryOp InterleaveLOV;
                v58 = v57 >> 64 CONCAT v57 >> 48 CONCAT v57 >> 16 CONCAT v57 >> 16 CONCAT v57;
                v59 = v58 >> 96 CONCAT v58 >> 32 CONCAT v58 >> 32 CONCAT v58;
                v60 = v59 & 18446744073709551617;
                v61 = BinaryOp AddV;
                vvar_46{reg 224} = ((vvar_46{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_643{reg 224}))
                v62 = BinaryOp CmpEQV;
                v63 = BinaryOp InterleaveLOV;
                vvar_21{reg 384} = ((((((vvar_49{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_631{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_645{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_647{reg 384}))
                v64 = v63 >> 64 CONCAT v63 >> 48 CONCAT v63 >> 16 CONCAT v63 >> 16 CONCAT v63;
                v65 = v64 >> 96 CONCAT v64 >> 32 CONCAT v64 >> 32 CONCAT v64;
                v66 = v65 & 18446744073709551617;
                vvar_20{reg 352} = ((((((((((((((((((vvar_48{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_626{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_633{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_635{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_637{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_639{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_641{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_649{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_651{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_653{reg 352}))
                v67 = BinaryOp AddV;
                vvar_47{reg 256} = ((vvar_47{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_655{reg 256}))
                v45 += 64;
            } while (v50 != 4);
            v69 = BinaryOp AddV;
            vvar_19{reg 256} = ((vvar_47{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_662{reg 256}))
            vvar_16{reg 224} = ((((vvar_46{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->32, (vvar_662{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_662{reg 256} >> 0x40<8>))) CONCAT (Conv(128->32, (vvar_662{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_662{reg 256} >> 0x40<8>)))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->32, (vvar_662{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_662{reg 256} >> 0x40<8>))) CONCAT (Conv(128->32, (vvar_662{reg 256} >> 0x60<8>)) CONCAT Conv(128->32, (vvar_662{reg 256} >> 0x40<8>)))) + vvar_662{reg 256})))
            v43 = v71;
            if v1 != v44 {
LABEL_48849a:
                v72 = v1 - v44;
                v73 = v44 * 16 + v40;
                do {
                    v43 += -0x100 | *(v73 as &i8) == 2;
                    v73 += 16;
                } while (v72 != 1);
            }
        }
        if !v43 {
            goto LABEL_4884e4;
        }
        *((a0 + 8) as &i64) = 9223372036854775811;
        *(a0 as &i64) = 0x8000000000000000;
    }
LABEL_4884e4:
    v6 = a5;
    v9 = uu_tr::operation::Sequence::from_str(a3, a4, v43, v54, v77);
    v78 = v10;
    v79 = v11;
    v80 = v12;
    if v9 {
        *((a0 + 8) as &i64) = v78;
        *((a0 + 16) as &i64) = v79;
        *((a0 + 24) as &i64) = v80;
        *(a0 as &i64) = 0x8000000000000000;
    }
    if v80 {
        if v80 < 4 {
            v81 = 0;
            v82 = 0;
            goto LABEL_4885e8;
        } else {
            v82 = v80 & -4;
            v83 = v79 + 48;
            v84 = v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v85 = v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            do {
                vvar_737{reg 352} = Conv(32->128, ((Load(addr=(vvar_145{reg 24} - 0x20<64>), size=4, endness=Iend_LE) * 0x100<32>) | Conv(8->32, Load(addr=(vvar_145{reg 24} - 0x30<64>), size=1, endness=Iend_LE))))
                vvar_742{reg 384} = Conv(32->128, ((Load(addr=vvar_145{reg 24}, size=4, endness=Iend_LE) * 0x100<32>) | Conv(8->32, Load(addr=(vvar_145{reg 24} - 0x10<64>), size=1, endness=Iend_LE))))
                v89 = BinaryOp CmpEQV;
                v90 = BinaryOp InterleaveLOV;
                v91 = v90 >> 64 CONCAT v90 >> 48 CONCAT v90 >> 16 CONCAT v90 >> 16 CONCAT v90;
                v92 = v91 >> 96 CONCAT v91 >> 32 CONCAT v91 >> 32 CONCAT v91;
                v93 = v92 & 18446744073709551617;
                v94 = BinaryOp AddV;
                vvar_150{reg 224} = ((vvar_150{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_754{reg 224}))
                v95 = BinaryOp CmpEQV;
                v96 = BinaryOp InterleaveLOV;
                vvar_21{reg 384} = ((((((vvar_153{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_742{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_756{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_758{reg 384}))
                v97 = v96 >> 64 CONCAT v96 >> 48 CONCAT v96 >> 16 CONCAT v96 >> 16 CONCAT v96;
                v98 = v97 >> 96 CONCAT v97 >> 32 CONCAT v97 >> 32 CONCAT v97;
                v99 = v98 & 18446744073709551617;
                vvar_20{reg 352} = ((((((((((((((((((vvar_152{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_737{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_744{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_746{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_748{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_750{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_752{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_760{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_762{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_764{reg 352}))
                v100 = BinaryOp AddV;
                vvar_151{reg 256} = ((vvar_151{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_766{reg 256}))
                v83 += 64;
                v101 = v86 - 4;
            } while (v86 != 4);
            vvar_130{reg 24} = Conv(256->64, ((((vvar_150{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x40<8>))) CONCAT (Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x40<8>)))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x40<8>))) CONCAT (Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x60<8>)) CONCAT Conv(128->32, ((vvar_766{reg 256} + vvar_754{reg 224}) >> 0x40<8>)))) + (vvar_766{reg 256} + vvar_754{reg 224})))))
            if v80 != v82 {
LABEL_4885e8:
                v102 = v80 - v82;
                v103 = v82 * 16 + v79;
                do {
                    v81 += -0x100 | *(v103 as &i8) == 2;
                    v103 += 16;
                    v101 = v102 - 1;
                } while (v102 != 1);
            }
        }
        if v81 <= 1 {
            goto LABEL_48862b;
        }
        v104 = 9223372036854775810;
        goto LABEL_48866f;
    }
LABEL_48862b:
    v105 = v80 * 16;
    if v38 {
        do {
            v108 = v107;
            if !v108 {
                goto LABEL_48867b;
            }
            v101 = v106;
            v110 = v101 + 16;
            v111 = v108 - 16;
            if !(*(v101 as &i8) == 4) {
                continue;
            }
            v112 = *((v101 + 1) as &i8);
            v101 = v112 | -0x100 | v112 - 6 & 251;
        } while (!(v112 - 6 & 251));
        v104 = 9223372036854775814;
LABEL_48866f:
        *((a0 + 8) as &i64) = v104;
        *(a0 as &i64) = 0x8000000000000000;
    }
LABEL_48867b:
    v0 = v79;
    v17 = v1 * 16;
    v33 = struct24 {
        field_0: v40
        field_8: v3
        field_16: 0
    };
    v3 = v17 + v40;
    v34 = 0;
    v5 = v39;
    v4 = v40;
    v2 = v78;
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v33, v101);
    if v6 {
        v20 = struct11 {
            field_0: &v7
            field_8: 0
            field_10: 255
        };
        v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20);
        v7 = v9;
    }
    v113 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::fold(v0, v105 + v0, 0);
    v18 = v8;
    v114 = v18 - v113;
    if v113 > v18 {
        v114 = 0;
    }
    v21 = v114;
    v22 = Enum {
        field_0: v115
        field_8: v116
        field_16: &v21
    };
    v9 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22);
    v2 = v9;
    v117 = v11;
    v0 = *((&v9 as &char + 8) as &i64);
    v16 = v117 * 16;
    v14 = v0 + v16;
    v19 = v117;
    if v19 {
        v118 = 0;
        v0 = v0;
        do {
            v119 = v0;
            if *(v119 as &i8) == 4 {
                if v118 {
                    v25 = v0;
                    v26 = v14;
                    v27 = v118;
                    v23 = struct8 {
                        field_0: 0
                    };
                    v24 = 0;
                    v120 = core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(&v23);
                } else {
                    v120 = 0;
                }
                if v1 {
                    if !v120 && *(v4 as &i8) == 4 {
                        continue;
                    }
                    if v1 != 1 {
                        v121 = 1;
                        v122 = 16;
                        while (!(*((v4 + v122) as &i8) == 4) || !((v30 = v4, v31 = v3, v32 = v121, v28 = struct8 {
    field_0: 0
}, v29 = 0, core::iter::adapters::flatten::FlattenCompat<I,U>::iter_fold(&v28) == v120))) {
                            v122 += 16;
                            v121 = v32 + 1;
                            if v17 == v122 {
                                goto LABEL_48893d;
                            }
                        }
                    }
                }
LABEL_48893d:
                *((a0 + 8) as &i64) = 9223372036854775815;
                *(a0 as &i64) = 0x8000000000000000;
            }
        } while ((v123 = v119 + 16, v118 += 1, v123 != v14));
    }
    v35 = v0;
    v36 = 0;
    v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v35, v19);
    v124 = *((&v15 as &char + 16) as &i64);
    if !v124 {
        goto LABEL_488aa5;
    }
    v1 = *((&v15 as &char + 8) as &i64);
    if v124 < 0 {
        v3 = 0;
    }
    v3 = 1;
    v125 = v124;
    v126 = __rust_alloc(v124, 1);
    v127 = v126;
    memcpy(v126, v1, v125);
    v124 = v125;
    if v125 == 1 {
LABEL_488aa5:
    }
    if v124 >= 21 {
        v3 = v124;
        core::slice::sort::stable::driftsort_main(v127, v124, &v9);
        v3 = v3;
    } else {
        if (v124 & 1) {
            v130 = v127 + 1;
        } else {
            v128 = *(v127 as &i8);
            v129 = *((v127 + 1) as &i8);
            if v129 < v128 {
                v131 = 1;
                do {
                    *((v127 + v131) as &i8) = v128;
                    if v131 == 1 {
                        goto LABEL_488cbd;
                    }
                } while ((v123 = v119 + 16, v118 += 1, v123 != v14));
LABEL_488cbd:
                *(v133 as &i8) = v129;
            }
            v130 = v127 + 2;
        }
        if v124 != 2 {
            v134 = v130 + 1;
            do {
                v135 = *((v130 - 1) as &i8);
                v136 = *(v130 as &i8);
                if v136 < v135 {
                    do {
                        *(v137 as &i8) = v135;
                        if v139 == v127 {
                            break;
                        }
                    } while ((v123 = v119 + 16, v118 += 1, v123 != v14));
                    *(v140 as &i8) = v136;
                }
                v141 = *(v130 as &i8);
                v142 = *((v130 + 1) as &i8);
                if v142 < v141 {
                    do {
                        *(v143 as &i8) = v141;
                        if v145 == v127 {
                            break;
                        }
                    } while ((v123 = v119 + 16, v118 += 1, v123 != v14));
                    *(v146 as &i8) = v142;
                }
                v130 += 2;
                v134 += 2;
            } while (v130 != v127 + v124);
        }
    }
    v147 = 1;
    do {
        if *((v127 + v147) as &i8) == *((v127 + v147 - 1) as &i8) {
            for (v148 = v147 + 1; v148 < v3; v148 += 1) {
                v149 = *((v127 + v148) as &i8);
                if v149 != *((v127 + v147 - 1) as &i8) {
                    *((v127 + v147) as &i8) = v149;
                    v147 += 1;
                }
            }
        }
    } while ((v123 = v119 + 16, v118 += 1, v123 != v14));
}
