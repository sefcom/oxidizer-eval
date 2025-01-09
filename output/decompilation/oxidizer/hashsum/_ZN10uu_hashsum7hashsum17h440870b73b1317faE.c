fn uu_hashsum::hashsum(a0: &struct44, a1: &u64) -> u64 {
    let v0: i96;  // [bp-0x1a8], Other Possible Types: struct20, Result<struct4, struct8>
    let v1: i64;  // [sp-0x198]
    let v2: i8;  // [bp-0x190]
    let v3: i128;  // [sp-0x160], Other Possible Types: Result<struct16, struct4>, struct20
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x150]
    let v6: i64;  // [sp-0x120]
    let v7: i64;  // [sp-0x118]
    let v8: i64;  // [sp-0x110]
    let v9: i128;  // [sp-0x108]
    let v10: i64;  // [sp-0xf8]
    let v11: i64;  // [sp-0xf0], Other Possible Types: struct24
    let v12: i64;  // [sp-0xe8]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i64;  // [sp-0xc8]
    let v16: i128;  // [sp-0xc0]
    let v17: struct56;  // [sp-0xb0], Other Possible Types: i448
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
    let v34: i64;  // rax
    let v35: i64;  // rcx
    let v36: i64;  // rcx
    let v37: i64;  // r8
    let v38: i64;  // rdx
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i64;  // rdi
    let v42: i64;  // rsi
    let v43: i64;  // r13

    v14 = (!*((a0 + 40) as &i8) ? &g_469966 : &g_469967);
    v15 = 1;
    v24 = *(a1 as &i128);
    v26 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
    v21 = *((a1 + 48) as &i128);
    v20 = *((a1 + 32) as &i128);
    v19 = *((a1 + 16) as &i128);
    v18 = v24;
    v13 = a0 + 16;
    v27 = &v0;
    loop {
        v30 = v31;
        v5 = v5;
        v1 = v1;
        v4 = v4;
        v3 = v3;
        v32 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v18);
        if !v32 {
            return v43;
        }
        v3 = std::path::Path::components(v32, v33);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v3, &v0) {
            v34 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v35 = &g_73bbe8;
        } else {
            v0 = std::fs::File::open(v32, v33);
            v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            if v3 {
                return v43;
            }
            v34 = alloc::boxed::Box<T>::new(*((&v3 as &char + 8) as &i32));
            v27 = &v0;
            v35 = &g_73bb90;
        }
        v17 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v34, v35);
        v36 = *((v30 + 40) as &i8);
        v37 = *((v30 + 32) as &i64);
        uucore::features::checksum::digest_reader(v27, v13, &v17, *((v30 + 40) as &i8), *((v30 + 32) as &i64));
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v27);
        if v6 == 0x8000000000000000 {
            return v43;
        }
        v6 = v3;
        v7 = v4;
        v8 = v5;
        v27 = &v0;
        v38 = v33;
        uucore::features::checksum::escape_filename(&v0, v32, v33);
        v10 = v1;
        v39 = v0;
        v9 = v39;
        v40 = v2;
        v26 = (v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
        v16 = v40;
        if *((a0 + 41) as &i8) {
            v41 = *(a0 as &i64);
            v42 = *((a0 + 8) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                if *((*((a0 + 24) as &i64) + 48) as &i64)() != 0x200 {
                    v11 = *((*((a0 + 24) as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{} ({}) = {}", &v11, &v9, &v6);
                } else {
                    println!("BLAKE2b ({}) = {}", &v9, &v6);
                }
            } else {
                v11 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{}{} ({}) = {}", &v16, &v11, &v9, &v6);
            }
        } else if *((a0 + 42) as &i8) {
            println!("{}", &v6);
        } else if *((a0 + 43) as &i8) {
            v11 = v32;
            v12 = v33;
            print!("{} {}{}\x00", &v6, &v14, &v11);
        } else {
            println!("{}{} {}{}", &v16, &v6, &v14, &v9);
        }
        v3 = v3;
        v4 = v4;
        v1 = v1;
        v5 = v5;
        v31 = a0;
    }
}
