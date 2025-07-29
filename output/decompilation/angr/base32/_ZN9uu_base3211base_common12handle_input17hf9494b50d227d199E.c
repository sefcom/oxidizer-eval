long long uu_base32::base_common::handle_input(unsigned long long a0[2], char a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x48]
    char v1;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v3;  // r15
    unsigned long long v4;  // rdx

    uu_base32::base_common::has_padding(&v1, a0);
    if (!v1)
    {
        v3 = (unsigned long long)uu_base32::base_common::get_supports_fast_decode_and_encode(a1);
        v1 = std::io::stdio::stdout();
        v0 = v1.lock();
        v1 = (!a2->field_28 ? uu_base32::base_common::fast_encode::fast_encode(a0, &g_5a21d8, &v0, &g_5a2230, v3, v4, a2->field_0, a2->field_0) : uu_base32::base_common::fast_decode::fast_decode(a0, &g_5a21d8, &v0, &g_5a2230, v3, v4, a2->field_29));
        core::ptr::drop_in_place<std::io::stdio::StdoutLock>(&v0);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::features::encoding::SupportsFastDecodeAndEncode>>(v3, v4);
    }
    ::0x4a9320::core::ptr::drop_in_place<uu_base32::base_common::Config>(a2);
    return v1;
}
