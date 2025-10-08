fn uu_fmt::process_file(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u64;  // [bp-0x230]
    let v1: u64;  // [bp-0x228]
    let v2: u32;  // [bp-0x228]
    let v3: i64;  // [bp-0x1e8]
    let v4: void*;  // [bp-0x1e0]
    let v5: u8;  // [bp-0x1d8]
    let v6: struct56;  // [bp-0x1d0]
    let v7: Result<struct16, struct12>;  // [bp-0x198]
    let v8: Result<struct176, struct24>;  // [bp-0x198]
    let v9: u64;  // [bp-0x190]
    let v10: u64;  // [bp-0x188]
    let v11: u64;  // [bp-0x180]
    let v12: iNone;  // [bp-0x178]
    let v13: iNone;  // [bp-0x158]
    let v14: iNone;  // [bp-0x148]
    let v15: Result<struct4, struct8>;  // [bp-0xe8], Other Possible Types: struct16, struct28, u64
    let v16: u64;  // [bp-0xe0]
    let v17: u64;  // [bp-0xd8]
    let v18: struct33;  // [bp-0xd0]
    let v19: struct24;  // [bp-0xc8]
    let v20: Result<struct80, struct24>;  // [bp-0xb8]
    let v21: struct16;  // [bp-0xa8]
    let v22: Result<struct24, struct24>;  // [bp-0x98]
    let v23: alloc::string::String;  // [bp-0x88]
    let v25: core::option::Option<u32>;  // rax
    let v26: u64;  // rdx
    let v27: u64;  // rax
    let v28: u64;  // rbp
    let v29: void*;  // rdi
    let v30: struct24;  // r15
    let v31: u64;  // rax
    let v32: core::option::Option<&str>;  // rdi
    let v33: struct105;  // [bp-0x198], Other Possible Types: struct24

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") {
        alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v15 = std::fs::File::open(a0, a1);
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v15, a0, a1);
        match v7 {
            Ok(_) => {
                return v7 as i64;
            },
            Err(_) => {
                v1 = *((&v7 as &char + 8) as &i32);
                v15 = std::fs::File::metadata(&v1 as u64);
                v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v15, a0, a1);
                if v8 as i32 == 2 {
                    return v27;
                } else if (0xf000 & *((&v8 as &char + 56) as &i32)) == 0x4000 {
                    v33 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("read error");
                    v15 = struct28 {
                        field_0: *(&v33.field_0 as &i128)
                        field_16: v10
                        field_24: 1
                    };
                    alloc::boxed::Box<T>::new(&v15);
                    return v27;
                } else {
                    alloc::boxed::Box<T>::new(v2 as u64);
                }
            },
        }
    }
    v6 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v25, v26);
    v1 = 9223372036854775810;
    v3 = &v6;
    v4 = a2;
    v5 = 1;
    v0 = 9223372036854775809;
    loop {
        v33 = <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v1);
        if v33.field_0 as i64 == 9223372036854775809 {
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a3));
            return 0;
        }
        if v33.field_0 as i64 == 0x8000000000000000 {
            v28 = *((a3 + 16) as &i64);
            if v18 < *(a3 as &i64) - v28 {
                memcpy(*((a3 + 8) as &i64) + v28, v17, v18);
                *((a3 + 16) as &struct33) = v28 + v18;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v17, v18);
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
        } else {
            v15 = v33.field_0;
            v16 = v9;
            v17 = v10;
            v18 = v11;
            v23 = *(&v33.field_96 as &i128);
            v22 = v14;
            v21 = v13;
            v20 = v33.field_48;
            v19 = v12;
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_fmt::linebreak::break_lines(&v15, a2, a3));
            if v30 {
                break;
            }
        }
    }
    return v30;
}
