fn uu_hashsum::hashsum(a0: &struct44, a1: &u64, a2: u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i160;  // [bp-0x1a8], Other Possible Types: Result<struct4, struct8>, struct20, struct40
    let v1: i64;  // [sp-0x1a0]
    let v2: i64;  // [sp-0x198], Other Possible Types: Argument
    let v3: i64;  // [sp-0x190]
    let v4: Argument;  // [sp-0x188], Other Possible Types: i64
    let v5: Argument;  // [bp-0x178]
    let v6: i64;  // [sp-0x160], Other Possible Types: Result<struct16, struct12>, Arguments, struct20
    let v7: i64;  // [sp-0x158]
    let v8: i64;  // [sp-0x150]
    let v9: i64;  // [sp-0x120]
    let v10: i64;  // [sp-0x118]
    let v11: i64;  // [sp-0x110]
    let v12: i128;  // [sp-0x108]
    let v13: i64;  // [sp-0xf8]
    let v14: i64;  // [sp-0xf0], Other Possible Types: struct24
    let v15: i64;  // [sp-0xe8]
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i64;  // [sp-0xc8]
    let v19: i128;  // [sp-0xc0]
    let v20: i448;  // [sp-0xb0], Other Possible Types: struct56
    let v21: i128;  // [sp-0x78]
    let v22: i128;  // [sp-0x68]
    let v23: i128;  // [sp-0x58]
    let v24: i128;  // [sp-0x48]
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i64;  // r13
    let v33: i64;  // rbx
    let v34: i64;  // rbx
    let v35: i64;  // r15
    let v36: i64;  // rdx
    let v37: i64;  // rcx
    let v38: i64;  // r8
    let v39: i64;  // r9
    let v40: i64;  // rax
    let v41: i64;  // rcx
    let v42: i64;  // r13
    let v43: i64;  // rcx
    let v44: i64;  // r8
    let v45: i64;  // rdx
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i64;  // rdi
    let v49: i64;  // rsi

    v17 = (!*((a0 + 40) as &i8) ? &g_469966 : &g_469967);
    v18 = 1;
    v27 = *(a1 as &i128);
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
    v24 = *((a1 + 48) as &i128);
    v23 = *((a1 + 32) as &i128);
    v22 = *((a1 + 16) as &i128);
    v21 = v27;
    v16 = a0 + 16;
    v30 = &v0;
    loop {
        v33 = v34;
        v35 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v21, a1, a2);
        if !v35 {
            return 0;
        }
        v6 = std::path::Path::components(v35, v36);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v6, &v0, v36, v37, v38, v39) as i8 {
            v40 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v41 = &g_73bbe8;
        } else {
            v0 = std::fs::File::open(v35, v36);
            v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            v42 = v6;
            if v42 {
                return v42;
            }
            v40 = alloc::boxed::Box<T>::new(*((&v6 as &char + 8) as &i32));
            v30 = &v0;
            v41 = &g_73bb90;
        }
        v20 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v40, v41);
        v43 = *((v33 + 40) as &i8);
        v44 = *((v33 + 32) as &i64);
        uucore::features::checksum::digest_reader(v30, v16, &v20, *((v33 + 40) as &i8), *((v33 + 32) as &i64));
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v30);
        v42 = v7;
        if v9 == 0x8000000000000000 {
            return v42;
        }
        v9 = v6;
        v10 = v42;
        v11 = v8;
        v30 = &v0;
        v45 = v36;
        v0 = uucore::features::checksum::escape_filename(v35, v36);
        v13 = v2;
        v46 = v0;
        v12 = v46;
        v47 = *((&v0 as &char + 24) as &i128);
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v19 = v47;
        if *((a0 + 41) as &i8) {
            v48 = *(a0 as &i64);
            v49 = *((a0 + 8) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                v14 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{:?}{:?} ({:?}) = {:?}", &v19, &v14, &v12, &v9);
                v6 = v6;
                v7 = v7;
                v2 = v2;
                v8 = v8;
            } else {
                if *((*((a0 + 24) as &i64) + 48) as &i64)() != 0x200 {
                    v14 = *((*((a0 + 24) as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{:?} ({:?}) = {:?}", &v14, &v12, &v9);
                    v6 = v6;
                    v7 = v7;
                    v2 = v2;
                    v8 = v8;
                } else {
                    println!("BLAKE2b ({:?}) = {:?}", &v12, &v9);
                    v6 = v6;
                    v7 = v7;
                    v2 = v2;
                    v8 = v8;
                }
            }
        } else if *((a0 + 42) as &i8) {
            v6 = &v9;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v0 = &g_73b958;
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 1;
            std::io::stdio::_print(&v0);
            v6 = v6;
            v7 = v7;
            v2 = v2;
            v8 = v8;
        } else if *((a0 + 43) as &i8) {
            v14 = v35;
            v15 = v36;
            v0 = &v9;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = Argument {
                value: &v17
                formatter: <&T as core::fmt::Display>::fmt
            };
            v4 = Argument {
                value: &v14
                formatter: <std::path::Display as core::fmt::Display>::fmt
            };
            v6 = Arguments {
                pieces: ["", " ", "", "\x00"]
                args: [&v0, &v2, &v4]
                fmt: 0
            };
            std::io::stdio::_print(&v6);
            v6 = v6;
            v7 = v7;
            v2 = v2;
            v8 = v8;
        } else {
            v0 = &v19;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = Argument {
                value: &v9
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v4 = Argument {
                value: &v17
                formatter: <&T as core::fmt::Display>::fmt
            };
            v5 = Argument {
                value: &v12
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v6 = Arguments {
                pieces: ["", "", " ", "", "\n"]
                args: [&v0, &v2, &v4, &v5]
                fmt: 0
            };
            std::io::stdio::_print(&v6);
            v6 = v6;
            v7 = v7;
            v2 = v2;
            v8 = v8;
        }
        v8 = v8;
        v2 = v2;
        v7 = v7;
        v6 = v6;
        v34 = a0;
    }
}
