fn uu_tail::chunks::LinesChunk::print_bytes(a0: void*, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax

    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, uu_tail::chunks::LinesChunk::get_buffer_with(a0, a2), a2);
    if v1 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
    }
    return 0;
}
