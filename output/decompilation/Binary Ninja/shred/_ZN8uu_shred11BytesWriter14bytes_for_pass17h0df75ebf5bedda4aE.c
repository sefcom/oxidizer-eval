
  int64_t uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(char* arg1, int64_t arg2)

{
    int64_t result;
    
    if (!*arg1)
    {
        int64_t result_2;
        int64_t rdx_5;
        result_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h459bcf1159c78004(arg2, &arg1[0x150]);
        rand::rng::Rng::fill::hd8f979ebf6c2571a(&arg1[0x10], result_2, rdx_5);
        result = result_2;
    }
    else
    {
        int64_t rax = *(arg1 + 0x10008);
        int64_t result_1;
        int64_t rdx_1;
        result_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hac13306e42eb63dd(rax, rax + arg2, &arg1[1]);
        *(arg1 + 0x10008) = (arg2 + *(arg1 + 0x10008)) % 3;
        result = result_1;
    }
    
    return result;
}
