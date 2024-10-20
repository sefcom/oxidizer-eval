fn uu_sort::merge::FileMerger::write_all_to(a0: void*, a1: void*, a2: u64, a3: u32, a4: u64, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x1e1]
    let v1: i64;  // [sp-0x1e0]
    let v2: i64;  // [sp-0x1d8]
    let v3: i64;  // [sp-0x1d0]
    let v4: i128;  // [sp-0x1c8]
    let v5: i64;  // [sp-0x1b8]
    let v6: i64;  // [sp-0x1a8], Other Possible Types: struct8
    let v7: i64;  // [sp-0x1a0]
    let v8: i64;  // [sp-0x198]
    let v9: i128;  // [sp-0x190]
    let v10: i128;  // [sp-0x180]
    let v11: i128;  // [sp-0x170]
    let v12: i128;  // [sp-0x160]
    let v13: i128;  // [sp-0x150]
    let v14: i128;  // [sp-0x140]
    let v15: i64;  // [sp-0x130]
    let v16: i960;  // [sp-0x128], Other Possible Types: struct120
    let v17: i64;  // [sp-0xb0], Other Possible Types: struct24
    let v20: i8;  // al
    let v21: i64;  // cc_ndep
    let v22: i256;  // ymm0
    let v23: i256;  // ymm1
    let v24: i256;  // ymm2
    let v25: i256;  // ymm3
    let v26: i64;  // cc_dep1
    let v27: i64;  // rbp
    let v28: i64;  // r12
    let v29: i64;  // r15
    let v30: i128;  // xmm0
    let v31: i64;  // rcx
    let v32: i128;  // xmm1
    let v33: i64;  // rax
    let v35: i64;  // cc_op
    let v36: i64;  // cc_dep1
    let v37: i8;  // al
    let v38: i64;  // r8
    let v39: i64;  // rsi
    let v40: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // cc_dep1
    let v43: i64;  // rax
    let v44: i64;  // r15
    let v45: i64;  // rbx
    let v46: i64;  // cc_ndep
    let v47: i64;  // rbx
    let v48: i128;  // xmm0
    let v49: i64;  // r12
    let v50: i64;  // r15
    let v51: i64;  // rbx
    let v52: i64;  // rdi
    let v53: i64;  // rax
    let v54: i64;  // rsi
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm3
    let v62: i64;  // rbx
    let v65: i64;  // rax
    let v66: i64;  // rdx
    let v67: i64;  // cc_dep2
    let v68: i64;  // rax
    let v69: i64;  // rax
    let v70: i64;  // rax
    let v71: i64;  // r15
    let v72: i64;  // rbx

    v1 = a0 + 16;
    v2 = a0 + 72;
    v0 = *((a1 + 132) as &i8);
    v20 = !*((a0 + 32) as &i64);
    v3 = "src/uu/sort/src/merge.rs";
    loop {
        v26 = v20 & 1;
        if (v20 & 1) {
LABEL_4e3340:
            v62 = *((a0 + 8) as &i64);
            v6 = *(a0 as &i64);
            v7 = v62;
            if !v6 {
LABEL_4e336a:
                *((v62 + 0x200) as &i32) = vvar_754 - 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_4e336a;
                }
                do {
                    v65 = *((v62 + 128) as &i64);
                    v66 = v65 | *((v62 + 400) as &i64);
                    *((v62 + 128) as &i64) = v66;
                    if v65 != *((v62 + 128) as &i64) {
                        *((v62 + 128) as &i64) = v66;
                        v67 = *((v62 + 128) as &i64);
                        v69 = *((v62 + 128) as &i64);
                    } else {
                        *((v62 + 128) as &i64) = v66;
                        v67 = *((v62 + 128) as &i64);
                    }
                } while ((v70 = v68, v65 != v67));
                if !(v70 & *((v62 + 400) as &i64)) {
                    std::sync::mpmc::waker::SyncWaker::disconnect(v62 + 320);
                }
                *((v62 + &g_209 as &u8) as &i8) = 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x4e33be;
                }
                if (!vvar_759)
                    break;
                break;
            } else if v6 != 1 {
                std::sync::mpmc::counter::Sender<C>::release(&v7);
                break;
            } else {
                std::sync::mpmc::counter::Sender<C>::release(&v7);
                break;
            }
        }
        v27 = *((a0 + 24) as &i64);
        v28 = *((v27 + 16) as &i64);
        *(v28 as &i64) = *(v28 as &i64) + 1;
        if amd64g_calculate_condition(4, 24, vvar_705 + 1, 0, amd64g_calculate_rflags_c(17, v26, 0, v21)) as char {
            [D] Unsupported jumpkind Ijk_NoDecode at address 5125269()
        }
        v29 = *((v27 + 24) as &i64);
        v30 = *((v27 + 24) as &i128);
        vvar_22{reg 224} = ((vvar_22{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_238{reg 224}))
        v31 = v2;
        v5 = *((v31 + 16) as &i64);
        v32 = *(v31 as &i128);
        vvar_23{reg 256} = ((vvar_23{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_242{reg 256}))
        v4 = v32;
        *((a0 + 72) as &i64) = v28;
        *((a0 + 80) as &i128) = v30;
        v33 = *((v28 + 16) as &i64);
        if v29 >= *((v33 + 40) as &i64) {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v35 = 5;
        v36 = v0;
        if !(v0) || !((v36 = v4, v35 = 20, v36)) {
LABEL_4e3064:
            uu_sort::Line::print(v29 * 24 + *((v33 + 32) as &i64), a2, a1, v31, v38, a5);
            goto LABEL_4e3074;
        }
        if *((&v4 as &char + 8) as &i64) >= *((*((v36 + 16) as &i64) + 40) as &i64) {
            v3 = "src/uu/sort/src/merge.rs";
            goto LABEL_0x4e34b5;
        }
        v37 = uu_sort::compare_by() as i8;
        v35 = 17;
        v36 = v37;
        if !(!v37) {
            goto LABEL_4e3064;
        }
LABEL_4e3074:
        v21 = amd64g_calculate_rflags_c(v35, v36, 0, amd64g_calculate_rflags_c(17, v26, 0, v21));
        if *((*((v28 + 16) as &i64) + 40) as &i64) != v29 + 1 {
            v42 = *((a0 + 32) as &i64);
            if !*((a0 + 32) as &i64) {
                core::option::unwrap_failed(); /* do not return */
            }
            *((*((a0 + 24) as &i64) + 24) as &i64) = *((*((a0 + 24) as &i64) + 24) as &i64) + 1;
            v21 = v42 < 0;
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v1, 0, *((a0 + 32) as &i64));
            goto LABEL_4e3183;
        }
        v41 = std::sync::mpmc::Receiver<T>::recv(v27, v39, v40);
        v16 = v41;
        if v41 {
            v17 = v41;
            if !*((a0 + 32) as &i64) {
                core::option::unwrap_failed(); /* do not return */
            }
            v6 = 1;
            v7 = 1;
            v8 = v41;
            v43 = __rust_alloc(24, 8);
            v47 = v43;
            *((v47 + 16) as &i64) = v8;
            v48 = v6;
            vvar_22{reg 224} = ((vvar_22{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_339{reg 224}))
            *(v47 as &i128) = v48;
            v49 = *((a0 + 24) as &i64);
            v50 = *((v49 + 16) as &i64);
            *(v50 as &i64) = *(v50 as &i64) - 1;
            v21 = amd64g_calculate_rflags_c(20, v43, 0, v21);
            if vvar_720 == 1 {
                self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v50 + 16);
                *((v50 + 8) as &i32) = vvar_724 - 1;
                v21 &= 1;
            }
            *((v49 + 16) as &i64) = v47;
            *((*((a0 + 24) as &i64) + 24) as &i64) = 0;
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v1, 0, *((a0 + 32) as &i64));
            goto LABEL_4e3183;
            goto LABEL_4e3183;
        }
        v6 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v1);
        v44 = v6;
        if v44 != 3 {
            v45 = v8;
            *(v45 as &i32) = vvar_719 - 1;
            v46 = v44 < 3;
            if !(vvar_719 == 1) || !((self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v45 + 16), *((v45 + 8) as &i32) = vvar_723 - 1, v46 &= 1, vvar_723 == 1)) {
                if !v44 {
                    goto LABEL_4e32f4;
                }
LABEL_4e32be:
                if v44 == 1 {
                    std::sync::mpmc::counter::Receiver<C>::release(&v7);
                } else {
                    std::sync::mpmc::counter::Receiver<C>::release(&v7);
                }
            } else {
                if !(!v44) {
                    goto LABEL_4e32be;
                }
LABEL_4e32f4:
                v51 = v7;
                *((v51 + 520) as &i32) = vvar_728 - 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x4e32f9;
                }
                v21 = amd64g_calculate_rflags_c(20, v44, 0, v46);
                if ((Not ((vvar_728 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
                std::sync::mpmc::array::Channel<T>::disconnect_receivers(v51);
                *((v51 + &g_209 as &u8) as &i8) = 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x4e330d;
                }
                if !vvar_732 {
                    goto LABEL_4e331f;
                }
            }
        }
LABEL_4e331f:
        if v16 {
            self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v16);
        }
LABEL_4e3183:
        v52 = v4;
        if v52 {
            v53 = *(v52 as &i64);
            if v53 != 1 {
                v21 = v53 < 1;
                *(v52 as &i64) = v53 - 1;
            } else {
                v54 = *((v52 + 16) as &i64);
                *(v52 as &i64) = 0;
                if v52 != -1 {
                    *((v52 + 8) as &i32) = vvar_735 - 1;
                    v21 = v52 < -1;
                }
                v16 = uu_sort::chunks::Chunk::recycle(v54);
                v6 = v5;
                v15 = *((&v16 as &char + 112) as &i64);
                v55 = *((&v16 as &char + 96) as &i128);
                v14 = v55;
                v56 = *((&v16 as &char + 80) as &i128);
                v13 = v56;
                v57 = *((&v16 as &char + 64) as &i128);
                v12 = v57;
                v58 = v16;
                vvar_22{reg 224} = ((((((((vvar_22{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_452{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_454{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_456{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_458{reg 224}))
                v59 = *((&v16 as &char + 16) as &i128);
                vvar_23{reg 256} = ((vvar_23{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_460{reg 256}))
                v60 = *((&v16 as &char + 32) as &i128);
                vvar_24{reg 288} = ((vvar_24{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_462{reg 288}))
                v61 = *((&v16 as &char + 48) as &i128);
                vvar_25{reg 320} = ((vvar_25{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_464{reg 320}))
                v11 = v61;
                v10 = v60;
                v9 = v59;
                v7 = v58;
                std::sync::mpmc::Sender<T>::send(&v17, a0, &v6, &v7);
            }
        }
        if !*((a0 + 32) as &i64) {
            goto LABEL_4e3340;
        }
    }
    v8 = *((a0 + 64) as &i64);
    v6 = *((a0 + 48) as &i128);
    v17 = std::thread::JoinInner<T>::join(&v6);
    if v17 {
        v6 = *((&v17 as &char + 8) as &i128);
        core::result::unwrap_failed(); /* do not return */
    }
    v71 = *((&v17 as &char + 8) as &i64);
    v72 = *(v2 as &i64);
    if !v72 {
        return v71;
    }
    *(v72 as &i64) = *(v72 as &i64) - 1;
    if vvar_766 == 1 {
        self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v72 + 16);
        *((v72 + 8) as &i64) = *((v72 + 8) as &i64) - 1;
        return v71;
    }
    return v71;
}
