fn uu_unexpand::unexpand(a0: &struct56) -> long long {
    let v0: struct16;  // [bp-0x160], Other Possible Types: u64
    let v1: u64;  // [bp-0x160]
    let v2: u64;  // [bp-0x160]
    let v3: void*;  // [bp-0x150]
    let v4: u64;  // [bp-0x148]
    let v5: void*;  // [bp-0x140]
    let v6: struct16;  // [bp-0x138]
    let v7: u64;  // [bp-0x128]
    let v8: u64;  // [bp-0x120]
    let v9: struct56;  // [bp-0xf8]
    let v10: struct56;  // [bp-0xc0]
    let v11: u64;  // [bp-0xc0]
    let v12: struct16;  // [bp-0xb8]
    let v13: u64;  // [bp-0xb8]
    let v14: core::fmt::Arguments;  // [bp-0xb0]
    let v15: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x88]
    let v17: core::option::Option<u32>;  // rbp
    let v18: i64;  // rax
    let v19: u64;  // rcx
    let v22: struct64;  // rdx
    let v24: struct8;  // rax
    let v26: struct64;  // rdx

    std::io::stdio::stdout();
    v15 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
    v17 = *((a0 + 40) as &i64);
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v6 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 24
    };
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
    if !v18 {
        return 0;
    }
    do {
        uu_unexpand::open(*((v18 + 8) as &i64), *((v18 + 16) as &i64), v19);
        if v11 {
            v9 = v10;
            loop {
                v22 = v26;
                if std::io::read_until(&v9, 10, &v3) {
                    v22 = v5;
                }
                v1 = v0;
                if !v22 {
                    break;
                }
                v24 = uu_unexpand::unexpand_line(*((a0 + 48) as &i8), *((a0 + 49) as &i8), (v17 <= 1 ? 0 : *((*((a0 + 32) as &i64) + v17 * 8 - 8) as &i64)), *((a0 + 32) as &i64), v17, v0);
                if v24 {
                    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                }
            }
        } else {
            v0 = v12;
            uucore::mods::error::set_exit_code(v14.pieces.ptr[6].data_ptr(v13) as u32);
            v7 = uucore::util_name();
            v8 = v26;
            eprintln!("{}: {}", &v7, &v0);
            v1 = v2;
        }
        v0 = v1;
        v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
    } while (v18);
    return 0;
}
