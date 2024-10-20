fn uu_tsort::Graph::run_tsort(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x180]
    let v1: i8;  // [bp-0x171]
    let v2: Enum;  // [bp-0x170], Other Possible Types: i256
    let v3: i64;  // [sp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x150]
    let v6: i32;  // [bp-0x148]
    let v7: i64;  // [sp-0x140]
    let v8: i64;  // [sp-0x138]
    let v9: i128;  // [sp-0x130], Other Possible Types: struct16
    let v10: i64;  // [sp-0x128]
    let v11: i64;  // [sp-0x120]
    let v12: i64;  // [sp-0x118]
    let v13: i64;  // [sp-0x110]
    let v14: i64;  // [sp-0x108]
    let v15: i64;  // [sp-0x100]
    let v16: i64;  // [sp-0xf8]
    let v17: i64;  // [sp-0xf0]
    let v18: i64;  // [bp-0xe8]
    let v19: i192;  // [sp-0xd8], Other Possible Types: struct24
    let v20: i128;  // [sp-0xc8]
    let v21: i8;  // [bp-0xc0]
    let v22: i64;  // [sp-0xb8]
    let v23: i64;  // [sp-0xb0]
    let v24: i128;  // [sp-0x98]
    let v25: i64;  // [sp-0x80]
    let v26: i128;  // [sp-0x78]
    let v27: i64;  // [sp-0x68]
    let v28: i64;  // [sp-0x58]
    let v29: i64;  // [sp-0x50]
    let v30: i64;  // [sp-0x48]
    let v31: i16;  // [sp-0x40]
    let v32: i64;  // [sp-0x38]
    let v34: i64;  // r14
    let v35: i64;  // rax
    let v36: i64;  // rcx
    let v37: i64;  // 4096
    let v38: i64;  // rsi
    let v39: i64;  // rax
    let v41: i256;  // ymm0
    let v42: i256;  // ymm0
    let v44: i64;  // rdx
    let v45: i64;  // rbx
    let v46: i64;  // r15
    let v47: i64;  // r14
    let v48: i64;  // rcx
    let v49: i64;  // r12
    let v50: i64;  // rbp
    let v51: i64;  // rsi
    let v52: i64;  // rdx
    let v54: i64;  // r13
    let v58: i64;  // rax
    let v59: i64;  // r13
    let v60: i128;  // xmm0
    let v62: i64;  // rdx
    let v64: i64;  // r15
    let v65: i64;  // rbp
    let v67: i64;  // rax
    let v68: i64;  // rax
    let v69: i64;  // r13
    let v70: i64;  // rbx
    let v72: i64;  // rax
    let v75: i64;  // r15
    let v76: i64;  // rcx
    let v78: i64;  // r13
    let v79: i64;  // rdx
    let v80: i64;  // rcx
    let v81: i64;  // rbx
    let v82: i64;  // r12
    let v83: i64;  // r14
    let v84: i64;  // rax
    let v85: i64;  // rcx
    let v117: i64;  // r14
    let v118: i64;  // fs
    let v119: i64;  // rbx
    let v120: i64;  // rax
    let v121: i64;  // rbx
    let v122: i64;  // r15
    let v123: i64;  // rax
    let v124: i128;  // xmm0
    let v125: i128;  // xmm0
    let v126: i64;  // rcx
    let v127: i64;  // rdx
    let v128: i64;  // rbx
    let v129: i128;  // xmm0
    let v130: i256;  // ymm0
    let v131: i64;  // rax
    let v132: i128;  // xmm0
    let v133: i32;  // eax
    let v134: i64;  // rdx
    let v135: i256;  // ymm0
    let v136: i64;  // rax
    let v137: i64;  // rax
    let v138: i64;  // rbp
    let v139: i64;  // rax
    let v140: i64;  // rcx
    let v141: i64;  // r14
    let v142: i64;  // r15
    let v143: i128;  // xmm0
    let v144: i128;  // xmm0
    let v145: i128;  // xmm0
    let v146: i128;  // xmm0
    let v147: i128;  // xmm0
    let v149: i64;  // r12
    let v150: i64;  // r12
    let v152: i64;  // rax
    let v153: i64;  // rax
    let v155: i128;  // xmm0
    let v157: i64;  // rax

    v34 = *((a1 + 24) as &i64);
    if !v34 {
        v35 = 8;
        v36 = 0;
    } else {
        v35 = __rust_alloc(v34 * 16, 8);
        v38 = a1;
        v36 = *((v38 + 24) as &i64);
    }
    v9 = v34;
    v10 = v35;
    v11 = 0;
    v39 = *(v37 as &i64);
    v28 = v39;
    v29 = v39 + 16;
    v30 = v39 + *((v37 + 8) as &i64) + 1;
    v31 = ~(UnaryOp GetMSBs);
    v32 = v36;
    v19 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v28);
    vvar_35{reg 224} = ((((vvar_542{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=vvar_538{reg 16}, size=16, endness=Iend_LE))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1375{stack -216}))
    *(&v2 as &Enum) = Enum {
        field_0: v41 as u128
        field_16: 0
        field_24: *((&v19 as &char + 16) as &i64)
    };
    if v44 >= 2 {
        v45 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v2);
        if v44 >= 21 {
            core::slice::sort::unstable::ipnsort(v45, v44, &v1, v48);
        } else {
            v46 = v44 * 16 + v45;
            v47 = v45 + 16;
            v0 = 16;
            v18 = v46;
            do {
                v49 = *(v47 as &i64);
                v50 = *((v47 + 8) as &i64);
                v51 = *((v47 - 16) as &i64);
                v52 = *((v47 - 8) as &i64);
                v54 = v50 - v52;
                if v58 < 0 {
                    v0 = v0;
                    do {
                        v59 = v0;
                        v60 = *((v45 + v59 - 16) as &i128);
                        vvar_35{reg 224} = ((vvar_107{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_615{reg 224}))
                        *((v45 + v59) as &i128) = v60;
                        if v59 == 16 {
                            goto LABEL_486040;
                        }
                        v62 = *((v45 + v59 - 24) as &i64);
                        v64 = v50 - v62;
                        v67 = memcmp(v49, *((v45 + v59 - 32) as &i64), v65) as u32;
                        v69 = v59 - 16;
                    } while (v68 < 0);
LABEL_486040:
                    v46 = v18;
                    *(v70 as &i64) = v49;
                    *((v70 + 8) as &i64) = v50;
                }
                v47 += 16;
                v0 += 16;
            } while (v47 != v46);
        }
    }
    v72 = v4;
    if !v72 {
LABEL_48640d:
        v117 = *((a1 + 24) as &i64);
        if !v117 {
            v119 = a0;
            *((v119 + 24) as &i64) = v11;
            *((v119 + 8) as &i128) = v9;
            *(v119 as &i64) = 0;
            if !v2 {
                return v119;
            }
        } else {
            if *((*(v118 as &i64) - 48) as &i64) {
                v120 = *(v118 as &i64) - 48;
                v121 = *((v120 + 8) as &i64);
                v122 = *((v120 + 16) as &i64);
            } else {
                v121 = std::sys::pal::unix::rand::hashmap_random_keys();
                v123 = *(v118 as &i64) - 48;
                *(v123 as &i64) = 1;
                *((v123 + 16) as &i64) = v122;
                v117 = *((a1 + 24) as &i64);
            }
            *((*(v118 as &i64) + -40) as &i64) = v121 + 1;
            v22 = v121;
            v23 = v122;
            v124 = anon.c57a7805e9a900e622496ec0d4f4cf5c.5.llvm.6768286536187217038;
            v19 = v124;
            v125 = g_4e7770;
            v20 = v125;
            if !v117 {
                v15 = v117;
                v16 = 8;
                v17 = 0;
                goto LABEL_486874;
            }
            v126 = *((a1 + 24) as &i64);
            v15 = v117;
            v16 = __rust_alloc(v117 * 16, 8);
            v17 = 0;
            if !v126 {
LABEL_486874:
                core::panicking::panic(); /* do not return */
            }
            v127 = *(a1 as &i64);
            v128 = v127 + 16;
            v129 = *(v127 as &i128);
            vvar_234{reg 224} = ((((((vvar_53{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_950{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_952{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_989{reg 224}))
            v131 = ~(UnaryOp GetMSBs);
            do {
                v14 = v126;
                if v131 {
                    v6 = v131 - 1 & v131;
                } else {
                    do {
                        v132 = *(v128 as &i128);
                        vvar_234{reg 224} = ((vvar_244{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1001{reg 224}))
                        v133 = UnaryOp GetMSBs;
                        v127 -= 0x300;
                        v128 += 16;
                    } while (v133 == 65535);
                    v131 = ~(v133);
                    v6 = v131 & 4294967294 - v133;
                }
                v136 = (!(v131 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
                v137 = -(v136) * 48;
                v0 = *((v134 + v137 - 48) as &i64);
                v127 = v134;
                v138 = *((v134 + v137 - 40) as &i64);
                if *((&v20 as &char + 8) as &i64) {
                    v139 = core::hash::BuildHasher::hash_one(&v22, v0, v138);
                    v140 = v19;
                    v141 = *((&v19 as &char + 8) as &i64);
                    v142 = v141 & v139;
                    vvar_1056{reg 224} = Conv(64->128, (vvar_1047{reg 16} >> 0x39<8>))
                    v144 = BinaryOp InterleaveLOV;
                    v145 = v144 >> 64 CONCAT v144 CONCAT v144 CONCAT v144 CONCAT v144;
                    v146 = v145 CONCAT v145 CONCAT v145 CONCAT v145;
                    vvar_234{reg 224} = ((((((((vvar_234{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1056{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1058{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1060{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1062{reg 224}))
                    v24 = v146;
                    v8 = v140;
                    v5 = 0;
                    loop {
                        v147 = *((v8 + v142) as &i128);
                        v18 = v147;
                        vvar_1073{reg 224} = ((((vvar_323{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1070{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1070{reg 224} CmpEQV vvar_1426{stack -152})))
                        v149 = UnaryOp GetMSBs;
                        if v149 {
                            loop {
                                v150 = v149;
                                v152 = v140 - 16 - ((!(v150 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295) + v142 & v141) * 16;
                                if *((v152 + 8) as &i64) == v138 && !bcmp(v0, *(v152 as &i64), v138) {
                                    break;
                                }
                                v153 = v150 - 1 & 4294967295;
                                if !(v153 & v150) {
                                    goto LABEL_4866ae;
                                }
                            }
                        }
LABEL_4866ae:
                        v155 = v18;
                        vvar_234{reg 224} = ((((vvar_1073{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_1117{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_1117{reg 224} CmpEQV 0xffffffffffffffffffffffffffffffff<128>)))
                        if UnaryOp GetMSBs {
                            break;
                        }
                        v157 = v5;
                        v5 = v157 + 16;
                        v142 = v142 + v157 + 16 & v141;
                    }
                }
                if uu_tsort::Graph::dfs(a1, v0, v138, &v19, &v15) as i8 {
                    v27 = v17;
                    v26 = v15;
                    v119 = a0;
                    *((v119 + 24) as &i64) = v27;
                    *((v119 + 8) as &i128) = v26;
                    *(v119 as &i64) = 1;
                    if !v9 {
                        return v119;
                    }
                    goto LABEL_486814;
                }
            } while ((v131 = v6 as u32 as u64, v126 = v14 - 1, v14 != 1));
        }
LABEL_486814:
        return v119;
    }
    v7 = a1 + 32;
    v75 = 0x8000000000000000;
    v25 = 0x8000000000000000;
    loop {
        v76 = v3;
        v79 = v2.field_8;
        v3 = -(v78) + v76 + 1;
        v4 = v72 - 1;
        v80 = v76 * 16;
        v81 = *((v79 + v80) as &i64);
        v82 = *((v79 + v80 + 8) as &i64);
        v83 = v11;
        if v83 == v9 {
            v9 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        v84 = v10;
        v85 = v83 * 16;
        *((v84 + v85) as &i64) = v81;
        *((v84 + v85 + 8) as &i64) = v82;
        v11 = v83 + 1;
        hashbrown::raw::RawTable<T,A>::remove_entry(&v19, a1, core::hash::BuildHasher::hash_one(v7, v81, v82), v81, v82);
        v13 = *((&v19 as &char + 16) as &i64);
        if v13 != v75 {
            break;
        }
        v72 = v4;
        if !v72 {
            goto LABEL_48640d;
        }
    }
    v12 = v21;
    if !v22 {
        goto LABEL_0x4863d0;
    } else {
        goto LABEL_0x486217;
    }
}
