fn uu_od::peekreader::PeekReader<R>::read_from_tempbuffer(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x48]
    let v1: struct40;  // [sp-0x38]
    let v3: i64;  // rax

    v0 = struct16 {
        field_0: a1
        field_8: a2
    };
    v3 = std::io::impls::<impl std::io::Write for &mut [u8]>::write(&v0, *((a0 + 80) as &i64), *((a0 + 88) as &i64));
    v1 = alloc::vec::Vec<T,A>::drain(a0 + 72, v3);
    return v3;
}
