fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &Option<struct16>, a1: void*) -> u64 {
    let v0: i128;  // [sp-0x48], Other Possible Types: struct16, Result<struct16, struct10>
    let v2: i64;  // r15
    let v4: i64;  // rbp
    let v5: i64;  // r13
    let v6: i8;  // dl
    let v7: i64;  // rax
    let v8: i64;  // rax
    let v10: i8;  // bpl
    let v11: i64;  // rax

    v2 = a1 + 56;
    loop {
        if *((a1 + 48) as &i64) {
            <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::consume(a1, *((a1 + 48) as &i64));
            *((a1 + 48) as &i64) = 0;
        }
        v0 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
        v4 = v0;
        if !v4 {
LABEL_4c2b6a:
            return Some(struct16 {
                field_0: 0
                field_8: v14
            });
        }
        v5 = *((&v0 as &char + 8) as &i64);
        if *((a1 + 60) as &i8) {
            if !v5 {
                uu_wc::utf8::Incomplete::take_buffer(v2);
                return Some(struct16 {
                    field_0: v9
                    field_8: v15
                });
            }
            *((a1 + 48) as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v2, v4, v5);
            if v6 != 2 {
                break;
            }
            continue;
        }
        if !v5 {
            return struct8 {
                field_0: 2
            };
        }
        v0 = core::str::converts::from_utf8(v4, v5);
        match v0 {
            Ok(_) => {
                v10 = 0;
                goto LABEL_4c2b2e;
            },
            Err(_) => {
                v7 = *((&v0 as &char + 8) as &i64);
            },
        }
        if v7 {
            goto LABEL_4c2b27;
        }
        if !(*((&v0 as &char + 16) as &i8) & 1) {
            *((a1 + 48) as &i64) = v5;
            v8 = uu_wc::utf8::Incomplete::new(v4, v5);
            *((a1 + 56) as &i32) = v8;
            *((a1 + 60) as &i8) = v8 >> 32;
        } else {
            v11 = *((&v0 as &char + 17) as &i8);
LABEL_4c2b27:
            v10 = v4 & -0x100 | !v7;
LABEL_4c2b2e:
            *((a1 + 48) as &i64) = v5;
            v0 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
            if v0 {
                <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, v0, *((&v0 as &char + 8) as &i64));
                if (v10 & 1) {
                    return Some(struct16 {
                        field_0: v9
                        field_8: v15
                    });
                }
                return struct8 {
                    field_0: 0
                };
            }
            goto LABEL_4c2b6a;
        }
    }
    uu_wc::utf8::Incomplete::take_buffer(v2);
    if (v6 & 1) {
        return Some(struct16 {
            field_0: v9
            field_8: v15
        });
    }
    return struct8 {
        field_0: 0
    };
}
