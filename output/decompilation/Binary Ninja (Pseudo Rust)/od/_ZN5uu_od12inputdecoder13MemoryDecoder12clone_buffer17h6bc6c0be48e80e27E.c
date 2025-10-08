
  fn uu_od::inputdecoder::MemoryDecoder::clone_buffer::h6bc6c0be48e80e27(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: *mut c_void = *arg1;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone_from::h73f884ebc3370de8(arg2, *rax.byte_offset(8), *rax.byte_offset(0x10));
    /* tailcall */
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h4f01d69bf5d282a1(arg2, arg1[1])
}
