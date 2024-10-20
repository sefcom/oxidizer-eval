fn uu_split::n_chunks_by_line_round_robin(a0: &struct_2, a1: &u64, a2: u64, a3: u64, a4: u64, a5: i64) -> u64 {
    let v0: &u64;  // [sp-0xc8]
    let v1: void*;  // [sp-0xc0]
    let v2: u64;  // [sp-0xb8]
    let v3: void*;  // [sp-0xb0]
    let v4: void*;  // [sp-0xa8], Other Possible Types: &u64
    let v5: u32;  // [sp-0x9c]
    let v6: &struct_1;  // [sp-0x90]
    let v7: u64;  // [sp-0x88], Other Possible Types: &u64
    let v8: u8;  // [bp-0x80]
    let v9: u8;  // [bp-0x78]
    let v10: u64;  // [sp-0x70]
    let v11: &u64;  // [sp-0x68]
    let v12: u64;  // [sp-0x60], Other Possible Types: &u64
    let v13: void*;  // [sp-0x58], Other Possible Types: u64
    let v14: void*;  // [sp-0x50]
    let v15: u64;  // [sp-0x48]
    let v17: u64;  // rsi
    let v18: u64;  // rdx
    let v19: u32;  // ebp
    let v20: u64;  // r8
    let v21: u64;  // r9
    let v22: u64;  // rbx
    let v23: void*;  // r13
    let v24: &u64;  // r13
    let v25: u64;  // r14
    let v26: u64;  // rax
    let v27: u32;  // r13d
    let v28: void*;  // rbp
    let v29: u64;  // 4096
    let v30: u64;  // r12
    let v31: u64;  // rbx
    let v32: u64;  // r15
    let v33: u64;  // rax
    let v34: u64;  // rdx
    let v35: u64;  // rcx
    let v36: &u64;  // rdi
    let v37: u64;  // rax
    let v38: &u64;  // rcx
    let v39: u64;  // r13
    let v40: u64;  // r15
    let v41: u64;  // 4096
    let v42: u64;  // rbx
    let v43: u64;  // r12
    let v44: u128;  // xmm0
    let v45: u64;  // rdx
    let v46: u128;  // xmm0
    let v47: &struct_0;  // r15
    let v48: u64;  // r14
    let v50: &struct_0;  // r15
    let v51: u64;  // r14
    let v53: &struct_1;  // rdi
    let v54: &struct_1;  // rdi

    v7 = std::io::stdio::stdout();
    v6 = std::io::stdio::Stderr::lock(&v7, v17, v18);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if a3 != 1 {
        <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(&v7, a2, a0, a0->field_a1, v20, v21);
        v24 = *(&v8 as &i64);
        v25 = *(&v9 as &i64);
        if v4 == 0x8000000000000000 {
            goto LABEL_49cffd;
        }
        v4 = v7;
        v11 = v4;
        v0 = v24;
        v12 = v24;
        v13 = v25;
        v27 = a0->field_a2;
        if a2 {
            v15 = a0->field_88;
            v14 = 0;
            v28 = 0;
            v5 = v27;
        } else {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            v0 = v0;
            if !(!std::io::read_until(a1, v5)) {
                goto LABEL_49cf41;
            }
            if !v18 {
                goto LABEL_49cdeb;
            }
            goto LABEL_49d0be;
        }
    } else {
        v19 = a0->field_a2;
        if a2 {
            v22 = a4 - 1;
            v4 = 0;
            v23 = 0;
        } else {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if std::io::read_until(a1, v19) {
                v0 = 8;
                v4 = 0;
                v25 = 0;
                goto LABEL_49cf41;
            } else if !v18 {
                v0 = 8;
                v4 = 0;
                v25 = 0;
                goto LABEL_49cdeb;
            } else {
LABEL_49d0be:
                core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
            }
        }
        loop {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if std::io::read_until(a1, v19) {
                v0 = 8;
                v25 = 0;
                goto LABEL_49cf41;
            }
            if !v18 {
                v0 = 8;
                v25 = 0;
                goto LABEL_49cdeb;
            }
            if (v23 | a2) >> 32 {
                if !((0 CONCAT v23) /m a2 >> 64 == v22) {
                    goto LABEL_49cabb;
                }
            } else {
                if !(((0 CONCAT v23 as u32) /m a2 >> 32 & 4294967295) == v22) {
                    goto LABEL_49cabb;
                }
            }
            v26 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v6, v2, v3);
            if v26 {
                break;
            }
LABEL_49cabb:
            v23 += 1;
        }
        v7 = 0x8000000000000000;
        v10 = v26;
        v0 = 8;
        v24 = __rust_alloc(32, 8);
        v44 = *(&v7 as &i128);
        *(&v24[2] as &i128) = *(&v9 as &i128);
        *(v24) = v44;
        v4 = 0;
        v25 = 0;
        goto LABEL_49cf89;
    }
    loop {
        v30 = v29;
        v1 = 0;
        v2 = 1;
        v3 = 0;
        if std::io::read_until(a1, v27) {
LABEL_49cf41:
            v7 = 0x8000000000000000;
            v10 = v45;
            v24 = __rust_alloc(32, 8);
            v46 = *(&v7 as &i128);
            *(&v24[2] as &i128) = *(&v9 as &i128);
            *(v24) = v46;
            goto LABEL_49cf89;
        }
        if !v18 {
LABEL_49cdeb:
            if v25 {
                v47 = v0 + 10;
                do {
                    v48 = v25;
                    v47 += 10;
                } while (v48 != 1);
                v4 = v11;
            }
            v53 = v6;
            v53->field_c = v53->field_c - 1;
            if vvar_1020 != 1 {
                return 0;
            }
            v53->field_0 = 0;
            v53->field_8 = 0;
            if BinaryOp CasCmpNE {
                goto LABEL_0x49cebb;
            }
            if ((Not (Load(addr=(vvar_757{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
            std::sys::sync::mutex::futex::Mutex::wake(&v53->field_8 as &struct_1);
        }
        v31 = v2;
        v32 = v3;
        v33 = v14;
        if (v33 | v30) >> 32 {
            v34 = (0 CONCAT v33) /m v30 >> 64;
            if !(v34 < v25) {
                goto LABEL_49d098;
            }
        } else {
            v34 = (0 CONCAT v33) /m v30 >> 32 & 4294967295;
            if v34 >= v25 {
LABEL_49d098:
                core::panicking::panic_bounds_check(); /* do not return */
            }
        }
        v35 = v34 * 80;
        v36 = v0;
        v37 = *((24 + v36 + v35) as &i64);
        if v37 != 0x8000000000000000 {
            v38 = 24 + v35 + v36;
        } else {
            <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::instantiate_writer(&v7, &v11, v34, a0, v20, v21);
            v24 = v7;
            v38 = *(&v8 as &i64);
            if !v24 {
                v37 = *(v38);
            } else {
                goto LABEL_49d076;
            }
        }
        v39 = v38[2];
        if v37 - v39 > v32 {
            memcpy(v38[1] + v39, v31, v32);
            v38[2] = v39 + v32;
            v40 = 0;
            v5 = v5;
            goto LABEL_49ccf0;
        }
        v42 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v38, v31, v32, v38, v20, v21);
        if v42 {
            break;
        }
        v40 = 0;
        v5 = v5;
LABEL_49ccf0:
        v43 = v41;
        v28 += v40;
        if v28 == v43 {
            goto LABEL_49cdeb;
        }
        v14 += 1;
    }
    if !(std::io::error::Error::kind(v42) as i8 != 11) && !(v15 == 0x8000000000000000) {
        v40 = 1;
        v5 = v5;
        goto LABEL_49ccf0;
    } else {
        v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
LABEL_49d076:
    }
LABEL_49cf89:
    if v25 {
        v0 = v0;
        v50 = v0 + 10;
        do {
            v51 = v25;
            v50 += 10;
        } while (v51 != 1);
        v4 = v11;
    }
LABEL_49cffd:
    v54 = v6;
    v54->field_c = v54->field_c - 1;
    if vvar_1023 != 1 {
        return v24;
    }
    v54->field_0 = 0;
    v54->field_8 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x49d033;
    }
    if v54->field_8 == 2 {
        goto LABEL_0x49d055;
    }
    goto LABEL_0x49d03b;
}
