fn uu_shuf::shuf_exec(a0: void*, a1: void*) -> u64 {
    let v0: i128;  // [bp-0xb8], Other Possible Types: Enum
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i32;  // [sp-0xa0]
    let v4: i32;  // [sp-0x90]
    let v5: i32;  // [sp-0x8c]
    let v6: i64;  // [sp-0x88]
    let v7: Enum;  // [sp-0x80], Other Possible Types: i128
    let v8: struct41;  // [sp-0x70], Other Possible Types: i328
    let v9: i64;  // [sp-0x60]
    let v10: i64;  // [sp-0x40], Other Possible Types: Enum
    let v12: i64;  // rdx
    let v13: i64;  // rax
    let v14: i64;  // r15
    let v15: i64;  // rcx
    let v17: i64;  // rax
    let v18: i64;  // rdx
    let v19: i64;  // rdx
    let v21: i64;  // rcx
    let v22: i64;  // rdx
    let v23: i64;  // r13
    let v24: i64;  // rcx
    let v25: i64;  // rax
    let v26: i64;  // r12
    let v27: i64;  // rdx
    let v28: i64;  // rax
    let v29: i8;  // al
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // r13
    let v33: i64;  // rax
    let v34: i64;  // r12
    let v35: i64;  // rax
    let v36: i64;  // rcx
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i128;  // xmm0

    if *(a1 as &i64) == 0x8000000000000000 {
        v13 = __rust_alloc(8, 8);
        *(v13 as &long long) = std::io::stdio::stdout();
        v15 = &g_4ef818;
    } else {
        v12 = *((a1 + 16) as &i64);
        v2 = *((a1 + 16) as &i64);
        v0 = *(a1 as &i128);
        v10 = std::fs::File::create(v1, v12);
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v10, &v0);
        v14 = v7;
        if v14 {
            goto LABEL_43f96d;
        } else {
            v13 = __rust_alloc(4, 4);
            *(v13 as &i32) = *((&v7 as &char + 8) as &i32);
            v15 = &g_4ef868;
        }
    }
    v8 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, v13, v15);
    if *((a1 + 24) as &i64) == 0x8000000000000000 {
        v6 = rand::rngs::thread::thread_rng();
        v4 = 1;
        if !(!*((a1 + 56) as &i8)) {
            goto LABEL_43f624;
        }
        goto LABEL_43f7b4;
    }
    v17 = a1 + 24;
    v18 = *((v17 + 16) as &i64);
    v2 = *((v17 + 16) as &i64);
    v0 = *(v17 as &i128);
    v10 = std::fs::File::open(v1, v18);
    v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v10, &v0);
    v14 = v7;
    if v14 {
        goto LABEL_43f963;
    }
    v5 = *((&v7 as &char + 8) as &i32);
    v4 = 0;
    if !*((a1 + 56) as &i8) {
LABEL_43f7b4:
        *(&v0 as &long long) = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::partial_shuffle(a0, &v4, *((a1 + 48) as &i64), v21);
        v1 = v22;
        loop {
            v33 = <core::iter::adapters::copied::Copied<I> as core::iter::traits::iterator::Iterator>::next(&v0);
            if !v33 {
                break;
            }
            v34 = v9;
            if v8 - v34 <= v22 {
                v35 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v8, v33, v22);
            } else {
                memcpy(*((&v8 as &char + 8) as &i64) + v34, v33, v22);
                v9 = v22 + v34;
                v35 = 0;
            }
            v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v35);
            if !(!v14) {
                goto LABEL_0x43f8a6;
            }
            v10 = *((a1 + 57) as &i8);
            v36 = v9;
            if v8 - v36 <= 1 {
                v37 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v8, &v10, 1);
            } else {
                *((*((&v8 as &char + 8) as &i64) + v36) as &i8) = v10;
                v9 = v36 + 1;
                v37 = 0;
            }
            v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v37);
        }
    }
LABEL_43f624:
    if !*((a0 + 16) as &i64) {
        v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(18, 0);
        v38 = v2;
        *(v38 as &i128) = 134835622387851158775910495974787673966;
        *((v38 + 16) as &i16) = 29793;
        v3 = 1;
        v0 = v1;
        v1 = v38;
        v2 = 18;
        v39 = __rust_alloc(32, 8);
        v14 = v39;
        v40 = v0;
        *((v39 + 16) as &i64) = v2;
        *(v39 as &i128) = v40;
        if !v4 {
            goto LABEL_43f963;
        }
LABEL_43f963:
LABEL_43f96d:
        if *((a1 + 24) as &i64) != 0x8000000000000000 {
            return v14;
        }
        return v14;
    }
    loop {
        v23 = *((a1 + 48) as &i64);
        v25 = <alloc::vec::Vec<&[u8]> as uu_shuf::Shufable>::choose(a0, &v4, v19, v24);
        v26 = v9;
        if v8 - v26 > v27 {
            memcpy(*((&v8 as &char + 8) as &i64) + v26, v25, v27);
            v9 = v27 + v26;
            v28 = 0;
        } else {
            v28 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v8, v25, v27);
        }
        v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v28);
        if v14 {
            break;
        }
        v29 = *((a1 + 57) as &i8);
        v0 = v29;
        v30 = v9;
        if v8 - v30 <= 1 {
            v31 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v8, &v0, 1);
        } else {
            *((*((&v8 as &char + 8) as &i64) + v30) as &i8) = v29;
            v9 = v30 + 1;
            v31 = 0;
        }
        v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v31);
        if !(!v14) {
            break;
        }
        v32 = v23 - 1;
    }
}
