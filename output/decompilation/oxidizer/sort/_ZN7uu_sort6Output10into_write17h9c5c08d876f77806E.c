fn uu_sort::Output::into_write(a0: i64, a1: i64) -> long long {
    let v0: u32;  // [bp-0x34]
    let v1: core::result::Result<(), std::io::error::Error>;  // [bp-0x30]
    let v2: u128;  // [bp-0x28]
    let v3: u64;  // [bp-0x18]
    let v6: u64;  // 4096

    if *(a1 as &i64) == 0x8000000000000000 {
        alloc::boxed::Box<T>::new(std::io::stdio::stdout());
        v6 = a0;
    } else {
        v3 = *((a1 + 16) as &i64);
        v2 = *(a1 as &i128);
        v0 = std::fs::File {
            inner: std::sys::pal::unix::fs::File {
                __0: std::sys::pal::unix::fd::FileDesc {
                    __0: std::os::fd::owned::OwnedFd {
                        fd: *((a1 + 24) as &i32)
                    }
                }
            }
        };
        v1 = std::fs::File::set_len(&v0, 0);
        alloc::boxed::Box<T>::new(v0);
        v6 = a0;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v6, 0x2000);
    return a0;
}
