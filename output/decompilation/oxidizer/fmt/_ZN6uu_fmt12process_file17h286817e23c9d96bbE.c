fn uu_fmt::process_file(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: std::fs::File;  // [bp-0x220], Other Possible Types: u64
    let v1: u64;  // [bp-0x220]
    let v2: i64;  // [bp-0x1e0]
    let v3: u64;  // [bp-0x1d8]
    let v4: u8;  // [bp-0x1d0]
    let v5: Result<struct4, struct8>;  // [bp-0x1c8], Other Possible Types: struct28, u64
    let v6: u128;  // [bp-0x1c8]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1c8]
    let v8: u128;  // [bp-0x1c0]
    let v9: u64;  // [bp-0x1b8]
    let v10: u64;  // [bp-0x1b0]
    let v11: u128;  // [bp-0x1a8]
    let v12: u128;  // [bp-0x198]
    let v13: u128;  // [bp-0x188]
    let v14: u128;  // [bp-0x178]
    let v15: u128;  // [bp-0x168]
    let v16: Result<struct16, struct12>;  // [bp-0x118]
    let v17: Result<struct176, struct24>;  // [bp-0x118]
    let v18: u64;  // [bp-0x108]
    let v19: u64;  // [bp-0x100]
    let v20: u128;  // [bp-0xf8]
    let v21: u128;  // [bp-0xd8]
    let v22: u128;  // [bp-0xc8]
    let v23: struct56;  // [bp-0x68]
    let v25: u64;  // rax
    let v26: u64;  // rcx
    let v27: u64;  // rax
    let v28: u64;  // rbp
    let v29: core::result::Result<(), std::io::error::Error>;  // rax
    let v30: u64;  // rbp
    let v31: u64;  // rax
    let v32: core::result::Result<(), std::io::error::Error>;  // rax
    let v33: struct105;  // [bp-0x118]
    let v34: u64;  // [bp-0x110]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v5 = std::fs::File::open(a0, a1);
        v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, a0, a1);
        match v16 {
            Ok(_) => {
                return v16 as i64;
            },
            Err(_) => {
                v0 = *((&v16 as &char + 8) as &i32);
                v0 = std::fs::File {
                    inner: std::sys::pal::unix::fs::File {
                        __0: std::sys::pal::unix::fd::FileDesc {
                            __0: std::os::fd::owned::OwnedFd {
                                fd: v1 & -0x100000000 | v0 as u64
                            }
                        }
                    }
                };
                v7 = std::fs::File::metadata(&v0);
                v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v7, a0, a1);
                if v17 as i32 == 2 {
                    return v27;
                } else if (0xf000 & *((&v17 as &char + 56) as &i32)) == 0x4000 {
                    <T as alloc::slice::hack::ConvertVec>::to_vec("read error", a3);
                    v5 = struct28 {
                        field_0: v17 as i128
                        field_16: v18
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v5);
                    return v27;
                } else {
                    alloc::boxed::Box<T>::new(v0 as u64);
                }
            },
        }
    }
    v23 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v25, v26);
    v0 = 9223372036854775810;
    v2 = &v23;
    v3 = a2;
    v4 = 1;
    loop {
        v33 = <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v0);
        if v33.field_0 as i64 != 0x8000000000000000 {
            if v33.field_0 as i64 == 9223372036854775809 {
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3));
                return 0;
            }
            v5 = v33.field_0;
            v10 = v19;
            v8 = *(&v34 as &i128);
            v15 = *(&v33.field_96 as &i128);
            v14 = v22;
            v13 = v21;
            v12 = v33.field_48;
            v11 = v20;
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_fmt::linebreak::break_lines(&v5, a2, a3));
            if v30 {
                break;
            }
        } else {
            v6 = *(&v34 as &i128);
            v9 = v19;
            v28 = *((a3 + 16) as &i64);
            if v9 < *(a3 as &i64) - v28 {
                memcpy(*((a3 + 8) as &i64) + v28, *((&v6 as &char + 8) as &i64), v9);
                *((a3 + 16) as &u64) = v28 + v9;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, *((&v6 as &char + 8) as &i64), v9);
            }
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v29);
            if v30 {
                break;
            }
            v31 = *((a3 + 16) as &i64);
            if *(a3 as &i64) - v31 > 1 {
                *((*((a3 + 8) as &i64) + v31) as &i8) = 10;
                *((a3 + 16) as &u64) = v31 + 1;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, "\n");
            }
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v32);
            if v30 {
                break;
            }
        }
    }
    return v30;
}
