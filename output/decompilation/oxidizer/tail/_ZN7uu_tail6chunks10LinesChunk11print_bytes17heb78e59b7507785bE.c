fn uu_tail::chunks::LinesChunk::print_bytes(a0: i64, a1: i32) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u32;  // rdx
    let v4: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax

    v0 = v2;
    v4 = std::io::impls::<impl std::io::Write for &mut W>::write_all(a1, uu_tail::chunks::LinesChunk::get_buffer_with(a0, 0), v3);
    return 0;
}
