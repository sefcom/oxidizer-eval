void flealib::fileencrypter::FileEncrypter::encrypt(struct_0 *a0, unsigned long long a1, unsigned long long a2[3])
{
    char v0;  // [bp-0x7e5]
    char v1;  // [bp-0x7e4]
    char v2;  // [bp-0x7d8]
    unsigned long long v3;  // [bp-0x7d0]
    char v4;  // [bp-0x7c8]
    int v5;  // [bp-0x7b8], Other Possible Types: char
    char v6;  // [bp-0x7a8]
    char v7;  // [bp-0x3f8]

    v1.generate_nonce(&v0);
    v2.map(a1);
    v5.new(&v2);
    v7.from(&v5);
    v5.encrypt(&v7, &v1, a2[1], a2[2]);
    v2.expect(&v5);
    v5.to_vec(&v1, 12);
    v5.append_elements(v3, *((long long *)&v4), &g_b0a108);
    a0->field_10 = *((long long *)&v6);
    *((void*)&a0->field_0) = v5;
    ::0x788450::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v2);
    core::ptr::drop_in_place<aes_gcm::AesGcm<aes::autodetect::Aes256,typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UTerm,typenum::bit::B1>,typenum::bit::B1>,typenum::bit::B0>,typenum::bit::B0>>>();
    ::0x788410::core::ptr::drop_in_place<alloc::string::String>(a2);
    return;
}
