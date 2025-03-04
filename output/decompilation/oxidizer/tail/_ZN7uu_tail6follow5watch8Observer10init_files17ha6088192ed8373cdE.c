fn uu_tail::follow::watch::Observer::init_files(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: iNone;  // [sp-0xb8]
    let v1: i64;  // [sp-0xa8]
    let v2: struct24;  // [sp-0x98], Other Possible Types: Result<struct24, struct8>, int
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x78]
    let v5: i64;  // [sp-0x70]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i64;  // [sp-0x50]
    let v10: struct24;  // [sp-0x48]
    let v12: iNone;  // ymm0
    let v13: struct8;  // rax
    let v14: iNone;  // xmm0
    let v16: iNone;  // ymm0
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v22: i64;  // rbx

    if *(a0 as &i32) == 3 {
        return 0;
    }
    v8 = a1;
    v9 = a2 * 48 + a1;
    v4 = a0 + 32;
    loop {
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
        v0 = v14;
        v1 = v1;
        v0 = v0;
        v16 = v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 as u256;
        if !std::path::Path::is_absolute((&v0)[8] as i64, v3) as i8 {
            v2 = std::env::current_dir();
            match v2 {
                Ok(_) => {
                    v5 = v2 as i64;
                    v6 = *((&v2 as &char + 8) as &i64);
                    v7 = v3;
                    v3 = v1;
                    v2 = v0;
                    v10 = std::path::Path::join(v6, v7, &v2);
                    v1 = v1;
                    v0 = v0;
                },
                Err(_) => {
                    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
LABEL_505bdd:
                    goto LABEL_505bed;
                },
            }
        }
        v12 = v16;
        v0 = v0;
        v1 = v1;
        v19 = (&v0)[8] as i64;
        v20 = v1;
        if <std::path::Path as uu_tail::paths::PathExtTail>::is_tailable((&v0)[8] as i64, v1) as i8 {
            if !uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a0 + 16) as &i64), *((a0 + 24) as &i64), v19, v20) {
                goto LABEL_505bcc;
            }
            goto LABEL_505bdd;
        } else {
            if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v19, v20) {
                v12 = v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0 as u256;
                *(&v2.field_0 as &struct24) = struct24 {
                    field_0: v21
                    field_16: v1
                };
                alloc::vec::Vec<T,A>::push(v4, &v2);
                continue;
            }
            if !std::path::Path::parent((&v0)[8] as i64, v1) {
                core::option::unwrap_failed("src/uu/tail/src/follow/watch.rs"); /* do not return */
            }
            if uu_tail::follow::watch::WatcherRx::watch(*((a0 + 16) as &i64), *((a0 + 24) as &i64)) {
LABEL_505bed:
                return v22;
            }
LABEL_505bcc:
        }
    }
}
