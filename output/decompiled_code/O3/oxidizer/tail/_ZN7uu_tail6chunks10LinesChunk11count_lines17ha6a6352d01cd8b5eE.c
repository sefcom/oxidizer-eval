fn uu_tail::chunks::LinesChunk::count_lines(a0: &struct_0, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u8;  // [sp-0x10]
    let v6: u64;  // rax
    let v7: u64;  // rdx

    v6 = uu_tail::chunks::LinesChunk::get_buffer(a0);
    v3 = a0->field_2010;
    v0 = v6;
    v1 = v6;
    v2 = v7 + v6;
    return memchr::arch::generic::memchr::Iter::count(v6, v7 + v6, &v3);
}
