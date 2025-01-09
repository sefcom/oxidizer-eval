fn uu_unexpand::unexpand(a0: &struct56) -> u64 {
    let v0: i64;  // [sp-0x168]
    let v1: i128;  // [bp-0x160]
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
    let v14: i456;  // [sp-0xc0], Other Possible Types: Result<struct56, struct16>
    let v15: struct33;  // [sp-0x88]
    let v17: i64;  // rbx
    let v18: i64;  // rbp
    let v19: i64;  // r14
    let v20: struct8;  // rax
    let v21: i32;  // r12d
    let v22: i32;  // r13d
    let v23: i256;  // ymm0
    let v24: i256;  // ymm1
    let v25: i256;  // ymm2
    let v26: i128;  // xmm0
    let v27: i128;  // xmm1
    let v28: i128;  // xmm2
    let v29: i64;  // rdx
    let v30: i64;  // rdx
    let v31: i64;  // rax

    v15 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v17 = *((a0 + 32) as &i64);
    v18 = *((a0 + 40) as &i64);
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v19 = (v18 <= 1 ? 0 : *((v17 + v18 * 8 - 8) as &i64));
    v6 = *((a0 + 8) as &i64);
    v7 = v6 + *((a0 + 16) as &i64) * 24;
    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v20 {
        return 0;
    }
    v21 = *((a0 + 48) as &i8);
    v22 = *((a0 + 49) as &i8);
    do {
        v14 = uu_unexpand::open(*((v20 + 8) as &i64), *((v20 + 16) as &i64));
        match v14 {
            Err(v1) => {
                uucore::mods::error::set_exit_code(*((v2 + 96) as &i64)() as u64);
                v8 = uucore::util_name();
                v9 = v29;
                eprintln!("{:?}: {:?}", &v8, &v1);
            },
            Ok(_) => {
                v13 = *((&v14 as &char + 48) as &i64);
                v26 = v14;
                v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u128 as u256;
                v27 = *((&v14 as &char + 16) as &i128);
                v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u128 as u256;
                v28 = *((&v14 as &char + 32) as &i128);
                v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u128 as u256;
                v12 = v28;
                v11 = v27;
                v10 = v26;
                loop {
                    v30 = v29;
                    if std::io::read_until(0xa, &v3) {
                        v30 = v5;
                    }
                    if !v30 {
                        break;
                    }
                    v0 = v18;
                    v31 = uu_unexpand::unexpand_line(&v3, &v14, v21 as u32 as u64, v22 as u32 as u64, v19, v17);
                    if v31 {
                        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
                    }
                }
            },
        }
    } while ((v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v20));
}
