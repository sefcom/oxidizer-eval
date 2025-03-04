fn uu_cp::platform::linux::copy_fifo_contents(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct4;  // [bp-0xf8]
    let v1: i32;  // [sp-0xf4]
    let v2: Result<struct4, struct8>;  // [sp-0xf0]
    let v3: struct32;  // [bp-0xe0]
    let v4: i32;  // [sp-0xc0], Other Possible Types: struct16, Result<struct4, struct8>, struct13
    let v6: i8;  // [sp-0xb7]
    let v7: i16;  // [bp-0xb4]
    let v8: i8;  // [bp-0x88]

    v3 = struct32 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
    };
    v4 = std::fs::File::open(&v3);
    if v4 {
        return 1;
    }
    v0 = struct4 {
        field_0: v5
    };
    v4 = struct13 {
        field_0: 0
        field_4: ~(uucore::features::mode::get_umask() as i32) & 402
        field_8: 0
        field_12: 1
    };
    *(&v7 as &i16) = 0;
    v6 = 1;
    v2 = std::fs::OpenOptions::open(&v4, &v3);
    if !(!v2 as i32 && !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v0, &v1)) {
        return 1;
    }
    v4 = std::fs::File::metadata(&v0);
    if v4 != 2 && !std::fs::File::set_permissions(&v1, *(&v8 as &i32)) {
        return 0;
    }
}
