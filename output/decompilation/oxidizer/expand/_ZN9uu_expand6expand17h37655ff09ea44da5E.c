fn uu_expand::expand(a0: &struct80) -> long long {
    let v0: u128;  // [bp-0x138]
    let v1: u64;  // [bp-0x138]
    let v2: u64;  // [bp-0x138]
    let v3: u64;  // [bp-0x128]
    let v4: u64;  // [bp-0x128]
    let v5: u64;  // [bp-0x128]
    let v6: u128;  // [bp-0x118]
    let v7: u64;  // [bp-0x108]
    let v8: u64;  // [bp-0xf8]
    let v9: u64;  // [bp-0xf0]
    let v10: u128;  // [bp-0xe8]
    let v11: i64;  // [bp-0xd0]
    let v12: void*;  // [bp-0xc8]
    let v13: u64;  // [bp-0xc0]
    let v14: void*;  // [bp-0xb8]
    let v15: struct16;  // [bp-0xb0]
    let v16: u64;  // [bp-0xa0]
    let v17: u64;  // [bp-0xa0]
    let v18: u64;  // [bp-0x98]
    let v19: u64;  // [bp-0x98]
    let v20: u128;  // [bp-0x90]
    let v21: u128;  // [bp-0x80]
    let v22: u64;  // [bp-0x70]
    let v23: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x58]
    let v25: u64;  // r14
    let v26: u64;  // r15
    let v27: i64;  // rax
    let v28: u64;  // rcx
    let v29: u128;  // xmm0
    let v31: u64;  // r12
    let v32: u64;  // rdx

    std::io::stdio::stdout();
    v23 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
    v25 = *((a0 + 32) as &i64);
    v26 = *((a0 + 40) as &i64);
    v12 = 0;
    v13 = 1;
    v14 = 0;
    v15 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 24
    };
    v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v15);
    if !v27 {
        return 0;
    }
    do {
        v11 = v27;
        if std::path::Path::is_dir(*((v27 + 8) as &i64), *((v27 + 16) as &i64)) {
            v16 = uucore::util_name();
            v18 = v32;
            eprint!("{}: ", &v16);
            eprintln!("{}: Is a directory", &v11);
            uucore::mods::error::set_exit_code(1);
            v16 = v17;
            v18 = v19;
            v0 = v1;
            v3 = v4;
        } else {
            uu_expand::open(*((v11 + 8) as &i64), *((v11 + 16) as &i64), v28);
            if v16 {
                v7 = v22;
                v29 = *(&v16 as &i128);
                v6 = v21;
                v3 = v20;
                v0 = v29;
                loop {
                    if !(std::io::read_until(&v2, 10, &v12) ? 1 : v32) {
                        break;
                    }
                    v31 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_expand::expand_line(&v12, &v23, v25, v26, a0));
                    if v31 {
                        return v31;
                    }
                }
                v0 = v2;
                v3 = v5;
            } else {
                v10 = *(&v18 as &i128);
                v8 = uucore::util_name();
                v9 = v32;
                eprint!("{}: ", &v8);
                eprintln!("{}", &v10 as u8);
                uucore::mods::error::set_exit_code(1);
                v0 = v1;
                v3 = v4;
            }
        }
        v5 = v3;
        v2 = v0;
        v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v15);
    } while (v27);
    return 0;
}
