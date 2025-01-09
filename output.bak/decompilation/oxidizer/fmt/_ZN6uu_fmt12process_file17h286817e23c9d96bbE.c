fn uu_fmt::process_file(a0: u32, a1: u32, a2: u64, a3: void*) -> u64 {
    let v0: i64;  // [sp-0x220]
    let v1: i64;  // [sp-0x1e0]
    let v2: i64;  // [sp-0x1d8]
    let v3: i8;  // [sp-0x1d0]
    let v4: i224;  // [sp-0x1c8], Other Possible Types: struct16, Result<struct4, struct8>
    let v5: i128;  // [bp-0x1c0]
    let v6: i64;  // [sp-0x1b8]
    let v7: i64;  // [bp-0x1b0]
    let v8: i128;  // [sp-0x1a8]
    let v9: i128;  // [sp-0x198]
    let v10: i128;  // [sp-0x188]
    let v11: i128;  // [sp-0x178]
    let v12: i128;  // [sp-0x168]
    let v13: i128;  // [sp-0x118], Other Possible Types: Result<struct176, struct16>, Option<Result<struct105, struct24>>, struct24
    let v14: i448;  // [sp-0x68], Other Possible Types: struct56
    let v16: i64;  // rax
    let v17: i64;  // rcx
    let v18: i64;  // rbp
    let v19: i256;  // ymm0
    let v20: i256;  // ymm1
    let v21: i256;  // ymm2
    let v22: i256;  // ymm3
    let v23: i64;  // rax
    let v24: i128;  // xmm0
    let v25: i64;  // rsi
    let v26: i64;  // rbp
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0
    let v30: i128;  // xmm1
    let v31: i128;  // xmm2
    let v32: i128;  // xmm3
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v16 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v17 = &g_5264c8;
        goto LABEL_4b538f;
    } else {
        v4 = std::fs::File::open(a0, a1);
        v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a0, a1);
        v18 = v13;
        if v18 {
            return v18;
        }
        v0 = *((&v13 as &char + 8) as &i32);
        v4 = std::fs::File::metadata(&v0);
        v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a0, a1);
        if v13 == 2 {
            v18 = *((&v13 as &char + 8) as &i64);
        } else if (0xf000 & *((&v13 as &char + 56) as &i32)) == 0x4000 {
            v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("read error");
            v4 = v13;
            v18 = alloc::boxed::Box<T>::new(&v4);
        } else {
            v16 = alloc::boxed::Box<T>::new(v0);
            v17 = &g_526470;
LABEL_4b538f:
            v14 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v16, v17);
            v0 = 9223372036854775810;
            v1 = &v14;
            v2 = a2;
            v3 = 1;
            loop {
                v13 = <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v0);
                v23 = v13;
                if v23 != 0x8000000000000000 {
                    match v13 {
                        None => {
                            v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3));
                            if !v18 {
                                return 0;
                            }
                        },
                        Some(_) => {
                            v4 = v23;
                            v7 = *((&v13 as &char + 24) as &i64);
                            v27 = *((&v13 as &char + 8) as &i128);
                            v5 = v27;
                            v28 = *((&v13 as &char + 96) as &i128);
                            v12 = v28;
                            v29 = *((&v13 as &char + 32) as &i128);
                            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u128 as u256;
                            v30 = *((&v13 as &char + 48) as &i128);
                            v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u128 as u256;
                            v31 = *((&v13 as &char + 64) as &i128);
                            v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u128 as u256;
                            v32 = *((&v13 as &char + 80) as &i128);
                            v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u128 as u256;
                            v11 = v32;
                            v10 = v31;
                            v9 = v30;
                            v8 = v29;
                            v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_fmt::linebreak::break_lines(&v4, a2, a3));
                            if !v18 {
                                continue;
                            }
LABEL_4b5650:
                        },
                    }
                    break;
                }
                v24 = *((&v13 as &char + 8) as &i128);
                v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
                v4 = v24;
                v6 = *((&v13 as &char + 24) as &i64);
                v25 = *((&v4 as &char + 8) as &i64);
                v26 = *((a3 + 16) as &i64);
                if v6 >= *(a3 as &i64) - v26 {
                    v33 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v25, v6);
                } else {
                    memcpy(*((a3 + 8) as &i64) + v26, v25, v6);
                    *((a3 + 16) as &i64) = v26 + v6;
                    v33 = 0;
                }
                v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v33);
                if v18 {
LABEL_4b55b4:
                    goto LABEL_4b5650;
                } else {
                    v34 = *((a3 + 16) as &i64);
                    if *(a3 as &i64) - v34 > 1 {
                        *((*((a3 + 8) as &i64) + v34) as &i8) = 10;
                        *((a3 + 16) as &i64) = v34 + 1;
                        v35 = 0;
                    } else {
                        v35 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, "\n");
                    }
                    v18 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v35);
                    if !(!v18) {
                        goto LABEL_4b55b4;
                    }
                }
            }
            return v18;
        }
        return v18;
    }
}
