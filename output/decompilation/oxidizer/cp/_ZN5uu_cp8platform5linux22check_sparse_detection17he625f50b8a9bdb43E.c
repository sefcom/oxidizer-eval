fn uu_cp::platform::linux::check_sparse_detection(a1: i64, a2: i32) -> : struct9 {
    let a0: i64;  // rdi
    let v0: std::fs::File;  // [bp-0xc4]
    let v1: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0], Other Possible Types: u32
    let v2: u32;  // [bp-0xbc]
    let v3: i8;  // [bp-0xb8]
    let v5: u32;  // ecx

    std::fs::File::open(a1, a2, v5);
    if v1 {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: *(&v3 as &i64)
        };
    }
    v0 = std::fs::File {
        inner: std::sys::pal::unix::fs::File {
            __0: std::sys::pal::unix::fd::FileDesc {
                __0: std::os::fd::owned::OwnedFd {
                    fd: v2
                }
            }
        }
    };
    v1 = std::fs::File::metadata(&v0);
    if v1 as i32 == 2 {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: *((&v1 as &char + 8) as &i64)
        };
    } else if *((&v1 as &char + 96) as &i64) < *((&v1 as &char + 80) as &i64) >> 9 {
        return struct2 {
            field_0: 0
            field_1: 1
        };
    } else {
        return struct2 {
            field_0: 0
        };
    }
}
