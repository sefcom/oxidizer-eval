fn uu_expand::expand(a0: &struct80) -> u64 {
    let v0: i128;  // [bp-0x138]
    let v1: i128;  // [bp-0x128]
    let v2: i128;  // [bp-0x118]
    let v3: i64;  // [sp-0x108]
    let v4: i64;  // [sp-0xf8]
    let v5: i64;  // [sp-0xf0]
    let v6: i128;  // [sp-0xe8]
    let v7: struct8;  // [sp-0xd0]
    let v8: struct8;  // [bp-0xc8]
    let v9: i64;  // [sp-0xc0]
    let v10: i64;  // [sp-0xb8]
    let v11: i64;  // [sp-0xb0]
    let v12: i64;  // [sp-0xa8]
    let v13: i64;  // [sp-0xa0], Other Possible Types: Result<struct56, struct16>
    let v14: i64;  // [sp-0x98]
    let v15: i264;  // [sp-0x58], Other Possible Types: struct33
    let v17: i64;  // r14
    let v18: i64;  // r15
    let v19: struct8;  // rax
    let v20: i256;  // ymm0
    let v21: i256;  // ymm1
    let v22: i256;  // ymm2
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1
    let v25: i128;  // xmm2
    let v26: i128;  // xmm0
    let v27: i64;  // rdx
    let v29: i64;  // rax

    v15 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v17 = *((a0 + 32) as &i64);
    v18 = *((a0 + 40) as &i64);
    v8 = struct8 {
        field_16: 0
    };
    v9 = 1;
    v10 = 0;
    v11 = *((a0 + 8) as &i64);
    v12 = v11 + *((a0 + 16) as &i64) * 24;
    v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v19 {
        return 0;
    }
    do {
        v7 = v19;
        if std::path::Path::is_dir(*((v7 + 8) as &i64), *((v7 + 16) as &i64)) as i8 {
            v13 = uucore::util_name();
            v14 = v27;
            eprint!("{:?}: ", &v13);
            eprintln!("{:?}: Is a directory", &v7);
            uucore::mods::error::set_exit_code(1);
            v13 = v13;
        } else {
            v13 = uu_expand::open(*((v7 + 8) as &i64), *((v7 + 16) as &i64));
            if !v13 {
                v26 = *((&v13 as &char + 8) as &i128);
                v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
                v6 = v26;
                v4 = uucore::util_name();
                v5 = v27;
                eprint!("{:?}: ", &v4);
                eprintln!("{:?}", &v6);
                uucore::mods::error::set_exit_code(1);
                v13 = v13;
            } else {
                v3 = *((&v13 as &char + 48) as &i64);
                v23 = v13;
                v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
                v24 = *((&v13 as &char + 16) as &i128);
                v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
                v25 = *((&v13 as &char + 32) as &i128);
                v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
                v2 = v25;
                v1 = v24;
                v0 = v23;
                loop {
                    if !(std::io::read_until(0xa, &v8) ? (-0x100 | !v10) & 4294967295 & 4294967295 : (-0x100 | v27) & 4294967295 & 4294967295) {
                        break;
                    }
                    v29 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_expand::expand_line(&v8, &v15, v17, v18, a0));
                    if v29 {
                        return v29;
                    }
                }
                v13 = v13;
            }
        }
    } while ((v13 = v13, v19 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v19));
}
