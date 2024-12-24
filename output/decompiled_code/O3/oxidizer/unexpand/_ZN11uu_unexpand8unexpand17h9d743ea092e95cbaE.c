fn uu_unexpand::unexpand(a0: u32) -> u64 {
    let v0: i64;  // [sp-0x168]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i64;  // [sp-0x150]
    let v4: i64;  // [sp-0x148]
    let v5: i64;  // [sp-0x140]
    let v6: i64;  // [sp-0x138]
    let v7: i64;  // [sp-0x130]
    let v8: i64;  // [sp-0x128]
    let v9: i64;  // [sp-0x120]
    let v10: i128;  // [sp-0xf8]
    let v11: i128;  // [sp-0xe8]
    let v12: i128;  // [sp-0xd8]
    let v13: i64;  // [sp-0xc8]
    let v14: i448;  // [sp-0xc0], Other Possible Types: Result<struct56, struct24>
    let v15: struct33;  // [sp-0x88]
    let v18: struct8;  // rax
    let v19: i256;  // ymm0
    let v20: i256;  // ymm1
    let v21: i256;  // ymm2
    let v22: i128;  // xmm0
    let v23: i128;  // xmm1
    let v24: i128;  // xmm2
    let v25: i64;  // rdx
    let v26: i64;  // rdx
    let v27: i64;  // rax

    v15 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v6 = *((a0 + 8) as &i64);
    v7 = v6 + *((a0 + 16) as &i64) * 24;
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v18 {
        return 0;
    }
    do {
        v14 = uu_unexpand::open(*((v18 + 8) as &i64), *((v18 + 16) as &i64));
        match v14 {
            Err(_) => {
                v1 = *((&v14 as &char + 8) as &i64);
                v2 = *((&v14 as &char + 16) as &i64);
                *((v2 + 96) as &i64)();
                uucore::mods::error::set_exit_code();
                v8 = uucore::util_name();
                v9 = v25;
                eprintln!("{:?}: {:?}", &v8, &v1);
            },
            Ok(_) => {
                v13 = *((&v14 as &char + 48) as &i64);
                v22 = v14;
                v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u128 as u256;
                v23 = *((&v14 as &char + 16) as &i128);
                v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u128 as u256;
                v24 = *((&v14 as &char + 32) as &i128);
                v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u128 as u256;
                v12 = v24;
                v11 = v23;
                v10 = v22;
                loop {
                    if std::io::read_until() as i64 {
                        v26 = v5;
                    }
                    if !v26 {
                        break;
                    }
                    v0 = *((a0 + 40) as &i64);
                    v27 = uu_unexpand::unexpand_line() as i64;
                    if v27 {
                        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
                    }
                }
            },
        }
    } while ((v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v18));
}
