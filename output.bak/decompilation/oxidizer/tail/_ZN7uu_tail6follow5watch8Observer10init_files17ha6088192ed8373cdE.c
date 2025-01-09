fn uu_tail::follow::watch::Observer::init_files(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0xb8]
    let v1: i64;  // [sp-0xa8]
    let v2: i128;  // [sp-0x98], Other Possible Types: struct24, Result<struct24, struct8>
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x78]
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: struct24;  // [sp-0x48], Other Possible Types: i192
    let v12: i256;  // ymm0
    let v13: struct8;  // rax
    let v14: i128;  // xmm0
    let v17: i128;  // xmm0
    let v18: i64;  // rdx
    let v19: i64;  // rcx
    let v20: i64;  // rax

    if *(a0 as &i32) == 3 {
        return 0;
    }
    v8 = a1;
    v9 = a2 * 48 + a1;
    v4 = a0 + 32;
    loop {
        v2 = v2;
        v3 = v3;
        v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v13 {
            break;
        }
        if *((v13 + 24) as &i64) == 0x8000000000000000 {
            continue;
        }
        v2 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v13 + 24);
        v1 = v3;
        v14 = v2;
        v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14;
        v0 = v14;
        v3 = v3;
        v2 = v2;
        if !std::path::Path::is_absolute(*((&v0 as &char + 8) as &i64), v3) as i8 {
            v2 = std::env::current_dir();
            match v2 {
                Err(_) => {
                    v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
                    return v20;
                },
                Ok(_) => {
                    v5 = v2;
                    v6 = *((&v2 as &char + 8) as &i64);
                    v7 = v3;
                    *(&v2.field_0 as &struct24) = struct24 {
                        field_0: v12 as u128
                        field_16: v1
                    };
                    v10 = std::path::Path::join(v6, v7, &v2);
                    v17 = v10;
                    v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 as u128 as u256;
                    v0 = v17;
                    v1 = *((&v10 as &char + 16) as &i64);
                    v3 = v3;
                    v2 = v2;
                },
            }
        }
        v2 = v2;
        v3 = v3;
        v18 = *((&v0 as &char + 8) as &i64);
        v19 = v1;
        if <std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(*((&v0 as &char + 8) as &i64), v1) as i8 {
            v20 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a0 + 16) as &i64), *((a0 + 24) as &i64), v18, v19);
            if v20 {
                return v20;
            }
        } else if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v18, v19) {
            v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
            *(&v2.field_0 as &struct24) = struct24 {
                field_0: v12 as u128
                field_16: v1
            };
            alloc::vec::Vec<T,A>::push(v4, &v2);
            v3 = v3;
            v2 = v2;
            continue;
        } else if !std::path::Path::parent(*((&v0 as &char + 8) as &i64), v1) {
            core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
        } else {
            v20 = uu_tail::follow::watch::WatcherRx::watch(*((a0 + 16) as &i64), *((a0 + 24) as &i64));
            if v20 {
                return v20;
            }
        }
        v3 = v3;
        v2 = v2;
    }
}
