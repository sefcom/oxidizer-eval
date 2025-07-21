fn uu_split::platform::unix::instantiate_current_writer(a1: i64, a2: i64, a3: i64, a4: i8) -> Result<struct41, struct16> {
    let a0: i64;  // rsi
    let v0: Result<struct4, struct8>;  // [bp-0x78], Other Possible Types: u128
    let v1: u32;  // [bp-0x74]
    let v2: u64;  // [bp-0x60]
    let v3: core::fmt::Arguments;  // [bp-0x5c]
    let v4: u32;  // [bp-0x58]
    let v5: u8;  // [bp-0x57]
    let v6: u8;  // [bp-0x56]
    let v7: u8;  // [bp-0x55]
    let v8: alloc::string::String;  // [bp-0x54], Other Possible Types: u16
    let v9: u128;  // [bp-0x50]
    let v10: struct16;  // [bp-0x40]
    let v11: struct28;  // [bp-0x2c]
    let v13: u64;  // rax
    let v14: u64;  // rcx
    let v15: i64;  // rdi
    let v16: u64;  // rdi

    v10 = struct16 {
        field_0: a1
        field_8: a2
    };
    if *(a0 as &i64) != 0x8000000000000000 {
        uu_split::platform::unix::FilterWriter::new(*((a0 + 8) as &i64), *((a0 + 16) as &i64), a1, a2, a4);
        if !v2 as i32 {
            v14 = *(&v4 as &i64);
            v0 = v9;
            v11 = struct28 {
                field_0: v3
                field_4: v14
                field_12: v9
            };
            alloc::boxed::Box<T>::new(&v11);
            std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v16, 0x2000);
            return;
        }
    } else if a3 {
        v2 = 0x1b600000000;
        v4 = 0;
        v8 = 0;
        v5 = 1;
        v8 = 1;
        v7 = 1;
        v0 = std::fs::OpenOptions::open(&v2);
        match v0 {
            Ok(_) => {
                alloc::boxed::Box<T>::new(v1 as u64);
                std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v16, 0x2000);
                return;
            },
            Err(_) => {
                v13 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v10, *((&v0 as &char + 8) as &i64));
            },
        }
    } else {
        v2 = 0x1b600000000;
        v4 = 0;
        v8 = 0;
        v6 = 1;
        v0 = std::fs::OpenOptions::open(&v2);
        match v0 {
            Ok(_) => {
                alloc::boxed::Box<T>::new(v1 as u64);
                std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v16, 0x2000);
                return;
            },
            Err(_) => {
                v13 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v10, *((&v0 as &char + 8) as &i64));
            },
        }
    }
    *((v15 + 8) as &u64) = v13;
    *(v15 as &i64) = 0x8000000000000000;
    return;
}
