fn uu_paste::InputSource::read_until(a0: &u64, a1: void*, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i8;  // [sp-0x98]
    let v4: i64;  // [bp-0x90], Other Possible Types: Arguments
    let v5: i8;  // [bp-0x80]
    let v6: i64;  // [sp-0x78]
    let v7: Argument;  // [bp-0x60]
    let v8: i192;  // [sp-0x50], Other Possible Types: String
    let v9: i32;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // r12
    let v13: i64;  // rax
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i8;  // dl
    let v17: i64;  // rax
    let v18: i128;  // xmm0
    let v22: i128;  // xmm0

    if *(a1 as &i64) {
        v11 = std::io::read_until(a1, a2, a3, a3, a4, a5, v0);
        v4 = 0x8000000000000000;
        v6 = v14;
        v15 = __rust_alloc(32, 8);
        v18 = v4;
        *((v15 + 16) as &i8) = v5;
        *(v15 as &i128) = v18;
        *(a0 as &i64) = v15;
        v11 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
LABEL_47fdc4:
        *((a0 + 8) as &i64) = v11;
        return v11;
    }
    v12 = *((a1 + 8) as &i64);
    v13 = *((v12 + 16) as &i64);
    if v13 >= 9223372036854775807 {
        v7 = Argument {
            value: &v1
            formatter: <core::cell::BorrowError as core::fmt::Display>::fmt
        };
        v4 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: [&v7]
            fmt: None
        };
        v8 = alloc::fmt::format::format_inner(&v4);
        v9 = 1;
        v17 = __rust_alloc(32, 8);
        v22 = v8;
        *((v17 + 16) as &i192) = v8;
        *(v17 as &i128) = v22;
        *(a0 as &i64) = v17;
        v11 = &g_4dd300;
        goto LABEL_47fdc4;
    }
    *((v12 + 16) as &i64) = v13 + 1;
    v2 = std::io::stdio::Stdin::lock(v12 + 24);
    v3 = v16 & 1;
    if !<std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v2) {
        goto LABEL_0x47fdca;
    } else {
        goto LABEL_0x47fcab;
    }
}
