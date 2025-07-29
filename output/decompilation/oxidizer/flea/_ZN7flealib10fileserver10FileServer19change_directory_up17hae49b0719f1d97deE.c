fn flealib::fileserver::FileServer::change_directory_up(a1: &struct24) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x28]
    let v1: struct24;  // [bp-0x28]
    let v2: void*;  // [bp-0x20]
    let v4: core::option::Option<&std::path::Path>;  // rax
    let v5: u64;  // rdx

    v4 = std::path::Path::parent(*((a1 + 8) as &i64), *((a1 + 16) as &i64)) as u64;
    match v4 {
        None => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "Already at root");
            return;
        },
        Some(_) => {
            v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v4, v5);
            match v0 {
                Err(_) => {
                    core::option::unwrap_failed(); /* do not return */
                },
                Ok(_) => {
                    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v2, *((&v0 as &char + 16) as &i64));
                    *((a1 + 16) as &u64) = v1.field_16;
                    *(a1 as &i128) = *(&v1.field_0 as &i128);
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
            }
        },
    }
}
