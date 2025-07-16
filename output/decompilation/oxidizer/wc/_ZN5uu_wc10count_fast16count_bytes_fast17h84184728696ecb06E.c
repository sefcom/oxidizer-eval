fn uu_wc::count_fast::count_bytes_fast(a0: i64) -> long long {
    let v0: u8;  // [bp-0x4028]
    let v1: u8;  // [bp-0x4007]
    let v2: void*;  // [bp-0x3028]
    let v3: void*;  // [bp-0x2028]
    let v4: void*;  // [bp-0x1028]
    let v6: void*;  // rbx
    let v7: u32;  // edx
    let v8: u64;  // rdx
    let v10: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v6 = 0;
    nix::sys::stat::fstat(None, v7);
    if *(&v0 as &i32) || !(v1 & 16) || uu_wc::count_fast::count_bytes_using_splice(a0) {
        memset(&v0, 0, 0x4000);
        loop {
            v10 = <std::io::stdio::StdinLock as std::io::Read>::read(a0, &v0, 0x4000);
            if !v10 as i64 {
                v6 += *((&v10 as &char + 8) as &i64);
                if !*((&v10 as &char + 8) as &i64) {
                    break;
                }
            } else if std::io::error::Error::kind(*((&v10 as &char + 8) as &i64)) != 35 {
                return v6;
            }
        }
    }
    return v8;
}
