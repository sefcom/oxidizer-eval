fn uu_wc::count_fast::count_bytes_fast(a0: u32) -> u64 {
    let v0: Option<struct4>;  // [sp-0x4028], Other Possible Types: u64
    let v1: u8;  // [bp-0x4007]
    let v2: void*;  // [sp-0x3028]
    let v3: void*;  // [sp-0x2028]
    let v4: void*;  // [sp-0x1028]
    let v6: void*;  // rbx
    let v7: u32;  // rdx
    let v8: u64;  // rbx

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v6 = 0;
    v0 = nix::sys::stat::fstat(None);
    match v0 {
        Some(_) => {
LABEL_4b862e:
            memset(&v0, 0, 0x4000);
            do {
                v8 = v6;
                while (<std::io::stdio::StdinLock as std::io::Read>::read(a0)) {
                    if std::io::error::Error::kind(v7) as i8 != 35 {
                        return v8;
                    }
                }
                v6 = v8 + v7;
            } while (v7);
        },
        None => {
            if !(v1 & 16) {
                v6 = 0;
                goto LABEL_4b862e;
            }
            v6 = v7;
            if !(!uu_wc::count_fast::count_bytes_using_splice(a0)) {
                goto LABEL_4b862e;
            }
        },
    }
    return v8;
}
