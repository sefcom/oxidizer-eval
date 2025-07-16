fn uu_shuf::shuf_exec(a0: i64, a1: &struct32) -> long long {
    let v0: u32;  // [bp-0xbc]
    let v1: u8;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb8]
    let v3: u64;  // [bp-0xb0]
    let v4: u64;  // [bp-0xa8]
    let v5: u32;  // [bp-0xa0]
    let v6: u32;  // [bp-0x98]
    let v8: u64;  // [bp-0x90]
    let v9: Result<struct16, struct12>;  // [bp-0x88]
    let v10: u8;  // [bp-0x78], Other Possible Types: core::result::Result<std::fs::File, std::io::error::Error>
    let v11: u8;  // [bp-0x78]
    let v12: u64;  // [bp-0x68]
    let v13: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x60]
    let v14: u64;  // [bp-0x60]
    let v15: u64;  // [bp-0x60]
    let v16: i64;  // [bp-0x58]
    let v17: i64;  // [bp-0x50]
    let v21: u64;  // rdx
    let v22: u64;  // r15
    let v24: u64;  // rax
    let v25: u64;  // rdx
    let v26: u64;  // rcx
    let v27: u32;  // ebp
    let v28: u64;  // rdx
    let v29: u64;  // r13
    let v30: u64;  // rax
    let v31: core::result::Result<(), std::io::error::Error>;  // rax
    let v32: void*;  // rbp
    let v33: u64;  // rsi
    let v34: u64;  // rdx
    let v35: core::result::Result<(), std::io::error::Error>;  // rax
    let v38: u64;  // [bp-0xb8]

    if *(a1 as &i64) == 0x8000000000000000 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdout());
    } else {
        v21 = *((a1 + 16) as &i64);
        v4 = *((a1 + 16) as &i64);
        v1 = *(a1 as &i128);
        v10 = std::fs::File::create(v3, v21);
        v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v10, &v1);
        match v9 {
            Ok(_) => {
                return v22;
            },
            Err(_) => {
                alloc::boxed::Box<T>::new(*((&v9 as &char + 8) as &i32));
            },
        }
    }
    v13 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
    if *((a1 + 24) as &i64) == 0x8000000000000000 {
        v8 = rand::rngs::thread::thread_rng();
        v6 = 1;
        if !*((a1 + 56) as &i8) {
            goto LABEL_4714cb;
        }
LABEL_47130c:
        if <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(*((a0 + 16) as &i64)) {
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v11, "no lines to repeat");
            v4 = v12;
            v1 = *((&v9 as &char + 16) as &i128);
            v5 = 1;
            alloc::boxed::Box<T>::new(&v38);
        } else {
            v0 = v27;
            if !*((a1 + 48) as &i64) {
                return 0;
            }
            loop {
                <usize as core::iter::range::Step>::forward_unchecked(v32, v33);
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(<alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a0, &v6), v34, &v15));
                if v22 {
                    break;
                }
                v1 = *((a1 + 57) as &i8);
                v1 = v2 & -0x100 | v1;
                if v15 - v17 > 1 {
                    *((v16 + v17) as &i8) = *((a1 + 57) as &i8);
                    v17 += 1;
                } else {
                    std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v15, &v1, 1);
                }
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v35);
                if v22 {
                    break;
                }
                if v32 >= v29 {
                    return 0;
                }
            }
        }
    } else {
        v24 = a1 + 24;
        v25 = *((v24 + 16) as &i64);
        v4 = *((v24 + 16) as &i64);
        v1 = *(v24 as &i128);
        std::fs::File::open(v3, v25, v26);
        v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, &v38);
        if let Err(_) = v9 {
            if !(!*((a1 + 56) as &i8)) {
                goto LABEL_47130c;
            }
LABEL_4714cb:
            v0 = v27;
            v1 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a0, &v6, *((a1 + 48) as &i64));
            v3 = v28;
            loop {
                v30 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v1);
                if !v30 {
                    return 0;
                }
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(v30, v28, &v15 as u8));
                if v22 {
                    break;
                }
                v10 = *((a1 + 57) as &i8);
                if v14 - v17 > 1 {
                    *((v16 + v17) as &i8) = *((a1 + 57) as &i8);
                    v17 += 1;
                } else {
                    std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v15 as u8, &v10, 1);
                }
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v31);
                if v22 {
                    return v22;
                }
            }
        }
    }
    return v22;
}
