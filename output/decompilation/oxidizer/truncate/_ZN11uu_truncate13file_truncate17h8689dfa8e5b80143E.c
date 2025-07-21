fn uu_truncate::file_truncate(a0: i64, a1: i64, a2: i8, a3: i64) -> long long {
    let v0: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x148], Other Possible Types: struct28
    let v1: std::fs::File;  // [bp-0x144]
    let v2: core::result::Result<(), std::io::error::Error>;  // [bp-0x140]
    let v3: void*;  // [bp-0x118], Other Possible Types: std::fs::File
    let v4: u64;  // [bp-0x118]
    let v5: u64;  // [bp-0x110]
    let v6: u64;  // [bp-0x108]
    let v7: u8;  // [bp-0x100]
    let v8: alloc::string::String;  // [bp-0xe8]
    let v9: core::fmt::Arguments;  // [bp-0xd8]
    let v10: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v11: core::fmt::Arguments;  // [bp-0xd0]
    let v12: u32;  // [bp-0xc8]
    let v13: u8;  // [bp-0xc7]
    let v14: core::fmt::rt::Argument;  // [bp-0xc4]

    v10 = std::fs::metadata(a0, a1);
    if let Ok(_) = v10 {
        if (0xf000 & *((&v10 as &char + 56) as &i32)) == 0x1000 {
            v3 = 0;
            v5 = a0;
            v6 = a1;
            v7 = 1;
            v8 = format!("cannot open {} for writing: No such device or address", &v3);
            v0 = struct28 {
                field_0: *(&v8.vec.buf.cap as &i128)
                field_16: v9
                field_24: 1
            };
            return alloc::boxed::Box<T>::new(&v0);
        }
    }
    v11 = 0x1b600000000;
    v12 = 0;
    v14 = 0;
    v13 = 1;
    v0 = std::fs::OpenOptions::open(&v11, a0, a1);
    if let Ok(v3) = v0 {
        v3 = std::fs::File {
            inner: std::sys::pal::unix::fs::File {
                __0: std::sys::pal::unix::fd::FileDesc {
                    __0: std::os::fd::owned::OwnedFd {
                        fd: v4 & -0x100000000 | v3 as u64
                    }
                }
            }
        };
        v2 = std::fs::File::set_len(&v3, a3);
    }
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v2, a0, a1);
}
