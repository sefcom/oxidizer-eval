fn uu_tail::follow::watch::Observer::add_path(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32) -> u64 {
    let v0: struct24;  // [sp-0x280], Other Possible Types: int
    let v1: Result<struct24, struct8>;  // [sp-0x260], Other Possible Types: struct216
    let v2: i64;  // [sp-0x188]
    let v3: i64;  // [sp-0x180]
    let v4: i64;  // [sp-0x178]
    let v5: i8;  // [bp-0xd8]
    let v6: i8;  // [bp+0x10]
    let v10: i64;  // rbp
    let v11: i64;  // r14
    let v12: i64;  // r12

    if *((a0 + 142) as &i8) == 2 {
        return 0;
    }
    if std::path::Path::is_absolute(a1, a2) as i8 {
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
    } else {
        v1 = std::env::current_dir();
        match v1 {
            Err(_) => {
                return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
            },
            Ok(_) => {
                v2 = v1 as i64;
                v3 = *((&v1 as &char + 8) as &i64);
                v4 = *((&v1 as &char + 16) as &i64);
                v0 = std::path::Path::join(v3, v4, a1, a2);
            },
        }
    }
    v10 = (&v0)[8] as i64;
    v11 = (&v0)[16] as i64;
    v1 = std::fs::metadata(v10, v11);
    v12 = v1 as i64;
    match v1 {
        Ok(_) => {
            memcpy(&v5, &v1, 168);
        },
        Err(_) => {
            v10 = (&v0)[8] as i64;
            v11 = (&v0)[16] as i64;
        },
    }
    v2 = v12;
    memcpy(&v3, &v5, 168);
    v1 = uu_tail::follow::files::PathData::new(a5, a6, &v2, a3, a4);
    uu_tail::follow::files::FileHandling::insert(a0 + 56, v10, v11, &v1, v6);
}
