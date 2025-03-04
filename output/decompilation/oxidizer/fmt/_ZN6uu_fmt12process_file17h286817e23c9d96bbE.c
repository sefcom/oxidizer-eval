fn uu_fmt::process_file(a0: u32, a1: u32, a2: u64, a3: void*) -> u64 {
    let v0: i64;  // [bp-0x220], Other Possible Types: struct4
    let v1: i64;  // [sp-0x1e0]
    let v2: i64;  // [sp-0x1d8]
    let v3: i8;  // [sp-0x1d0]
    let v4: Result<struct4, struct8>;  // [sp-0x1c8], Other Possible Types: struct16, unsigned long, int, struct24
    let v5: iNone;  // [bp-0x1c0]
    let v6: i64;  // [sp-0x1b8]
    let v7: i64;  // [bp-0x1b0], Other Possible Types: unsigned int
    let v8: iNone;  // [sp-0x1a8]
    let v9: iNone;  // [sp-0x198]
    let v10: iNone;  // [sp-0x188]
    let v11: iNone;  // [sp-0x178]
    let v12: iNone;  // [sp-0x168]
    let v13: Result<struct16, struct4>;  // [sp-0x118], Other Possible Types: Option<Result<struct105, struct24>>, struct24
    let v14: struct56;  // [sp-0x68]
    let v17: i64;  // rdx
    let v18: i64;  // rcx
    let v19: i64;  // rbp
    let v20: i64;  // rbp
    let v21: iNone;  // ymm0
    let v22: iNone;  // ymm1
    let v23: iNone;  // ymm2
    let v24: iNone;  // ymm3
    let v25: i64;  // rax
    let v26: iNone;  // xmm0
    let v27: i64;  // rsi
    let v28: i64;  // rbp
    let v29: iNone;  // xmm0
    let v30: iNone;  // xmm0
    let v31: iNone;  // xmm0
    let v32: iNone;  // xmm1
    let v33: iNone;  // xmm2
    let v34: iNone;  // xmm3
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v17 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v18 = &g_5264c8;
        goto LABEL_4b538f;
    } else {
        v4 = std::fs::File::open(a0, a1);
        v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a0, a1);
        v19 = v13 as i64;
        match v13 {
            Ok(_) => {
                return v20;
            },
            Err(_) => {
                v0 = struct4 {
                    field_0: *((&v13 as &char + 8) as &i32)
                };
                v4 = std::fs::File::metadata(&v0);
                v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, a0, a1);
            },
        }
        if v13 as i32 == 2 {
            return v20;
        }
        if (0xf000 & *((&v13 as &char + 56) as &i32)) == 0x4000 {
            v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("read error");
            v4 = v13;
            *(&v7 as &i32) = 1;
            alloc::boxed::Box<T>::new(&v4);
        } else {
            v17 = alloc::boxed::Box<T>::new(v0.field_0);
            v18 = &g_526470;
LABEL_4b538f:
            v14 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v17, v18);
            *(&v0 as &i64) = 9223372036854775810;
            v1 = &v14;
            v2 = a2;
            v3 = 1;
            loop {
                v13 = <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v0);
                v25 = v13 as i64;
                if v25 != 0x8000000000000000 {
                    if v25 != 9223372036854775809 {
                        v4 = v25;
                        *(&v7 as &i64) = *((&v13 as &char + 24) as &i64);
                        v29 = *((&v13 as &char + 8) as &i128);
                        v5 = v29;
                        v30 = *((&v13 as &char + 96) as &i128);
                        v12 = v30;
                        v31 = *((&v13 as &char + 32) as &i128);
                        v21 = ((v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u256;
                        v32 = *((&v13 as &char + 48) as &i128);
                        v22 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256;
                        v33 = *((&v13 as &char + 64) as &i128);
                        v23 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 as u256;
                        v34 = *((&v13 as &char + 80) as &i128);
                        v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256;
                        v11 = v34;
                        v10 = v33;
                        v9 = v32;
                        v8 = v31;
                        if !<core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_fmt::linebreak::break_lines(&v4, a2, a3)) {
                            continue;
                        }
                    } else if <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3)) {
                        goto LABEL_4b55c1;
                    } else {
                        return 0;
                    }
                }
                v26 = *((&v13 as &char + 8) as &i128);
                v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256;
                v4 = v26;
                v6 = *((&v13 as &char + 24) as &i64);
                v27 = (&v4)[8] as i64;
                v28 = *((a3 + 16) as &i64);
                if v6 >= *(a3 as &i64) - v28 {
                    v35 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v27, v6);
                } else {
                    memcpy(*((a3 + 8) as &i64) + v28, v27, v6);
                    *((a3 + 16) as &unsigned long) = v28 + v6;
                    v35 = 0;
                }
                if <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v35) {
LABEL_4b55c1:
                    break;
                } else {
                    v36 = *((a3 + 16) as &i64);
                    if *(a3 as &i64) - v36 > 1 {
                        *((*((a3 + 8) as &i64) + v36) as &i8) = 10;
                        *((a3 + 16) as &unsigned long) = v36 + 1;
                        v37 = 0;
                    } else {
                        v37 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, "
");
                    }
                    if !(!<core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v37)) {
                        goto LABEL_4b55c1;
                    }
                }
            }
            return v20;
        }
    }
}
