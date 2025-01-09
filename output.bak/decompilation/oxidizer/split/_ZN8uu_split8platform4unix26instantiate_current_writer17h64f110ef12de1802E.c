fn uu_split::platform::unix::instantiate_current_writer(a0: &Result<struct41, struct8>, a1: void*, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: u64;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>
    let v1: u8;  // [bp-0x70]
    let v2: u64;  // [sp-0x60], Other Possible Types: Result<struct32, struct8>
    let v3: u32;  // [bp-0x58]
    let v4: u8;  // [sp-0x57]
    let v5: u8;  // [sp-0x56]
    let v6: u8;  // [sp-0x55]
    let v7: u16;  // [bp-0x54]
    let v8: u64;  // [sp-0x40]
    let v9: u64;  // [sp-0x38]
    let v10: struct28;  // [bp-0x2c]
    let v12: u64;  // rcx
    let v14: u64;  // rax
    let v15: u64;  // rcx

    v12 = a2;
    v8 = a2;
    v9 = a3;
    if *(a1) != 0x8000000000000000 {
        v2 = uu_split::platform::unix::FilterWriter::new(a1[1], a1[2], v12, a3) as u256;
        if !v2 as i32 {
            v0 = *((&v2 as &char + 16) as &i128);
            v10 = struct28 {
                field_0: *((&v2 as &char + 4) as &i32)
                field_4: *((&v2 as &char + 8) as &i64)
                field_12: v0
            };
            v14 = alloc::boxed::Box<T>::new(&v10);
            v15 = &g_548dd0;
        }
    } else {
        if !a4 {
            v2 = 0x1b600000000;
            v3 = 0;
            v7 = 0;
            v5 = 1;
            v0 = std::fs::OpenOptions::open(&v2, v12, a3) as u64;
            if v0 as i32 {
                uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, *(&v1 as &i64));
            }
        } else {
            v2 = 0x1b600000000;
            v3 = 0;
            v7 = 0;
            v4 = 1;
            v7 = 1;
            v6 = 1;
            v0 = std::fs::OpenOptions::open(&v2, v12, a3) as u64;
            if v0 as i32 {
                uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, *(&v1 as &i64));
                return Err(struct8 {
                    field_0: v13
                });
            }
        }
        v14 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32));
        v15 = &g_548d80;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, 0x2000, v14, v15);
}
