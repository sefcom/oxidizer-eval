fn uu_hashsum::hashsum(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x170], Other Possible Types: struct40, Result<struct4, struct8>, struct20
    let v1: Argument;  // [bp-0x160]
    let v2: Argument;  // [bp-0x150]
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [sp-0x128], Other Possible Types: Result<struct32, struct24>, Arguments, struct20
    let v5: i64;  // [sp-0x120]
    let v6: i64;  // [sp-0x118]
    let v7: i64;  // [sp-0x110]
    let v8: i64;  // [sp-0xe0]
    let v9: i64;  // [sp-0xd8]
    let v10: i64;  // [sp-0xd0]
    let v11: i128;  // [sp-0xc8]
    let v12: i64;  // [sp-0xb8]
    let v13: i64;  // [sp-0xb0]
    let v14: i64;  // [sp-0xa8]
    let v15: i64;  // [sp-0xa0]
    let v16: i64;  // [sp-0x98]
    let v17: i64;  // [sp-0x90], Other Possible Types: struct24
    let v18: i128;  // [sp-0x78]
    let v19: struct56;  // [sp-0x68], Other Possible Types: i448
    let v22: struct8;  // rax
    let v24: i64;  // 4096
    let v26: i64;  // rbx
    let v27: i64;  // r13
    let v28: i64;  // rdx
    let v29: i64;  // rbx
    let v30: i256;  // ymm0
    let v31: i64;  // rcx
    let v32: i64;  // r8
    let v33: i64;  // r9
    let v34: i64;  // rax
    let v35: i64;  // rcx
    let v36: i64;  // rbp
    let v37: i64;  // rcx
    let v38: i64;  // r8
    let v39: i64;  // rdx
    let v40: i64;  // rbp
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i64;  // rdi
    let v44: i64;  // rsi

    v13 = (!*((a0 + 40) as &i8) ? &g_469ad6 : &g_469ad5);
    v14 = 1;
    v15 = &g_469ad4;
    v16 = 1;
    v22 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
    if !v22 {
        return 0;
    }
    v3 = a0 + 24;
    do {
        v26 = v29;
        v27 = v24;
        v4 = std::path::Path::components(v22, v26);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v4, &v0, v28, v31, v32, v33) as i8 {
            v34 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v35 = &g_73ca08;
        } else {
            v0 = std::fs::File::open(v22, v26);
            v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            v36 = v4;
            if v36 {
LABEL_578179:
                return v36;
            }
            v34 = alloc::boxed::Box<T>::new(*((&v4 as &char + 8) as &i32));
            v35 = &g_73c9b0;
        }
        v19 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v34, v35);
        v37 = *((v27 + 40) as &i8);
        v38 = *((v27 + 32) as &i64);
        uucore::features::checksum::digest_reader(&v0, a0 + 16, &v19, *((v27 + 40) as &i8), *((v27 + 32) as &i64));
        v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v36 = v5;
        if v8 == 0x8000000000000000 {
            goto LABEL_578179;
        }
        v8 = v4;
        v9 = v36;
        v10 = v6;
        v39 = v26;
        v40 = v3;
        v0 = uucore::features::checksum::escape_filename(v22, v26);
        v12 = v0.field_16;
        v41 = v0;
        v11 = v41;
        v42 = *((&v0 as &char + 24) as &i128);
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
        v18 = v42;
        if *((a0 + 41) as &i8) {
            v43 = *(a0 as &i64);
            v44 = *((a0 + 8) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                v17 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{:?}{:?} ({:?}) = {:?}", &v18, &v17, &v11, &v8);
                v4 = v4;
                v5 = v5;
                v6 = v6;
            } else {
                if *((*(v40 as &i64) + 48) as &i64)() == 0x200 {
                    v4 = &v11;
                    v5 = <alloc::string::String as core::fmt::Display>::fmt;
                    v6 = &v8;
                    v7 = <alloc::string::String as core::fmt::Display>::fmt;
                    v0 = "BLAKE2b (";
                    v0.8 = 3;
                    v0.field_32 = 0;
                    v0.field_16 = stack_base + -296;
                    v0.field_24 = 2;
                    std::io::stdio::_print(&v0);
                    v4 = v4;
                    v5 = v5;
                    v6 = v6;
                } else {
                    v17 = *((*(v40 as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{:?} ({:?}) = {:?}", &v17, &v11, &v8);
                    v4 = v4;
                    v5 = v5;
                    v6 = v6;
                }
            }
        } else if *((a0 + 42) as &i8) {
            println!("{:?}", &v8);
            v4 = v4;
            v5 = v5;
            v6 = v6;
        } else if !*((a0 + 43) as &i8) {
            println!("{:?}{:?} {:?}{:?}", &v18, &v8, &v13, &v11);
            v4 = v4;
            v5 = v5;
            v6 = v6;
        } else {
            v17 = v22;
            v17.field_8 = vvar_51{reg 40};
            v0 = &v8;
            v0.8 = <alloc::string::String as core::fmt::Display>::fmt;
            v1 = Argument {
                value: &v13
                formatter: <&T as core::fmt::Display>::fmt
            };
            v2 = Argument {
                value: &v17
                formatter: <std::path::Display as core::fmt::Display>::fmt
            };
            v4 = Arguments {
                pieces: ["", " ", "", "\x00"]
                args: [&v0, &v1, &v2]
                fmt: 0
            };
            std::io::stdio::_print(&v4);
            v4 = v4;
            v5 = v5;
            v6 = v6;
        }
        v6 = v6;
        v5 = v5;
        v4 = v4;
        v22 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v22);
}
