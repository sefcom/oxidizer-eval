fn uu_tail::follow::watch::Observer::init_files(a0: i64, a1: i192, a2: i64) -> u64 {
    let v0: void*;  // [bp-0x80], Other Possible Types: core::fmt::Arguments
    let v1: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x78], Other Possible Types: core::fmt::rt::Argument, struct24
    let v2: core::fmt::rt::Argument;  // [bp-0x78]
    let v3: core::fmt::rt::Argument;  // [bp-0x78]
    let v4: core::fmt::Arguments;  // [bp-0x70], Other Possible Types: core::fmt::rt::Argument, unsigned long
    let v5: core::fmt::Arguments;  // [bp-0x70], Other Possible Types: core::fmt::rt::Argument
    let v6: core::fmt::rt::Argument;  // [bp-0x70]
    let v7: alloc::string::String;  // [bp-0x68], Other Possible Types: struct8192, unsigned long
    let v8: alloc::string::String;  // [bp-0x68], Other Possible Types: u64
    let v9: u64;  // [bp-0x68]
    let v10: u64;  // [bp-0x60]
    let v11: u64;  // [bp-0x58]
    let v12: struct24;  // [bp-0x48]
    let v13: i64;  // [bp-0x48]
    let v14: i64;  // [bp-0x48]
    let v15: core::fmt::rt::Argument;  // [bp-0x40]
    let v17: u64;  // r13
    let v18: core::fmt::Arguments;  // rax
    let v19: i64;  // rsi
    let v20: core::fmt::Arguments;  // r15
    let v21: u64;  // rbp
    let v22: core::fmt::rt::Argument;  // r12
    let v23: u64;  // r14
    let v24: struct24;  // rbp
    let v26: core::fmt::Arguments;  // rax
    let v28: core::fmt::Arguments;  // r15

    if *(a0 as &i32) == 3 || !a2 {
        return 0;
    }
    v17 = a2 * 48 + a1;
    v18 = a1 + 48;
    v11 = a0 + 32;
    v0 = 0;
    v10 = &g_572f18;
    loop {
        v19 = a1;
        v20 = v18;
        v14 = v13;
        v1 = v3;
        v4 = v6;
        v7 = v9;
        if *((v19 + 24) as &i64) != 0x8000000000000000 {
            v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v19 + 32) as &i64), *((v19 + 40) as &i64));
            v21 = v1.field_0;
            v22 = v6;
            v23 = v9;
            v1 = v3;
            v4 = v6;
            v7 = v9;
            v14 = v13;
            v24 = v21;
            if !std::path::Path::is_absolute(v22, v23) {
                v1 = std::env::current_dir();
                match v1 {
                    Ok(_) => {
                        v1 = struct24 {
                            field_0: v21
                            field_8: v22
                            field_16: v23
                        };
                        v12 = std::path::Path::join(v6, v9, &v1);
                        v22 = v15;
                        v23 = v12.field_16;
                        v1 = v2;
                        v4 = v5;
                        v7 = v8;
                        v14 = v13;
                        v24 = v13;
                    },
                    Err(_) => {
                        v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
                    },
                }
            }
            v7 = v7;
            v4 = v4;
            v1 = v1;
            if <std::path::Path as uu_tail::paths::PathExtTail>::is_tailable(v22, v23) {
                v26 = uu_tail::follow::watch::WatcherRx::watch_with_parent(*((a0 + 16) as &i64), *((a0 + 24) as &i64), v22 as u32, v23);
                v1 = v1;
                v4 = v4;
                v7 = v7;
                if v26 {
                    break;
                }
            } else if <std::path::Path as uu_tail::paths::PathExtTail>::is_orphan(v22, v23) {
                v1 = struct24 {
                    field_0: v24
                    field_8: v22
                    field_16: v23
                };
                alloc::vec::Vec<T,A>::push(v11, &v1, "src/uu/tail/src/follow/watch.rs");
                v1 = v2;
                v4 = v5;
                v7 = v8;
            } else {
                if !std::path::Path::parent(v22, v23) {
                    core::option::unwrap_failed(); /* do not return */
                }
                v26 = uu_tail::follow::watch::WatcherRx::watch(*((a0 + 16) as &i64), *((a0 + 24) as &i64));
                v1 = v1;
                v4 = v4;
                v7 = v7;
                if v26 {
                    break;
                }
            }
        }
        v9 = v7;
        v6 = v4;
        v3 = v1;
        v13 = v14;
        v28 = v20 + 48;
        if v20 == v17 {
            return v0;
        }
        v18 = v28;
        a1 = v20;
        if !a1 {
            return v0;
        }
    }
    v0 = v26;
    return v0;
    return 0;
}
