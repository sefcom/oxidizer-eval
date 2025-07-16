fn uu_od::peekreader::PeekReader<R>::read_from_tempbuffer(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u128;  // [bp-0x48]
    let v1: struct40;  // [bp-0x38]
    let v3: u64;  // rax

    v0 = struct16 {
        field_0: a1
    };
    v3 = std::io::impls::<impl std::io::Write for &mut [u8]>::write(&v0, *((a0 + 80) as &i64), *((a0 + 88) as &i64));
    v1 = alloc::vec::Vec<T,A>::drain(a0 + 72, v3);
    return v3;
}
