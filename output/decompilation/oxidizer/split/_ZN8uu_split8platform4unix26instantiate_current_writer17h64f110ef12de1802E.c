fn uu_split::platform::unix::instantiate_current_writer(a0: &Result<struct41, struct8>, a1: void*, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x78], Other Possible Types: int
    let v1: iNone;  // [sp-0x78]
    let v2: i64;  // [sp-0x60], Other Possible Types: struct36
    let v3: i32;  // [bp-0x58]
    let v4: i8;  // [sp-0x57]
    let v5: i8;  // [sp-0x56]
    let v6: i8;  // [sp-0x55]
    let v7: i16;  // [bp-0x54], Other Possible Types: char
    let v8: i64;  // [sp-0x40]
    let v9: i64;  // [sp-0x38]
    let v10: iNone;  // [sp-0x2c]
    let v13: i64;  // rax

    v8 = a2;
    v9 = a3;
    if *(a1 as &i64) != 0x8000000000000000 {
        v2 = uu_split::platform::unix::FilterWriter::new(*((a1 + 8) as &i64), *((a1 + 16) as &i64), a2, a3);
        if v2.field_0 {
            return Err(struct8 {
                field_0: v12
            });
        }
        v1 = *((&v2.field_4 as &char + 12) as &i128);
        v10 = *(&v2.field_4 as &i224);
        v13 = alloc::boxed::Box<T>::new(&v10);
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, 0x2000, v13, &g_548dd0);
    } else {
        if !a4 {
            v2 = 0x1b600000000;
            *(&v3 as &i32) = 0;
            *(&v7 as &i16) = 0;
            v5 = 1;
            v0 = std::fs::OpenOptions::open(&v2, a2, a3);
            match v0 {
                Ok(_) => {
                    alloc::boxed::Box<T>::new((&v0)[4] as i32 as u32 as u64);
                    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, 0x2000, v13, &g_548d80);
                },
                Err(_) => {
                    uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, v1 as i64);
                },
            }
        } else {
            v2 = 0x1b600000000;
            *(&v3 as &i32) = 0;
            *(&v7 as &i16) = 0;
            v4 = 1;
            *(&v7 as &i8) = 1;
            v6 = 1;
            v0 = std::fs::OpenOptions::open(&v2, a2, a3);
            match v0 {
                Ok(_) => {
                    v13 = alloc::boxed::Box<T>::new((&v0)[4] as i32 as u32 as u64);
                    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, 0x2000, v13, &g_548d80);
                },
                Err(_) => {
                    uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, v1 as i64);
                },
            }
        }
        return Err(struct8 {
            field_0: v12
        });
    }
}
