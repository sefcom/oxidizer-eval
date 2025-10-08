void uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x48]
    unsigned long v3;  // rbx

    v3 = a0 + 112;
    v1.drain(v3);
    v0.collect(&v1);
    v3.spec_extend(a1, a2 + a1);
    v1.into_iter(&v0);
    v3.spec_extend(&v1);
    return;
}
