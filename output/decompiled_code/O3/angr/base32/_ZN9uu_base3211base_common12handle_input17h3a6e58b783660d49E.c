long long uu_base32::base_common::handle_input::h3a6e58b783660d49(unsigned long long a0[2], unsigned int a1, struct_0 *a2)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v3;  // r15
    unsigned long long v4;  // rsi
    struct struct_0 *v5[7];  // rdx

    v3 = uu_base32::base_common::get_supports_fast_decode_and_encode::hd47d7a6d3a70e3f3(a1);
    v1 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v1, v4, v5);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h495fa9c001457fbe(v0);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..features..encoding..SupportsFastDecodeAndEncode$GT$$GT$::h8223081194dbfd16(v3, v5);
    ::0x4772c0::core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::hb58b4ed88d502bc3(a2);
    return (!a2->field_28 ? uu_base32::base_common::fast_encode::fast_encode::h817aa8f7b78e75e8(a0, &v0, v3, v5, *((long long *)&a2->field_0), *((long long *)&a2->field_8)) : uu_base32::base_common::fast_decode::fast_decode::h1e0c358e67beecd3(a0, &v0, v3, v5, a2->field_29));
}
