void flealib::fileencrypter::FileEncrypter::decrypt(struct_0 *a0, unsigned long long a1, unsigned long long a2[3])
{
    int v0;  // [bp-0x810], Other Possible Types: char
    char v1;  // [bp-0x800]
    unsigned long long v2;  // [bp-0x7f0]
    char v3;  // [bp-0x7e8]
    char v4;  // [bp-0x7d8], Other Possible Types: unsigned long long
    char v5;  // [bp-0x7d0]
    void* v6;  // [bp-0x418], Other Possible Types: char
    unsigned long long v8;  // r15
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx

    v8 = a2[2];
    v9 = 12.index(a2[1], v8, &g_b0a120);
    if (v10 != 12)
    {
        v6 = 0;
        core::panicking::assert_failed(0, &vvar_41{reg 32}, &g_450af0, &v6, &g_b09d40); /* do not return */
    }
    else if (v8 >= 12)
    {
        v0.map(a1);
        v4.new(&v0);
        v6.from(&v4);
        v4.decrypt(&v6, v9, a2[1] + 12, v8 - 12);
        if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
        {
            *((unsigned long long *)&a0->padding_1[7]) = (unsigned long long)core::ops::function::FnOnce::call_once().from();
            a0->field_10 = v10;
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        }
        else
        {
            v2 = v4;
            memcpy(&v3, &v5, 16);
            v4.from_utf8(&v2);
            v0.unwrap(&v4);
            a0->field_10 = *((long long *)&v1);
            *((void*)&a0->field_0) = v0;
        }
        core::ptr::drop_in_place<aes_gcm::AesGcm<aes::autodetect::Aes256,typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UTerm,typenum::bit::B1>,typenum::bit::B1>,typenum::bit::B0>,typenum::bit::B0>>>();
        ::0x788450::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
        return;
    }
    else
    {
        core::slice::index::slice_start_index_len_fail(12, v8, &g_b0a150); /* do not return */
    }
}
