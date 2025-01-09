fn uu_hashsum::hashsum(a0: &struct44) -> u64 {
    let v0: i160;  // [sp-0x170], Other Possible Types: struct20, Result<struct4, struct8>, struct40
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x130]
    let v3: i64;  // [bp-0x128], Other Possible Types: struct20, Result<struct16, struct4>
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: i128;  // [sp-0xc8]
    let v10: i64;  // [sp-0xb8]
    let v11: i64;  // [sp-0xb0]
    let v12: i64;  // [sp-0xa8]
    let v13: i64;  // [sp-0xa0]
    let v14: i64;  // [sp-0x98]
    let v15: struct24;  // [sp-0x90], Other Possible Types: struct8, i64
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
    let v30: i64;  // rbp
    let v31: i64;  // rdx
    let v32: i128;  // xmm0
    let v33: i128;  // xmm0
    let v34: i64;  // rdi
    let v35: i64;  // rsi

    v11 = (!*((a0 + 40) as &i8) ? &g_469966 : &g_469967);
    v12 = 1;
    v13 = &g_469031;
    v14 = 1;
    v21 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
    if !v21 {
        return 0;
    }
    v2 = a0 + 24;
    v22 = &v3;
    do {
        v24 = v26;
        v3 = std::path::Path::components(v21, v24);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v3, &v0) {
            v28 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v29 = &g_73bbe8;
        } else {
            v0 = std::fs::File::open(v21, v24) as u64;
            v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            v30 = v3;
            if v30 {
LABEL_5786e9:
                return v30;
            }
            v28 = alloc::boxed::Box<T>::new(*((&v3 as &char + 8) as &i32));
            v22 = &v3;
            v29 = &g_73bb90;
        }
        v18 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v28, v29);
        uucore::features::checksum::digest_reader();
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v22, &v0);
        v30 = v4;
        if v6 == 0x8000000000000000 {
            goto LABEL_5786e9;
        }
        v6 = v3;
        v7 = v30;
        v8 = v5;
        v31 = v24;
        v0 = uucore::features::checksum::escape_filename(v21, v24);
        v22 = &v3;
        v10 = v1;
        v32 = v0;
        v9 = v32;
        v33 = *((&v0 as &char + 24) as &i128);
        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
        v17 = v33;
        if *((a0 + 41) as &i8) {
            v34 = *(a0 as &i64);
            v35 = *((a0 + 8) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                v15 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{:?}{:?} ({:?}) = {:?}", &v17, &v15, &v9, &v6);
                v3 = v3;
                v4 = v4;
                v1 = v1;
                v5 = v5;
            } else {
                if *((*(v2 as &i64) + 48) as &i64)() == 0x200 {
                    println!("BLAKE2b ({:?}) = {:?}", &v9, &v6);
                    v3 = v3;
                    v4 = v4;
                    v1 = v1;
                    v5 = v5;
                } else {
                    v15 = *((*(v2 as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{:?} ({:?}) = {:?}", &v15, &v9, &v6);
                    v3 = v3;
                    v4 = v4;
                    v1 = v1;
                    v5 = v5;
                }
            }
        } else if *((a0 + 42) as &i8) {
            println!("{:?}", &v6);
            v3 = v3;
            v4 = v4;
            v1 = v1;
            v5 = v5;
        } else if !*((a0 + 43) as &i8) {
            println!("{:?}{:?} {:?}{:?}", &v17, &v6, &v11, &v9);
            v3 = v3;
            v4 = v4;
            v1 = v1;
            v5 = v5;
        } else {
            v15 = v21;
            v16 = v24;
            print!("{:?} {:?}{:?}\x00", &v6, &v11, &v15);
            v3 = v3;
            v4 = v4;
            v1 = v1;
            v5 = v5;
        }
        v5 = v5;
        v1 = v1;
        v4 = v4;
        v3 = v3;
        v21 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v21);
}
