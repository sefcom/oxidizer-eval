fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &u64, a1: void*) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: u64;  // [sp-0x50], Other Possible Types: Enum
    let v2: u64;  // [sp-0x48]
    let v3: u64;  // [sp-0x40]
    let v5: &u8;  // r14
    let v6: u64;  // r15
    let v7: u64;  // r13
    let v8: u256;  // ymm0
    let v9: void*;  // rax
    let v10: u64;  // rcx
    let v11: u64;  // rax
    let v12: u64;  // rcx
    let v13: u64;  // rcx
    let v15: u128;  // xmm0
    let v16: u64;  // rbx
    let v17: u64;  // rdi
    let v18: u8;  // dl
    let v19: u64;  // rax
    let v20: &u64;  // rax
    let v21: u8;  // bl
    let v24: void*;  // rcx
    let v25: u64;  // rax
    let v26: u64;  // rax
    let v28: u64;  // rax

    v5 = &a1->padding_38 as &struct_0;
    v6 = a1->field_30;
    v7 = &a1->padding_20[8];
    loop {
        v9 = a1->field_10;
        v10 = a1->field_18;
        if v6 {
            v11 = v9 + v6;
            v9 = v12;
            a1->field_10 = v9;
            a1->field_30 = 0;
        }
        v1 = v1;
        v2 = v2;
        if v9 >= v10 {
            *(&v1 as &Enum) = Enum {
                field_0: v14
                field_8: a1->field_8
                field_16: 0
                field_24: *(&a1->padding_20[0] as &i64)
            };
            v6 = <std::fs::File as std::io::Read>::read_buf(v7, &v1);
            if !v6 {
                a1->field_10 = 0;
                v15 = *(&(&v1)[1].field_8 as &i128);
                vvar_16{reg 224} = ((vvar_16{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_193{reg 224}))
                a1->field_18 = v15;
                v9 = 0;
                v1 = v1;
                v2 = v2;
                v13 = v3;
            } else {
                break;
            }
        }
        v2 = v2;
        v1 = v1;
        v6 = v13 - v9;
        if !v1 {
            break;
        }
        v16 = v1 + v9;
        v17 = a1->field_3c;
        if !v17 {
            if !v6 {
                *(a0) = 2;
                return v20;
            }
            v1 = core::str::converts::from_utf8(v16, v6);
            if !v1 {
                v21 = 0;
                goto LABEL_48fe05;
            }
            v19 = v2;
            if v19 {
                goto LABEL_48fdff;
            }
            if v3 as i8 {
LABEL_48fdff:
                v21 = v16 | -0x100 | !v19;
LABEL_48fe05:
                a1->field_30 = v17;
                v24 = a1->field_10;
                v25 = a1->field_18;
                if v24 >= v25 {
                    *(&v1 as &Enum) = Enum {
                        field_0: v27
                        field_8: a1->field_8
                        field_16: 0
                        field_24: *(&a1->padding_20[0] as &i64)
                    };
                    v28 = <std::fs::File as std::io::Read>::read_buf(v7, &v1);
                    if v28 {
                        vvar_455{reg 24} = a0;
                        *(v20) = 1;
                        v20[1] = 0;
                        v20[2] = v28;
                        return v20;
                    }
                    a1->field_10 = 0;
                    *(&a1->field_18 as &i128) = *(&(&v1)[1].field_8 as &i128);
                    v24 = 0;
                    v26 = v3;
                }
                v28 = v26 - v24;
                if !v1 {
                    v20 = a0;
                    *(v20) = 1;
                    v20[1] = 0;
                    v20[2] = v28;
                    return v20;
                } else if v17 > v28 {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                } else if (v21 & 1) {
                    *(a0) = 1;
                    v20[1] = v5;
                    v20[2] = v17;
                    return v20;
                } else {
                    *(a0) = 0;
                    v20[1] = v5;
                    v20[2] = v17;
                    return v20;
                }
            }
            a1->field_30 = v6;
            v0 = 0;
            if v6 < 5 {
                memcpy(&v0, v16, v6);
                v5[4] = v6;
                *(v5) = v0;
            } else {
                goto LABEL_48feef;
            }
        } else {
            if !v6 {
                a1->field_3c = 0;
                if (v17 & 255) >= 5 {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
            } else {
                v6 = uu_wc::utf8::Incomplete::try_complete_offsets(v5, v16, v6);
                a1->field_30 = v6;
                if v18 == 2 {
                    continue;
                }
                v17 = a1->field_3c;
                a1->field_3c = 0;
                if v17 >= 5 {
LABEL_48feef:
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                } else if !(v18 & 1) {
                    v20 = a0;
                    *(v20) = 0;
                    v20[1] = v5;
                    v20[2] = v17;
                    return v20;
                }
            }
            v20 = a0;
            *(v20) = 1;
            v20[1] = v5;
            v20[2] = v17;
            return v20;
        }
    }
    v20 = a0;
    *(v20) = 1;
    v20[1] = 0;
    v20[2] = v6;
    return v20;
}
