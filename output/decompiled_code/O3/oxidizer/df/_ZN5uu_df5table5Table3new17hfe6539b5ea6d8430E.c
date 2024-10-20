fn uu_df::table::Table::new() -> u32 {
    let v0: i32;  // [sp-0x558]
    let v1: i8;  // [sp-0x431]
    let v2: i64;  // [sp-0x430]
    let v3: i64;  // [bp-0x428]
    let v4: i64;  // [sp-0x420]
    let v5: i64;  // [bp-0x418]
    let v6: i64;  // [sp-0x400]
    let v7: i64;  // [bp-0x3f8]
    let v8: i8;  // [bp-0x3f0]
    let v9: i64;  // [sp-0x3e8]
    let v10: struct16;  // [sp-0x3e0], Other Possible Types: i64
    let v11: i64;  // [sp-0x3d8]
    let v12: i64;  // [sp-0x3d0]
    let v13: i64;  // [sp-0x3c0]
    let v14: i64;  // [sp-0x3b8]
    let v15: i64;  // [sp-0x3b0]
    let v16: i64;  // [sp-0x3a8]
    let v17: i64;  // [sp-0x3a0]
    let v18: i64;  // [sp-0x398]
    let v19: i64;  // [sp-0x390]
    let v20: i64;  // [bp-0x388]
    let v21: i64;  // [sp-0x370]
    let v22: i64;  // [sp-0x368]
    let v23: i8;  // [sp-0x360]
    let v24: i64;  // [sp-0x348]
    let v25: i64;  // [sp-0x340]
    let v26: i64;  // [sp-0x338]
    let v27: i64;  // [sp-0x330]
    let v28: i64;  // [sp-0x328]
    let v29: i64;  // [sp-0x320]
    let v30: i64;  // [bp-0x318]
    let v31: i64;  // [sp-0x310]
    let v32: i128;  // [bp-0x308]
    let v33: i64;  // [sp-0x300]
    let v34: i128;  // [bp-0x2f8]
    let v35: i64;  // [sp-0x2f0]
    let v36: i64;  // [sp-0x2e8]
    let v37: i64;  // [sp-0x2e0]
    let v38: i64;  // [sp-0x2d8]
    let v39: i64;  // [sp-0x2d0]
    let v40: i64;  // [sp-0x2c8]
    let v41: i64;  // [sp-0x2c0]
    let v42: i64;  // [sp-0x2b8]
    let v43: i64;  // [sp-0x2b0]
    let v44: i64;  // [sp-0x2a8]
    let v45: i64;  // [sp-0x2a0]
    let v46: i128;  // [sp-0x288]
    let v47: i64;  // [sp-0x278]
    let v48: struct24;  // [sp-0x260], Other Possible Types: i192
    let v49: i64;  // [sp-0x248]
    let v50: i64;  // [sp-0x240]
    let v51: i64;  // [sp-0x238]
    let v52: i64;  // [sp-0x228]
    let v53: i64;  // [sp-0x220]
    let v54: i64;  // [bp-0x218], Other Possible Types: struct16
    let v55: i64;  // [sp-0x210]
    let v56: i64;  // [sp-0x208]
    let v57: i8;  // [bp-0x1f8]
    let v58: i8;  // [bp-0x1f0]
    let v59: i8;  // [bp-0x1e8]
    let v60: i8;  // [bp-0x1e0]
    let v61: i8;  // [bp-0x1d8]
    let v62: i8;  // [bp-0x1d0]
    let v64: i8;  // [bp-0x168]
    let v65: i8;  // [bp-0x158]
    let v66: i8;  // [bp-0x140]
    let v67: i8;  // [bp-0x130]
    let v68: i64;  // [sp-0x128]
    let v69: i64;  // [sp-0x120]
    let v70: i64;  // [bp-0x118]
    let v71: i64;  // [sp-0x110]
    let v72: i64;  // [sp-0x108]
    let v73: i64;  // [sp-0x100]
    let v74: i64;  // [sp-0xf8]
    let v75: i64;  // [sp-0xf0]
    let v76: i64;  // [sp-0xe8]
    let v77: i64;  // [sp-0xe0]
    let v78: i64;  // [sp-0xd8]
    let v79: i64;  // [sp-0xd0]
    let v80: i64;  // [sp-0xc8]
    let v81: i64;  // [sp-0xc0]
    let v82: i64;  // [sp-0xb8]
    let v83: i64;  // [sp-0xb0]
    let v84: i64;  // [sp-0xa8]
    let v85: i64;  // [sp-0xa0]
    let v86: i64;  // [sp-0x98]
    let v87: i64;  // [sp-0x90]
    let v88: i64;  // [sp-0x88]
    let v89: i64;  // [sp-0x80]
    let v90: i64;  // [sp-0x78]
    let v91: i64;  // [sp-0x70]
    let v92: i64;  // [sp-0x68]
    let v93: i256;  // [bp-0x50]
    let v95: i64;  // rsi
    let v96: i64;  // rax
    let v97: i64;  // rbx
    let v98: i128;  // xmm0
    let v99: i64;  // rax
    let v100: i64;  // rax
    let v101: i64;  // rax
    let v102: i256;  // ymm0
    let v103: i256;  // ymm0
    let v104: i64;  // rdx
    let v105: i64;  // rbp
    let v106: i64;  // rcx
    let v107: i64;  // r14
    let v109: i64;  // rbp
    let v110: i256;  // ymm1
    let v111: i256;  // ymm3
    let v112: i256;  // ymm4
    let v114: i64;  // rbp
    let v115: i64;  // r12
    let v116: i64;  // r9
    let v117: i64;  // rbx
    let v118: i64;  // rax
    let v122: i64;  // rdx
    let v123: i64;  // r8
    let v124: i64;  // r14
    let v125: i64;  // r10
    let v126: i64;  // r15
    let v127: i64;  // rcx
    let v128: i64;  // rax
    let v129: i64;  // rax
    let v130: i64;  // rsi
    let v131: i64;  // rsi
    let v132: i128;  // xmm0
    let v133: i128;  // xmm1
    let v134: i128;  // xmm0
    let v135: i128;  // xmm0
    let v136: i128;  // xmm1
    let v137: i128;  // xmm1
    let v138: i128;  // xmm0
    let v139: i128;  // xmm0
    let v140: i128;  // xmm0
    let v141: i128;  // xmm0
    let v142: i128;  // xmm1
    let v143: i128;  // xmm1
    let v144: i128;  // xmm1
    let v145: i128;  // xmm0
    let v146: i128;  // xmm0
    let v147: i128;  // xmm1
    let v148: i128;  // xmm1
    let v149: i128;  // xmm1
    let v150: i256;  // ymm2
    let v151: i64;  // rsi
    let v153: i128;  // xmm0
    let v154: i128;  // xmm0
    let v155: i64;  // rbx
    let v156: i64;  // r13
    let v157: i64;  // r15
    let v158: i64;  // rax
    let v159: i64;  // rax
    let v160: i64;  // rax
    let v161: i64;  // rdi
    let v162: i64;  // r15
    let v163: i64;  // r15
    let v164: i64;  // r12
    let v165: i128;  // xmm0
    let v166: i128;  // xmm0
    let v167: i256;  // ymm0
    let v168: i64;  // rax
    let v169: i64;  // rcx
    let v170: i128;  // xmm4
    let v171: i128;  // xmm0
    let v172: i256;  // ymm0
    let v173: i128;  // xmm0
    let v174: i128;  // xmm0
    let v175: i128;  // xmm0
    let v176: i128;  // xmm0
    let v177: i128;  // xmm0
    let v178: i128;  // xmm2
    let v179: i128;  // xmm2
    let v180: i128;  // xmm2
    let v181: i256;  // ymm0
    let v182: i64;  // rbx
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i128;  // xmm0
    let v188: i64;  // rbx
    let v189: i64;  // rbx
    let v190: i64;  // rax
    let v191: i64;  // rcx
    let v192: i64;  // rcx
    let v193: i64;  // rax
    let v194: i64;  // r13
    let v195: i64;  // rbp
    let v196: i64;  // r15
    let v197: i64;  // r12
    let v199: i64;  // r15
    let v200: i64;  // rbx
    let v201: i32;  // eax
    let v202: i64;  // rdi

    v13 = 0;
    v14 = 8;
    v15 = 0;
    v18 = *((v95 + 8) as &i64);
    v19 = *((v95 + 16) as &i64);
    if v19 {
        v96 = v95;
        v3 = *((v96 + 85) as &i8);
        v5 = v96 + 72;
        v2 = *((v96 + 72) as &i64);
        goto *((4277696 + *((stack_base)[920] as i64 as &i8) * 4) as &i32) + 4277696;
    } else {
        v51 = v15;
        v49 = v13;
        v50 = v14;
        v93 = v18;
        v48 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v93);
        v52 = __rust_alloc(24, 8);
        v97 = v52;
        *((v97 + 16) as &i64) = v51;
        v98 = v49;
        *(v97 as &i128) = v98;
        v10 = 1;
        v11 = v97;
        v12 = 1;
        v99 = __rust_alloc(5, 1);
        *((v99 + 4) as &i8) = 108;
        *(v99 as &i32) = 1635020660;
        v100 = __rust_alloc(1, 1);
        *(v100 as &i8) = 45;
        v101 = __rust_alloc(1, 1);
        *(v101 as &i8) = 45;
        v45 = 0x8000000000000000;
        v36 = 5;
        v37 = v99;
        v38 = 5;
        v39 = 1;
        v40 = v100;
        v41 = 1;
        v42 = 1;
        v43 = v101;
        v44 = 1;
        v26 = 0;
        v28 = 0;
        vvar_162{reg 224} = (((vvar_402{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_401{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>)
        v30 = 0;
        v32 = 0;
        v34 = 0;
        v46 = 0;
        v47 = 0;
        v105 = *((v104 + 8) as &i64);
        v106 = *((v104 + 16) as &i64);
        v13 = v105;
        v14 = v105;
        v15 = *(v104 as &i64);
        v25 = v106 * 232 + v105;
        v16 = v25;
        v107 = v95;
        if v106 {
            v1 = *((v107 + 81) as &i8);
            do {
                v109 = v105 + 232;
                if *((v109 - 232) as &i64) == 0x8000000000000000 {
LABEL_49721e:
                    v14 = v114;
                    goto LABEL_497226;
                }
                v6 = *((v109 - 224) as &i64);
                v115 = *((v109 - 208) as &i64);
                v20 = *((v109 - 200) as &i64);
                v116 = *((v109 - 192) as &i64);
                v4 = *((v109 - 184) as &i64);
                v17 = *((v109 - 176) as &i64);
                v117 = *((v109 - 168) as &i64);
                v2 = *((v109 - 160) as &i64);
                v7 = *((v109 - 152) as &i64);
                v3 = *((v109 - 136) as &i64);
                v9 = *((v109 - 128) as &i64);
                v118 = *((v109 - 120) as &i64);
                v5 = *((v109 - 112) as &i64);
                v8 = *((v109 - 104) as &i64);
                v122 = *((v109 - 56) as &i64);
                v123 = *((v109 - 48) as &i64);
                v124 = *((v109 - 40) as &i64);
                v125 = *((v109 - 32) as &i64);
                v126 = *((v109 - 24) as &i64);
                v127 = *((v109 - 16) as &i64);
                if v1 || v123 {
                    v78 = v115;
                    v79 = v20;
                    v80 = v116;
                    v81 = v4;
                    v82 = v17;
                    v83 = v117;
                    v84 = v3;
                    v85 = v9;
                    v86 = v118;
                    v128 = v123;
                    v129 = v128 - v124;
                    v87 = *((v109 - 80) as &i64);
                    if v128 < v124 {
                        v129 = 0;
                    }
                    v88 = *((v109 - 72) as &i64);
                    v130 = v126;
                    v131 = v130 - v127;
                    if v130 < v127 {
                        v131 = 0;
                    }
                    v89 = *((v109 - 64) as &i64);
                    vvar_575{reg 224} = Conv(64->128, vvar_338{reg 16})
                    vvar_583{reg 256} = Conv(64->128, (vvar_338{reg 16} + vvar_489{reg 96}))
                    v90 = v122 * v123;
                    v91 = v122 * v129;
                    v92 = v125 * v122;
                    v134 = BinaryOp InterleaveLOV;
                    v135 = v134 - 0x45300000000000004330000000000000;
                    v136 = BinaryOp InterleaveLOV;
                    v137 = v136 - 0x45300000000000004330000000000000;
                    v138 = v137;
                    v139 = v137 >> 64 CONCAT v138 >> 64;
                    v140 = BinaryOp AddV;
                    v68 = -0x100 | v123;
                    vvar_635{reg 224} = Conv(64->128, vvar_490{reg 136})
                    vvar_1554{stack -288} = Conv(256->64, ((((((((((((((((vvar_682{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x4530000043300000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_896{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_898{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_900{reg 288})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_598{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(128->64, (vvar_598{reg 224} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_598{reg 224} >> 0x40<8>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->64, (vvar_598{reg 224} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_598{reg 224} >> 0x40<8>))) + vvar_598{reg 224}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->64, (vvar_598{reg 224} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_598{reg 224} >> 0x40<8>))) + vvar_598{reg 224}) DivV vvar_622{reg 224}))))
                    v72 = v126;
                    vvar_640{reg 256} = Conv(64->128, vvar_337{reg 64})
                    v73 = 0;
                    v74 = v131;
                    v75 = 0;
                    v76 = v127;
                    v77 = 0;
                    v70 = -0x100 | v126;
                    v143 = BinaryOp InterleaveLOV;
                    v144 = v143 - 0x45300000000000004330000000000000;
                    v145 = BinaryOp InterleaveLOV;
                    v146 = v145 - 0x45300000000000004330000000000000;
                    v147 = v146;
                    v148 = v146 >> 64 CONCAT v147 >> 64;
                    v149 = BinaryOp AddV;
                    vvar_682{reg 288} = ((((((((Conv(64->256, vvar_1554{stack -288}) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_655{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(128->64, (vvar_655{reg 256} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_655{reg 256} >> 0x40<8>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->64, (vvar_655{reg 256} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_655{reg 256} >> 0x40<8>))) + vvar_655{reg 256}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->64, (vvar_655{reg 256} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_655{reg 256} >> 0x40<8>))) + vvar_655{reg 256}) DivV vvar_679{reg 256})))
                    v71 = v150;
                    v21 = &v68;
                    v22 = v95;
                    v23 = 0;
                    uu_df::table::RowFormatter::get_values();
                    memcpy(&v54, &v68, 208);
                    v153 = v46;
                    v20 = v153;
                    v154 = v64;
                    v5 = v154;
                    v17 = v47;
                    v3 = v65;
                    v7 = v30;
                    v8 = v31;
                    v9 = v57;
                    v4 = v58;
                    v6 = v33;
                    v155 = v32;
                    v156 = v60;
                    v157 = v59;
                    v158 = __rust_alloc(5, 1);
                    *((v158 + 4) as &i8) = 108;
                    v2 = v158;
                    *(v158 as &i32) = 1635020660;
                    v159 = __rust_alloc(1, 1);
                    v24 = v159;
                    *(v159 as &i8) = 45;
                    v160 = __rust_alloc(1, 1);
                    v161 = v157;
                    v162 = v9;
                    v163 = v162 + v7;
                    v164 = v4 + v8 + ((v162 + v7 <= v162 ? 0 : 1) & 1);
                    v165 = v5;
                    v166 = BinaryOp AddV;
                    vvar_807{reg 224} = ((((((((((((((((((((((((((vvar_162{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_575{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_592{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_598{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_616{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_619{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_622{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_635{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_671{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_673{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_753{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_755{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_804{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_806{reg 224}))
                    v4 = v160;
                    *(v160 as &i8) = 45;
                    v5 = v166;
                    v8 = v167;
                    v168 = v61;
                    v9 = v168 + v34;
                    v20 = v62 + v35 + ((v168 + vvar_1585 <= v168 ? 0 : 1) & 1);
                    v7 = v163 || v164;
                    0x600200();
                    v6 = v167;
                    0x600200();
                    v53 = v167;
                    v169 = v3 + v17;
                    v170 = v5;
                    vvar_171{reg 352} = ((((vvar_171{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x45300000000000004330000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_870{reg 352}))
                    v171 = v170 >> 96 CONCAT v170 >> 64 CONCAT v170 >> 96 CONCAT v170 >> 64;
                    vvar_873{reg 224} = ((vvar_807{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_872{reg 224}))
                    v173 = BinaryOp InterleaveLOV;
                    v111 = v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x4530000043300000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x45300000000000004330000000000000;
                    v174 = v173 - 0x45300000000000004330000000000000;
                    vvar_890{reg 224} = Conv(64->128, (Conv(256->64, vvar_873{reg 224}) + vvar_869{reg 24}))
                    v176 = BinaryOp InterleaveLOV;
                    v177 = v176 - 0x45300000000000004330000000000000;
                    v178 = v177;
                    v179 = v177 >> 64 CONCAT v178 >> 64;
                    v180 = BinaryOp AddV;
                    vvar_169{reg 256} = ((((((((((((((((((((((((((vvar_169{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_583{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_610{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_613{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_640{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_652{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_655{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_675{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_677{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_679{reg 256})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_881{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(128->64, (vvar_881{reg 224} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_881{reg 224} >> 0x40<8>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->64, (vvar_881{reg 224} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_881{reg 224} >> 0x40<8>))) + vvar_881{reg 224}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->64, (vvar_881{reg 224} >> 0x40<8>)) CONCAT Conv(128->64, (vvar_881{reg 224} >> 0x40<8>))) + vvar_881{reg 224}) DivV vvar_900{reg 288})))
                    vvar_913{reg 224} = (((((((((((((((vvar_873{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_877{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_881{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_890{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_892{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_894{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_1588{stack -1024})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(256->128, (((((((((((((vvar_873{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_877{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_881{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_890{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_892{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_894{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_1588{stack -1024}))) DivV Conv(64->128, vvar_1590{stack -544}))))
                    v26 = -0x100 | v8;
                    v27 = v110;
                    v28 = -0x100 | v7;
                    v29 = v181;
                    v30 = v163;
                    v31 = v164;
                    v32 = v161 + v155;
                    v33 = v156 + v6 + ((v161 + v155 <= v161 ? 1 : 0) & 1);
                    v34 = v9;
                    v35 = v20;
                    v36 = 5;
                    v37 = v2;
                    v38 = 5;
                    v39 = 1;
                    v40 = v24;
                    v41 = 1;
                    v42 = 1;
                    v43 = v4;
                    v44 = 1;
                    v45 = 0x8000000000000000;
                    v46 = v170;
                    v47 = v169;
                    v182 = v12;
                    if v182 == v10 {
                        v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
                    }
                    v183 = v11;
                    v184 = v182 * 3;
                    *((v183 + v184 * 8 + 16) as &i8) = v67;
                    v185 = v66;
                    vvar_162{reg 224} = ((vvar_913{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_973{reg 224}))
                    *((v183 + v184 * 8) as &i128) = v185;
                    v12 = v182 + 1;
                }
                v107 = v151;
            } while (v109 != v25);
            v114 = v25;
            goto LABEL_49721e;
        }
LABEL_497226:
        if !*((v107 + 83) as &i8) {
            v188 = v12;
            if !v188 {
                goto LABEL_497391;
            }
        } else {
            v68 = &v26;
            v69 = v107;
            v70 = 1;
            uu_df::table::RowFormatter::get_values();
            v189 = v12;
            if v189 == v10 {
                v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v190 = v11;
            v191 = v189 * 3;
            *((v190 + v191 * 8 + 16) as &i64) = v56;
            *((v190 + v191 * 8) as &i8) = v54;
            v188 = v189 + 1;
            v12 = v188;
            if !v12 {
LABEL_497391:
                v5 = *((&v48 as &char + 8) as &i64);
                v2 = *((&v48 as &char + 16) as &i64);
                goto LABEL_4973ab;
            }
        }
        v192 = v11;
        v4 = v192 + v188 * 24;
        v5 = *((&v48 as &char + 8) as &i64);
        v2 = *((&v48 as &char + 16) as &i64);
        do {
            v3 = v192;
            v193 = *((v192 + 16) as &i64);
            if v193 {
                v194 = *((v3 + 8) as &i64);
                v107 = 0;
                v195 = 0;
                do {
                    v196 = *((v194 + v107 + 8) as &i64);
                    v197 = *((v194 + v107 + 16) as &i64);
                    if v2 == v195 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                    if unicode_width::str_width(v196, v197, 0) > *((v5 + (v195 << 3)) as &i64) {
                        *((v5 + v195 * 8) as &long long) = unicode_width::str_width(v196, v197, 0);
                    }
                    v107 += 24;
                    v195 += 1;
                } while ((v193 << 3) + (v193 << 4) != v107);
            }
        } while ((v192 = v3 + 24, v192 != v4));
LABEL_4973ab:
        v70 = v12;
        v68 = v10;
        v199 = v48;
        v54 = 0;
        v55 = 1;
        v56 = 0;
        if v19 {
            v200 = 0;
            do {
                v201 = *((v18 + v200) as &i8);
                v107 = v107 | -0x100 | 1;
                if v201 <= 11 {
                    v0 = 3105;
                    if (*((&v0 as &u8 + ((v201 & 31) >> 3)) as &i8) >> (v201 & 31 & 7) & 1) {
                        v107 = 0;
                    }
                }
                if v200 == v54 {
                    v54 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                *((v55 + v200) as &i8) = 1;
                v200 += 1;
                v56 = v200;
            } while (v19 != v56);
        }
        *((v202 + 16) as &i64) = v56;
        *(v202 as &i64) = v54;
        *((v202 + 8) as &i64) = v55;
        *((v202 + 40) as &i64) = v70;
        *((v202 + 24) as &i128) = v68;
        *((v202 + 48) as &i64) = v199;
        *((v202 + 56) as &i64) = v5;
        *((v202 + 64) as &i64) = v2;
        return;
    }
}
