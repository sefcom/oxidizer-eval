
  fn uu_od::peekreader::PeekReader$LT$R$GT$::read_from_tempbuffer::hf24a4ff9ace7f7d4(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_48: i64 = arg2;
    let rdx: i64;
    let var_40: i64 = rdx;
    let result: i64 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$$u5b$u8$u5d$$GT$::write::hc46ab02767632519(&var_48, *arg1.byte_offset(0x78), *arg1.byte_offset(0x80));
    let mut var_38: ();
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h2e123f5ab5004ad6(&var_38, arg1.byte_offset(0x70), result);
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::hb3129cb533b5c06f(&var_38);
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h7258f05db9019541(0, result);
    result
}
