fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &u64, a1: void*) -> u64 {
    let v0: u32;  // [sp-0x4c]
    let v1: u128;  // [sp-0x48], Other Possible Types: struct16, Enum
    let v2: u8;  // [bp-0x38]
    let v3: u8;  // [bp-0x37]
    let v5: u64;  // r15
    let v6: u64;  // r14
    let v7: u64;  // rsi
    let v8: u64;  // rbp
    let v9: u8;  // dl
    let v10: u64;  // rax
    let v11: u8;  // bpl
    let v13: u64;  // r14
    let v14: u64;  // rcx

    v5 = &a1->padding_18 as &struct_0;
    v6 = a1->field_10;
    loop {
        if v6 {
            <std::io::stdio::StdinLock as std::io::BufRead>::consume(a1, v6);
            a1->field_10 = 0;
        }
        v1 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
        v7 = v1;
        if !v7 {
            v14 = *((&v1 as &char + 8) as &i64);
            a0 = a0;
            *(a0) = 1;
            a0[1] = 0;
            a0[2] = v14;
            return a0;
        }
        v6 = *((&v1 as &char + 8) as &i64);
        v6 = a1->field_1c;
        if !v6 {
            if !v6 {
                *(a0) = 2;
                return a0;
            }
            v8 = v7;
            v1 = core::str::converts::from_utf8(v7, v6);
            if !v1 as i64 {
                v11 = 0;
                goto LABEL_49007e;
            }
            v10 = *((&v1 as &char + 8) as &i64);
            if v10 {
                goto LABEL_490077;
            }
            if v2 {
                v13 = v3;
LABEL_490077:
                v11 = v8 | -0x100 | !v10;
LABEL_49007e:
                a1->field_10 = v6;
                v1 = <std::io::stdio::StdinLock as std::io::BufRead>::fill_buf(a1);
                v5 = v1;
                if !v5 {
                    vvar_281{reg 24} = *((&v1 as &char + 8) as &i64);
                    vvar_282{reg 16} = a0;
                    *(a0) = 1;
                    a0[1] = 0;
                    a0[2] = v14;
                    return a0;
                } else if v6 > *((&v1 as &char + 8) as &i64) {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
                goto LABEL_490057;
            }
            a1->field_10 = v6;
            v0 = 0;
            if v6 >= 5 {
                goto LABEL_49012b;
            } else {
                memcpy(&v0, v8, v6);
                *((v5 + 4) as &u8) = v6;
                *(v5 as &u32) = v0;
            }
        } else {
            if !v6 {
                a1->field_1c = 0;
                if (v6 & 255) >= 5 {
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
            } else {
                v6 = uu_wc::utf8::Incomplete::try_complete_offsets(v5, v7, v6);
                a1->field_10 = v6;
                if v9 == 2 {
                    continue;
                }
                v6 = a1->field_1c;
                a1->field_1c = 0;
                if v6 >= 5 {
LABEL_49012b:
                    core::slice::index::slice_end_index_len_fail(); /* do not return */
                }
LABEL_490057:
                a0 = a0;
                if !(v11 & 1) {
                    *(a0) = 0;
                    break;
                }
            }
            *(a0) = 1;
            break;
        }
    }
    a0[1] = v5;
    a0[2] = v6;
    return a0;
}
