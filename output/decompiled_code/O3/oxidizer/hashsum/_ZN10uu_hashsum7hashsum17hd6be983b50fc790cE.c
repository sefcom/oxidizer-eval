fn uu_hashsum::hashsum(a0: void*, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i160;  // [bp-0x1a8], Other Possible Types: struct40, Result<struct4, struct8>, struct20
    let v1: Argument;  // [bp-0x198]
    let v2: Argument;  // [bp-0x188]
    let v3: Argument;  // [bp-0x178]
    let v4: i64;  // [sp-0x160], Other Possible Types: Arguments, Result<struct16, struct12>, struct20
    let v5: i64;  // [sp-0x158]
    let v6: i64;  // [sp-0x150]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [sp-0x118]
    let v9: i64;  // [sp-0x110]
    let v10: i128;  // [sp-0x108]
    let v11: i64;  // [sp-0xf8]
    let v12: i64;  // [sp-0xf0], Other Possible Types: struct24
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i128;  // [sp-0xc0]
    let v17: i448;  // [sp-0xb0], Other Possible Types: struct56
    let v18: i128;  // [sp-0x78]
    let v19: i128;  // [sp-0x68]
    let v20: i128;  // [sp-0x58]
    let v21: i128;  // [sp-0x48]
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v27: i64;  // r13
    let v30: i64;  // rbx
    let v31: i64;  // rbx
    let v32: i64;  // r15
    let v33: i64;  // rdx
    let v34: i64;  // rcx
    let v35: i64;  // r8
    let v36: i64;  // r9
    let v37: i64;  // rax
    let v38: i64;  // rcx
    let v39: i64;  // r13
    let v40: i64;  // rcx
    let v41: i64;  // r8
    let v42: i64;  // rdx
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i64;  // rdi
    let v46: i64;  // rsi

    v14 = (!*((a0 + 40) as &i8) ? &g_469ad6 : &g_469ad5);
    v15 = 1;
    v24 = *(a1 as &i128);
    v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
    v21 = *((a1 + 48) as &i128);
    v20 = *((a1 + 32) as &i128);
    v19 = *((a1 + 16) as &i128);
    v18 = v24;
    v13 = a0 + 16;
    v27 = &v0;
    loop {
        v30 = v31;
        v32 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v18, a1, a2);
        if !v32 {
            return 0;
        }
        v4 = std::path::Path::components(v32, v33);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v4, &v0, v33, v34, v35, v36) as i8 {
            v37 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v38 = &g_73ca08;
        } else {
            v0 = std::fs::File::open(v32, v33);
            v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            v39 = v4;
            if v39 {
                return v39;
            }
            v37 = alloc::boxed::Box<T>::new(*((&v4 as &char + 8) as &i32));
            v27 = &v0;
            v38 = &g_73c9b0;
        }
        v17 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v37, v38);
        v40 = *((v30 + 40) as &i8);
        v41 = *((v30 + 32) as &i64);
        uucore::features::checksum::digest_reader(v27, v13, &v17, *((v30 + 40) as &i8), *((v30 + 32) as &i64));
        v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v27);
        v39 = v5;
        if v7 == 0x8000000000000000 {
            return v39;
        }
        v7 = v4;
        v8 = v39;
        v9 = v6;
        v27 = &v0;
        v42 = v33;
        v0 = uucore::features::checksum::escape_filename(v32, v33);
        v11 = v0.field_16;
        v43 = v0;
        v10 = v43;
        v44 = *((&v0 as &char + 24) as &i128);
        v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
        v16 = v44;
        if *((a0 + 41) as &i8) {
            v45 = *(a0 as &i64);
            v46 = *((a0 + 8) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                v12 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{:?}{:?} ({:?}) = {:?}", &v16, &v12, &v10, &v7);
                v4 = v4;
                v5 = v5;
                v6 = v6;
            } else {
                if *((*((a0 + 24) as &i64) + 48) as &i64)() != 0x200 {
                    v12 = *((*((a0 + 24) as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{:?} ({:?}) = {:?}", &v12, &v10, &v7);
                    v4 = v4;
                    v5 = v5;
                    v6 = v6;
                } else {
                    println!("BLAKE2b ({:?}) = {:?}", &v10, &v7);
                    v4 = v4;
                    v5 = v5;
                    v6 = v6;
                }
            }
        } else if *((a0 + 42) as &i8) {
            v4 = &v7;
            v5 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_73c8e0;
            v0.8 = 2;
            v0.field_32 = 0;
            v0.field_16 = stack_base + -352;
            v0.field_24 = 1;
            std::io::stdio::_print(&v0);
            v4 = v4;
            v5 = v5;
            v6 = v6;
        } else if *((a0 + 43) as &i8) {
            v12 = v32;
            v12.field_8 = vvar_137{reg 32};
            v0 = &v7;
            v0.8 = <alloc::string::String as core::fmt::Display>::fmt;
            v1 = Argument {
                value: &v14
                formatter: <&T as core::fmt::Display>::fmt
            };
            v2 = Argument {
                value: &v12
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
        } else {
            v0 = &v16;
            v0.8 = <&T as core::fmt::Display>::fmt;
            v1 = Argument {
                value: &v7
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v2 = Argument {
                value: &v14
                formatter: <&T as core::fmt::Display>::fmt
            };
            v3 = Argument {
                value: &v10
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v4 = Arguments {
                pieces: ["", "", " ", "", "\n"]
                args: [&v0, &v1, &v2, &v3]
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
    }
}
