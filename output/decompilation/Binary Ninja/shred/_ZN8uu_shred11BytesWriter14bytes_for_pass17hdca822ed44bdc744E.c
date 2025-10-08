
  int64_t uu_shred::BytesWriter::bytes_for_pass::hdca822ed44bdc744(char* arg1, int64_t arg2)

{
    if (*arg1 != 1)
    {
        int64_t rax_7;
        int64_t rdx_5;
        rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h6793353ba917b638(arg2, &arg1[0x150]);
        _$LT$rand_core..block..BlockRng$LT$R$GT$$u20$as$u20$rand_core..RngCore$GT$::fill_bytes::hba1a3c41a57cb272(&arg1[0x10], rax_7, rdx_5);
        return rax_7;
    }
    
    int64_t rax = *(arg1 + 0x10008);
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4ec44b3a476f1d59(rax, rax + arg2, &arg1[1], 0x10002);
    *(arg1 + 0x10008) = (arg2 + *(arg1 + 0x10008)) % 3;
    return rax_1;
}
