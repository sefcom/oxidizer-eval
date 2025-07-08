
  int64_t uu_od::peekreader::PeekReader$LT$R$GT$::read_from_tempbuffer::h158749acb80b7ce3(void* arg1, int64_t arg2)

{
    int64_t var_48 = arg2;
    int64_t rdx;
    int64_t var_40 = rdx;
    int64_t result = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$$u5b$u8$u5d$$GT$::write::hfda19f7f2bf76fb5(&var_48, *(arg1 + 0x50), *(arg1 + 0x58));
    void var_38;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h40df76d8836e0b79(&var_38, arg1 + 0x48, result);
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::h50ad40bc1084b653(&var_38);
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed20f7b92caf5dbb(0, result);
    return result;
}
