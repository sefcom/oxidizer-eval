fn uu_shuf::shuf_exec(a0: void*, a1: void*) -> u64 {
    let v0: i32;  // [sp-0xbc]
    let v1: i128;  // [bp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i32;  // [sp-0xa0]
    let v5: i32;  // [sp-0x98]
    let v6: i32;  // [sp-0x94]
    let v7: i64;  // [sp-0x90]
    let v8: i128;  // [sp-0x88], Other Possible Types: Result<struct16, struct12>
    let v9: i8;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>, struct24
    let v10: i328;  // [sp-0x60], Other Possible Types: struct41
    let v11: i64;  // [sp-0x50]
    let v13: i64;  // rbp
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // rcx
    let v17: i64;  // r15
    let v18: i64;  // rax
    let v19: i64;  // rdx
    let v20: i32;  // ebp
    let v21: i64;  // rdx
    let v22: i64;  // r13
    let v23: struct8;  // rax
    let v24: i64;  // rcx
    let v25: struct8;  // rax
    let v26: i64;  // rbp
    let v27: i64;  // rdx
    let v28: i8;  // al
    let v29: i64;  // rcx
    let v30: struct8;  // rax

    if *(a1 as &i64) == 0x8000000000000000 {
        v13 = vvar_177{reg 56} | -0x100 | 1;
        v15 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v16 = &g_534f98;
        goto LABEL_470e3e;
    }
    v14 = *((a1 + 16) as &i64);
    v3 = *((a1 + 16) as &i64);
    v1 = *(a1 as &i128);
    v9 = std::fs::File::create(v2, v14);
    v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v9, &v1);
    v17 = v8;
    if v17 {
        goto LABEL_47110b;
    }
    v15 = alloc::boxed::Box<T>::new(*((&v8 as &char + 8) as &i32));
    v13 = vvar_177{reg 56} | -0x100 | 1;
    v16 = &g_534fe8;
LABEL_470e3e:
    v10 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, v15, v16);
    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        v18 = a1 + 24;
        v19 = *((v18 + 16) as &i64);
        v3 = *((v18 + 16) as &i64);
        v1 = *(v18 as &i128);
        v9 = std::fs::File::open(v2, v19);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v9, &v1);
        v17 = v8;
        if v17 {
            goto LABEL_471101;
        }
        v6 = *((&v8 as &char + 8) as &i32);
        v5 = 0;
        v20 = 0;
        if !*((a1 + 56) as &i8) {
            goto LABEL_471039;
        }
LABEL_470e83:
        if <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(*((a0 + 16) as &i64)) {
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("no lines to repeat");
            v3 = *((&v9 as &char + 16) as &i64);
            v1 = v9;
            v4 = 1;
            v17 = alloc::boxed::Box<T>::new(&v1);
LABEL_4710f7:
LABEL_471101:
LABEL_47110b:
            return v17;
        }
        v0 = v20;
        v22 = *((a1 + 48) as &i64);
        if !v22 {
            return 0;
        }
        v26 = 0;
        loop {
            v26 = <usize as core::iter::range::Step>::forward_unchecked(v26);
            v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(<alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a0, &v5), v27, &v10));
            if v17 {
                break;
            }
            v28 = *((a1 + 57) as &i8);
            v1 = v28;
            v29 = v11;
            if v10 - v29 <= 1 {
                v30 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, 1);
            } else {
                *((*((&v10 as &char + 8) as &i64) + v29) as &i8) = v28;
                v11 = v29 + 1;
                v30 = 0;
            }
            v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v30);
            if v17 {
                break;
            }
            if v26 >= v22 {
                return 0;
            }
        }
        goto LABEL_4710f0;
    }
    v7 = rand::rngs::thread::thread_rng();
    v5 = 1;
    v20 = v13 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
    if !(!*((a1 + 56) as &i8)) {
        goto LABEL_470e83;
    }
LABEL_471039:
    v0 = v20;
    *(&v1 as &long long) = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a0, &v5);
    v2 = v21;
    loop {
        v23 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next();
        if !v23 {
            break;
        }
        v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(v23, v21, &v10));
        if !(!v17) {
            goto LABEL_4710f0;
        }
        v9 = *((a1 + 57) as &i8);
        v24 = v11;
        if v10 - v24 > 1 {
            *((*((&v10 as &char + 8) as &i64) + v24) as &i8) = v9;
            v11 = v24 + 1;
            v25 = 0;
        } else {
            v25 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v9, 1);
        }
        v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v25);
        if v17 {
            goto LABEL_4710f0;
        }
    }
LABEL_4710f0:
    goto LABEL_4710f7;
}
