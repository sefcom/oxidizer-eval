fn uu_tail::follow::files::FileHandling::tail_file(a0: &Result<struct16, struct1>, a1: void*, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x158]
    let v1: i64;  // [sp-0x150]
    let v2: i64;  // [sp-0x148]
    let v3: i128;  // [sp-0x140]
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: struct24;  // [sp-0x120], Other Possible Types: i192
    let v7: i64;  // [sp-0x108], Other Possible Types: struct24
    let v8: i64;  // [sp-0xf8]
    let v9: i264;  // [sp-0x50], Other Possible Types: struct33
    let v12: struct16;  // rax

    v4 = -1;
    v5 = 0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    return Err(struct1 {
        field_0: 0
    });
    v12 = uu_tail::chunks::BytesChunkBuffer::fill(uu_tail::follow::files::FileHandling::get_mut(a1, a2, a3) + 200);
    return Ok(struct16 {
        field_0: v12
        field_8: v13
    });
    return Err(struct1 {
        field_0: 0
    });
    if uu_tail::follow::files::FileHandling::needs_header(a1, a2, a3, a4) as i8 {
        v7 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a1, a2, a3) + 176);
        uu_tail::paths::HeaderPrinter::print(a1 + 72, *((&v7 as &char + 8) as &i64), v8);
    }
    v0 = std::io::stdio::stdout();
    v9 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::Stderr::lock(&v0));
    v12 = uu_tail::chunks::BytesChunkBuffer::print(&v1, &v9);
    return Ok(struct16 {
        field_0: v12
        field_8: v13
    });
    v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
    v8 = *((a1 + 16) as &i64);
    v7 = *(a1 as &i128);
    *(a1 as &i192) = v6;
    *((a1 + 16) as &i64) = *((&v6 as &char + 16) as &i64);
    v7 = 2;
    uu_tail::follow::files::FileHandling::update_metadata(a1, a2, a3, &v7);
    return Err(struct1 {
        field_0: 1
    });
}
