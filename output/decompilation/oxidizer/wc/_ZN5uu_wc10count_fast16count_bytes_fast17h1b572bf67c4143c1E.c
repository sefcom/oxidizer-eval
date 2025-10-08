fn uu_wc::count_fast::count_bytes_fast(a0: u64) -> long long {
    let v0: u64;  // [bp-0x4038]
    let v1: void*;  // [bp-0x4030], Other Possible Types: struct8
    let v2: u8;  // [bp-0x400f]
    let v3: void*;  // [bp-0x3030]
    let v4: void*;  // [bp-0x2030]
    let v5: void*;  // [bp-0x1030]
    let v7: u64;  // rax
    let v8: void*;  // rbx
    let v9: void*;  // rdx
    let v10: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v5 = 0;
    v4 = 0;
    v3 = 0;
    v1 = 0;
    v0 = v7;
    v1 = nix::sys::stat::fstat(None);
    if !(v1.field_0 as i8 & 1) && (v2 & 16) {
        v8 = v9;
        if !(uu_wc::count_fast::count_bytes_using_splice() & 1) {
            return v8;
        }
    }
    memset(&v1, 0, 0x4000);
    loop {
        v10 = <std::io::stdio::StdinLock as std::io::Read>::read(a0, &v1, 0x4000);
        if !(v10 as i64 & 1) {
            if !*((&v10 as &char + 8) as &i64) {
                return v8;
            }
        } else {
            if std::io::error::Error::kind(*((&v10 as &char + 8) as &i64)) as u8 != 35 {
                return v8;
            }
        }
    }
}
