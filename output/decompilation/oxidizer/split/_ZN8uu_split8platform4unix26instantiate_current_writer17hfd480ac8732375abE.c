fn uu_split::platform::unix::instantiate_current_writer(a0: u64, a1: u64, a2: u32, a3: u64, a4: u64, a5: u8) -> long long {
    let v0: Result<struct32, struct8>;  // [bp-0x88], Other Possible Types: struct14
    let v1: struct16;  // [bp-0x84]
    let v2: u16;  // [bp-0x7c]
    let v3: struct8;  // [bp-0x78]
    let v4: struct16;  // [bp-0x68]
    let v5: Result<struct4, struct8>;  // [bp-0x58]
    let v7: u64;  // [bp-0x50]
    let v8: Result<struct4, struct8>;  // [bp-0x48]
    let v10: struct44;  // [bp-0x34]
    let v11: struct32;  // [bp-0x18]
    let v13: u64;  // rax
    let v14: struct24;  // rax
    let v15: u64;  // rdx
    let v16: i64;  // rdi

    v4 = struct16 {
        field_0: a3
        field_8: a4
    };
    if a1 {
        v0 = uu_split::platform::unix::FilterWriter::new(a1, a2, a3, a4);
        if let Ok(_) = v0 {
            v10 = struct44 {
                field_0: v1
                field_4: *((&v0 as &char + 8) as &i64)
                field_12: v11
                field_28: v3
            };
            v14 = alloc::boxed::Box<T>::new(&v10) as u64;
            return std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, v14, v15);
        }
    } else if a5 {
        v2 = 0;
        v0 = struct14 {
            field_0: 0x1b600000000
            field_8: 0
            field_12: 1
        };
        v5 = std::fs::OpenOptions::open(&v0, a3, a4);
        match v5 {
            Ok(_) => {
                v14 = alloc::boxed::Box<T>::new(v16);
                return std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, v14, v15);
            },
            Err(_) => {
                v13 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v4, v7);
            },
        }
    } else {
        v0 = struct14 {
            field_0: 0x1b600000000
            field_8: 0
            field_12: 0
        };
        v8 = std::fs::OpenOptions::open(&v0, a3, a4);
        match v8 {
            Ok(_) => {
                v14 = alloc::boxed::Box<T>::new(v16);
                return std::io::buffered::bufwriter::BufWriter<W>::with_capacity(a0, v14, v15);
            },
            Err(_) => {
                v13 = uu_split::platform::unix::instantiate_current_writer::{{closure}}(&v4, *((&v8 as &char + 8) as &i64));
            },
        }
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v13
    };
}
