fn uu_od::peekreader::PeekReader<R>::read_from_tempbuffer(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x48]
    let v1: struct40;  // [bp-0x38]
    let v4: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = struct16 {
        field_0: a1
        field_8: a2
    };
    v4 = std::io::impls::<impl std::io::Write for &mut [u8]>::write(&v0, *((a0 + 120) as &i64), *((a0 + 128) as &i64));
    v1 = alloc::vec::Vec<T,A>::drain(a0 + 112, v4 as i64);
    return v4 as i64;
}
