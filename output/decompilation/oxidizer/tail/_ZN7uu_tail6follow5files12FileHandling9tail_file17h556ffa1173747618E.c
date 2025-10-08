fn uu_tail::follow::files::FileHandling::tail_file(a0: i64, a1: i64, a2: u64, a3: void*, a4: u32) -> void {
    let v0: core::fmt::Arguments;  // [bp-0x148]
    let v1: core::fmt::rt::Argument;  // [bp-0x140]
    let v2: u128;  // [bp-0x138]
    let v3: i64;  // [bp-0x130]
    let v4: alloc::string::String;  // [bp-0x128]
    let v5: void*;  // [bp-0x120]
    let v6: struct33;  // [bp-0x118]
    let v7: struct24;  // [bp-0xf0]
    let v8: u64;  // [bp-0xe0]
    let v9: alloc::string::String;  // [bp-0xd8], Other Possible Types: std::io::stdio::Stdout, u64
    let v10: u64;  // [bp-0xd0]
    let v12: i64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rdx
    let v17: u64;  // rax
    let v18: core::result::Result<(), std::io::error::Error>;  // rax
    let v19: u64;  // rdx

    v4 = -1;
    v5 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v12 = uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3);
    if !*((v12 + 200) as &i64) {
        return struct16 {
            field_0: 0
            field_8: 0
        };
    }
    v13 = uu_tail::chunks::BytesChunkBuffer::fill(&v0, *((v12 + 200) as &i64), *((v12 + 208) as &i64));
    if v13 {
        return struct16 {
            field_0: v13
            field_8: v14
        };
    } else if v3 {
        if uu_tail::follow::files::FileHandling::needs_header(a1, a2, a3, a4) {
            v9 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1, a2, a3) + 176);
            uu_tail::paths::HeaderPrinter::print(a1 + 72, v10, v9.vec.len);
        }
        v9 = std::io::stdio::stdout();
        v6 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v9));
        v17 = uu_tail::chunks::BytesChunkBuffer::print(&v0, &v6);
        if v17 {
            return struct16 {
                field_0: v17
                field_8: v19
            };
        }
        v18 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v6);
        match v18 {
            Ok(_) => {
                v7 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2 as u32);
                *((a1 + 16) as &u64) = v8;
                *(a1 as &i128) = *(&v7.field_0 as &i128);
                v9 = 2;
                uu_tail::follow::files::FileHandling::update_metadata(a1, a2, a3, &v9);
                return struct16 {
                    field_0: 0
                    field_8: 1
                };
            },
            Err(_) => {
                v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
            },
        }
        return struct16 {
            field_0: v17
            field_8: v19
        };
    }
    return struct16 {
        field_0: 0
        field_8: 0
    };
}
