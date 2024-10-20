fn uu_tail::chunks::LinesChunk::fill(a0: &u64, a1: &u64, a2: &struct24) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: i8;  // [bp-0x28]
    let v2: u64;  // [sp-0x20]
    let v4: u64;  // rdx
    let v5: &u64;  // rax
    let v6: u64;  // rdx
    let v7: u128;  // xmm0
    let v8: u64;  // rax

    if <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a2, a1, 0x2000) {
        v0 = 0x8000000000000000;
        v2 = v4;
        v5 = __rust_alloc(32, 8);
        v7 = *(&v0 as &i128);
        *(&v5[2] as &i8) = v1;
        *(v5) = v7;
        a0[1] = v5;
        a0[2] = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        v8 = 1;
    } else {
        a1[0x400] = v6;
        if !v6 {
            a1[1025] = 0;
            a0[1] = 0;
        } else {
            if v6 >= 8193 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            a1[1025] = _ZN6memchr4arch6x86_646memchr9count_raw2FN17hd7c020a0332f3b7cE();
            a0[1] = 1;
            a0[2] = v6;
        }
        v8 = 0;
    }
    *(a0) = v8;
    return a0;
}
