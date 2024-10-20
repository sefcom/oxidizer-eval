fn uu_tail::chunks::BytesChunk::fill(a0: &u64, a1: &struct_0, a2: &struct24) -> u64 {
    let v0: u64;  // [sp-0x30]
    let v1: i8;  // [bp-0x20]
    let v2: u64;  // [sp-0x18]
    let v4: u64;  // rdx
    let v5: &u64;  // rax
    let v6: u64;  // rdx
    let v7: u128;  // xmm0

    if <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a2, a1, 0x2000) {
        v0 = 0x8000000000000000;
        v2 = v4;
        v5 = __rust_alloc(32, 8);
        v7 = *(&v0 as &i128);
        *(&v5[2] as &i8) = v1;
        *(v5) = v7;
        a0[1] = v5;
        a0[2] = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
        *(a0) = 1;
        return a0;
    }
    a1->field_2000 = v6;
    if v6 {
        a0[1] = 1;
        a0[2] = v6;
        *(a0) = 0;
        return a0;
    }
    *(&a0 as &i128) = 0;
    return a0;
}
