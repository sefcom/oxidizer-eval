fn uu_head::take::TakeAllBuffer::fill_buffer(a0: i64, a1: u32) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // r15

    v0 = v2;
    alloc::vec::Vec<T,A>::resize(a0);
    *((a0 + 24) as &i64) = 0;
    v4 = v3;
    if (std::io::impls::<impl std::io::Read for &mut R>::read(a1, *((a0 + 8) as &i64), *((a0 + 16) as &i64)) & 1) {
        do {
            if std::io::error::Error::kind(v4) as u8 != 35 {
                return 1;
            }
            v4 = v3;
        } while ((std::io::impls::<impl std::io::Read for &mut R>::read(a1, *((a0 + 8) as &i64), *((a0 + 16) as &i64)) & 1));
    }
    if *((a0 + 16) as &i64) >= v4 {
        *((a0 + 16) as &u64) = v4;
    }
    return 0;
}
