fn uu_hashsum::hashsum(a0: &struct44) -> u64 {
    let v0: i160;  // [sp-0x170], Other Possible Types: Result<struct4, struct8>, struct20
    let v1: i64;  // [sp-0x160]
    let v2: i8;  // [bp-0x158]
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [bp-0x128], Other Possible Types: Result<struct16, struct4>, struct20
    let v5: i64;  // [sp-0x120]
    let v6: i64;  // [sp-0x118]
    let v7: i64;  // [sp-0xe0], Other Possible Types: Result<struct16, struct4>
    let v8: i64;  // [sp-0xd0]
    let v9: i128;  // [sp-0xc8]
    let v10: i64;  // [sp-0xb8]
    let v11: i64;  // [sp-0xb0]
    let v12: i64;  // [sp-0xa8]
    let v13: i64;  // [sp-0xa0]
    let v14: i64;  // [sp-0x98]
    let v15: struct24;  // [sp-0x90], Other Possible Types: i64, struct8
    let v16: i64;  // [sp-0x88]
    let v17: i128;  // [sp-0x78]
    let v18: struct56;  // [sp-0x68]
    let v21: struct8;  // rax
    let v22: i64;  // rbp
    let v24: i64;  // rbx
    let v26: i64;  // rbx
    let v27: i256;  // ymm0
    let v28: i64;  // rax
    let v29: i64;  // rcx
    let v30: i64;  // rdx
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i64;  // rdi
    let v34: i64;  // rsi

    v11 = (!*((a0 + 40) as &i8) ? &g_469966 : &g_469967);
    v12 = 1;
    v13 = &g_469031;
    v14 = 1;
    v21 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
    if !v21 {
        return vvar_20{reg 56};
    }
    v3 = a0 + 24;
    v22 = &v4;
    do {
        v24 = v26;
        v6 = v6;
        v1 = v1;
        v5 = v5;
        v4 = v4;
        v4 = std::path::Path::components(v21, v24);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v4, &v0) {
            v28 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v29 = &g_73bbe8;
        } else {
            v0 = std::fs::File::open(v21, v24);
            v4 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            if v4 {
LABEL_5786e9:
                return vvar_20{reg 56};
            }
            v28 = alloc::boxed::Box<T>::new(*((&v4 as &char + 8) as &i32));
            v22 = &v4;
            v29 = &g_73bb90;
        }
        v18 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v28, v29);
        uucore::features::checksum::digest_reader();
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v22, &v0);
        if v7 == 0x8000000000000000 {
            goto LABEL_5786e9;
        }
        v7 = v4;
        v8 = v6;
        v30 = v24;
        uucore::features::checksum::escape_filename(&v0, v21, v24);
        v22 = &v4;
        v10 = v1;
        v31 = v0;
        v9 = v31;
        v32 = v2;
        v27 = (v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
        v17 = v32;
        if *((a0 + 41) as &i8) {
            v33 = *(a0 as &i64);
            v34 = *((a0 + 8) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                v15 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{}{} ({}) = {}", &v17, &v15, &v9, &v7);
            } else {
                if *((*(v3 as &i64) + 48) as &i64)() == 0x200 {
                    println!("BLAKE2b ({}) = {}", &v9, &v7);
                } else {
                    v15 = *((*(v3 as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{} ({}) = {}", &v15, &v9, &v7);
                }
            }
        } else if *((a0 + 42) as &i8) {
            println!("{}", &v7);
        } else if !*((a0 + 43) as &i8) {
            println!("{}{} {}{}", &v17, &v7, &v11, &v9);
        } else {
            v15 = v21;
            v16 = v24;
            print!("{} {}{}\x00", &v7, &v11, &v15);
        }
        v21 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
        v4 = v4;
        v5 = v5;
        v1 = v1;
        v6 = v6;
    } while (v21);
}
