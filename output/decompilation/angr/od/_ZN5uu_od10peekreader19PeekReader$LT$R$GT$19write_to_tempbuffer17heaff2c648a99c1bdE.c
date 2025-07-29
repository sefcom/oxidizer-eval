void uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x48]
    unsigned long v4;  // rbx

    v4 = a0 + 112;
    v2.drain(v4);
    v0.from_iter(&v2, &g_5953e0);
    v4.append_elements(a1, a2);
    v1.into_iter(&v0);
    v4.spec_extend(&v1, &g_595410);
    return;
}
