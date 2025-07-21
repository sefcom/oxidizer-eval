fn uu_tail::follow::files::FileHandling::tail_file(a1: i64, a2: i64, a3: i64, a4: i32) -> Result<struct16, struct9> {
    let a0: i64;  // rsi
    let v0: std::io::stdio::Stderr;  // [bp-0x158]
    let v1: void*;  // [bp-0x150]
    let v2: u64;  // [bp-0x148]
    let v3: u128;  // [bp-0x140]
    let v4: u64;  // [bp-0x138]
    let v5: u64;  // [bp-0x130]
    let v6: void*;  // [bp-0x128]
    let v7: u128;  // [bp-0x120]
    let v8: u64;  // [bp-0x110]
    let v9: alloc::string::String;  // [bp-0x108], Other Possible Types: u128
    let v10: u64;  // [bp-0xf8]
    let v11: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x50]
    let v13: struct16;  // rax
    let v14: u64;  // rax
    let v15: i64;  // rdi
    let v17: u64;  // rdx
    let v18: i64;  // rdi

    v5 = -1;
    v6 = 0;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v13 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2);
    if *((v13 + 200) as &i64) {
        v14 = uu_tail::chunks::BytesChunkBuffer::fill(&v1, v13 + 200);
        if v14 {
LABEL_50ec4e:
            *(v18 as &u64) = v14;
            *((v18 + 8) as &u64) = v17;
        } else {
            if !v4 {
                goto LABEL_50ed64;
            }
            if uu_tail::follow::files::FileHandling::needs_header(a0, a1, a2, a3) as i8 {
                v9 = <alloc::string::String as core::clone::Clone>::clone(uu_tail::follow::files::FileHandling::get(a0, a1, a2) + 176);
                uu_tail::paths::HeaderPrinter::print(a0 + 72, v9);
            }
            v0 = std::io::stdio::Stderr {
                inner: std::io::stdio::stdout()
            };
            std::io::stdio::Stderr::lock(&v0);
            v11 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
            v14 = uu_tail::chunks::BytesChunkBuffer::print(&v1, &v11);
            if !(!v14) {
                goto LABEL_50ec4e;
            }
            std::sys::pal::unix::os::split_paths::bytes_to_path(a1);
            v10 = *((a0 + 16) as &i64);
            v9 = *(a0 as &i128);
            *(a0 as &u128) = v7;
            *((a0 + 16) as &u64) = v8;
            v9 = 2;
            uu_tail::follow::files::FileHandling::update_metadata(a0 as u32, a1, a2, &v9);
            *((v15 + 8) as &i8) = 1;
LABEL_50ed68:
            *(v15 as &i64) = 0;
        }
    } else {
LABEL_50ed64:
        *((v15 + 8) as &i8) = 0;
        goto LABEL_50ed68;
    }
    return;
}
