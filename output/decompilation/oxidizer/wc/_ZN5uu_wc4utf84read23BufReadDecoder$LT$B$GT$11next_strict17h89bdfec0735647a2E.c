fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &Option<struct16>, a1: void*) -> u64 {
    let v0: struct16;  // [sp-0x48]
    let v1: Result<struct16, struct10>;  // [sp-0x48]
    let v3: i64;  // r15
    let v5: i64;  // rbp
    let v6: i64;  // r13
    let v7: i8;  // dl
    let v9: i64;  // r13
    let v10: i64;  // rax
    let v12: i8;  // bpl
    let v13: i64;  // r13
    let v14: i64;  // r13

    v3 = a1 + 56;
    loop {
        if *((a1 + 48) as &i64) {
            <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::consume(a1, *((a1 + 48) as &i64));
            *((a1 + 48) as &i64) = 0;
        }
        v0 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
        v5 = v0.field_0;
        if !v5 {
LABEL_4c2b6a:
            return Some(struct16 {
                field_0: 0
                field_8: v17
            });
        }
        v6 = v0.field_8;
        if *((a1 + 60) as &i8) {
            if !v6 {
                uu_wc::utf8::Incomplete::take_buffer(v3);
                return struct8 {
                    field_0: 1
                };
            }
            *((a1 + 48) as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v3, v5, v6);
            if v7 != 2 {
                break;
            }
            continue;
        }
        if !v6 {
            return struct8 {
                field_0: 2
            };
        }
        v1 = core::str::converts::from_utf8(v5, v6);
        match v1 {
            Ok(_) => {
                v12 = 0;
                goto LABEL_4c2b2e;
            },
            Err(_) => {
                if v9 {
                    v13 = *((&v1 as &char + 8) as &i64);
                    goto LABEL_4c2b27;
                }
            },
        }
        if !(*((&v1 as &char + 16) as &i8) & 1) {
            *((a1 + 48) as &unsigned long) = v6;
            v10 = uu_wc::utf8::Incomplete::new(v5, v6);
            *((a1 + 56) as &u32) = v10 as u32;
            *((a1 + 60) as &u8) = (v10 >> 32) as u8;
        } else {
            v14 = *((&v1 as &char + 17) as &i8);
LABEL_4c2b27:
            v12 = v5 & -0x100 | !v13;
LABEL_4c2b2e:
            *((a1 + 48) as &unsigned long) = v6;
            v0 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
            if v0.field_0 {
                <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, v0.field_0, v0.field_8);
                if !(v12 & 1) {
                    return struct24 {
                        field_0: 0
                        field_8: v11
                        field_16: v18
                    };
                }
                return struct8 {
                    field_0: 1
                };
            }
            goto LABEL_4c2b6a;
        }
    }
    uu_wc::utf8::Incomplete::take_buffer(v3);
    if !(v7 & 1) {
        return struct24 {
            field_0: 0
            field_8: v11
            field_16: v18
        };
    }
    return struct8 {
        field_0: 1
    };
}
