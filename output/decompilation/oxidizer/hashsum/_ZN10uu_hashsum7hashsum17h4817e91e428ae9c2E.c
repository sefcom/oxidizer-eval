fn uu_hashsum::hashsum(a0: &struct44) -> u64 {
    let v0: struct20;  // [bp-0x168], Other Possible Types: Result<struct4, struct8>, u64
    let v1: struct40;  // [bp-0x168]
    let v2: u64;  // [bp-0x168]
    let v3: u64;  // [bp-0x158]
    let v4: u64;  // [bp-0x158]
    let v5: u64;  // [bp-0x150]
    let v6: u64;  // [bp-0x150]
    let v7: Result<struct32, struct24>;  // [bp-0x128], Other Possible Types: struct16, struct20, u64
    let v8: u64;  // [bp-0x128]
    let v9: u64;  // [bp-0x128]
    let v10: u64;  // [bp-0x120]
    let v11: u64;  // [bp-0x120]
    let v12: u64;  // [bp-0x118]
    let v13: u64;  // [bp-0x118], Other Possible Types: unsigned long
    let v14: u64;  // [bp-0xe8]
    let v15: core::fmt::rt::Argument;  // [bp-0xe0]
    let v16: u64;  // [bp-0xd8]
    let v17: u64;  // [bp-0xd0]
    let v18: struct24;  // [bp-0xd0]
    let v19: u64;  // [bp-0xc8]
    let v20: u128;  // [bp-0xb8]
    let v21: u64;  // [bp-0xa8]
    let v22: u64;  // [bp-0xa0]
    let v23: i64;  // [bp-0x98]
    let v24: u64;  // [bp-0x90]
    let v25: &str;  // [bp-0x88]
    let v26: iNone;  // [bp-0x78]
    let v27: struct56;  // [bp-0x68]
    let v29: core::option::Option<char>;  // rax
    let v30: core::option::Option<char>;  // r12
    let v31: u64;  // rdx
    let v33: u64;  // r14
    let v34: u64;  // rax
    let v35: u64;  // rdx
    let v36: core::fmt::rt::Argument;  // r15

    v23 = (*((a0 + 40) as &i8) ? &g_411fe7 : &g_411fe6);
    v24 = 1;
    v25 = "-";
    v29 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(&v25 as u64) as u64;
    if !v29 {
        return 0;
    }
    v22 = a0 + 16;
    do {
        v33 = v31;
        v7 = std::path::Path::components(v30, v33);
        v0 = std::path::Path::components("-");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v7, &v0) {
            v34 = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        } else {
            v0 = std::fs::File::open(v30, v33);
            v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
            v36 = v7.field_0;
            if v7.field_0 {
                break;
            }
            v34 = alloc::boxed::Box<T>::new(v11 & 4294967295);
        }
        v27 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v34, v35);
        v0 = uucore::features::checksum::digest_reader(v22, &v27, *((a0 + 40) as &i8), *((a0 + 32) as &i64));
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v36 = v11;
        if (((0 ^ v7 as i64) & (0 ^ -(v9))) >> 63) as char {
            return v36;
        }
        v14 = v7 as i64;
        v15 = v36;
        v16 = v13;
        v1 = uucore::features::checksum::escape_filename(v30, v33);
        v21 = v4;
        v20 = v1.field_0;
        v26 = *(&v1.field_24 as &i128);
        if *((a0 + 41) as &i8) {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*(a0 as &i64), *((a0 + 8) as &i64), "blake2b") {
                v18 = alloc::str::<impl str>::to_ascii_uppercase(*(a0 as &i64), *((a0 + 8) as &i64));
                println!("{}{} ({}) = {}", &v26, &v18, &v20 as u8, &v14);
                v7 = v8;
                v0 = v2;
                v11 = v10;
                v13 = v12;
                v4 = v3;
                v5 = v6;
            } else if *((*((a0 + 24) as &i64) + 48) as &i64)(*((a0 + 16) as &i64)) as i64 == 0x200 {
                println!("BLAKE2b ({}) = {}", &v20 as u8, &v14);
                v7 = v8;
                v0 = v2;
                v11 = v10;
                v13 = v12;
                v4 = v3;
                v5 = v6;
            } else {
                v17 = *((*((a0 + 24) as &i64) + 48) as &i64)(*((a0 + 16) as &i64)) as i64;
                println!("BLAKE2b-{} ({}) = {}", &v17, &v20 as u8, &v14);
                v7 = v8;
                v0 = v2;
                v11 = v10;
                v13 = v12;
                v4 = v3;
                v5 = v6;
            }
        } else {
            if *((a0 + 42) as &i8) {
                println!("{}", &v14);
                v7 = v8;
                v0 = v2;
                v11 = v10;
                v4 = v3;
                v5 = v6;
            } else if *((a0 + 43) as &i8) {
                v17 = v30;
                v19 = v33;
                print!("{} {}{}\x00", &v14, &v23, &v17);
                v7 = v8;
                v0 = v2;
                v11 = v10;
                v13 = v12;
                v4 = v3;
                v5 = v6;
            } else {
                println!("{}{} {}{}", &v26, &v14, &v23, &v20 as u8);
                v7 = v8;
                v0 = v2;
                v11 = v10;
                v13 = v12;
                v4 = v3;
                v5 = v6;
            }
        }
        v9 = v7;
        v30 = <core::iter::sources::once::Once<T> as core::iter::traits::iterator::Iterator>::next(&v25 as u64) as u64;
    } while (v29);
    return 0;
}
