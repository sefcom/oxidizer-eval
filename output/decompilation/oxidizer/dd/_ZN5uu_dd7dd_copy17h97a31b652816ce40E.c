fn uu_dd::dd_copy(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x2c1]
    let v1: u32;  // [bp-0x2c0]
    let v2: u8;  // [bp-0x2ba]
    let v3: u8;  // [bp-0x2b9]
    let v4: u32;  // [bp-0x2ac]
    let v5: i64;  // [bp-0x2a8]
    let v6: void*;  // [bp-0x2a0]
    let v7: void*;  // [bp-0x298]
    let v8: void*;  // [bp-0x290]
    let v9: void*;  // [bp-0x288]
    let v10: void*;  // [bp-0x280]
    let v11: void*;  // [bp-0x280]
    let v12: void*;  // [bp-0x278]
    let v13: void*;  // [bp-0x270]
    let v14: void*;  // [bp-0x268]
    let v15: void*;  // [bp-0x268]
    let v16: void*;  // [bp-0x260]
    let v17: u128;  // [bp-0x258]
    let v18: u128;  // [bp-0x258]
    let v19: u64;  // [bp-0x258]
    let v20: struct17;  // [bp-0x258]
    let v21: u128;  // [bp-0x250]
    let v22: u128;  // [bp-0x24c]
    let v23: u128;  // [bp-0x248]
    let v24: i64;  // [bp-0x240]
    let v25: u128;  // [bp-0x238]
    let v26: u64;  // [bp-0x228]
    let v27: u64;  // [bp-0x218]
    let v28: u64;  // [bp-0x210]
    let v29: struct32;  // [bp-0x208], Other Possible Types: struct40, u64
    let v30: void*;  // [bp-0x208]
    let v31: void*;  // [bp-0x208], Other Possible Types: struct96
    let v32: void*;  // [bp-0x208], Other Possible Types: u128
    let v33: u64;  // [bp-0x200]
    let v34: u128;  // [bp-0x1f8]
    let v35: u64;  // [bp-0x1f8]
    let v36: u64;  // [bp-0x1f8]
    let v37: u64;  // [bp-0x1f0]
    let v38: u64;  // [bp-0x1e8]
    let v39: u128;  // [bp-0x1e8]
    let v40: u8;  // [bp-0x1e0]
    let v42: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x1a0]
    let v43: u64;  // [bp-0x198]
    let v44: u64;  // [bp-0x190]
    let v45: u64;  // [bp-0x188]
    let v46: u64;  // [bp-0x180]
    let v47: u64;  // [bp-0x178]
    let v48: void*;  // [bp-0x170]
    let v49: void*;  // [bp-0x168], Other Possible Types: struct_1 *, u128
    let v50: void*;  // [bp-0x160]
    let v51: void*;  // [sp-0x158], Other Possible Types: u64
    let v52: void*;  // [bp-0x150]
    let v53: struct24;  // [bp-0x148]
    let v54: u64;  // [bp-0x138]
    let v55: u64;  // [bp-0x130]
    let v56: u64;  // [bp-0x128]
    let v57: u8;  // [bp-0x120]
    let v58: struct24;  // [bp-0x108]
    let v59: u128;  // [bp-0x108]
    let v60: Result<struct64, struct16>;  // [bp-0x108]
    let v61: u128;  // [bp-0xf8]
    let v62: void*;  // [bp-0xc8]
    let v63: void*;  // [bp-0xc0]
    let v64: void*;  // [bp-0xb8]
    let v65: u32;  // [bp-0xb0]
    let v66: struct12;  // [bp-0xa8]
    let v67: void*;  // [bp-0x98]
    let v68: void*;  // [bp-0x90]
    let v69: void*;  // [bp-0x88]
    let v70: u32;  // [bp-0x80]
    let v71: void*;  // [bp-0x78]
    let v72: void*;  // [bp-0x70]
    let v73: void*;  // [bp-0x68]
    let v74: void*;  // [bp-0x60]
    let v75: i8;  // [bp-0x58]
    let v76: iNone;  // [bp-0x48]
    let v77: u64;  // [bp-0x38]
    let v79: i64;  // r15
    let v80: u8;  // al
    let v81: core::fmt::rt::Argument;  // r15
    let v82: u32;  // edx
    let v84: void*;  // rax
    let v85: core::str::pattern::CharSearcher;  // xmm0
    let v86: void*;  // rax
    let v87: void*;  // rcx
    let v89: u64;  // rbp
    let v90: u64;  // r12
    let v91: u64;  // rbx
    let v92: u8;  // r15b
    let v93: u32;  // edx
    let v94: iNone;  // xmm0
    let v95: u128;  // xmm1

    v26 = std::time::Instant::now();
    v79 = *((a1 + 16) as &i64);
    v47 = uu_dd::calc_bsize(*((*((a0 + 8) as &i64) + 112) as &i64), *((v79 + 120) as &i64));
    v29 = std::sync::mpmc::channel();
    v27 = v29.field_0;
    v28 = v33;
    v80 = *((*((a0 + 8) as &i64) + 166) as &i8);
    v20 = struct17 {
        field_0: *(&v29.field_16 as &i128)
        field_16: v80
    };
    v36 = 0x8000000000000000;
    v32 = 0;
    v40 = 0;
    v58 = std::thread::Builder::spawn_unchecked(&v32, &v20);
    v53 = core::result::Result<T,E>::expect(&v58);
    v0 = *((v79 + 147) as &i8) ^ 1;
    if *(*((a0 + 8) as &i64) as &i32) == 2 || *((*((a0 + 8) as &i64) + 8) as &i64) {
        v42 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(0xdd, v47);
        v1 = uu_dd::Alarm::with_interval(&v57, 1, 0) & -0x100 | 1;
        v60 = uu_dd::progress::SignalHandler::install_signal_handler(uu_dd::Alarm::manual_trigger_fn(&v57));
        v84 = *((a0 + 8) as &i64);
        v30 = v32;
        v34 = v36;
        if let Err(_) = v60 {
            v49 = &v60 as u8;
            v30 = v32;
            v34 = v36;
            if v84[166] as i8 != 2 {
                eprintln!("Internal dd Warning: Unable to register signal handler \n\t{}", &v49);
                v84 = *((a0 + 8) as &i64);
                v30 = v31;
                v34 = v35;
            }
        }
        v3 = v84[69] as i8;
        v2 = *((*((a1 + 16) as &i64) + 156) as &i8);
        if *((*((a1 + 16) as &i64) + 165) as &i8) {
            uu_dd::bufferedoutput::BufferedOutput::new(&v30, a1);
            v85 = *(&v30 as &i128);
            v25 = *(&v38 as &i128);
            v23 = *(&v34 as &i128);
            *(&v18 as &core::str::pattern::CharSearcher) = v85;
        } else {
            v24 = *((a1 + 16) as &i64);
            v21 = *(a1 as &i128);
            v19 = 0x8000000000000000;
        }
        v45 = v27;
        v46 = v28;
        v13 = 0;
        v12 = 0;
        v10 = 0;
        v9 = 0;
        v4 = 0;
        v8 = 0;
        v7 = 0;
        v6 = 0;
        v14 = 0;
        v48 = 0;
        v16 = 0;
        loop {
            v86 = *((a0 + 8) as &i64);
            if *(v86 as &i64) != 2 {
                v87 = v7 + v6;
                if (*(v86 as &i64) & 1) {
                    v87 = v8;
                }
                if v87 >= v86[8] as i64 {
                    goto LABEL_4915d2;
                }
            }
            uu_dd::read_helper(&v30, a0, &v42, uu_dd::calc_loop_bsize(*(v86 as &i64), v86[8] as i64, v6, v7, v10, v9, v86[112] as i64, v47));
            v81 = v33;
            if v30 as i32 == 1 {
                break;
            }
            if v81 || v34 {
                v89 = v37;
                v29 = uu_dd::BlockWriter::write_blocks(&v18, v43, v44);
                if v29.field_0 as i32 != 1 {
                    v90 = v34;
                    v91 = v37;
                    v55 = v38;
                    v56 = *((&v31.field_32 as &char + 8) as &i64);
                    if v3 {
                        core::result::Result<T,E>::unwrap((v16 >> 63) as u8, "src/uu/dd/src/dd.rs");
                        core::result::Result<T,E>::unwrap(v89 >> 63, "src/uu/dd/src/dd.rs");
                        uu_dd::Input::discard_cache(*(a0 as &i32), *((a0 + 4) as &i32), v16 as u32, v89);
                    }
                    if v2 {
                        core::result::Result<T,E>::unwrap(v14 >> 63 || v48, "src/uu/dd/src/dd.rs");
                        core::result::Result<T,E>::unwrap(v90 >> 63 || v91, "src/uu/dd/src/dd.rs");
                        uu_dd::BlockWriter::discard_cache(&v18, v14, v90);
                    }
                    v16 += v89;
                    v15 = v14 + v90;
                    v48 = v48 + v91 + ((v14 + v90 <= v14 ? 1 : 0) & 1);
                    v6 += v81;
                    v7 += v34;
                    v4 += v29.field_32;
                    v8 += v89;
                    v12 += v55;
                    v13 += v56;
                    v11 = v10 + v90;
                    v9 = v9 + v91 + ((v10 + v90 <= v10 ? 1 : 0) & 1);
                    v92 = uu_dd::Alarm::get_trigger(&v57);
                    v10 = v11;
                    v14 = v15;
                    if v92 - 1 < 2 {
                        v67 = v6;
                        v68 = v7;
                        v69 = v8;
                        v70 = v4;
                        v71 = v11;
                        v72 = v9;
                        v73 = v12;
                        v74 = v13;
                        v66 = struct12 {
                            field_0: std::time::Instant::elapsed(&v26)
                            field_8: v93
                        };
                        v75 = v92 != 1;
                        v31 = std::sync::mpmc::Sender<T>::send(v45, v46, &v66);
                        v10 = v11;
                        v14 = v15;
                    }
                } else {
                    v81 = v33;
                    break;
                }
            } else {
LABEL_4915d2:
                v94 = v18;
                v95 = *((&v21 as &char + 8) as &i128);
                v39 = v25;
                v34 = v95;
                *(&v32 as void*) = v94;
                v62 = v6;
                v63 = v7;
                v64 = v8;
                v65 = v4;
                v50 = v9;
                v49 = v10;
                v51 = v12;
                v52 = v13;
                v77 = v54;
                v76 = v53.field_0;
                v81 = uu_dd::finalize(&v30, &v62, &v49, v26, v93, v45, v46, &v76, v0);
                v1 = 0;
            }
        }
    } else {
        v81 = uu_dd::flush_caches_full_length(a0, a1);
        if !v81 {
            v37 = *((v5 + 16) as &i64);
            v33 = *(v5 as &i128);
            v29 = 0x8000000000000000;
            v22 = 0;
            v17 = 0;
            v61 = 0;
            v59 = 0;
            v51 = v54;
            v49 = v53.field_0;
            v81 = uu_dd::finalize(&v29, &v20, &v58, v26, v82, v27, v28, &v49, v0);
        }
    }
    return v81;
}
