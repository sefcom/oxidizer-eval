
  fn uu_shred::BytesWriter::bytes_for_pass::hdca822ed44bdc744(arg1: *mut i8, arg2: i64) -> i64

{
    if *arg1 != 1
    {
        let mut rax_7: i64;
        let mut rdx_5: i64;
        rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h6793353ba917b638(arg2, &arg1[0x150]);
        _$LT$rand_core..block..BlockRng$LT$R$GT$$u20$as$u20$rand_core..RngCore$GT$::fill_bytes::hba1a3c41a57cb272(&arg1[0x10], rax_7, rdx_5);
        return rax_7;
    }
    
    let rax: i64 = *arg1.byte_offset(0x10008);
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4ec44b3a476f1d59(rax, rax + arg2, &arg1[1], 0x10002);
    *arg1.byte_offset(0x10008) = (arg2 + *arg1.byte_offset(0x10008)) % 3;
    rax_1
}
