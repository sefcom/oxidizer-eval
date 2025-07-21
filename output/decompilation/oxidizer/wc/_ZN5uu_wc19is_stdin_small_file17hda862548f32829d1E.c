fn uu_wc::is_stdin_small_file() -> long long {
    let v0: std::fs::File;  // [bp-0xbc]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb8]
    let v3: u32;  // ebx

    std::io::stdio::stdin();
    v0 = std::fs::File {
        inner: std::sys::pal::unix::fs::File {
            __0: std::sys::pal::unix::fd::FileDesc {
                __0: std::os::fd::owned::OwnedFd {
                    fd: 0
                }
            }
        }
    };
    v1 = std::fs::File::metadata(&v0);
    return (v1 as i64 == 2 ? 0 : v3 & -0x100 | *((&v1 as &char + 80) as &i64) < 10485761 & (0xf000 & *((&v1 as &char + 56) as &i32)) == 0x8000);
}
