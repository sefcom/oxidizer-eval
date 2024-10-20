fn uu_mktemp::dry_exec(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u8) -> u64 {
    let v0: struct16;  // [sp-0x90], Other Possible Types: u64
    let v1: u64;  // [sp-0x88]
    let v2: u64;  // [sp-0x80], Other Possible Types: void*
    let v3: &u64;  // [sp-0x78], Other Possible Types: Enum, struct8, u64
    let v4: u64;  // [sp-0x70]
    let v5: u64;  // [sp-0x68]
    let v6: u128;  // [sp-0x60]
    let v7: u64;  // [sp-0x38]
    let v8: u64;  // [sp-0x10]
    let v9: u64;  // [bp+0x8]
    let v10: i8;  // [bp+0x10]
    let v11: u64;  // r15
    let v12: u64;  // r15
    let v14: u64;  // rbp
    let v16: u64;  // cc_ndep
    let v17: u64;  // r15
    let v18: u64;  // r15
    let v19: u64;  // rbp
    let v20: u64;  // r12
    let v21: u64;  // rax
    let v22: u64;  // rbp
    let v23: u64;  // r15
    let v24: u64;  // r12
    let v26: u64;  // rbx
    let v27: u64;  // rbp
    let v28: u64;  // rbp
    let v29: u64;  // r12
    let v30: u64;  // rsi
    let v31: &&struct_1;  // fs
    let v32: &struct_1;  // rax
    let v33: &&struct_0;  // rdx
    let v34: u64;  // cc_op
    let v36: u64;  // cc_dep2
    let v37: &&struct_0;  // rax
    let v38: &u64;  // rax
    let v39: &u8;  // rbp
    let v40: &u64;  // rdi
    let v42: &u8;  // rax
    let v43: &u8;  // rcx
    let v44: u256;  // ymm0
    let v45: u256;  // ymm13
    let v46: u256;  // ymm14
    let v47: u256;  // ymm12
    let v48: u256;  // ymm15
    let v49: u128;  // xmm0
    let v50: u128;  // xmm13
    let v51: u128;  // xmm13
    let v52: u128;  // xmm13
    let v53: u128;  // xmm14
    let v54: u128;  // xmm14
    let v55: u128;  // xmm14
    let v56: u128;  // xmm14
    let v57: u128;  // xmm13
    let v58: u128;  // xmm13
    let v59: u128;  // xmm13
    let v60: u128;  // xmm13
    let v61: u128;  // xmm13
    let v62: u128;  // xmm13
    let v63: u128;  // xmm14
    let v64: u128;  // xmm14
    let v65: u128;  // xmm14
    let v66: u128;  // xmm14
    let v67: u128;  // xmm13
    let v68: u128;  // xmm13
    let v69: u128;  // xmm13
    let v70: u128;  // xmm13
    let v71: u128;  // xmm0
    let v72: u128;  // xmm13
    let v73: u128;  // xmm14
    let v74: u128;  // xmm12
    let v75: u128;  // xmm12
    let v76: u128;  // xmm15
    let v77: u128;  // xmm15
    let v78: u128;  // xmm15
    let v79: u128;  // xmm12
    let v80: u128;  // xmm12
    let v81: u128;  // xmm0
    let v82: u128;  // xmm12
    let v83: u128;  // xmm15
    let v84: u128;  // xmm15
    let v85: u128;  // xmm13
    let v86: u128;  // xmm14
    let v87: u128;  // xmm14
    let v88: u128;  // xmm13
    let v89: u128;  // xmm14
    let v90: &u8;  // rdx
    let v92: &u8;  // rax
    let v93: u256;  // ymm0
    let v94: u128;  // xmm13
    let v95: u128;  // xmm13
    let v96: u128;  // xmm13
    let v97: u128;  // xmm14
    let v98: u128;  // xmm14
    let v99: u128;  // xmm14
    let v100: u128;  // xmm14
    let v101: u128;  // xmm13
    let v102: u128;  // xmm13
    let v103: u128;  // xmm13
    let v104: u128;  // xmm13
    let v105: u128;  // xmm13
    let v106: u128;  // xmm13
    let v107: u128;  // xmm14
    let v108: u128;  // xmm14
    let v109: u128;  // xmm14
    let v110: u128;  // xmm14
    let v111: u128;  // xmm13
    let v112: u128;  // xmm13
    let v113: u128;  // xmm13
    let v114: u128;  // xmm13
    let v115: u128;  // xmm0
    let v116: u128;  // xmm13
    let v117: u128;  // xmm12
    let v118: u128;  // xmm12
    let v119: u128;  // xmm15
    let v120: u128;  // xmm15
    let v121: u128;  // xmm15
    let v122: u128;  // xmm12
    let v123: u128;  // xmm12
    let v124: u128;  // xmm0
    let v125: u128;  // xmm0
    let v126: u128;  // xmm15
    let v127: u128;  // xmm15
    let v128: u128;  // xmm13
    let v129: u128;  // xmm13
    let v130: &u8;  // rcx
    let v131: u64;  // rax
    let v133: u8;  // al
    let v134: u64;  // r14
    let v135: u64;  // r15
    let v136: u64;  // r15
    let v137: u64;  // r12

    v8 = v11;
    v7 = &a5[a4];
    v12 = v7 + vvar_775;
    v0 = v12;
    v1 = v14;
    v2 = 0;
    if v12 >= a4 {
        v2 = 0;
        v1 = v1;
    } else {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, a4);
        v1 = v1;
        v17 = v0;
    }
    v18 = v17;
    v19 = v1;
    memcpy(v2 + v19, a3, a4);
    v20 = v2 + a4;
    v2 = v20;
    v21 = v18 - v20;
    if v21 < a5 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v20, a5);
        v22 = v1;
        v23 = v0;
        v24 = v2;
LABEL_48ad84:
        v19 = v22;
        memset(v24 + v19, 88, a5);
        v20 = &a5[v24];
        v21 = v23 - v20;
    } else if !(!a5) {
        goto LABEL_48ad84;
    }
    v2 = v20;
    v26 = v10;
    if v21 < v26 {
        v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v2, v26);
        v26 = v10;
        v27 = v1;
    }
    v28 = v27;
    memcpy(v2 + v28, v9, v26);
    v29 = v2 + v26;
    v2 = v29;
    v30 = v7;
    if v30 < a4 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    }
    if v30 > v29 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    }
    v32 = *(v31);
    v33 = v32[2].field_-10;
    if !v33 {
        v37 = std::sys::thread_local::native::lazy::Storage<T,D>::initialize(v32 + 2, 0, v33);
        v34 = 20;
        v36 = 0;
        if !v37 {
            core::result::unwrap_failed(); /* do not return */
        }
    } else {
        v34 = 7;
        v36 = 1;
        if v33 as u32 != 1 {
            core::result::unwrap_failed(); /* do not return */
        }
        v37 = v32 + 1;
    }
    v38 = *(v37);
    *(v3) = *(v3) + 1;
    if amd64g_calculate_condition(4, 24, vvar_794 + 1, 0, amd64g_calculate_rflags_c(v34, v33 & 4294967295, v36, v16)) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 4764316()
    }
    v39 = v28 + a4;
    v3 = v38;
    v3 = rand::rng::Rng::fill(v39, a5);
    v40 = v3;
    *(v40 as &i32) = vvar_798 - 1;
    if vvar_798 == 1 {
        v40[1] = v40[1] - 1;
    }
    if a5 {
        if a5 < 8 {
LABEL_48b20a:
            do {
                v131 = *(v130);
                v133 = v131 - (((v131 & 4294967295 & 255 & 255) >> 1) * 133 >> 12) * 62;
            } while ((*(v130) = v133 | 48, v130 += 1, v130 != v39 + a5));
        } else {
            if a5 < 16 {
                v42 = 0;
                goto LABEL_48aeb2;
            }
            v42 = a5 & -0x10;
            v43 = 0;
            do {
                v49 = *((v39 + v43) as &i128);
                v50 = v49;
                v51 = BinaryOp ShrNV;
                v52 = v51 & 169473963133173273960190490760135540607;
                v53 = v52;
                v54 = BinaryOp InterleaveHIV;
                v55 = BinaryOp MulV;
                v56 = BinaryOp ShrNV;
                v57 = BinaryOp InterleaveLOV;
                v58 = BinaryOp MulV;
                v59 = BinaryOp ShrNV;
                v60 = BinaryOp QNarrowBinV;
                v61 = BinaryOp ShrNV;
                v62 = v61 & 20016609818878733144904388672456953615;
                v63 = v62;
                v64 = BinaryOp InterleaveHIV;
                v65 = BinaryOp MulV;
                v66 = v65 & 1324055902416102970674609367438786815;
                v67 = BinaryOp InterleaveLOV;
                v68 = BinaryOp MulV;
                v69 = v68 & 1324055902416102970674609367438786815;
                v70 = BinaryOp QNarrowBinV;
                v71 = BinaryOp SubV;
                v72 = v71;
                v73 = v71;
                v74 = v71;
                v75 = BinaryOp AddV;
                v76 = v75;
                v77 = BinaryOp MinV;
                v78 = BinaryOp CmpEQV;
                v79 = v71;
                v80 = BinaryOp AddV;
                v81 = v71 | 64053151420411946063694043751862251568;
                vvar_156{reg 224} = ((((((vvar_156{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_442{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_486{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_506{reg 224}))
                v82 = v80 & v78;
                vvar_159{reg 608} = ((((((((((vvar_159{reg 608} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_492{reg 608})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_494{reg 608})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_502{reg 608})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_504{reg 608})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_508{reg 608}))
                v83 = ~(v78) & v81;
                v84 = v83 | v82;
                vvar_160{reg 704} = ((((((((((vvar_160{reg 704} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_496{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_498{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_500{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_510{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_512{reg 704}))
                v85 = BinaryOp CmpGTV;
                v86 = BinaryOp AddV;
                v87 = v86 & v85;
                v88 = ~(v85) & v84;
                vvar_157{reg 640} = ((((((((((((((((((((((((((((((((vvar_157{reg 640} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_444{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_446{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_448{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_458{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_460{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_462{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_464{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_466{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_468{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_478{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_480{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_482{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_484{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_488{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_514{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_520{reg 640}))
                v89 = v87 | v88;
                vvar_158{reg 672} = ((((((((((((((((((((((((vvar_158{reg 672} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_450{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_452{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_454{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_456{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_470{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_472{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_474{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_476{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_490{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_516{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_518{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_522{reg 672}))
                *((v39 + v43) as &u128) = v89;
                v43 += 16;
            } while (v42 != v43);
            if v42 != a5 {
                if !(a5 as u8 & 8) {
                    v92 = v42 + v39;
                    goto LABEL_48b20a;
                }
LABEL_48aeb2:
                v90 = a5 & -8;
                do {
                    vvar_570{reg 224} = (((vvar_190{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=(vvar_146{reg 56} + vvar_189{reg 16}), size=8, endness=Iend_LE)))
                    vvar_571{reg 640} = Conv(256->128, vvar_570{reg 224})
                    v95 = BinaryOp ShrNV;
                    v96 = v95 & 169473963133173273960190490760135540607;
                    v97 = v96;
                    v98 = BinaryOp InterleaveHIV;
                    v99 = BinaryOp MulV;
                    v100 = BinaryOp ShrNV;
                    v101 = BinaryOp InterleaveLOV;
                    v102 = BinaryOp MulV;
                    v103 = BinaryOp ShrNV;
                    v104 = BinaryOp QNarrowBinV;
                    v105 = BinaryOp ShrNV;
                    v106 = v105 & 20016609818878733144904388672456953615;
                    v107 = v106;
                    v108 = BinaryOp InterleaveHIV;
                    v109 = BinaryOp MulV;
                    v110 = v109 & 1324055902416102970674609367438786815;
                    v111 = BinaryOp InterleaveLOV;
                    v112 = BinaryOp MulV;
                    v113 = v112 & 1324055902416102970674609367438786815;
                    v114 = BinaryOp QNarrowBinV;
                    vvar_613{reg 224} = (Conv(256->128, vvar_570{reg 224}) SubV vvar_611{reg 640})
                    v116 = v115;
                    v117 = v115;
                    v118 = BinaryOp AddV;
                    v119 = v118;
                    v120 = BinaryOp MaxV;
                    v121 = BinaryOp CmpEQV;
                    v122 = v115;
                    v123 = BinaryOp AddV;
                    vvar_159{reg 608} = ((((((((vvar_193{reg 608} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_619{reg 608})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_621{reg 608})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_629{reg 608})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_631{reg 608}))
                    v124 = v115 | 3472328296227680304;
                    v125 = v124 & v121;
                    vvar_156{reg 224} = ((((((vvar_570{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_613{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_633{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_635{reg 224}))
                    v126 = ~(v121) & v123;
                    v127 = v126 | v125;
                    vvar_160{reg 704} = ((((((((((vvar_194{reg 704} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_623{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_625{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_627{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_637{reg 704})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_639{reg 704}))
                    v128 = BinaryOp CmpGTV;
                    v129 = ~(v128) & v127;
                    vvar_157{reg 640} = ((((((((((((((((((((((((((((((((vvar_191{reg 640} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_571{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_573{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_575{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_585{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_587{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_589{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_591{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_593{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_595{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_605{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_607{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_609{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_611{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_615{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_641{reg 640})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_647{reg 640}))
                    vvar_158{reg 672} = ((((((((((((((((((((((((vvar_192{reg 672} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_577{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_579{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_581{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_583{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_597{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_599{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_601{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_603{reg 672})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_613{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_613{reg 224} + 0x1d1d1d1d1d1d1d1d<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((vvar_613{reg 224} + 0x1d1d1d1d1d1d1d1d<128>) & vvar_641{reg 640}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((vvar_613{reg 224} + 0x1d1d1d1d1d1d1d1d<128>) & vvar_641{reg 640}) | vvar_647{reg 640})))
                    *((v39 + v42) as &u64) = v46;
                    v42 += 8;
                } while (v90 != v42);
                if v90 == a5 {
                    goto LABEL_48b173;
                }
                goto LABEL_48b20a;
            }
        }
    }
LABEL_48b173:
    v134 = v0;
    v135 = v1;
    v3 = core::str::converts::from_utf8(v135, v29);
    if v3 {
        if v134 != 0x8000000000000000 {
            v3 = v134;
            v4 = v135;
            v5 = v29;
            v6 = *(&v4 as &i128);
            core::result::unwrap_failed(); /* do not return */
        }
        v137 = v4;
    }
    std::path::Path::_join(a0, a1, a2, v136, v137);
    return a0;
}
