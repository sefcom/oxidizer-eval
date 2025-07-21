fn uu_wc::utf8::read::BufReadDecoder<B>::next_strict(a0: &struct24, a1: i64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x48]
    let v1: struct9;  // [bp-0x40]
    let v2: u8;  // [bp-0x38]
    let v4: u64;  // r15
    let v5: core::result::Result<usize, std::io::error::Error>;  // r13
    let v6: u8;  // dl
    let v7: u64;  // rax
    let v10: struct9;  // r13
    let v12: u8;  // bpl
    let v13: u64;  // rax
    let v14: u64;  // rdx
    let v15: Result<struct16, struct16>;  // [bp-0x48]

    v4 = a1 + 56;
    loop {
        if *((a1 + 48) as &i64) {
            <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::consume(a1, *((a1 + 48) as &i64));
            *((a1 + 48) as &i64) = 0;
        }
        v15 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
        if let Err(_) = v15 {
            return struct24 {
                field_0: 1
                field_8: 0
                field_16: v1
            };
        }
        v5 = v1;
        if *((a1 + 60) as &i8) {
            match v5 {
                Ok(_) => {
                    uu_wc::utf8::Incomplete::take_buffer(v4);
                    return struct24 {
                        field_0: 1
                        field_8: v13
                        field_16: v14
                    };
                },
                Err(_) => {
                    *((a1 + 48) as &long long) = uu_wc::utf8::Incomplete::try_complete_offsets(v4, v15 as i64, v5);
                    if v6 != 2 {
                        uu_wc::utf8::Incomplete::take_buffer(v4);
                        if !(v6 & 1) {
                            return struct8 {
                                field_0: 0
                            };
                        }
                        return struct24 {
                            field_0: 1
                            field_8: v13
                            field_16: v14
                        };
                    }
                },
            }
            continue;
        }
        if let Ok(_) = v5 {
            return struct8 {
                field_0: 2
            };
        }
        v0 = core::str::converts::from_utf8(v15 as i64, v5);
        if let Ok(_) = v0 {
LABEL_4c2b2e:
            *((a1 + 48) as &core::result::Result<usize, std::io::error::Error>) = v5;
            v15 = <std::io::buffered::bufreader::BufReader<R> as std::io::BufRead>::fill_buf(a1);
            if let Ok(_) = v15 {
                <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, v15 as i64, v1);
                break;
            }
        }
        if v1 {
            v10 = v1;
            goto LABEL_4c2b27;
        } else if !(v2 & 1) {
            *((a1 + 48) as &core::result::Result<usize, std::io::error::Error>) = v5;
            v7 = uu_wc::utf8::Incomplete::new(v0 as i64, v5);
            *((a1 + 56) as &u32) = v7;
            *((a1 + 60) as &u8) = v7 >> 32;
        } else {
            v10 = *((&v0 as &char + 17) as &i8);
LABEL_4c2b27:
            v5 = v10;
            goto LABEL_4c2b2e;
        }
    }
    if !(v12 & 1) {
        return struct8 {
            field_0: 0
        };
    }
    return struct24 {
        field_0: 1
        field_8: v13
        field_16: v14
    };
}
