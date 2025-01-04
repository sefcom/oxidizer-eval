long long uu_tail::platform::unix::get_errno::hcaebd61abd6c9378()
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x24]
    unsigned long long v3;  // rbx

    v3 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
    ::0x509f80::std::io::error::repr_bitpacked::decode_repr::h62460d19c1e0d17b(&v0, v3);
    if (v0)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    ::0x50b3c0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hadb3f722d4799b91(v3);
    return *((int *)&v1);
}
