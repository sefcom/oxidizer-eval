fn uu_tail::chunks::LinesChunk::print_bytes(a0: i64, a1: i64, a2: i64) -> long long {
    let v1: struct8;  // rax

    uu_tail::chunks::LinesChunk::get_buffer_with(a0, a2);
    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1);
    if !v1 {
        return 0;
    }
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
}
