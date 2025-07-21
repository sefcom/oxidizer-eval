fn uu_shuf::shuf_exec(a0: i64, a1: &struct64) -> long long {
    let v0: u32;  // [bp-0xbc]
    let v1: u128;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb8]
    let v3: u64;  // [bp-0xb0]
    let v4: u64;  // [bp-0xa8]
    let v5: u32;  // [bp-0xa0]
    let v6: struct16;  // [bp-0x98]
    let v7: u32;  // [bp-0x98]
    let v8: Result<struct16, struct12>;  // [bp-0x88], Other Possible Types: struct16
    let v9: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x78], Other Possible Types: u8
    let v10: u8;  // [bp-0x78]
    let v11: u64;  // [bp-0x68]
    let v12: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x60]
    let v13: u64;  // [bp-0x60]
    let v14: u64;  // [bp-0x60]
    let v15: i64;  // [bp-0x58]
    let v16: i64;  // [bp-0x50]
    let v20: u64;  // rdx
    let v21: u64;  // r15
    let v23: u64;  // rax
    let v24: u64;  // rdx
    let v25: u64;  // rcx
    let v26: u32;  // ebp
    let v27: u64;  // rdx
    let v28: u64;  // r13
    let v29: u64;  // rax
    let v30: core::result::Result<(), std::io::error::Error>;  // rax
    let v31: void*;  // rbp
    let v32: u64;  // rsi
    let v33: u64;  // rdx
    let v34: core::result::Result<(), std::io::error::Error>;  // rax
    let v37: u64;  // [bp-0xb8]

    if *(a1 as &i64) == 0x8000000000000000 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    } else {
        v20 = *((a1 + 16) as &i64);
        v4 = *((a1 + 16) as &i64);
        v1 = *(a1 as &i128);
        v9 = std::fs::File::create(v3, v20);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v9, &v1);
        match v8 {
            Ok(_) => {
                return v21;
            },
            Err(_) => {
                alloc::boxed::Box<T>::new(*((&v8 as &char + 8) as &i32));
            },
        }
    }
    v12 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
    if *((a1 + 24) as &i64) == 0x8000000000000000 {
        v6 = struct16 {
            field_0: 1
            padding_4: <UNKNOWN>
            field_8: rand::rngs::thread::thread_rng()
        };
        if !*((a1 + 56) as &i8) {
            goto LABEL_4714cb;
        }
    } else {
        v23 = a1 + 24;
        v24 = *((v23 + 16) as &i64);
        v4 = *((v23 + 16) as &i64);
        v1 = *(v23 as &i128);
        std::fs::File::open(v3, v24, v25);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v10, &v37);
        if *(&v8.field_0 as &i64) {
            return v21;
        }
        if !*((a1 + 56) as &i8) {
LABEL_4714cb:
            v0 = v26;
            v1 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a0, &v7, *((a1 + 48) as &i64));
            v3 = v27;
            loop {
                v29 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v1);
                if !v29 {
                    return 0;
                }
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(v29, v27, &v14));
                if v21 {
                    return v21;
                }
                v9 = *((a1 + 57) as &i8);
                if v13 - v16 > 1 {
                    *((v15 + v16) as &i8) = *((a1 + 57) as &i8);
                    v16 += 1;
                } else {
                    std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v14, &v9, 1);
                }
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v30);
                if v21 {
                    return v21;
                }
            }
        }
    }
    if <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(*((a0 + 16) as &i64)) {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v10, "no lines to repeat");
        v4 = v11;
        v1 = *((&v8 as &char + 16) as &i128);
        v5 = 1;
        alloc::boxed::Box<T>::new(&v37);
        return v21;
    }
    v0 = v26;
    if !*((a1 + 48) as &i64) {
        return 0;
    }
    loop {
        <usize as core::iter::range::Step>::forward_unchecked(v31, v32);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(<alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a0, &v7), v33, &v14));
        if v21 {
            return v21;
        }
        v1 = *((a1 + 57) as &i8);
        v1 = v2 & -0x100 | v1;
        if v14 - v16 > 1 {
            *((v15 + v16) as &i8) = *((a1 + 57) as &i8);
            v16 += 1;
        } else {
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v14, &v1, 1);
        }
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v34);
        if v21 {
            return v21;
        } else if v31 >= v28 {
            return 0;
        }
    }
}
