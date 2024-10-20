fn uu_tail::follow::watch::Observer::start(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x1b0]
    let v1: i64;  // [bp-0x1a8]
    let v2: i32;  // [bp-0x1a0]
    let v3: i128;  // [sp-0x198], Other Possible Types: Enum, struct32
    let v4: i64;  // [sp-0x190]
    let v5: i128;  // [sp-0x188]
    let v6: i64;  // [sp-0x180]
    let v7: i64;  // [sp-0x178]
    let v9: i64;  // [sp-0x168]
    let v11: i64;  // [sp-0x158], Other Possible Types: struct48, struct24
    let v12: i64;  // [sp-0x150]
    let v14: i128;  // [sp-0x138]
    let v15: i64;  // [sp-0x128]
    let v16: i64;  // [sp-0x110]
    let v17: i64;  // [sp-0x108]
    let v28: i64;  // [sp-0x70]
    let v29: i32;  // [sp-0x68]
    let v30: i8;  // [sp-0x60]
    let v31: i64;  // [sp-0x58]
    let v32: i64;  // [sp-0x50]
    let v36: i64;  // rbp
    let v37: i64;  // r15
    let v38: i64;  // cc_dep1
    let v39: i64;  // cc_ndep
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1
    let v43: i64;  // cc_ndep
    let v44: i64;  // cc_ndep
    let v46: i64;  // r12
    let v47: i128;  // xmm0
    let v58: i64;  // rax
    let v71: i64;  // rax
    let v73: i64;  // rcx
    let v74: i64;  // r14
    let v75: i64;  // rbx
    let v76: i64;  // 4096
    let v77: i64;  // rbp
    let v78: i64;  // r14
    let v79: i64;  // r15
    let v81: i64;  // r12
    let v82: i64;  // rax
    let v83: i64;  // r12
    let v84: i64;  // rbp
    let v85: i64;  // r15
    let v86: i64;  // r12
    let v87: i64;  // r12
    let v88: i64;  // r15
    let v89: i64;  // rdx
    let v90: i64;  // rcx
    let v91: i64;  // rax
    let v92: i64;  // r14
    let v93: i64;  // rax
    let v94: i64;  // rcx
    let v96: i64;  // rax
    let v97: i128;  // xmm0

    if *((a1 + 76) as &i8) == 2 {
LABEL_4c2060:
        return 0;
    }
    v3 = std::sync::mpmc::channel();
    v36 = v3;
    v37 = v4;
    v31 = v36;
    v32 = v37;
    v16 = v5;
    v17 = v6;
    v28 = *((a1 + 48) as &i64);
    v29 = *((a1 + 56) as &i32);
    v30 = 1;
    if vvar_1128 {
        *((a0 + 141) as &i8) = 1;
        v1 = 0;
        v2 = 0;
        v11 = notify::poll::PollWatcher::new(v36, v37, &v28);
        if v11 != 6 {
            v9 = v15;
            v41 = v11;
            v42 = *((&v11 as &char + 16) as &i128);
            v7 = v14;
            v5 = v42;
            v3 = v41;
            core::result::unwrap_failed(); /* do not return */
        }
        v7 = *((&v11 as &char + 40) as &i64);
        v40 = *((&v11 as &char + 8) as &i128);
        v5 = *((&v11 as &char + 24) as &i128);
        v3 = v40;
        v46 = __rust_alloc(40, 8);
        *((v46 + 32) as &i64) = v7;
        v47 = v3;
        *((v46 + 16) as &i128) = v5;
        *(v46 as &i128) = v47;
        *(a0 as &i64) = v16;
        *((a0 + 8) as &i64) = v17;
        *((a0 + 16) as &i64) = v46;
        *((a0 + 24) as &&i64) = &g_55cbb8;
        v71 = *((a1 + 40) as &i64);
        if v71 {
            v73 = *((a1 + 32) as &i64);
            v0 = a0 + 32;
            v74 = v71 * 48;
            v75 = 0;
            v1 = v73;
            v2 = v74;
            do {
                v77 = v76;
                if *((v73 + v75 + 24) as &i64) != 0x8000000000000000 {
                    v78 = *((v73 + v75 + 32) as &i64);
                    v79 = *((v73 + v75 + 40) as &i64);
                    if v79 {
                        v82 = __rust_alloc(v79, 1);
                    }
                    v83 = v81;
                    memcpy(v83, v78, v79);
                    if !std::path::Path::is_absolute(v83, v79) as i8 {
                        v3 = std::env::current_dir();
                        if v3 != 0x8000000000000000 {
                            v11 = std::path::Path::_join(v6, v5, v83, v79);
                            v79 = *((&v11 as &char + 16) as &i64);
                            v85 = v11;
                            v86 = v12;
                        } else {
                            v3 = 0x8000000000000000;
                            v6 = v4;
                            v96 = __rust_alloc(32, 8);
                            v58 = v96;
                            v97 = v3;
                            *((v96 + 16) as &i128) = *((&v3 as &char + 16) as &i128);
                            *(v96 as &i128) = v97;
                            if !v79 {
                                return v58;
                            }
                            goto LABEL_4c20e0;
                        }
                    }
                    v87 = v86;
                    v88 = v85;
                    v77 = v84;
                    if !uu_tail::paths::path_is_tailable(v87, v79) as i8 {
                        v91 = std::path::Path::parent(v87, v79, v89, v90);
                        if !v91 || !std::path::Path::is_dir(v91, v89) as i8 {
                            v92 = *((v77 + 48) as &i64);
                            if v92 == *((v77 + 32) as &i64) {
                                alloc::raw_vec::RawVec<T,A>::grow_one(v0);
                            }
                            v93 = *((v77 + 40) as &i64);
                            v94 = v92 * 3;
                            *((v93 + v94 * 8) as &i64) = v88;
                            *((v93 + v94 * 8 + 8) as &i64) = v87;
                            *((v93 + v94 * 8 + 16) as &i64) = v79;
                            *((v77 + 48) as &i64) = v92 + 1;
                            v73 = v1;
                            v74 = v2;
                            continue;
                        }
                        if !std::path::Path::parent(v87, v79, v89, v90) {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v58 = uu_tail::follow::watch::WatcherRx::watch(*((v77 + 16) as &i64), *((v77 + 24) as &i64));
                        v73 = v1;
                        if v58 {
                            if !v88 {
                                return v58;
                            }
LABEL_4c20e0:
                            return v58;
                        }
                    } else {
                        v58 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((v77 + 16) as &i64), *((v77 + 24) as &i64), v87, v79);
                        v73 = v1;
                        if v58 {
                            if !v88 {
                                return v58;
                            }
                            goto LABEL_4c20e0;
                        }
                    }
                    v74 = v2;
                    if v88 {
                        v73 = v1;
                    }
                }
            } while ((v75 += 48, v74 != v75));
        }
        goto LABEL_4c2060;
    }
    if !v36 {
LABEL_4c1a02:
        *((v37 + 0x200) as &i32) = vvar_1131 + 1;
        if BinaryOp CasCmpNE {
            goto LABEL_4c1a02;
        }
        if amd64g_calculate_condition(14, 24, vvar_1131 + 1, 0, amd64g_calculate_rflags_c(20, v36, 0, v39)) as char {
            goto LABEL_0x4c1a10;
        }
    }
    v38 = v36 & 4294967295;
    if v36 == 1 {
LABEL_4c1704:
        *((v37 + 384) as &i32) = vvar_1138 + 1;
        if BinaryOp CasCmpNE {
            goto LABEL_4c1704;
        }
        if amd64g_calculate_condition(14, 24, vvar_1138 + 1, 0, amd64g_calculate_rflags_c(7, v38, 1, v43)) as char {
            goto LABEL_0x4c1a1d;
        }
    }
LABEL_4c1a12:
    *((v37 + 112) as &i32) = vvar_1139 + 1;
    if BinaryOp CasCmpNE {
        goto LABEL_4c1a12;
    }
    if amd64g_calculate_condition(14, 24, vvar_1139 + 1, 0, amd64g_calculate_rflags_c(7, v38, 1, v44)) as char {
        goto LABEL_0x4c1a1d;
    }
}
