fn uu_tail::chunks::LinesChunk::print_bytes(a0: u64, a1: u64, a2: u64) -> u64 {
    let v1: u64;  // rdx
    let v2: u64;  // rax

    v2 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, uu_tail::chunks::LinesChunk::get_buffer_with(a0, a2), v1);
    if v2 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
    }
    return 0;
}
