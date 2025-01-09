fn uu_split::platform::unix::instantiate_current_writer(a0: &Result<struct41, struct8>, a1: void*, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: i96;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>
    let v1: i288;  // [sp-0x60], Other Possible Types: struct36
    let v2: i32;  // [bp-0x58]
    let v3: i8;  // [sp-0x57]
    let v4: i8;  // [sp-0x56]
    let v5: i8;  // [sp-0x55]
    let v6: i8;  // [bp-0x54]
    let v7: i64;  // [sp-0x40]
    let v8: i64;  // [sp-0x38]
    let v9: i224;  // [sp-0x2c]
    let v11: i64;  // rcx
    let v13: i64;  // rax
    let v14: i64;  // rcx

    v11 = a2;
    v7 = a2;
    v8 = a3;
    if *(a1 as &i64) != 0x8000000000000000 {
        v1 = uu_split::platform::unix::FilterWriter::new(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v11, a3);
        if !v1 {
            v0 = *((&v1 as &char + 16) as &i128);
            v9 = *((&v1 as &char + 4) as &i224);
            v13 = alloc::boxed::Box<T>::new(&v9);
            v14 = &g_548dd0;
        }
    } else {
        if !a4 {
            v1 = 0x1b600000000;
            v2 = 0;
            v6 = 0;
            v4 = 1;
            v0 = std::fs::OpenOptions::open(&v1, v11, a3);
            if v0 {
                uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v7, v0);
            }
        } else {
            v1 = 0x1b600000000;
            v2 = 0;
            v6 = 0;
            v3 = 1;
            v6 = 1;
            v5 = 1;
            v0 = std::fs::OpenOptions::open(&v1, v11, a3);
            if v0 {
                uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v7, v0);
                return Err(struct8 {
                    field_0: v12
                });
            }
        }
        v13 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32));
        v14 = &g_548d80;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, 0x2000, v13, v14);
}
