long long uu_od::peekreader::PeekReader<R>::read_from_tempbuffer(unsigned long long a0[17], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax

    v0 = a1;
    v1 = a2;
    v4 = v0.write(a0[15], a0[16]);
    v2.drain(&a0[14], v4);
    core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(&v2);
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0, v4);
    return v4;
}
