
  int64_t uu_od::peekreader::PeekReader$LT$R$GT$::read_from_tempbuffer::hf24a4ff9ace7f7d4(void* arg1, int64_t arg2)

{
    int64_t var_48 = arg2;
    int64_t rdx;
    int64_t var_40 = rdx;
    int64_t result = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$$u5b$u8$u5d$$GT$::write::hc46ab02767632519(&var_48, *(arg1 + 0x78), *(arg1 + 0x80));
    void var_38;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h2e123f5ab5004ad6(&var_38, arg1 + 0x70, result);
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::hb3129cb533b5c06f(&var_38);
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h7258f05db9019541(0, result);
    return result;
}
