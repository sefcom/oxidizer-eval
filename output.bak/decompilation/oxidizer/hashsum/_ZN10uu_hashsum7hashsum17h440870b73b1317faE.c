fn uu_hashsum::hashsum(a0: &struct44, a1: &u64) -> u64 {
    let v0: i8;  // [bp-0x1a8], Other Possible Types: struct20, struct40, Result<struct4, struct8>
    let v1: i64;  // [sp-0x198]
    let v2: i136;  // [sp-0x160], Other Possible Types: Result<struct32, struct16>, struct20
    let v3: i64;  // [sp-0x158]
    let v4: i64;  // [sp-0x150]
    let v5: i64;  // [sp-0x120]
    let v6: i64;  // [sp-0x118]
    let v7: i64;  // [sp-0x110]
    let v8: i128;  // [sp-0x108]
    let v9: i64;  // [sp-0xf8]
    let v10: i64;  // [sp-0xf0], Other Possible Types: struct24
    let v11: i64;  // [sp-0xe8]
    let v12: i64;  // [sp-0xd8]
    let v13: i64;  // [sp-0xd0]
    let v14: i64;  // [sp-0xc8]
    let v15: i128;  // [sp-0xc0]
    let v16: struct56;  // [sp-0xb0], Other Possible Types: i448
    let v17: i128;  // [sp-0x78]
    let v18: i128;  // [sp-0x68]
    let v19: i128;  // [sp-0x58]
    let v20: i128;  // [sp-0x48]
    let v23: i128;  // xmm0
    let v24: i256;  // ymm0
    let v25: i256;  // ymm0
    let v26: i64;  // r13
    let v29: i64;  // rbx
    let v30: i64;  // rbx
    let v31: i64;  // r15
    let v32: i64;  // rdx
    let v33: i64;  // rax
    let v34: i64;  // rcx
    let v35: i64;  // r13
    let v36: i64;  // rcx
    let v37: i64;  // r8
    let v38: i64;  // rdx
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i64;  // rdi
    let v42: i64;  // rsi

    v13 = (!*((a0 + 40) as &i8) ? &g_469966 : &g_469967);
    v14 = 1;
    v23 = *(a1 as &i128);
    v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
    v20 = *((a1 + 48) as &i128);
    v19 = *((a1 + 32) as &i128);
    v18 = *((a1 + 16) as &i128);
    v17 = v23;
    v12 = a0 + 16;
    v26 = &v0;
    loop {
        v29 = v30;
        v31 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v17);
        if !v31 {
            return 0;
        }
        v2 = std::path::Path::components(v31, v32);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v2, &v0) {
            v33 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
            v34 = &g_73bbe8;
        } else {
            v0 = std::fs::File::open(v31, v32) as u64;
            v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            v35 = v2;
            if v35 {
                return v35;
            }
            v33 = alloc::boxed::Box<T>::new(*((&v2 as &char + 8) as &i32));
            v26 = &v0;
            v34 = &g_73bb90;
        }
        v16 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v33, v34);
        v36 = *((v29 + 40) as &i8);
        v37 = *((v29 + 32) as &i64);
        uucore::features::checksum::digest_reader(v26, v12, &v16, *((v29 + 40) as &i8), *((v29 + 32) as &i64));
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v26);
        v35 = v3;
        if v5 == 0x8000000000000000 {
            return v35;
        }
        v5 = v2;
        v6 = v35;
        v7 = v4;
        v26 = &v0;
        v38 = v32;
        v0 = uucore::features::checksum::escape_filename(v31, v32);
        v9 = v1;
        v39 = v0;
        v8 = v39;
        v40 = *((&v0 as &char + 24) as &i128);
        v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
        v15 = v40;
        if *((a0 + 41) as &i8) {
            v41 = *(a0 as &i64);
            v42 = *((a0 + 8) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") as i8 {
                v10 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{:?}{:?} ({:?}) = {:?}", &v15, &v10, &v8, &v5);
                v2 = v2;
                v3 = v3;
                v1 = v1;
                v4 = v4;
            } else {
                if *((*((a0 + 24) as &i64) + 48) as &i64)() != 0x200 {
                    v10 = *((*((a0 + 24) as &i64) + 48) as &i64)();
                    println!("BLAKE2b-{:?} ({:?}) = {:?}", &v10, &v8, &v5);
                    v2 = v2;
                    v3 = v3;
                    v1 = v1;
                    v4 = v4;
                } else {
                    println!("BLAKE2b ({:?}) = {:?}", &v8, &v5);
                    v2 = v2;
                    v3 = v3;
                    v1 = v1;
                    v4 = v4;
                }
            }
        } else if *((a0 + 42) as &i8) {
            println!("{:?}", &v5);
            v2 = v2;
            v3 = v3;
            v1 = v1;
            v4 = v4;
        } else if *((a0 + 43) as &i8) {
            v10 = v31;
            v11 = v32;
            print!("{:?} {:?}{:?}\x00", &v5, &v13, &v10);
            v2 = v2;
            v3 = v3;
            v1 = v1;
            v4 = v4;
        } else {
            println!("{:?}{:?} {:?}{:?}", &v15, &v5, &v13, &v8);
            v2 = v2;
            v3 = v3;
            v1 = v1;
            v4 = v4;
        }
        v4 = v4;
        v1 = v1;
        v3 = v3;
        v2 = v2;
        v30 = a0;
    }
}
