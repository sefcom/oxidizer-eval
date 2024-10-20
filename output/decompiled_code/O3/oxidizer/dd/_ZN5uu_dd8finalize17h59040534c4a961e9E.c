fn uu_dd::finalize(a0: void*, a1: &u64, a2: void*, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x138]
    let v1: i64;  // [sp-0x130]
    let v2: i128;  // [sp-0x128]
    let v3: i128;  // [sp-0x118], Other Possible Types: Enum
    let v4: i64;  // [sp-0x110]
    let v5: i64;  // [sp-0x108]
    let v6: i8;  // [bp-0xf8]
    let v7: i64;  // [sp-0xb8]
    let v8: i32;  // [sp-0xb0]
    let v9: i128;  // [sp-0xa8]
    let v10: struct12;  // [bp-0x98]
    let v11: i128;  // [sp-0x88]
    let v12: i128;  // [sp-0x78]
    let v13: i64;  // [sp-0x68]
    let v14: i64;  // [sp-0x60]
    let v15: i128;  // [sp-0x58]
    let v16: i8;  // [sp-0x48]
    let v17: i64;  // [bp+0x8]
    let v18: i8;  // [bp+0x10]
    let v19: i64;  // rax
    let v20: i64;  // r14
    let v21: i64;  // rbp
    let v22: i64;  // rbp
    let v23: i64;  // rdx
    let v26: i64;  // rbp
    let v28: i64;  // rcx
    let v29: i64;  // rcx
    let v30: i64;  // rax

    v7 = a3;
    v8 = a4;
    if *(a0 as &i64) == 0x8000000000000000 {
        v2 = 0;
        v1 = 0;
        v0 = 0;
        goto LABEL_49c7f5;
    } else {
        v3 = uu_dd::bufferedoutput::BufferedOutput::flush(a0);
        if !v3 {
            v1 = v5;
            v0 = *((&v3 as &char + 24) as &i64);
            v2 = v6;
            if *(a0 as &i64) == 0x8000000000000000 {
LABEL_49c7f5:
                v19 = uu_dd::Output::sync(a0 + 8);
            } else {
                v19 = uu_dd::Output::sync(a0 + 24);
            }
            if !v19 {
                if v18 {
                    if *(a0 as &i64) != 0x8000000000000000 {
                        if *((a0 + 24) as &i8) == 1 {
                            v22 = a0 + 28;
                            v3 = std::fs::File::set_len(v22, v23);
                        }
                    } else {
                        if *((a0 + 8) as &i8) == 1 {
                            v21 = a0 + 12;
                            v3 = std::fs::File::set_len(v21, v23);
                        }
                    }
                }
                v9 = *((a2 + 16) as &i128);
                v26 = *(a2 as &i64);
                v12 = *((a1 + 16) as &i128);
                v11 = *(a1 as &i128);
                v13 = v26 + v1;
                v14 = *((a2 + 8) as &i64) + v0 + ((v26 + v1 <= v26 ? 0 : 1) & 1);
                v15 = BinaryOp AddV;
                v10 = struct12 {
                    field_0:                     std::time::Instant::elapsed(&v7)
                    field_8: v23 as u32
                };
                v16 = 2;
                v3 = std::sync::mpmc::Sender<T>::send(a5, &v10, v28);
                v29 = v17;
                v5 = *((v29 + 16) as &i64);
                v3 = *(v29 as &i128);
                v30 = std::thread::JoinInner<T>::join(&v3);
                if !v30 {
                    return 0;
                }
                v3 = v30;
                v4 = v23;
                core::result::unwrap_failed(); /* do not return */
            }
        }
        v20 = *(a0 as &i64);
        if v20 != 0x8000000000000000 {
            if !v20 {
                return v19;
            }
            return v19;
        } else {
            if *((a0 + 8) as &i8) - 1 > 1 {
                return v19;
            }
            return v19;
        }
    }
}
