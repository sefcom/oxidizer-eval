fn uu_tail::chunks::LinesChunk::print_bytes(a0: u64, a1: u64, a2: u64) -> long long {
    let v1: core::result::Result<(), std::io::error::Error>;  // rax

    v1 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, uu_tail::chunks::LinesChunk::get_buffer_with(a0, a2), a2);
    match v1 {
        Ok(_) => {
            return 0;
        },
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v1);
        },
    }
}
