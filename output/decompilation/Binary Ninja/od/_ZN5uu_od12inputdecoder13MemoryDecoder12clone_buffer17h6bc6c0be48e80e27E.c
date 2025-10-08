
  int64_t uu_od::inputdecoder::MemoryDecoder::clone_buffer::h6bc6c0be48e80e27(int64_t* arg1, int64_t* arg2)

{
    void* rax = *arg1;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone_from::h73f884ebc3370de8(arg2, *(rax + 8), *(rax + 0x10));
    /* tailcall */
    return alloc::vec::Vec$LT$T$C$A$GT$::resize::h4f01d69bf5d282a1(arg2, arg1[1]);
}
