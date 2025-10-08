fn uu_cp::copydir::build_dir(a1: i64, a2: i8, a3: i8, a4: i8, a5: i64, a6: i64) -> Option<struct8> {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0xd8]
    let v1: u8;  // [bp-0xd4]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd0]
    let v3: u32;  // edx
    let v4: u32;  // eax
    let v5: u64;  // rax

    v1 = a2;
    v3 = (!(a4 & 1) ? 0 : 18);
    if (a5 & a4 & 1) == 1 {
        v2 = std::fs::symlink_metadata(a5, a6);
        if let Err(_) = v2 {
            return Some(*((&v2 as &char + 8) as &i64));
        }
    } else {
        v4 = uucore::features::mode::get_umask();
    }
    v0 = (v4 & 511 | v3) ^ 511;
    v5 = std::fs::DirBuilder::create(&v0, a1);
    if !v5 {
        return struct8 {
            field_0: 9223372036854775820
        };
    }
    return Some(v5);
}
