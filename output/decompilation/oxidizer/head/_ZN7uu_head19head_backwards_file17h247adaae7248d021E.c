fn uu_head::head_backwards_file(a0: i64, a1: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v1: u64;  // [bp-0x80]
    let v3: u64;  // r12
    let v4: core::result::Result<u64, std::io::error::Error>;  // al
    let v5: std::io::stdio::StderrLock;  // r12
    let v7: u64;  // rcx

    v0 = std::fs::File::metadata(a0);
    match v0 {
        Err(_) => {
            return *((&v0 as &char + 8) as &i64);
        },
        Ok(_) => {
            v3 = *((&v0 as &char + 88) as &i64);
            v4 = uu_head::is_seekable(a0) as i8;
            if v3 < 536870913 {
                v5 = v3;
            } else {
                v5 = 0x200;
            }
            v7 = v5;
            if !(v4 && v1 > v7) {
                return uu_head::head_backwards_without_seek_file(a0, a1);
            }
            return uu_head::head_backwards_on_seekable_file(a0, a1);
            return uu_head::head_backwards_without_seek_file(a0, a1);
        },
    }
}
