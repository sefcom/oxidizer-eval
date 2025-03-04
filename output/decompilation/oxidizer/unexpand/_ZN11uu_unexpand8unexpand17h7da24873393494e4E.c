fn uu_unexpand::unexpand(a0: u32) -> u64 {
    let v0: iNone;  // [sp-0x160]
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x150]
    let v3: i64;  // [sp-0x148]
    let v4: i64;  // [sp-0x140]
    let v5: struct16;  // [sp-0x138]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: iNone;  // [sp-0xf8]
    let v9: iNone;  // [sp-0xe8]
    let v10: iNone;  // [sp-0xd8]
    let v11: i64;  // [sp-0xc8]
    let v12: Result<struct56, struct16>;  // [sp-0xc0]
    let v13: struct33;  // [sp-0x88]
    let v15: i64;  // rbx
    let v16: i64;  // rbp
    let v17: i64;  // r14
    let v18: i64;  // rax
    let v21: iNone;  // ymm0
    let v22: iNone;  // ymm1
    let v23: iNone;  // ymm2
    let v24: iNone;  // xmm0
    let v25: iNone;  // xmm1
    let v26: iNone;  // xmm2
    let v27: i64;  // rdx
    let v28: i64;  // rcx
    let v29: i64;  // rbx

    v13 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
    v15 = *((a0 + 32) as &i64);
    v16 = *((a0 + 40) as &i64);
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v17 = (v16 <= 1 ? 0 : *((v15 + v16 * 8 - 8) as &i64));
    v5 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: v5 + *((a0 + 16) as &i64) * 24
    };
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5);
    if !v18 {
        return 0;
    }
    do {
        v12 = uu_unexpand::open(*((v18 + 8) as &i64), *((v18 + 16) as &i64));
        match v12 {
            Err(v0) => {
                uucore::mods::error::set_exit_code(*((v1 + 96) as &i64)() as u64);
                v6 = uucore::util_name();
                v7 = v27;
                eprintln!("{}: {}", &v6, &v0);
            },
            Ok(_) => {
                v11 = *((&v12 as &char + 48) as &i64);
                v24 = v12 as i128;
                v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256;
                v25 = *((&v12 as &char + 16) as &i128);
                v22 = v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256;
                v26 = *((&v12 as &char + 32) as &i128);
                v23 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256;
                v10 = v26;
                v9 = v25;
                v8 = v24;
                loop {
                    v28 = v27;
                    if std::io::read_until(0xa, &v2) {
                        v28 = v4;
                    }
                    if !v28 {
                        break;
                    }
                    if uu_unexpand::unexpand_line(&v2, &v13, *((a0 + 48) as &i8) as u8 as u32 as u64, *((a0 + 49) as &i8) as u8 as u32 as u64, v17, v15, v16) {
                        return v29;
                    }
                }
            },
        }
    } while ((v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v5), v18));
}
