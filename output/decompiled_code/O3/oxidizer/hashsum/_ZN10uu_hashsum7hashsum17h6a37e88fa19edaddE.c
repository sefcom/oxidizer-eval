fn uu_hashsum::hashsum(a0: &struct44, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i160;  // [sp-0x170], Other Possible Types: struct20, struct40, Result<struct4, struct8>
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x130]
    let v3: i64;  // [bp-0x128], Other Possible Types: struct20, Result<struct16, struct12>
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd0]
    let v8: i128;  // [sp-0xc8]
    let v9: i64;  // [sp-0xb8]
    let v10: i64;  // [sp-0xb0]
    let v11: i64;  // [sp-0xa8]
    let v12: i64;  // [sp-0xa0]
    let v13: i64;  // [sp-0x98]
    let v14: i64;  // [sp-0x90], Other Possible Types: struct24
    let v15: i64;  // [sp-0x88]
    let v16: i128;  // [sp-0x78]
    let v17: struct56;  // [sp-0x68]
    let v20: struct8;  // rax
    let v21: i64;  // rbp
    let v23: i64;  // rbx
    let v24: i64;  // rdx
    let v25: i64;  // rbx
    let v26: i256;  // ymm0
    let v27: i64;  // rcx
    let v28: i64;  // r8
    let v29: i64;  // r9
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i64;  // rbp
    let v33: i64;  // rdx
    let v34: i128;  // xmm0
    let v35: i128;  // xmm0
    let v36: i64;  // rdi
    let v37: i64;  // rsi
    let v38: i64;  // rbp

    v10 = (!*((a0 + 40) as &i8) ? &g_469966 : &g_469967);
    v11 = 1;
    v12 = &g_469031;
    v13 = 1;
    v20 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
    if !v20 {
        return 0;
    }
    v2 = a0 + 24;
    v21 = &v3;
    do {
        v23 = v25;
        v3 = std::path::Path::components(v20, v23);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v3, &v0, v24, v27, v28, v29) as i8 {
            v30 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v31 = &g_73bbe8;
        } else {
            v0 = std::fs::File::open(v20, v23);
            v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            v32 = v3;
            if v32 {
                return v38;
            }
            v30 = alloc::boxed::Box<T>::new(*((&v3 as &char + 8) as &i32));
            v21 = &v3;
            v31 = &g_73bb90;
        }
        v17 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v30, v31);
        uucore::features::checksum::digest_reader();
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v21, &v0);
        if v6 == 0x8000000000000000 {
            v38 = v4;
            return v38;
        }
        v6 = v3;
        v7 = v5;
        v33 = v23;
        v0 = uucore::features::checksum::escape_filename(v20, v23);
        v21 = &v3;
        v9 = v1;
        v34 = v0;
        v8 = v34;
        v35 = *((&v0 as &char + 24) as &i128);
        v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
        v16 = v35;
        if *((a0 + 41) as &i8) {
            v36 = *(a0 as &i64);
            v37 = *((a0 + 8) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                v14 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{:?}{:?} ({:?}) = {:?}", &v16, &v14, &v8, &v6);
                v3 = v3;
                v4 = v4;
                v1 = v1;
                v5 = v5;
            } else {
                if *((*(v2 as &i64) + 48) as &i64)() == 0x200 {
                    println!("BLAKE2b ({:?}) = {:?}", &v8, &v6);
                    v3 = v3;
                    v4 = v4;
                    v1 = v1;
                    v5 = v5;
                } else {
                    v14 = *((*(v2 as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{:?} ({:?}) = {:?}", &v14, &v8, &v6);
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
            println!("{:?}{:?} {:?}{:?}", &v16, &v6, &v10, &v8);
            v3 = v3;
            v4 = v4;
            v1 = v1;
            v5 = v5;
        } else {
            v14 = v20;
            v15 = v23;
            print!("{:?} {:?}{:?}\x00", &v6, &v10, &v14);
            v3 = v3;
            v4 = v4;
            v1 = v1;
            v5 = v5;
        }
        v5 = v5;
        v1 = v1;
        v4 = v4;
        v3 = v3;
        v20 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v20);
}
