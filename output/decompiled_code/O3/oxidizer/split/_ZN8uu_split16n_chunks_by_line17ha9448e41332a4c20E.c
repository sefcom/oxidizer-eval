fn uu_split::n_chunks_by_line(a0: &struct_1, a1: u64, a2: u64, a3: u64, a4: u64, a5: i64) -> u64 {
    let v0: u8;  // [bp-0x148]
    let v1: u8;  // [bp-0x140]
    let v2: u8;  // [sp-0x139]
    let v3: u64;  // [sp-0x130], Other Possible Types: void*
    let v4: &u64;  // [sp-0x128]
    let v5: void*;  // [sp-0x120]
    let v6: &struct_0;  // [sp-0x110]
    let v7: u64;  // [sp-0x108], Other Possible Types: struct16
    let v8: &u8;  // [sp-0x100]
    let v9: &u8;  // [sp-0xf8]
    let v10: void*;  // [sp-0xf0]
    let v11: u64;  // [bp-0xe8]
    let v12: u64;  // [sp-0xe0]
    let v13: u64;  // [sp-0xd8]
    let v14: void*;  // [sp-0xc8]
    let v15: u64;  // [sp-0xc0]
    let v16: void*;  // [sp-0xb8]
    let v17: u64;  // [sp-0xb0]
    let v18: u64;  // [sp-0xa8], Other Possible Types: &u64
    let v19: u64;  // [bp-0xa0]
    let v20: u64;  // [bp-0x98]
    let v21: u8;  // [sp-0x90]
    let v22: &u64;  // [sp-0x88]
    let v23: u64;  // [sp-0x80]
    let v24: &u64;  // [sp-0x78]
    let v25: u64;  // [sp-0x70]
    let v26: u8;  // [bp-0x68], Other Possible Types: &u64
    let v27: i8;  // [bp-0x60]
    let v28: i8;  // [bp-0x58]
    let v29: &u8;  // [sp-0x50]
    let v30: u8;  // [bp-0x48]
    let v31: i8;  // [bp-0x40]
    let v32: i8;  // [bp-0x38]
    let v34: u64;  // rdx
    let v35: &u64;  // rax
    let v36: u64;  // rdx
    let v37: u128;  // xmm0
    let v38: u64;  // rsi
    let v39: u64;  // rax
    let v40: u64;  // rax
    let v41: u32;  // eax
    let v42: &struct_1;  // 4096
    let v43: u64;  // r8
    let v44: u64;  // r9
    let v46: u64;  // rbx
    let v47: u64;  // rcx
    let v48: u64;  // rdx
    let v49: u64;  // r14
    let v50: void*;  // rbp
    let v51: u64;  // rax
    let v52: &u8;  // r13
    let v53: &u8;  // r15
    let v54: u64;  // rcx
    let v55: &u8;  // r13
    let v56: &u8;  // r13
    let v57: u64;  // rdx
    let v58: u64;  // rax
    let v59: u64;  // rcx
    let v60: &u64;  // rdi
    let v61: u64;  // rax
    let v62: &u64;  // rdi
    let v63: u64;  // rcx
    let v64: u64;  // r13
    let v65: u64;  // rax
    let v66: u64;  // r15
    let v67: u128;  // xmm0
    let v68: &struct_2;  // r14
    let v69: u64;  // r15
    let v71: u64;  // r14
    let v72: &struct_0;  // rdi
    let v73: &struct_2;  // r15
    let v74: u64;  // r14
    let v76: &struct_0;  // rdi

    v14 = &g_0;
    v15 = &g_0;
    v16 = &g_0;
    if uu_split::get_input_size(&a0->padding_10[96], a1, &v14, a0->field_0, *((a0 + &g_0) as &i64)) {
        v17 = 0x8000000000000000;
        v20 = v34;
        v35 = __rust_alloc(32, &g_0);
        v37 = *(&v17 as &i128);
        *((v35 + &g_10) as &i128) = *(&v19 as &i128);
        *(v35) = v37;
    } else {
        v13 = v15;
        v11 = v16;
        if v36 || (v35 = &g_0, a3 != 1 && !a0->field_a1) {
            v17 = std::io::stdio::stdout();
            v6 = std::io::stdio::Stderr::lock(&v17, v38, v36);
            v3 = &g_0;
            v4 = &g_0;
            v5 = &g_0;
            if !a2 {
                core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
            }
            v25 = v36;
            if (v36 | a2) >> 32 {
                v39 = v36;
                v40 = (&g_0 CONCAT v39) /m a2;
                v12 = (&g_0 CONCAT v39) /m a2 >> 64;
            } else {
                v41 = v36;
                v12 = (&g_0 CONCAT v41) /m a2 >> 32 & 4294967295;
                v40 = (&g_0 CONCAT v41) /m a2 & 4294967295 & 4294967295;
            }
            if a3 == 1 {
                v2 = a0->field_a1;
                v22 = &g_0;
                v10 = &g_0;
                goto LABEL_49c30f;
            } else {
                v2 = a0->field_a1;
                <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v17, a2, a0, v2, v43, v44);
                v35 = v18;
                if v3 != 0x8000000000000000 {
                    v3 = v17;
                    v22 = v35;
                    v4 = v35;
                    v5 = v19;
                    v10 = v5;
LABEL_49c30f:
                    v46 = v40 - -1 - (v12 < &g_0);
                    v47 = v42->field_a2;
                    v17 = v13;
                    v48 = v11;
                    v18 = v48;
                    v19 = a1;
                    *(&v20 as &&u128) = &g_0;
                    v11 = v47;
                    v21 = v47;
                    v23 = v42->field_88;
                    v49 = &g_0;
                    v50 = &g_0;
                    v13 = 9223372036854775809;
                    loop {
                        <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v30, &v17, v48, v47, v43, v44, *(&v0 as &i64), *(&v1 as &i64));
                        v51 = *(&v30 as &i64);
                        if v51 == v13 {
                            break;
                        }
                        v52 = v31;
                        if v51 == 0x8000000000000000 {
                            v26 = 0x8000000000000000;
                            v29 = v52;
                            v35 = __rust_alloc(32, &g_0);
                            v67 = *(&v26 as &i128);
                            *((v35 + &g_10) as &i8) = v28;
                            *(v35) = v67;
                            goto LABEL_49c77d;
                        }
                        v53 = v32;
                        v7 = v51;
                        v8 = v52;
                        v9 = v53;
                        v54 = v53 + v50;
                        if v54 < v25 {
                            if v53 == v51 {
                                v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                v56 = v8;
                            }
                            *((v56 + v53) as &u8) = v11;
                            v53 += &g_0;
                            v9 = v53;
                            v55 = v8;
                        }
                        if a3 {
                            if !(v49 == a4) || !((v58 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v6, v55, v53), v58)) {
                                goto LABEL_49c550;
                            }
                            v35 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v58);
                            goto LABEL_49c75d;
                        }
                        v57 = v49 - &g_0;
                        if v10 <= v57 {
                            core::panicking::panic_bounds_check(); /* do not return */
                        }
                        v59 = v57 * 80;
                        v60 = v22;
                        v61 = *((v60 + v59 + &g_10) as &i64);
                        if v61 != 0x8000000000000000 {
                            v62 = v60 + v59 + &g_10;
                            goto LABEL_49c4d0;
                        }
                        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::instantiate_writer(&v26, &v3, v57, a0, v43, v44);
                        v35 = v26;
                        v62 = v27;
                        if v35 {
                            goto LABEL_49c763;
                        }
                        v61 = *(v62);
LABEL_49c4d0:
                        v63 = *((v62 + &g_10) as &i64);
                        if v61 - v63 > v53 {
                            v24 = v62;
                            memcpy(*((v62 + &g_0) as &i64) + v63, v55, v53);
                            *((v24 + &g_10) as &&u8) = &v53[v63];
                        } else {
                            v64 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v62, v55, v53, v63, v43, v44);
                            if v64 && !(!(std::io::error::Error::kind(v64) as i8 != 11) && !(v23 == 0x8000000000000000)) {
                                v35 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v64);
LABEL_49c75d:
LABEL_49c763:
LABEL_49c77d:
                                v71 = v5;
                                if v71 {
                                    v73 = v4 + 10;
                                    do {
                                        v74 = v71;
                                        v73 += 10;
                                    } while (v74 != 1);
                                }
                                goto LABEL_49c7d8;
                            }
                        }
LABEL_49c550:
                        v50 += v53;
                        if v46 > v50 {
LABEL_49c558:
                            if a3 == &g_0 {
                                goto LABEL_49c5a9;
                            }
                            goto LABEL_49c5c0;
                        }
                        v65 = 4294967295;
                        v54 = 4294967294;
                        v48 = v12;
                        do {
                            v46 = v46 + v40 + (v49 < v48);
                            v49 += &g_0;
                            v65 += &g_0;
                            v54 += &g_0;
                        } while (v46 <= v50);
                        if !(v2) || !(v54 < 2147483647) {
                            goto LABEL_49c558;
                        }
                        if a3 != 1 {
                            v49 -= v65 & 4294967295;
                            goto LABEL_49c5c0;
                        }
LABEL_49c5a9:
                        if v49 > a4 {
                            break;
                        } else {
LABEL_49c5c0:
                        }
                    }
                    v66 = v5;
                    if v66 {
                        v68 = v4 + 10;
                        do {
                            v69 = v66;
                            v68 += 10;
                        } while (v69 != 1);
                    }
                    v72 = v6;
                    *((v72 + &g_0) as &&u128) = *((v72 + &g_0) as &i32) - &g_0;
                    if vvar_1005 != 1 {
                        return &g_0;
                    }
                    v72->field_0 = &g_0;
                    *((v72 + &g_0) as &&u128) = &g_0;
                    if BinaryOp CasCmpNE {
                        goto LABEL_0x49c6e5;
                    }
                    if ((Not (Load(addr=(vvar_715{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                    std::sys::sync::mutex::futex::Mutex::wake(v72 + &g_0);
                }
            }
LABEL_49c7d8:
            v76 = v6;
            *((v76 + &g_0) as &&u128) = *((v76 + &g_0) as &i32) - &g_0;
            if vvar_1011 == 1 {
                v76->field_0 = &g_0;
                *((v76 + &g_0) as &&u128) = &g_0;
                if BinaryOp CasCmpNE {
                    goto LABEL_0x49c80f;
                }
                if ((Not (Load(addr=(vvar_777{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                std::sys::sync::mutex::futex::Mutex::wake(v76 + &g_0);
                return v35;
            }
        }
    }
    return v35;
}
