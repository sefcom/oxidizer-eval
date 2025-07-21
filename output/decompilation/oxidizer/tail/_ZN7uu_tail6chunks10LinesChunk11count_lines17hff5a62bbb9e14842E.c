fn uu_tail::chunks::LinesChunk::count_lines(a0: i64) -> void {
    let v0: core::result::Result<u64, std::io::error::Error>;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v3: u8;  // [bp-0x10]
    let v5: u64;  // rax
    let v6: u64;  // rdx

    v5 = uu_tail::chunks::LinesChunk::get_buffer(a0);
    v3 = *((a0 + 8208) as &i8);
    v0 = v5;
    v1 = v5;
    v2 = v6 + v5;
    memchr::arch::generic::memchr::Iter::count(v5, v6 + v5, &v3);
    return;
}
