long long uu_base32::base_common::handle_input::h2d10849ec2fe263b(unsigned long long a0[2], unsigned int a1, struct_0 *a2)
{
    unsigned long v0;  // [sp-0x38]
    unsigned long v1;  // [sp-0x30]
    unsigned long long v3;  // r15
    struct struct_0 *v4[7];  // rdx

    v3 = uu_base32::base_common::get_supports_fast_decode_and_encode::h61396d0f590470b1(a1);
    v1 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v1);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h8ed0d40b089bb0da(v0);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..features..encoding..SupportsFastDecodeAndEncode$GT$$GT$::h805b1188f3ea2a33(v3, v4);
    ::0x4784c0::core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::hac45288a00438e90(a2);
    return (!a2->field_28 ? uu_base32::base_common::fast_encode::fast_encode::he2f2c369f4c434ff(a0, &v0, v3, v4, *((long long *)&a2->field_0), *((long long *)&a2->field_8)) : uu_base32::base_common::fast_decode::fast_decode::h894b8dd38a833827(a0, &v0, v3, v4, a2->field_29));
}
