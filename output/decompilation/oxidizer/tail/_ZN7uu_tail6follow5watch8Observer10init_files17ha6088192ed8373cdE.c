fn uu_tail::follow::watch::Observer::init_files(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u192;  // [bp-0xb8]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa8]
    let v3: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x98], Other Possible Types: struct24
    let v4: u128;  // [bp-0x98]
    let v5: u64;  // [bp-0x90]
    let v6: std::sys::os_str::bytes::Buf;  // [bp-0x88], Other Possible Types: u64
    let v7: std::sys::os_str::bytes::Buf;  // [bp-0x88]
    let v8: std::sys::os_str::bytes::Buf;  // [bp-0x88]
    let v9: struct28;  // [bp-0x78]
    let v10: u64;  // [bp-0x70]
    let v11: u64;  // [bp-0x68]
    let v12: std::sys::os_str::bytes::Buf;  // [bp-0x60]
    let v13: core::fmt::rt::Argument;  // [bp-0x58]
    let v14: struct28;  // [bp-0x50]
    let v15: std::path::PathBuf;  // [bp-0x48]
    let v17: i64;  // rax
    let v18: u64;  // r8
    let v19: std::sys::os_str::bytes::Buf;  // rbx

    if *(a0 as &i32) == 3 {
        return 0;
    }
    v13 = a1;
    v14 = a2 * 48 + a1;
    v9 = a0 + 32;
    loop {
        v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v13);
        if !v17 {
            break;
        }
        if *((v17 + 24) as &i64) == 0x8000000000000000 {
            continue;
        }
        v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v17 + 24);
        v2 = v8;
        v0 = *(&v3.field_0 as &i128);
        v6 = v8;
        if !std::path::Path::is_absolute(v1, v6) {
            v4 = std::env::current_dir();
            match v4 as u192 {
                Err(_) => {
                    v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
                    return v19;
                },
                Ok(_) => {
                    v10 = v3 as i64;
                    v11 = v5;
                    v12 = v8;
                    v6 = v2;
                    v4 = v0;
                    v15 = std::path::Path::join(v11, v8, &v4 as u192, v18);
                    v0 = *(&v15.inner.inner.inner.buf.cap as &i128) as u128;
                    v2 = v15.inner.inner.inner.len;
                },
            }
        }
        if <std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(v1, v2) as i8 {
            v19 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a0 + 16) as &i64), *((a0 + 24) as &i64), v1, v2);
            if !v19 {
                goto LABEL_505bcc;
            }
            break;
        }
        if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v1, v2) {
            v3 = v0;
            alloc::vec::Vec<T,A>::push(v9, &v3);
            v8 = v7;
            continue;
        }
        if !std::path::Path::parent(v1, v2) as u64 {
            core::option::unwrap_failed(); /* do not return */
        }
        v19 = uu_tail::follow::watch::WatcherRx::watch(*((a0 + 16) as &i64), *((a0 + 24) as &i64));
        if !(!v19) {
            break;
        }
LABEL_505bcc:
        v8 = v6;
    }
    return 0;
}
