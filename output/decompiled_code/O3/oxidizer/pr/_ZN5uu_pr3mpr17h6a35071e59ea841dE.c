fn uu_pr::mpr(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x290], Other Possible Types: struct16
    let v1: i64;  // [sp-0x288]
    let v2: i64;  // [sp-0x280]
    let v3: i64;  // [sp-0x278]
    let v4: i192;  // [sp-0x268], Other Possible Types: struct32, struct24
    let v5: i128;  // [sp-0x258]
    let v6: i64;  // [bp-0x248]
    let v7: i128;  // [sp-0x238]
    let v8: i64;  // [sp-0x218]
    let v9: i8;  // [bp-0x210]
    let v10: i64;  // [sp-0x208], Other Possible Types: Enum, struct32, struct24
    let v11: i128;  // [bp-0x200]
    let v12: i128;  // [bp-0x1f0]
    let v13: i64;  // [sp-0x1e8]
    let v14: i128;  // [sp-0x1e0]
    let v15: i64;  // [sp-0x1d0]
    let v16: i64;  // [sp-0x1c8]
    let v17: i64;  // [sp-0x1c0]
    let v18: i64;  // [sp-0x1b8], Other Possible Types: Enum
    let v19: i64;  // [sp-0x1b0], Other Possible Types: Enum
    let v20: i64;  // [sp-0x1a8]
    let v21: i128;  // [sp-0x1a0]
    let v22: i64;  // [sp-0x190]
    let v23: i64;  // [sp-0x188]
    let v24: i64;  // [sp-0x180]
    let v25: i64;  // [sp-0x178]
    let v26: i64;  // [sp-0x170]
    let v27: i128;  // [sp-0x168]
    let v28: i128;  // [sp-0x158]
    let v29: i8;  // [bp-0x148]
    let v30: i64;  // [sp-0x140]
    let v31: i64;  // [sp-0x138]
    let v32: i128;  // [bp-0x130]
    let v33: i64;  // [sp-0x120]
    let v34: i64;  // [sp-0x118]
    let v35: i8;  // [sp-0x110]
    let v36: i64;  // [sp-0x108]
    let v37: i64;  // [sp-0x100], Other Possible Types: Enum
    let v38: i576;  // [sp-0xf8]
    let v39: i128;  // [sp-0xe8]
    let v40: i128;  // [sp-0xd8]
    let v41: i64;  // [sp-0xc8]
    let v42: i64;  // [sp-0xc0]
    let v43: i64;  // [sp-0xb8]
    let v44: i64;  // [sp-0xb0]
    let v45: i128;  // [sp-0xa8]
    let v46: i128;  // [sp-0x98]
    let v47: i128;  // [sp-0x88]
    let v48: i64;  // [sp-0x70], Other Possible Types: struct64, struct8
    let v49: i512;  // [sp-0x68]
    let v50: i128;  // [sp-0x58]
    let v51: i64;  // [bp-0x48]
    let v52: i64;  // [sp-0x40]
    let v53: i64;  // [sp-0x38]
    let v55: i64;  // r14
    let v56: i64;  // 4096
    let v57: i64;  // rbx
    let v58: i64;  // rax
    let v59: i64;  // r14
    let v60: i64;  // rax
    let v61: i64;  // rbx
    let v62: i64;  // rcx
    let v63: i64;  // r15
    let v66: i128;  // xmm0
    let v67: i256;  // ymm0
    let v68: i256;  // ymm0
    let v69: i64;  // r12
    let v70: i64;  // r15
    let v71: i64;  // rdx
    let v72: i256;  // ymm1
    let v73: i256;  // ymm2
    let v74: i256;  // ymm3
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v77: i128;  // xmm2
    let v78: i64;  // rbp
    let v79: i128;  // xmm0
    let v80: i256;  // ymm0
    let v81: i128;  // xmm1
    let v82: i256;  // ymm1
    let v83: i64;  // rbx
    let v84: i64;  // rsi
    let v85: i128;  // xmm0
    let v86: i128;  // xmm1
    let v87: i128;  // xmm0
    let v88: i128;  // xmm1
    let v89: i64;  // rbx
    let v90: i128;  // xmm0
    let v91: i128;  // xmm1
    let v92: i128;  // xmm2
    let v93: i64;  // rbx
    let v95: i128;  // xmm0
    let v96: i128;  // xmm1
    let v97: i128;  // xmm2
    let v98: i128;  // xmm0
    let v99: i256;  // ymm0
    let v100: i128;  // xmm1
    let v101: i256;  // ymm1
    let v102: i128;  // xmm2
    let v103: i256;  // ymm2
    let v104: i64;  // rbx
    let v105: i64;  // rbp
    let v106: i128;  // xmm0
    let v107: i256;  // ymm0
    let v108: i128;  // xmm1
    let v109: i256;  // ymm1
    let v110: i128;  // xmm2
    let v111: i256;  // ymm2
    let v112: i128;  // xmm3
    let v113: i256;  // ymm3
    let v115: i64;  // r15
    let v116: i128;  // xmm0
    let v117: i128;  // xmm1
    let v118: i128;  // xmm2
    let v119: i128;  // xmm3
    let v120: i256;  // ymm3
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i128;  // xmm0
    let v124: i128;  // xmm1
    let v125: i128;  // xmm2
    let v126: i128;  // xmm3
    let v127: i64;  // rdx
    let v128: i64;  // r15
    let v129: i64;  // rsi
    let v130: i64;  // rdx
    let v131: i128;  // xmm0
    let v132: i64;  // rbx

    v55 = 9223372036854775809;
    if a2 {
        v3 = a1;
        do {
            v57 = v56;
            v18 = uu_pr::open(*(v57 as &i64), *((v57 + 8) as &i64));
            v58 = v18;
            v59 = v20;
            if v58 != 9223372036854775813 {
                v62 = *((&v18 as &char + 24) as &i64);
                v63 = a0;
                *(v63 as &i64) = v58;
                *((v63 + 8) as &i64) = v19;
                *((v63 + 16) as &i64) = v59;
                *((v63 + 24) as &i64) = v62;
                return v63;
            }
            if *(v59 as &i64) {
                v60();
            }
            v61 = v57 + 16;
        } while (v61 != (a2 << 4) + a1);
        v55 = 9223372036854775809;
    }
    v10 = struct24 {
        field_0: v64
        field_8: v65 * 16 + v10
        field_16: 0
    };
    v13 = &v9;
    v4 = itertools::kmerge_impl::kmerge_by(&v10);
    v19 = 0;
    v66 = v4;
    v21 = v66;
    v22 = *((&v4 as &char + 16) as &i64);
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v26 = 9223372036854775809;
    vvar_43{reg 224} = (((vvar_389{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_388{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
    v32 = 0;
    v33 = 0;
    v34 = -1;
    v35 = 0;
    v69 = *((a3 + 304) as &i64);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v36 = 1;
    v70 = 0;
    v42 = 9223372036854775810;
    v3 = 0x8000000000000000;
    v71 = 0;
    loop {
        v18 = -1;
        if *((&v32 as &char + 8) as &i64) > v8 {
LABEL_548201:
            v18 = v70;
            goto LABEL_548209;
        }
        v8 = v71;
        if vvar_1129 > v8 {
LABEL_547ba1:
            v48 = itertools::groupbylazy::GroupInner<K,I,F>::lookup_buffer(&v19, v8);
            v26 = v26;
            v48 = v48;
            goto LABEL_547dc0;
        }
        if vvar_1129 != v8 {
            if !(!v35) {
                goto LABEL_548201;
            }
            v48 = itertools::groupbylazy::GroupInner<K,I,F>::step_buffering(&v19);
            v26 = v26;
            v48 = v48;
            goto LABEL_547dc0;
        }
        if !(v25 <= v8 - v33) {
            goto LABEL_547ba1;
        }
        if !(!v35) {
            goto LABEL_548201;
        }
        v26 = 9223372036854775809;
        if v48 != 9223372036854775809 {
            v53 = v31;
            v75 = v27;
            vvar_43{reg 224} = ((vvar_43{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_438{reg 224}))
            v76 = v28;
            vvar_106{reg 256} = ((vvar_106{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_440{reg 256}))
            v77 = v29;
            vvar_46{reg 288} = ((vvar_46{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_442{reg 288}))
            v51 = v77;
            v50 = v76;
            v49 = v75;
            v48 = v26;
            v26 = v26;
            v48 = v48;
            goto LABEL_547dc0;
        }
        v10 = <itertools::kmerge_impl::KMergeBy<I,F> as core::iter::traits::iterator::Iterator>::next(&v21);
        v78 = v10;
        if v78 == 9223372036854775809 {
            v35 = 1;
            v20 = v20;
            goto LABEL_547dac;
        }
        v6 = *((&v10 as &char + 40) as &i64);
        v79 = *((&v10 as &char + 8) as &i128);
        vvar_451{reg 224} = ((vvar_43{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_450{reg 224}))
        v81 = *((&v10 as &char + 24) as &i128);
        vvar_453{reg 256} = ((vvar_106{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_452{reg 256}))
        v5 = v81;
        v4 = v79;
        v83 = *((&v10 as &char + 48) as &i64);
        v19 = 1;
        v20 = v83;
        if !vvar_1142 || v20 == v83 {
            v51 = v6;
            v85 = v4;
            vvar_43{reg 224} = ((vvar_451{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_469{reg 224}))
            v86 = v5;
            vvar_106{reg 256} = ((vvar_453{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_471{reg 256}))
            v50 = v86;
            v49 = v85;
            v48 = v78;
            v52 = v83;
            v53 = v15;
            v53 = v53;
        } else {
            switch (v84) {
            case 0: case 9223372036854775809:
                break;
            default:
                break;
            }
            v26 = v78;
            v29 = v6;
            v87 = v4;
            vvar_43{reg 224} = ((vvar_451{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_488{reg 224}))
            v88 = v5;
            vvar_106{reg 256} = ((vvar_453{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_490{reg 256}))
            v28 = v88;
            v27 = v87;
            v30 = v83;
            v31 = v53;
            v32 += 1;
            v20 = v20;
LABEL_547dac:
            v48 = 9223372036854775809;
            v53 = v53;
        }
        v53 = v53;
        v70 = 0;
        v48 = v48;
LABEL_547dc0:
        v48 = v48;
        v89 = v48;
        if v89 == 9223372036854775809 {
            v70 = v18 + 1;
            goto LABEL_548201;
        }
        v19 = itertools::groupbylazy::GroupInner<K,I,F>::group_key();
        v18 += 1;
        if v89 == v42 {
LABEL_548209:
            v63 = a0;
            if uu_pr::print_page(v1, v2, a3, v69) {
                v10 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v130);
                v131 = v10;
                *((v63 + 16) as &i128) = *((&v10 as &char + 16) as &i128);
                *(v63 as &i128) = v131;
                goto LABEL_548114;
            } else {
                *((v63 + 8) as &i32) = 0;
                *(v63 as &i64) = 9223372036854775813;
                break;
            }
        } else {
            v15 = v53;
            v90 = v49;
            vvar_43{reg 224} = ((vvar_104{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_514{reg 224}))
            v91 = v50;
            vvar_45{reg 256} = ((vvar_106{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_516{reg 256}))
            v92 = *((&v49 as &char + 32) as &i128);
            vvar_46{reg 288} = ((vvar_107{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_518{reg 288}))
            v14 = v92;
            v12 = v91;
            v11 = v90;
            v16 = &v18;
            v17 = v8;
            if v37 == 9223372036854775809 {
                v37 = itertools::groupbylazy::ChunkBy<K,I,F>::step(&v18, v8);
                v37 = v37;
                if !(v37 == 9223372036854775809) {
                    goto LABEL_547f52;
                }
                v10 = 9223372036854775809;
                v71 = v36;
                v36 = v71 + 1;
                if v18 {
                    core::cell::panic_already_borrowed(); /* do not return */
                }
            } else {
                v41 = v53;
                v95 = v49;
                vvar_43{reg 224} = ((vvar_43{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_532{reg 224}))
                v96 = v50;
                vvar_45{reg 256} = ((vvar_45{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_534{reg 256}))
                v97 = *((&v49 as &char + 32) as &i128);
                vvar_46{reg 288} = ((vvar_46{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_536{reg 288}))
                v40 = v97;
                v39 = v96;
                v38 = v95;
                v37 = v93;
                v37 = v37;
LABEL_547f52:
                v37 = v37;
                v98 = *((&v38 as &char + 8) as &i128);
                vvar_544{reg 224} = ((vvar_212{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_543{reg 224}))
                v100 = *((&v38 as &char + 24) as &i128);
                vvar_546{reg 256} = ((vvar_213{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_545{reg 256}))
                v102 = *((&v38 as &char + 40) as &i128);
                vvar_548{reg 288} = ((vvar_214{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_547{reg 288}))
                v43 = v37;
                v44 = v38;
                v47 = v102;
                v46 = v100;
                v45 = v98;
                if v43 == v3 {
                    v10 = 9223372036854775809;
                    v4 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v44);
                    v128 = a0;
                    *((v128 + 16) as &i128) = v5;
                    *(v128 as &i128) = v4;
                    goto LABEL_548107;
                }
                v104 = *((&v46 as &char + 8) as &i64);
                v105 = v2;
                if v69 == v104 {
                    v106 = v37;
                    vvar_248{reg 224} = ((vvar_544{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_558{reg 224}))
                    v108 = *((&v38 as &char + 8) as &i128);
                    vvar_250{reg 256} = ((vvar_546{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_560{reg 256}))
                    v110 = *((&v38 as &char + 24) as &i128);
                    vvar_251{reg 288} = ((vvar_548{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_562{reg 288}))
                    v112 = *((&v38 as &char + 40) as &i128);
                    vvar_252{reg 320} = ((vvar_47{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_564{reg 320}))
                    v7 = v112;
                    v6 = v110;
                    v5 = v108;
                    v4 = v106;
                    if !(v105 == v0) {
                        goto LABEL_547eae;
                    }
                    goto LABEL_547ea4;
                }
                if uu_pr::print_page(v1, v105, a3, v69) {
                    v10 = 9223372036854775809;
                    v4 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v127);
                    v128 = a0;
                    *((v128 + 16) as &i128) = v5;
                    *(v128 as &i128) = v4;
                    v129 = v43;
LABEL_548107:
                } else {
                    for (v115 = v2 + 1; v115 != 1; v115 -= 1) {
                        v1 += 64;
                    }
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    v116 = v37;
                    vvar_248{reg 224} = ((vvar_544{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_609{reg 224}))
                    v117 = *((&v38 as &char + 8) as &i128);
                    vvar_250{reg 256} = ((vvar_546{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_611{reg 256}))
                    v118 = *((&v38 as &char + 24) as &i128);
                    vvar_251{reg 288} = ((vvar_548{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_613{reg 288}))
                    v119 = *((&v38 as &char + 40) as &i128);
                    vvar_252{reg 320} = ((vvar_47{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_615{reg 320}))
                    v7 = v119;
                    v6 = v118;
                    v5 = v117;
                    v4 = v116;
                    v105 = 0;
LABEL_547ea4:
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
LABEL_547eae:
                    v121 = v1;
                    v122 = v105 * 64;
                    v123 = v4;
                    vvar_43{reg 224} = ((vvar_265{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_631{reg 224}))
                    v124 = v5;
                    vvar_45{reg 256} = ((vvar_267{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_633{reg 256}))
                    v125 = v6;
                    vvar_46{reg 288} = ((vvar_268{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_635{reg 288}))
                    v126 = v7;
                    vvar_47{reg 320} = ((vvar_269{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_637{reg 320}))
                    *((v121 + v122 + 48) as &i128) = v126;
                    *((v121 + v122 + 32) as &i128) = v125;
                    *((v121 + v122 + 16) as &i128) = v124;
                    *((v121 + v122) as &i128) = v123;
                    v2 = v105 + 1;
                    v70 = 0;
                    continue;
                }
LABEL_548114:
                for (v132 = v2 + 1; v132 != 1; v132 -= 1) {
                    v1 += 64;
                }
                break;
            }
        }
    }
    return v63;
}
