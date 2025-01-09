fn uu_shuf::shuf_exec(a0: void*, a1: &struct64) -> u64 {
    let v0: i32;  // [sp-0xbc]
    let v1: i128;  // [bp-0xb8], Other Possible Types: struct28
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i32;  // [sp-0x98]
    let v5: i32;  // [bp-0x94]
    let v6: i64;  // [sp-0x90]
    let v7: i136;  // [sp-0x88], Other Possible Types: Result<struct16, struct4>
    let v8: i64;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>, struct24
    let v9: struct41;  // [sp-0x60], Other Possible Types: i328
    let v10: i64;  // [sp-0x50]
    let v12: i64;  // rbp
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v16: i64;  // r15
    let v17: i64;  // rax
    let v18: i64;  // rdx
    let v19: i32;  // ebp
    let v20: i64;  // rdx
    let v21: i64;  // r13
    let v22: struct8;  // rax
    let v23: i64;  // rcx
    let v24: struct8;  // rax
    let v25: i64;  // rbp
    let v26: i64;  // rdx
    let v27: i8;  // al
    let v28: i64;  // rcx
    let v29: struct8;  // rax

    if *(a1 as &i64) == 0x8000000000000000 {
        v12 = vvar_177{reg 56} | -0x100 | 1;
        v14 = alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v15 = &g_534ef8;
        goto LABEL_4712be;
    }
    v13 = *((a1 + 16) as &i64);
    v3 = *((a1 + 16) as &i64);
    v1 = *(a1 as &i128);
    v8 = std::fs::File::create(v2, v13) as u64;
    v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v8, &v1);
    v16 = v7;
    if v16 {
        goto LABEL_47158b;
    }
    v14 = alloc::boxed::Box<T>::new(*((&v7 as &char + 8) as &i32));
    v12 = vvar_177{reg 56} | -0x100 | 1;
    v15 = &g_534f48;
LABEL_4712be:
    v9 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, v14, v15);
    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        v17 = a1 + 24;
        v18 = *((v17 + 16) as &i64);
        v3 = *((v17 + 16) as &i64);
        v1 = *(v17 as &i128);
        v8 = std::fs::File::open(v2, v18) as u64;
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v8, &v1);
        v16 = v7;
        if v16 {
            goto LABEL_471581;
        }
        v5 = *((&v7 as &char + 8) as &i32);
        v4 = 0;
        v19 = 0;
        if !*((a1 + 56) as &i8) {
            goto LABEL_4714b9;
        }
LABEL_471303:
        if <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::is_empty(*((a0 + 16) as &i64)) {
            v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("no lines to repeat");
            v1 = struct28 {
                field_0: v8
                field_16: *((&v8 as &char + 16) as &i64)
                field_24: 1
            };
            v16 = alloc::boxed::Box<T>::new(&v1);
LABEL_471577:
LABEL_471581:
LABEL_47158b:
            return v16;
        }
        v0 = v19;
        v21 = *((a1 + 48) as &i64);
        if !v21 {
            return 0;
        }
        v25 = 0;
        loop {
            v25 = <usize as core::iter::range::Step>::forward_unchecked(v25);
            v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(<alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a0, &v4), v26, &v9));
            if v16 {
                break;
            }
            v27 = *((a1 + 57) as &i8);
            v1 = v27;
            v28 = v10;
            if v9 - v28 <= 1 {
                v29 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, 1);
            } else {
                *((*((&v9 as &char + 8) as &i64) + v28) as &i8) = v27;
                v10 = v28 + 1;
                v29 = 0;
            }
            v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v29);
            if v16 {
                break;
            }
            if v25 >= v21 {
                return 0;
            }
        }
        goto LABEL_471570;
    }
    v6 = rand::rngs::thread::thread_rng();
    v4 = 1;
    v19 = v12 | -0x100 | 1 | -0x100 | 1 | -0x100 | 1;
    if !(!*((a1 + 56) as &i8)) {
        goto LABEL_471303;
    }
LABEL_4714b9:
    v0 = v19;
    *(&v1 as &long long) = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a0, &v4, *((a1 + 48) as &i64));
    v2 = v20;
    loop {
        v22 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next();
        if !v22 {
            break;
        }
        v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<&[u8] as uu_shuf::Writable>::write_all_to(v22, v20, &v9));
        if !(!v16) {
            goto LABEL_471570;
        }
        v8 = *((a1 + 57) as &i8);
        v23 = v10;
        if v9 - v23 <= 1 {
            v24 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v8, 1);
        } else {
            *((*((&v9 as &char + 8) as &i64) + v23) as &i8) = v8;
            v10 = v23 + 1;
            v24 = 0;
        }
        v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v24);
        if v16 {
            goto LABEL_471570;
        }
    }
LABEL_471570:
    goto LABEL_471577;
}
