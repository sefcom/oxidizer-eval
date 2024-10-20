fn uu_shred::wipe_file() -> u32 {
    let v0: i64;  // [sp-0x30298]
    let v1: i64;  // [sp-0x30290]
    let v2: i32;  // [sp-0x30284]
    let v3: i64;  // [sp-0x30280]
    let v4: i64;  // [sp-0x30278]
    let v5: i64;  // [bp-0x30270]
    let v6: i64;  // [bp-0x30268]
    let v7: struct16;  // [sp-0x30260], Other Possible Types: i64
    let v8: i64;  // [sp-0x30258]
    let v9: i64;  // [sp-0x30250]
    let v10: i64;  // [sp-0x30248]
    let v11: i64;  // [bp-0x30240]
    let v12: i64;  // [sp-0x30238]
    let v13: i32;  // [sp-0x3022c]
    let v14: i64;  // [sp-0x30228]
    let v15: i64;  // [sp-0x30220]
    let v18: i64;  // [sp-0x30208]
    let v19: i64;  // [sp-0x301e8]
    let v21: i8;  // [bp-0x301df]
    let v24: i64;  // [sp-0x301c8]
    let v28: i64;  // [sp-0x301a0]
    let v29: i64;  // [sp-0x30198], Other Possible Types: Enum
    let v30: i64;  // [bp-0x30190]
    let v31: i8;  // [sp-0x3018f]
    let v32: i16;  // [sp-0x3018c]
    let v33: i128;  // [sp-0x30188]
    let v34: i64;  // [sp-0x30180]
    let v35: i64;  // [sp-0x30178]
    let v37: i128;  // [bp-0x30168]
    let v39: i128;  // [bp-0x30158]
    let v41: i128;  // [sp-0x30148]
    let v43: i64;  // [sp-0x30138]
    let v57: i8;  // [bp-0x30030]
    let v59: i8;  // [sp-0x20040], Other Possible Types: String, Enum
    let v60: i64;  // [sp-0x20038]
    let v61: i128;  // [bp-0x20030]
    let v62: i32;  // [bp-0x20028]
    let v66: i64;  // [bp-0x10038]
    let v67: i64;  // [sp-0x10030]
    let v68: i64;  // [sp-0x10028]
    let v69: i8;  // [bp-0x10020]
    let v72: i64;  // [sp-0x2030]
    let v73: i64;  // [bp+0x8]
    let v74: i8;  // [bp+0x10]
    let v76: i8;  // [bp+0x20]
    let v77: i64;  // r9
    let v78: i64;  // r15
    let v79: i32;  // ecx
    let v80: i64;  // rsi
    let v81: i64;  // r12
    let v82: i64;  // rdi
    let v83: i64;  // rax
    let v84: i64;  // rax
    let v85: i64;  // rax
    let v86: i64;  // rdx
    let v87: i64;  // r14
    let v88: i64;  // rax
    let v89: i128;  // xmm0
    let v90: i64;  // rdx
    let v91: i64;  // rax
    let v93: i64;  // rsi
    let v94: i128;  // xmm0
    let v95: i64;  // r8
    let v96: i64;  // r15
    let v97: i64;  // r14
    let v98: i64;  // rdi
    let v99: i64;  // cc_op
    let v102: i64;  // rax
    let v103: i64;  // cc_dep2
    let v104: i256;  // ymm0
    let v105: i64;  // cc_ndep
    let v106: i64;  // cc_ndep
    let v107: i64;  // r12
    let v108: i32;  // ebx
    let v109: i32;  // r13d
    let v110: i32;  // ebp
    let v111: i64;  // rax
    let v112: i64;  // r14
    let v113: i256;  // ymm0
    let v114: i64;  // rcx
    let v116: i64;  // r13
    let v117: i32;  // ebp
    let v120: i64;  // rax
    let v121: i64;  // fs
    let v122: i64;  // rax
    let v123: i64;  // rdx
    let v124: i64;  // cc_op
    let v126: i64;  // cc_dep2
    let v127: i64;  // rax
    let v128: i64;  // r13
    let v129: i64;  // r15
    let v130: i64;  // rbx
    let v131: i64;  // r14
    let v132: i64;  // r15
    let v133: i64;  // rbp
    let v134: i32;  // ecx
    let v135: i64;  // rax
    let v136: i32;  // r12d
    let v137: i64;  // r12
    let v138: i64;  // rcx
    let v139: i64;  // rdx
    let v140: i64;  // rax
    let v142: i64;  // rax
    let v143: i64;  // rbp
    let v144: i64;  // rsi
    let v146: i64;  // rcx
    let v147: i64;  // rdi
    let v149: i64;  // rsi
    let v150: i64;  // rcx
    let v153: i64;  // rbx
    let v154: i64;  // rcx
    let v157: i64;  // r14
    let v158: i64;  // rdx
    let v159: i64;  // rbp
    let v161: i64;  // rax

    do {
        v72 = 0;
    } while (&v72 != &v57);
    v78 = v77;
    v13 = v79;
    v81 = v80;
    v29 = std::sys::pal::unix::fs::stat(v82, v80);
    if v29 == 2 {
        v60 = *((&v29 as &char + 8) as &i64);
        v59 = 2;
        goto LABEL_486968;
    }
    memcpy(&v59, &v29, 176);
    if v59 == 2 {
LABEL_486968:
        v66 = 1;
        v67 = v82;
        v68 = v80;
        v69 = 0;
        v14 = &v66;
        v15 = <os_display::Quoted as core::fmt::Display>::fmt;
        v29 = &g_4ef950;
        v30 = 2;
        v35 = 0;
        v33 = &v14;
        v34 = 1;
        v59 = alloc::fmt::format::format_inner(&v29);
        v62 = 1;
        v83 = __rust_alloc(32, 8);
        goto LABEL_486a36;
    }
    if !std::path::Path::is_file(v82, v80) as i8 {
        v66 = 1;
        v67 = v82;
        v68 = v80;
        v69 = 0;
        v14 = &v66;
        v15 = <os_display::Quoted as core::fmt::Display>::fmt;
        v29 = &g_4ef7f0;
        v30 = 2;
        v35 = 0;
        v33 = &v14;
        v34 = 1;
        v59 = alloc::fmt::format::format_inner(&v29);
        v62 = 1;
        v83 = __rust_alloc(32, 8);
LABEL_486a36:
        v89 = v59;
        *((v83 + 16) as &i128) = v61;
        *(v83 as &i128) = v89;
        goto LABEL_48725d;
    }
    v29 = std::sys::pal::unix::fs::stat(v82, v80);
    if v29 == 2 {
        v84 = *((&v29 as &char + 8) as &i64);
        v29 = 0;
        v30 = 1;
        v33 = 0;
        v34 = v84;
        v85 = __rust_alloc(32, 8);
        goto LABEL_486c60;
    }
    v3 = v86;
    v87 = v41;
    if v76 {
        v88 = *((&v29 as &char + 56) as &i32);
        if v88 < 0 {
            v90 = v88 & 4294967295;
        } else {
            v90 = 128;
        }
        v91 = std::sys::pal::unix::fs::set_perm(v82, v80, v90);
        if !v91 {
            goto LABEL_486c83;
        }
        v29 = 0;
        v30 = 1;
        v33 = 0;
        v34 = v91;
        v85 = __rust_alloc(32, 8);
LABEL_486c60:
        v94 = v29;
        *((v85 + 16) as &i64) = v33;
        *(v85 as &i128) = v94;
        goto LABEL_48725d;
    }
LABEL_486c83:
    v7 = 0;
    v8 = 1;
    v9 = 0;
    v12 = v80;
    v4 = v82;
    if !v87 {
        v3 = 0;
        goto LABEL_4871c9;
    }
    v93 = v3;
    if v93 <= 3 {
        if !v93 {
            v3 = 0;
            goto LABEL_487189;
        } else {
            v97 = 0;
            do {
                if v97 == v7 {
                    v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
            } while ((*((v8 + v97 * 4) as &i32) = 2, v97 += 1, v9 = v97, v3 != v9));
            v98 = v4;
            goto LABEL_487189;
        }
    }
    v87 = v87;
    v19 = v95;
    v11 = v77;
    v1 = v93 / 22;
    v96 = 0;
    if v93 >= 22 {
        v99 = 19;
        v102 = 0;
        do {
            v106 = amd64g_calculate_rflags_c(v99, 0, v103, v105);
            v6 = v102 + 1;
            v30 = 22;
            v41 = 0xcc000000bb000000990000008800;
            v39 = 0x7700000066000000440000003300;
            v37 = 689601926604450170026677061268993;
            v35 = 48234206897958065916534445818495771649;
            v104 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
            v33 = 0xaa00000055000000ff0000000000;
            v43 = 0xee000000dd00;
            v107 = 4;
            loop {
                v108 = *((&v29 as &u8 + 4 * v107) as &i8);
                if v108 == 2 {
                    break;
                }
                v109 = *((&v29 as &u8 + 4 * v107) as &i8);
                v110 = *((&v29 as &u8 + 4 * v107) as &i16);
                if v96 == v7 {
                    v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                *((v8 + v96 * 4) as &i32) = v109 * 0x1000000 | v110 * 0x100 | v108;
                v96 += 1;
                v9 = v96;
                v106 = 0;
                v107 += 1;
                if v107 == 26 {
                    break;
                }
            }
            v102 = v6;
            v99 = 8;
            v103 = v1;
        } while (v102 != v1);
    }
    v111 = v1 * 22;
    v112 = v3;
    v30 = 22;
    v33 = 0xaa00000055000000ff0000000000;
    v35 = 48234206897958065916534445818495771649;
    v37 = 689601926604450170026677061268993;
    v39 = 0x7700000066000000440000003300;
    v113 = v104 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800;
    v41 = 0xcc000000bb000000990000008800;
    v114 = 0xee000000dd00;
    v43 = 0xee000000dd00;
    if v112 != v111 {
        v6 = v96 * 4;
        loop {
            v116 = 0;
            if !(v116 != 22) || !((v117 = v33 as u128 as u32, v117 != 2)) {
                break;
            }
            if v96 + v116 == v7 {
                v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v120 = v8;
            *((v120 + v6 + v116 * 4) as &u32) = *((&v33 as &char + 7) as &i8) * 0x1000000 | *((&v33 as &char + 5) as &i16) * 0x100 | v117;
            v114 = v116 + 1;
            v9 = v96 + v116 + 1;
            if v112 - v111 == v114 {
                break;
            }
        }
    }
    v122 = *(v121 as &i64);
    v123 = *((v122 - 16) as &i64);
    if !v123 {
        v127 = std::sys::thread_local::native::lazy::Storage<T,D>::initialize(v122 - 16, 0, v123);
        v124 = 20;
        v126 = 0;
        v12 = v12;
        if !v127 {
LABEL_488993:
            core::result::unwrap_failed(); /* do not return */
        }
    } else {
        v124 = 7;
        v126 = 1;
        if !(v123 == 1) {
            goto LABEL_488993;
        }
        v127 = v122 - 8;
        v12 = v12;
    }
    v81 = v12;
    v128 = *(v127 as &i64);
    *(v128 as &i64) = *(v128 as &i64) + 1;
    if amd64g_calculate_condition(4, 24, vvar_3106 + 1, 0, amd64g_calculate_rflags_c(v124, v123 & 4294967295, v126, (v120 + vvar_3103 <= v120 ? 0 : 1))) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 4753851()
    }
    v29 = v128;
    v129 = v9;
    if v129 >= 2 {
        v6 = v8;
        v130 = v128 + 16;
        v131 = v128 + 288;
        v1 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/rand-0.8.5/src/seq/mod.rs";
        do {
            v133 = v132;
            if v133 >> 32 {
                v135 = rand::rng::Rng::gen_range(&v29, 0, v133, v114);
            } else {
                v134 = (BinaryOp ExpCmpNE ? (BinaryOp ExpCmpNE ? 63 - UnaryOp Clz : v114 & 4294967295) : (BinaryOp ExpCmpNE ? 63 - UnaryOp Clz : v114 & 4294967295));
                v136 = ((~(v134) & 31) ? (v133 & 4294967295 & 4294967295) << (~(v134) & 31) : (v133 & 4294967295 & 4294967295) << (~(v134) & 31));
                v138 = *((v128 + 272) as &i64);
                do {
                    if v138 >= 64 {
                        v139 = _ZN4rand4rngs7adapter9reseeding4fork26RESEEDING_RNG_FORK_COUNTER17h2e05f8738cf1edf4E.llvm.15031738488007737614;
                        v140 = *((v128 + 344) as &i64);
                        if v140 <= 0 || (*((v128 + 352) as &i64) - v139 >> 63) as char {
                            rand::rngs::adapter::reseeding::ReseedingCore<R,Rsdr>::reseed_and_generate(v131, v130, v139);
                        } else {
                            *((v128 + 344) as &i64) = v140 - 0x100;
                            rand_chacha::guts::refill_wide(v131, 6, v130);
                        }
                        v138 = 0;
                    }
                } while ((*((v8 + v97 * 4) as &i32) = 2, v97 += 1, v9 = v97, v3 != v9));
                v135 = v142 >> 32;
                v137 = v12;
            }
            v81 = v137;
            v143 = v133 - 1;
            if !(v143 < v129) {
                goto LABEL_488767;
            }
            if v135 >= v129 {
                goto LABEL_488767;
            }
            v144 = v6;
            v114 = *((v144 + v143 * 4) as &i32);
            *((v144 + v143 * 4) as &i32) = *((v144 + v135 * 4) as &i32);
            *((v144 + v135 * 4) as &i32) = v114;
        } while (v143 > 1);
    }
    v146 = v3 / 10;
    v147 = v146 + 2;
    v149 = 0;
    do {
        v150 = v146 + 3;
        if (!(v149 | v146 + 2) >> 32 ? (0 CONCAT v149) /m (v146 + 2) & 4294967295 & 4294967295 : (0 CONCAT v149) /m (v146 + 2)) >= v9 {
            v1 = "src/uu/shred/src/shred.rs";
LABEL_488767:
            core::panicking::panic_bounds_check(); /* do not return */
        }
    } while ((*((v8 + v97 * 4) as &i32) = 2, v97 += 1, v9 = v97, v3 != v9));
    *(v128 as &i32) = vvar_3112 - 1;
    if vvar_3112 == 1 {
        *((v128 + 8) as &i64) = *((v128 + 8) as &i64) - 1;
    }
    v3 = v9;
    v78 = v11;
    v5 = v87;
    v98 = v4;
LABEL_487189:
    v5 = v5;
    if v74 {
        if v3 == v7 {
            v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        v154 = v3;
        *((v8 + v154 * 4) as &i32) = 0;
        v3 = v154 + 1;
        v9 = v3;
    }
LABEL_4871c9:
    v28 = v3;
    v29 = 0x1b600000000;
    v30 = 0;
    v32 = 0;
    v31 = 1;
    v59 = std::fs::OpenOptions::_open(&v29, v153, v81);
    if v59 {
        <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v60, v153, v81);
LABEL_48725d:
        return;
    }
    v2 = *((&v59 as &char + 4) as &i32);
    v0 = v7;
    v158 = v8;
    v19 = v158 + v9 * 4;
    v159 = &v21;
    v3 = v157 >> 16;
    v10 = v157 & 4294967295;
    if v73 {
        v10 = v10;
    }
    v1 = v10;
    v161 = 0;
    v24 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/rand_core-0.6.4/src/impls.rs";
    v18 = v158;
}
