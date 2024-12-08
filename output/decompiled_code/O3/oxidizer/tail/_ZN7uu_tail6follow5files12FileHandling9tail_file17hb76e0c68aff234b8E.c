fn uu_tail::follow::files::FileHandling::tail_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x158]
    let v1: i64;  // [sp-0x150]
    let v2: i64;  // [sp-0x148]
    let v3: i128;  // [sp-0x140]
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: i192;  // [sp-0x120], Other Possible Types: struct24
    let v7: i192;  // [sp-0x108], Other Possible Types: struct8, struct24
    let v8: i264;  // [sp-0x50], Other Possible Types: struct33
    let v10: i64;  // rax
    let v11: struct16;  // rax
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v14: i64;  // rcx
    let v15: i64;  // rsi
    let v16: i64;  // rdx

    v4 = -1;
    v5 = 0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v10 = uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3, a3, a4, a5);
    if !*((v10 + 200) as &i64) {
        return struct9 {
            field_0: 0
            field_8: 0
        };
    }
    v11 = uu_tail::chunks::BytesChunkBuffer::fill(v10 + 200);
    if !v11 {
        if !*((&v3 as &char + 8) as &i64) {
            return struct9 {
                field_0: 0
                field_8: 0
            };
        }
        if uu_tail::follow::files::FileHandling::needs_header(a1, a2, a3, a4, v12, v13) as i8 {
            v7 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1, a2, a3, v14, v12, v13) + 176);
            uu_tail::paths::HeaderPrinter::print(a1 + 72, *((&v7 as &char + 8) as &i64), v7.field_16);
        }
        v0 = std::io::stdio::stdout();
        v8 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v0, v15, v16));
        v11 = uu_tail::chunks::BytesChunkBuffer::print(&v1, &v8, v16);
        if !v11 {
            v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
            v7.field_16 = *((vvar_1 + 16) as &i64);
            v7 = *(a1 as &i128);
            *(a1 as &i192) = v6;
            *((a1 + 16) as &i64) = *((&v6 as &char + 16) as &i64);
            v7 = struct8 {
                field_0: 2
            };
            uu_tail::follow::files::FileHandling::update_metadata(a1, a2, a3, &v7, v12, v13);
            *((a0 + 8) as &i8) = 1;
            return struct8 {
                field_0: 0
            };
        }
    }
    return struct16 {
        field_0: v11
        field_8: v17
    };
}
