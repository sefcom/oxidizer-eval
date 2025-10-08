fn uu_shuf::shuf_exec(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x51]
    let v1: core::fmt::rt::Argument;  // [bp-0x50], Other Possible Types: struct16, struct24
    let v4: u64;  // rbp
    let v5: core::fmt::rt::Argument;  // r12b
    let v6: u64;  // rbp
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: void*;  // rax
    let v10: u64;  // rax
    let v12: u64;  // rdx
    let v13: core::fmt::Arguments;  // rax
    let v14: core::fmt::rt::Argument;  // bpl
    let v15: u64;  // rdx
    let v16: u64;  // rax

    if *((a1 + 56) as &i8) {
        if <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(*((a0 + 16) as &i64)) {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no lines to repeat");
            return alloc::boxed::Box<T>::new(&v1) as u64;
        }
        v4 = *((a1 + 48) as &i64);
        if v4 {
            v5 = *((a1 + 57) as &i8);
            loop {
                v6 = v4;
                v7 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a0, a2);
                v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(v7, v8, a3));
                if v9 {
                    break;
                }
                v1 = v5;
                v10 = *((a3 + 16) as &i64);
                if *(a3 as &i64) - v10 > 1 {
                    *((*((a3 + 8) as &i64) + v10) as &core::fmt::rt::Argument) = v5;
                    *((a3 + 16) as &u64) = v10 + 1;
                    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(0);
                    if v9 {
                        break;
                    }
                } else {
                    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, &v1 as u64, 1));
                    if v9 {
                        break;
                    }
                }
                v4 = v6 - 1;
                if v6 == 1 {
                    break;
                }
            }
            return v9;
        }
    } else {
        v1 = struct16 {
            field_0: <alloc::vec::Vec<&std::ffi::os_str::OsStr> as uu_shuf::Shufable>::partial_shuffle(a0, a2, *((a1 + 48) as &i64))
            field_8: v12
        };
        v13 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v1);
        if v13 {
            v14 = *((a1 + 57) as &i8);
            loop {
                v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(v13, v15, a3));
                if v9 {
                    break;
                }
                v0 = v14;
                v16 = *((a3 + 16) as &i64);
                if *(a3 as &i64) - v16 > 1 {
                    *((*((a3 + 8) as &i64) + v16) as &core::fmt::rt::Argument) = v14;
                    *((a3 + 16) as &u64) = v16 + 1;
                    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(0);
                    if v9 {
                        break;
                    }
                } else {
                    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, &v0, 1));
                    if v9 {
                        break;
                    }
                }
                v13 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v1);
                if (!v13)
                    break;
            }
        }
    }
    return 0;
}
