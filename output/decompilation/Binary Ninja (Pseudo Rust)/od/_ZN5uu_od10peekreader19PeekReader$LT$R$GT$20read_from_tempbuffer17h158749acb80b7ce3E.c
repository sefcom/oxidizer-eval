
  fn uu_od::peekreader::PeekReader$LT$R$GT$::read_from_tempbuffer::h158749acb80b7ce3(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_48: i64 = arg2;
    let rdx: i64;
    let var_40: i64 = rdx;
    let result: i64 = std::io::impls::_$LT$impl$u20$std..io..Write$u20$for$u20$$RF$mut$u20$$u5b$u8$u5d$$GT$::write::hfda19f7f2bf76fb5(&var_48, *arg1.byte_offset(0x50), *arg1.byte_offset(0x58));
    let mut var_38: ();
    alloc::vec::Vec$LT$T$C$A$GT$::drain::h40df76d8836e0b79(&var_38, arg1.byte_offset(0x48), result);
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::h50ad40bc1084b653(&var_38);
    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed20f7b92caf5dbb(0, result);
    result
}
