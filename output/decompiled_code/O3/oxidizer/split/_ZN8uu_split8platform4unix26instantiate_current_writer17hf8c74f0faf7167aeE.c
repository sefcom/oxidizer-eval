fn uu_split::platform::unix::instantiate_current_writer(a0: &u64, a1: void*, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: u64;  // [sp-0x78], Other Possible Types: Result<struct4, struct8>
    let v1: u8;  // [bp-0x70]
    let v2: u64;  // [bp-0x60]
    let v4: u32;  // [bp-0x58]
    let v5: u8;  // [sp-0x57]
    let v6: u8;  // [sp-0x56]
    let v7: u8;  // [sp-0x55]
    let v8: u16;  // [bp-0x54]
    let v9: i8;  // [bp-0x50]
    let v10: u64;  // [sp-0x40]
    let v11: u64;  // [sp-0x38]
    let v12: struct28;  // [bp-0x2c]
    let v14: u64;  // rcx
    let v15: u64;  // rax
    let v16: u64;  // rax
    let v17: u64;  // rcx

    v14 = a2;
    v10 = a2;
    v11 = a3;
    if a1->field_0 != 0x8000000000000000 {
        uu_split::platform::unix::FilterWriter::new(&v2, a1->field_8, a1->field_10, v14, a3);
        if v2 as i32 {
            v15 = *(&v4 as &i64);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v15
            };
        }
        v0 = v9;
        *(&v12 as &struct28) = struct28 {
            field_0: *(&v3 as &i32)
            field_4: *(&v4 as &i64)
            field_12: v0
        };
        v16 = alloc::boxed::Box<T>::new(&v12);
        v17 = &g_5492f0;
    } else {
        if !a4 {
            v2 = 0x1b600000000;
            v4 = 0;
            v8 = 0;
            v6 = 1;
            v0 = std::fs::OpenOptions::open(&v2, v14, a3);
            if v0 as i32 {
                v15 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v10, *(&v1 as &i64));
                a0->field_8 = v15;
                a0->field_0 = 0x8000000000000000;
                return a0;
            }
        } else {
            v2 = 0x1b600000000;
            v4 = 0;
            v8 = 0;
            v5 = 1;
            v8 = 1;
            v7 = 1;
            v0 = std::fs::OpenOptions::open(&v2, v14, a3);
            if v0 as i32 {
                v15 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v10, *(&v1 as &i64));
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v15
                };
            }
        }
        v16 = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32));
        v17 = &g_5492a0;
    }
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, 0x2000, v16, v17);
    return a0;
}
