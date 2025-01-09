fn uu_tail::chunks::LinesChunk::print_bytes(a0: void*, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v2: u64;  // rax
    let v4: u64;  // rdx
    let v5: u64;  // rax

    v0 = v2;
    v5 = std::io::impls::<impl std::io::Write for &mut W>::write_all(a1, uu_tail::chunks::LinesChunk::get_buffer_with(a0, 0), v4);
    if v5 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    }
    return 0;
}
