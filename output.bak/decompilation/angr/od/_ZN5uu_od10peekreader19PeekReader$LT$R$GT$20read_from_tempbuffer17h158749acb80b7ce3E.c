long long uu_od::peekreader::PeekReader$LT$R$GT$::read_from_tempbuffer::h158749acb80b7ce3(unsigned long long a0[12], unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax

    v0 = a1;
    v1 = a2;
    v4 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$$u5b$u8$u5d$$GT$::write::hfda19f7f2bf76fb5(&v0, a0[10], a0[11]);
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h40df76d8836e0b79(&v2, &a0[9], v4);
    ::0x475fd0::core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::h50ad40bc1084b653(&v2);
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed20f7b92caf5dbb(0, v4);
    return v4;
}
