fn uu_tail::chunks::BytesChunk::fill(a0: &u64, a1: &struct_0, a2: void*) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rdx

    v0 = v2;
    if <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a2, a1, 0x2000) {
        return struct16 {
            field_0: 0
        };
    }
    a1->field_2000 = v3;
    if v3 {
        return struct16 {
            field_0: 0
        };
    }
    return struct16 {
        field_0: 0
    };
}
