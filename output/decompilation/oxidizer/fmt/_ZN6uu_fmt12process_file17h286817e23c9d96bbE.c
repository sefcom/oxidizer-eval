fn uu_fmt::process_file(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x220]
    let v1: u64;  // [bp-0x220]
    let v2: i64;  // [bp-0x1e0]
    let v3: u64;  // [bp-0x1d8]
    let v4: u8;  // [bp-0x1d0]
    let v5: u64;  // [bp-0x1c8], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v6: u128;  // [bp-0x1c8]
    let v7: u64;  // [bp-0x1c0]
    let v8: u64;  // [bp-0x1b8]
    let v9: u64;  // [bp-0x1b0]
    let v10: u128;  // [bp-0x1a8]
    let v11: u128;  // [bp-0x188]
    let v12: u128;  // [bp-0x178]
    let v13: Result<struct16, struct12>;  // [bp-0x118]
    let v14: Result<struct176, struct24>;  // [bp-0x118]
    let v15: u64;  // [bp-0x108]
    let v16: u64;  // [bp-0x100]
    let v17: u128;  // [bp-0xf8]
    let v18: u128;  // [bp-0xd8]
    let v19: u128;  // [bp-0xc8]
    let v20: struct56;  // [bp-0x68]
    let v22: u64;  // rax
    let v23: u64;  // rcx
    let v24: u64;  // rax
    let v25: u64;  // rbp
    let v26: core::result::Result<(), std::io::error::Error>;  // rax
    let v27: u64;  // rbp
    let v28: u64;  // rax
    let v29: core::result::Result<(), std::io::error::Error>;  // rax
    let v30: struct105;  // [bp-0x118]
    let v31: u64;  // [bp-0x110]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v5 = std::fs::File::open(a0, a1);
        v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, a0, a1);
        match v13 {
            Ok(_) => {
                return v13 as i64;
            },
            Err(_) => {
                v0 = *((&v13 as &char + 8) as &i32);
                v0 = std::fs::File {
                    inner: std::sys::pal::unix::fs::File {
                        __0: std::sys::pal::unix::fd::FileDesc {
                            __0: std::os::fd::owned::OwnedFd {
                                fd: v1 & -0x100000000 | v0 as u64
                            }
                        }
                    }
                };
                v5 = std::fs::File::metadata(&v0);
                v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v5, a0, a1);
                if v14 as i32 == 2 {
                    return v24;
                } else if (0xf000 & *((&v14 as &char + 56) as &i32)) == 0x4000 {
                    <T as alloc::slice::hack::ConvertVec>::to_vec("read error", a3);
                    v5 = struct28 {
                        field_0: v14 as i128
                        field_16: v15
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v5);
                    return v24;
                } else {
                    alloc::boxed::Box<T>::new(v0 as u64);
                }
            },
        }
    }
    v20 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v22, v23);
    v0 = 9223372036854775810;
    v2 = &v20;
    v3 = a2;
    v4 = 1;
    loop {
        v30 = <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v0);
        if v30.field_0 as i64 != 0x8000000000000000 {
            if v30.field_0 as i64 == 9223372036854775809 {
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3));
                return 0;
            }
            v5 = v30.field_0;
            v9 = v16;
            memcpy(&v7, &v31, 16);
            memcpy(&v5, &v30, 16);
            v12 = v19;
            v11 = v18;
            memcpy(&v5, &v30, 16);
            v10 = v17;
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_fmt::linebreak::break_lines(&v5, a2, a3));
            if v27 {
                break;
            }
        } else {
            v6 = *(&v31 as &i128);
            v8 = v16;
            v25 = *((a3 + 16) as &i64);
            if v8 < *(a3 as &i64) - v25 {
                memcpy(*((a3 + 8) as &i64) + v25, v7, v8);
                *((a3 + 16) as &u64) = v25 + v8;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v7, v8);
            }
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v26);
            if v27 {
                break;
            }
            v28 = *((a3 + 16) as &i64);
            if *(a3 as &i64) - v28 > 1 {
                *((*((a3 + 8) as &i64) + v28) as &i8) = 10;
                *((a3 + 16) as &u64) = v28 + 1;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, "\n");
            }
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v29);
            if v27 {
                break;
            }
        }
    }
    return v27;
}
