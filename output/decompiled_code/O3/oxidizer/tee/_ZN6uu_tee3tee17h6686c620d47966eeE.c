fn uu_tee::tee(a0: void*) -> u64 {
    let v0: i8;  // [sp-0xc9]
    let v1: i128;  // [sp-0xc8], Other Possible Types: Enum, struct8
    let v2: i64;  // [sp-0xc0]
    let v3: i64;  // [sp-0xb8]
    let v4: i64;  // [sp-0xb0]
    let v5: i64;  // [bp-0xa8]
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x90]
    let v8: i64;  // [sp-0x88]
    let v9: i192;  // [sp-0x80], Other Possible Types: struct16
    let v10: i64;  // [sp-0x78]
    let v11: i64;  // [sp-0x70]
    let v12: i64;  // [sp-0x68]
    let v13: struct24;  // [sp-0x60]
    let v14: struct24;  // [bp-0x48]
    let v16: i8;  // bpl
    let v17: i64;  // r15
    let v18: i64;  // rbx
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // r14
    let v22: i64;  // rbx
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // rbx
    let v29: i64;  // rax

    if !*((a0 + 25) as &i8) || signal(2) as i64 != -1 {
        v16 = *((a0 + 26) as &i8);
        if !(v16 == 4) || !(signal(13) as i64 == -1) {
            v17 = *((a0 + 16) as &i64);
            v13 = struct24 {
                field_0: *((a0 + 8) as &i64)
                field_8: v13 + v17 * 24
                field_16: a0
            };
            v1 = core::iter::adapters::try_process(&v13);
            if v9 == 0x8000000000000000 {
                return v18;
            }
            v9 = v1;
            v19 = __rust_alloc(17, 1);
            *(v19 as &i128) = 154800227100185366614848765303383683879;
            *((v19 + 16) as &i8) = 39;
            v20 = __rust_alloc(8, 8);
            *(v20 as &long long) = std::io::stdio::stdout();
            v4 = v20;
            v5 = &g_4e7938;
            v1 = 17;
            v2 = v19;
            v3 = 17;
            v21 = v11;
            if v21 == v9 {
                v9 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            v22 = v10;
            if v21 {
                memmove(v22 + 40, v22, v21 * 40);
            }
            v23 = v1;
            v24 = v3;
            *((v22 + 32) as &i64) = v5;
            *((v22 + 16) as &i128) = v24;
            *(v22 as &i128) = v23;
            v11 = v21 + 1;
            v3 = v11;
            v1 = v9;
            v5 = v16;
            v4 = 0;
            v25 = __rust_alloc(8, 8);
            *(v25 as &long long) = std::io::stdio::stdin();
            v7 = v25;
            v8 = &g_4e7988;
            v26 = std::io::copy::stack_buffer_copy() as i64;
            if !v26 {
LABEL_4850b0:
                v28 = 167503724547;
                if v11 == v17 {
                    v6 = 0;
                    v0 = v5;
                    v12 = 0;
                    v14 = struct24 {
                        field_0: &v0
                        field_8: &v12
                        field_16: &v6
                    };
                    v1 = alloc::vec::Vec<T,A>::retain_mut(&v14);
                    v4 += v12;
                    if !v6 {
                        if v4 {
                            v18 = 167503724547;
                        } else {
                            v18 = v4;
                        }
                    }
                }
            } else if !(v26 != 1) && !(std::io::error::Error::kind(v27) as i8 == 39) {
                v18 = 167503724547;
            } else {
                goto LABEL_4850b0;
            }
            if !*(v8 as &i64) {
                return v18;
            }
            v29();
        }
    }
    __errno_location();
    return 167503724547;
}
