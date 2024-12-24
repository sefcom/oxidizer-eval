fn uu_split::platform::unix::instantiate_current_writer(a0: &u64, a1: void*, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: i64;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>
    let v1: i8;  // [bp-0x70]
    let v2: i64;  // [sp-0x60], Other Possible Types: Result<struct32, struct8>
    let v3: i32;  // [bp-0x58]
    let v4: i8;  // [sp-0x57]
    let v5: i8;  // [sp-0x56]
    let v6: i8;  // [sp-0x55]
    let v7: i16;  // [bp-0x54]
    let v8: i64;  // [sp-0x40]
    let v9: i64;  // [sp-0x38]
    let v10: i224;  // [bp-0x2c]
    let v12: i64;  // rcx
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: i64;  // rcx

    v12 = a2;
    v8 = a2;
    v9 = a3;
    if *(a1 as &i64) != 0x8000000000000000 {
        v2 = uu_split::platform::unix::FilterWriter::new(*((a1 + 8) as &i64), *((a1 + 16) as &i64), v12, a3);
        match v2 {
            Err(_) => {
                v13 = *((&v2 as &char + 8) as &i64);
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v13
                };
            },
            Ok(_) => {
                v0 = *((&v2 as &char + 16) as &i128);
                v10 = *((&v2 as &char + 4) as &i224);
                v14 = alloc::boxed::Box<T>::new(&v10);
                v15 = &g_5492f0;
            },
        }
    } else {
        if !a4 {
            v2 = 0x1b600000000;
            v3 = 0;
            v7 = 0;
            v5 = 1;
            v0 = std::fs::OpenOptions::open(&v2, v12, a3);
            if v0 {
                v13 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, v1);
                *((a0 + 8) as &i64) = v13;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
        } else {
            v2 = 0x1b600000000;
            v3 = 0;
            v7 = 0;
            v4 = 1;
            v7 = 1;
            v6 = 1;
            v0 = std::fs::OpenOptions::open(&v2, v12, a3);
            if v0 {
                v13 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v8, v1);
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v13
                };
            }
        }
        v14 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32));
        v15 = &g_5492a0;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, 0x2000, v14, v15);
    return a0;
}
