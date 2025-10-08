fn uu_install::preserve_timestamps(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v1: u64;  // [bp-0x118]
    let v2: struct16;  // [bp-0x100], Other Possible Types: u64
    let v3: u64;  // [bp-0xf8]
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc0]
    let v5: u64;  // [bp-0xb8]
    let v6: u64;  // [bp-0x58]
    let v7: u64;  // [bp-0x48]
    let v9: u64;  // rdx

    v4 = std::fs::metadata(a0, a1);
    match v4 {
        Err(_) => {
            v2 = struct16 {
                field_0: 10
                field_8: v5
            };
            return alloc::boxed::Box<T>::new(&v2) as u64;
        },
        Ok(_) => {
            v1 = filetime::set_file_times(a2, a3, v6, *((&v4 as &char + 112) as &i32) as u32 as u64, v7, v7 as i32 as u32 as u64);
            if !v1 {
                return 0;
            }
            v2 = uucore::util_name();
            v3 = v9;
            eprint!("{}: ", &v2);
            eprintln!("{}", &v0);
            return 0;
        },
    }
}
