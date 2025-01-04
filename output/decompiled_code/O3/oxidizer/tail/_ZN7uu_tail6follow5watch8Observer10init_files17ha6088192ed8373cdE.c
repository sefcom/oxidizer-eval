fn uu_tail::follow::watch::Observer::init_files(a0: void*, a1: u32) -> u64 {
    let v0: i128;  // [sp-0xb8]
    let v1: i64;  // [sp-0xa8]
    let v2: i192;  // [sp-0x98], Other Possible Types: Result<struct24, struct16>, struct24
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x78]
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: i192;  // [sp-0x48], Other Possible Types: struct24
    let v12: i64;  // rdx
    let v13: i256;  // ymm0
    let v14: struct8;  // rax
    let v15: i128;  // xmm0
    let v18: i128;  // xmm0
    let v19: i128;  // xmm0
    let v20: i64;  // rdx
    let v21: i64;  // rcx
    let v22: i64;  // rax
    let v23: i128;  // xmm0
    let v24: i64;  // rcx

    if *(a0 as &i32) == 3 {
        return 0;
    }
    v8 = a1;
    v9 = v12 * 48 + a1;
    v4 = a0 + 32;
    loop {
        v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v14 {
            break;
        }
        if *((v14 + 24) as &i64) == 0x8000000000000000 {
            continue;
        }
        v2 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v14 + 24);
        v1 = v3;
        v15 = v2;
        v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
        v0 = v15;
        if !std::path::Path::is_absolute(*((&v0 as &char + 8) as &i64), v3) as i8 {
            v2 = std::env::current_dir();
            match v2 {
                Err(_) => {
                    v22 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
                    return v22;
                },
                Ok(_) => {
                    v5 = v2;
                    v6 = *((&v2 as &char + 8) as &i64);
                    v7 = v3;
                    v3 = v1;
                    v18 = v0;
                    v2 = v18;
                    v10 = std::path::Path::join(v6, v7, &v2);
                    v19 = v10;
                    v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u128 as u256;
                    v0 = v19;
                    v1 = *((&v10 as &char + 16) as &i64);
                },
            }
        }
        v20 = *((&v0 as &char + 8) as &i64);
        v21 = v1;
        if <std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(*((&v0 as &char + 8) as &i64), v1) as i8 {
            v22 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a0 + 16) as &i64), *((a0 + 24) as &i64), v20, v21);
            if v22 {
                return v22;
            }
        } else if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v20, v21, v20) as i8 {
            v3 = v1;
            v23 = v0;
            v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
            v2 = v23;
            alloc::vec::Vec<T,A>::push(v4, &v2);
            continue;
        } else if !std::path::Path::parent(*((&v0 as &char + 8) as &i64), v1, v12, v24) {
            core::option::unwrap_failed(); /* do not return */
        } else {
            v22 = uu_tail::follow::watch::WatcherRx::watch(*((a0 + 16) as &i64), *((a0 + 24) as &i64));
            if v22 {
                return v22;
            }
        }
    }
}
