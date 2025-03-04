fn uu_expand::expand(a0: u32) -> u64 {
    let v0: iNone;  // [bp-0x138]
    let v1: iNone;  // [bp-0x128]
    let v2: iNone;  // [bp-0x118]
    let v3: i64;  // [sp-0x108]
    let v4: i64;  // [sp-0xf0]
    let v5: iNone;  // [sp-0xe8]
    let v6: struct8;  // [sp-0xd0]
    let v7: i64;  // [sp-0xc8]
    let v8: i64;  // [sp-0xc0]
    let v9: i64;  // [sp-0xb8]
    let v10: i64;  // [sp-0xb0]
    let v11: i64;  // [sp-0xa8]
    let v12: Result<struct56, struct16>;  // [sp-0xa0], Other Possible Types: unsigned long
    let v13: i64;  // [sp-0x98]
    let v14: struct33;  // [sp-0x58]
    let v16: i64;  // r14
    let v17: i64;  // r15
    let v18: struct8;  // rax
    let v19: iNone;  // ymm0
    let v20: iNone;  // ymm1
    let v21: iNone;  // ymm2
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm1
    let v24: iNone;  // xmm2
    let v25: iNone;  // xmm0
    let v26: i64;  // rdx
    let v28: i64;  // r12

    v14 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v16 = *((a0 + 32) as &i64);
    v17 = *((a0 + 40) as &i64);
    v7 = 0;
    v8 = 1;
    v9 = 0;
    v10 = *((a0 + 8) as &i64);
    v11 = v10 + *((a0 + 16) as &i64) * 24;
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v18 {
        return 0;
    }
    do {
        v6 = v18;
        if std::path::Path::is_dir(*((v18 + 8) as &i64), *((v18 + 16) as &i64)) as i8 {
            v13 = v26;
            show_error!("{}: Is a directory", &v6);
            uucore::mods::error::set_exit_code(1);
        } else {
            v12 = uu_expand::open(*((v6 + 8) as &i64), *((v6 + 16) as &i64));
            if !v12 {
                v25 = *((&v12 as &char + 8) as &i128);
                v19 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256;
                v5 = v25;
                v4 = v26;
                show_error!("{}", &v5);
                uucore::mods::error::set_exit_code(1);
            } else {
                v3 = *((&v12 as &char + 48) as &i64);
                v22 = v12 as i128;
                v19 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256;
                v23 = *((&v12 as &char + 16) as &i128);
                v20 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256;
                v24 = *((&v12 as &char + 32) as &i128);
                v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256;
                v2 = v24;
                v1 = v23;
                v0 = v22;
                loop {
                    if !(std::io::read_until(0xa, &v7) ? !v9 : v26) {
                        break;
                    }
                    v28 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_expand::expand_line(&v7, &v14, v16, v17, a0));
                    if v28 {
                        return v28;
                    }
                }
            }
        }
    } while ((v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v18));
}
