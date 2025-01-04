fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &Option<struct16>, a1: void*) -> u64 {
    let v0: u128;  // [sp-0x48], Other Possible Types: struct16, Result<struct16, struct10>
    let v1: u8;  // [bp-0x38]
    let v2: u8;  // [bp-0x37]
    let v4: u64;  // r15
    let v6: u64;  // rbp
    let v7: u64;  // r13
    let v8: u8;  // dl
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u8;  // bpl
    let v13: u64;  // rax
    let v15: u64;  // rsi
    let v16: u64;  // rax
    let v17: u64;  // rdx

    v4 = &a1->field_38;
    loop {
        if a1->field_30 {
            <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::consume(a1, a1->field_30);
            a1->field_30 = 0;
        }
        v0 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
        v6 = v0;
        if !v6 {
            v16 = *((&v0 as &char + 8) as &i64);
            return struct24 {
                field_0: 1
                field_8: 0
                field_16: v16
            };
        }
        v7 = *((&v0 as &char + 8) as &i64);
        if !a1->field_3c {
            if !v7 {
                return struct24 {
                    field_0: 1
                    field_8: 0
                    field_16: v16
                };
            }
            v0 = core::str::converts::from_utf8(v6, v7);
            match v0 {
                Ok(_) => {
                    v12 = 0;
                    goto LABEL_4c2b2e;
                },
                Err(_) => {
                    v9 = *((&v0 as &char + 8) as &i64);
                },
            }
            if v9 {
                goto LABEL_4c2b27;
            }
            if !(v1 & 1) {
                a1->field_30 = v7;
                v10 = uu_wc::utf8::Incomplete::new(v6, v7);
                a1->field_38 = v10;
                a1->field_3c = v10 >> 32;
            } else {
                v13 = v2;
LABEL_4c2b27:
                v12 = v6 | -0x100 | !v9;
LABEL_4c2b2e:
                a1->field_30 = v7;
                v0 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
                v15 = v0;
                if !v0 as i64 {
                    vvar_238{reg 16} = *((&v0 as &char + 8) as &i64);
                    return struct24 {
                        field_0: 1
                        field_8: 0
                        field_16: v16
                    };
                }
                v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v7, v15, *((&v0 as &char + 8) as &i64));
                if !(v12 & 1) {
                    goto LABEL_4c2b59;
                }
LABEL_4c2b06:
                *(a0) = 1;
                break;
            }
        } else if !v7 {
            v11 = uu_wc::utf8::Incomplete::take_buffer(v4);
            goto LABEL_4c2b06;
        } else {
            *(&a1->field_30 as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v4, v6, v7);
            if v8 == 2 {
                continue;
            }
            v11 = uu_wc::utf8::Incomplete::take_buffer(v4);
            if !(v8 & 1) {
LABEL_4c2b59:
                *(a0) = 0;
                break;
            }
        }
    }
    a0[1] = v11;
    a0[2] = v17;
    return struct24 {
        field_0: 1
        field_8: 0
        field_16: v16
    };
}
