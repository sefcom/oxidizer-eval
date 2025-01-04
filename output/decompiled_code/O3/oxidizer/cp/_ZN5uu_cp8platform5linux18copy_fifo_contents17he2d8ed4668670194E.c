fn uu_cp::platform::linux::copy_fifo_contents(a0: u64, a1: u64, a2: u32, a3: u64) -> u64 {
    let v0: struct4;  // [bp-0xf8]
    let v1: u32;  // [bp-0xf4]
    let v2: u64;  // [sp-0xf0], Other Possible Types: Result<struct4, struct8>
    let v3: struct32;  // [bp-0xe0]
    let v4: u32;  // [sp-0xc0], Other Possible Types: struct16, Result<struct4, struct8>
    let v5: u32;  // [sp-0xbc]
    let v6: u32;  // [bp-0xb8]
    let v7: u8;  // [sp-0xb7]
    let v8: u16;  // [bp-0xb4]
    let v9: u8;  // [bp-0x88]

    v3 = struct32 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
    };
    v4 = std::fs::File::open(&v3, a2);
    if v4 {
        return 1;
    }
    v0 = struct4 {
        field_0: v5
    };
    v4 = 0;
    v8 = 0;
    v6 = 0;
    v8 = 1;
    v7 = 1;
    v5 = ~(uucore::features::mode::get_umask() as i32) & 402;
    v2 = std::fs::OpenOptions::open(&v4, &v3);
    if v2 as i32 {
        return 1;
    }
    v1 = *((&v2 as &char + 4) as &i32);
    if !<std::sys::pal::unix::kernel_copy::Copier<R,W> as std::sys::pal::unix::kernel_copy::SpecCopy>::copy(&v0, &v1) {
        v4 = std::fs::File::metadata(&v0);
        if v4 != 2 && !std::fs::File::set_permissions(&v1, *(&v9 as &i32)) {
            return 0;
        }
    }
}
