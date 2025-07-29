long long flealib::fileencrypter::FileEncrypter::new(uint128_t a0[2], struct_0 *a1)
{
    unsigned long v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    int v3;  // xmm0

    v0 = a1->field_10;
    if (a1->field_10 != 32)
    {
        v1 = 0;
        core::panicking::assert_failed(0, &v0, " ", &v1, &g_b09d40); /* do not return */
    }
    v3 = a1->field_8->field_0;
    a0[1] = a1->field_8->field_10;
    *((void*)&a0[0]) = v3;
    ::0x788410::core::ptr::drop_in_place<alloc::string::String>(a1);
    return a0;
}
