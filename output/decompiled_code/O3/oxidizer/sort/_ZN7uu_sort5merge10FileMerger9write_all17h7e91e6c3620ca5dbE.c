fn uu_sort::merge::FileMerger::write_all(a0: void*, a1: void*, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x269]
    let v1: i8;  // [bp-0x268]
    let v2: i8;  // [bp-0x260]
    let v3: i128;  // [sp-0x258]
    let v4: i128;  // [sp-0x248]
    let v5: i128;  // [sp-0x238]
    let v6: i128;  // [bp-0x228]
    let v7: i64;  // [sp-0x220]
    let v8: i128;  // [sp-0x218]
    let v9: i64;  // [sp-0x200]
    let v10: i128;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1e8]
    let v12: i128;  // [sp-0x1d8], Other Possible Types: struct8
    let v13: i128;  // [sp-0x1d0]
    let v14: i64;  // [sp-0x1c8]
    let v15: i128;  // [sp-0x1c0]
    let v16: i128;  // [sp-0x1b0]
    let v17: i128;  // [sp-0x1a0]
    let v18: i128;  // [sp-0x190]
    let v19: i128;  // [sp-0x180]
    let v20: i128;  // [sp-0x170]
    let v21: i64;  // [sp-0x160]
    let v22: i960;  // [sp-0x158], Other Possible Types: struct120
    let v23: i328;  // [sp-0xe0], Other Possible Types: struct41
    let v24: i64;  // [sp-0xb0], Other Possible Types: struct24
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm1
    let v32: i256;  // ymm1
    let v33: i256;  // ymm1
    let v34: i128;  // xmm2
    let v35: i256;  // ymm2
    let v36: i256;  // ymm2
    let v37: i128;  // xmm3
    let v38: i256;  // ymm3
    let v39: i256;  // ymm3
    let v40: i8;  // al
    let v41: i64;  // r8
    let v42: i64;  // cc_ndep
    let v43: i64;  // cc_dep1
    let v44: i64;  // r14
    let v45: i64;  // rbx
    let v46: i64;  // rbp
    let v47: i128;  // xmm0
    let v49: i128;  // xmm1
    let v50: i64;  // rax
    let v52: i64;  // cc_op
    let v53: i64;  // cc_dep1
    let v54: i8;  // al
    let v55: i64;  // r9
    let v56: i64;  // rsi
    let v57: i64;  // rdx
    let v58: i64;  // rax
    let v59: i64;  // cc_dep1
    let v60: i64;  // rax
    let v61: i64;  // rbx
    let v62: i64;  // r14
    let v63: i64;  // cc_ndep
    let v64: i64;  // r14
    let v65: i128;  // xmm0
    let v66: i64;  // rbx
    let v67: i64;  // r13
    let v68: i64;  // r14
    let v69: i64;  // rdi
    let v70: i64;  // rax
    let v71: i64;  // rsi
    let v72: i128;  // xmm0
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v77: i128;  // xmm2
    let v78: i128;  // xmm3
    let v79: i64;  // rcx
    let v80: i64;  // r14
    let v81: i64;  // rax
    let v83: i64;  // rdx
    let v84: i64;  // cc_dep2
    let v85: i64;  // rax
    let v86: i64;  // rax
    let v87: i64;  // r14
    let v88: i64;  // rbx

    v23 = uu_sort::Output::into_write(a2);
    v27 = *((a0 + 80) as &i128);
    v8 = v27;
    v28 = *((a0 + 64) as &i128);
    v6 = v28;
    vvar_21{reg 224} = ((((((vvar_226{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_225{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_228{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=vvar_0, size=16, endness=Iend_LE)))
    v31 = *((a0 + 16) as &i128);
    vvar_22{reg 256} = ((vvar_233{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_232{reg 256}))
    v34 = *((a0 + 32) as &i128);
    vvar_23{reg 288} = ((vvar_236{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_235{reg 288}))
    v37 = *((a0 + 48) as &i128);
    vvar_24{reg 320} = ((vvar_239{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_238{reg 320}))
    v5 = v37;
    v4 = v34;
    v3 = v31;
    v0 = *((a1 + 132) as &i8);
    v40 = !v4;
    v9 = "src/uu/sort/src/merge.rs";
    loop {
        v7 = v7;
        v43 = v40 & 1;
        v7 = v7;
        if (v40 & 1) {
LABEL_4e2bd1:
            v80 = v2;
            v12 = v1;
            v13 = v80;
            if !v12 {
LABEL_4e2c06:
                *((v80 + 0x200) as &i32) = vvar_785 - 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_4e2c06;
                }
                v81 = *((v80 + 128) as &i64);
                do {
                    v83 = v81 | *((v80 + 400) as &i64);
                    *((v80 + 128) as &i64) = v83;
                    if v81 != *((v80 + 128) as &i64) {
                        *((v80 + 128) as &i64) = v83;
                        v84 = *((v80 + 128) as &i64);
                        v86 = *((v80 + 128) as &i64);
                    } else {
                        *((v80 + 128) as &i64) = v83;
                        v84 = *((v80 + 128) as &i64);
                    }
                } while (v85 != v84);
                if !(v81 & *((v80 + 400) as &i64)) {
                    std::sync::mpmc::waker::SyncWaker::disconnect(v80 + 320);
                }
                *((v80 + &g_209 as &u8) as &i8) = 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x4e2c4c;
                }
                if (!vvar_790)
                    break;
                break;
            } else if v12 == 1 {
                std::sync::mpmc::counter::Sender<C>::release(&v13);
                break;
            } else {
                std::sync::mpmc::counter::Sender<C>::release(&v13);
                break;
            }
        }
        v44 = *((&v3 as &char + 8) as &i64);
        v45 = *((v44 + 16) as &i64);
        *(v7 as &i64) = *(v7 as &i64) + 1;
        if amd64g_calculate_condition(4, 24, vvar_734 + 1, 0, amd64g_calculate_rflags_c(17, v43, 0, v42)) as char {
            [D] Unsupported jumpkind Ijk_NoDecode at address 5123384()
        }
        v46 = *((v44 + 24) as &i64);
        v47 = *((v44 + 24) as &i128);
        vvar_21{reg 224} = ((vvar_21{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_259{reg 224}))
        v11 = *((&v8 as &char + 8) as &i64);
        v49 = v7;
        vvar_22{reg 256} = ((vvar_22{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_263{reg 256}))
        v10 = v49;
        v7 = v45;
        v8 = v47;
        v50 = *((v7 + 16) as &i64);
        if v46 >= *((v50 + 40) as &i64) {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v52 = 5;
        v53 = v0;
        if !(v0) || !((v53 = v10, v52 = 20, v53)) {
LABEL_4e28a9:
            uu_sort::Line::print(3 * v46 * 8 + *((v50 + 32) as &i64), &v23, a1, &v7, v41, v55);
            goto LABEL_4e28bc;
        }
        if *((&v10 as &char + 8) as &i64) >= *((*((v53 + 16) as &i64) + 40) as &i64) {
            v9 = "src/uu/sort/src/merge.rs";
            goto LABEL_0x4e2d58;
        }
        v54 = uu_sort::compare_by() as i8;
        v52 = 17;
        v53 = v54;
        if !(!v54) {
            goto LABEL_4e28a9;
        }
LABEL_4e28bc:
        v42 = amd64g_calculate_rflags_c(v52, v53, 0, amd64g_calculate_rflags_c(17, v43, 0, v42));
        if *((*((v7 + 16) as &i64) + 40) as &i64) != v46 + 1 {
            v59 = v4;
            if !v4 {
                core::option::unwrap_failed(); /* do not return */
            }
            *((*((&v3 as &char + 8) as &i64) + 24) as &i64) = *((*((&v3 as &char + 8) as &i64) + 24) as &i64) + 1;
            v42 = v59 < 0;
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v3, 0, v4);
            goto LABEL_4e29e6;
        }
        v58 = std::sync::mpmc::Receiver<T>::recv(v44, v56, v57);
        v22 = v58;
        if v58 {
            v24 = v58;
            if !v4 {
                core::option::unwrap_failed(); /* do not return */
            }
            v12 = 1;
            v13 = 1;
            v14 = v58;
            v60 = __rust_alloc(24, 8);
            v64 = v60;
            *((v64 + 16) as &i64) = v14;
            v65 = v12;
            vvar_21{reg 224} = ((vvar_21{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_361{reg 224}))
            *(v64 as &i128) = v65;
            v66 = *((&v3 as &char + 8) as &i64);
            v67 = *((v66 + 16) as &i64);
            *(v67 as &i64) = *(v67 as &i64) - 1;
            v42 = amd64g_calculate_rflags_c(20, v60, 0, v42);
            if vvar_751 == 1 {
                self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v67 + 16);
                *((v67 + 8) as &i32) = vvar_755 - 1;
                v42 &= 1;
            }
            *((v66 + 16) as &i64) = v64;
            *((*((&v3 as &char + 8) as &i64) + 24) as &i64) = 0;
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v3, 0, v4);
            goto LABEL_4e29e6;
            goto LABEL_4e29e6;
        }
        v12 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(&v3);
        v61 = v12;
        if v61 != 3 {
            v62 = v14;
            *(v62 as &i32) = vvar_750 - 1;
            v63 = v61 < 3;
            if !(vvar_750 == 1) || !((self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v62 + 16), *((v62 + 8) as &i32) = vvar_754 - 1, v63 &= 1, vvar_754 == 1)) {
                if !v61 {
                    goto LABEL_4e2b81;
                }
LABEL_4e2b46:
                if v61 == 1 {
                    std::sync::mpmc::counter::Receiver<C>::release(&v13);
                } else {
                    std::sync::mpmc::counter::Receiver<C>::release(&v13);
                }
            } else {
                if !(!v61) {
                    goto LABEL_4e2b46;
                }
LABEL_4e2b81:
                v68 = v13;
                *((v68 + 520) as &i32) = vvar_758 - 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x4e2b89;
                }
                v42 = amd64g_calculate_rflags_c(20, v61, 0, v63);
                if ((Not ((vvar_758 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
                std::sync::mpmc::array::Channel<T>::disconnect_receivers(v68);
                *((v68 + &g_209 as &u8) as &i8) = 1;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x4e2b9d;
                }
                if !vvar_763 {
                    goto LABEL_4e2bb0;
                }
            }
        }
LABEL_4e2bb0:
        if v22 {
            self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v22);
        }
LABEL_4e29e6:
        v69 = v10;
        if v69 {
            v70 = *(v69 as &i64);
            if v70 != 1 {
                v42 = v70 < 1;
                *(v69 as &i64) = v70 - 1;
            } else {
                v71 = *((v69 + 16) as &i64);
                *(v69 as &i64) = 0;
                if v69 != -1 {
                    *((v69 + 8) as &i32) = vvar_766 - 1;
                    v42 = v69 < -1;
                }
                v22 = uu_sort::chunks::Chunk::recycle(v71);
                v12 = v11;
                v21 = *((&v22 as &char + 112) as &i64);
                v72 = *((&v22 as &char + 96) as &i128);
                v20 = v72;
                v73 = *((&v22 as &char + 80) as &i128);
                v19 = v73;
                v74 = *((&v22 as &char + 64) as &i128);
                v18 = v74;
                v75 = v22;
                vvar_21{reg 224} = ((((((((vvar_21{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_473{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_475{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_477{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_479{reg 224}))
                v76 = *((&v22 as &char + 16) as &i128);
                vvar_22{reg 256} = ((vvar_22{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_481{reg 256}))
                v77 = *((&v22 as &char + 32) as &i128);
                vvar_23{reg 288} = ((vvar_23{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_483{reg 288}))
                v78 = *((&v22 as &char + 48) as &i128);
                vvar_24{reg 320} = ((vvar_24{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_485{reg 320}))
                v17 = v78;
                v16 = v77;
                v15 = v76;
                v13 = v75;
                std::sync::mpmc::Sender<T>::send(&v24, &v1, &v12, v79);
            }
        }
        v7 = v7;
        v7 = v7;
        if !v4 {
            goto LABEL_4e2bd1;
        }
    }
    v14 = v6;
    v12 = v5;
    v24 = std::thread::JoinInner<T>::join(&v12);
    if v24 {
        v12 = *((&v24 as &char + 8) as &i128);
        core::result::unwrap_failed(); /* do not return */
    }
    v87 = *((&v24 as &char + 8) as &i64);
    v88 = v7;
    if !v88 {
        return v87;
    }
    *(v88 as &i64) = *(v88 as &i64) - 1;
    if vvar_797 != 1 {
        return v87;
    }
    self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v88 + 16);
    *((v88 + 8) as &i64) = *((v88 + 8) as &i64) - 1;
    return v87;
}
