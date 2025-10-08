
  int64_t uu_sum::sysv_sum::h712a5fcd71af1ffc(int64_t* arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_1030 = 0;
    int32_t r12 = 0;
    memset(&var_1030, 0, 0x1000);
    int64_t var_1040 = 0;
    int64_t rax_5;
    int64_t* rdx_6;
    
    while (true)
    {
        char rax_1;
        int64_t rdx_1;
        rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h791f7fb0e274ba22(arg2, arg3, &var_1030);
        
        if (!(rax_1 & 1))
        {
            if (!rdx_1)
            {
                uint32_t r12_2 = (r12 >> 0x10) + r12;
                rdx_6 = arg1;
                rdx_6[1] = (var_1040 >> 9) + 1;
                rdx_6[2] = (r12_2 >> 0x10) + r12_2;
                rax_5 = 0;
                break;
            }
            
            char* rax_3;
            void* rdx_3;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7c38171c70972876(rdx_1, &var_1030);
            var_1040 += rdx_1;
            r12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h294b17057650bcf1(rax_3, rdx_3 + rax_3, r12);
        }
        else
        {
            if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1) != 0x23)
            {
                rdx_6 = arg1;
                rdx_6[1] = rdx_1;
                rax_5 = 1;
                break;
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5d0502746400dd7d(rdx_1);
        }
    }
    
    *rdx_6 = rax_5;
    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h5ecc831ddc7a04ed(arg2, arg3);
}
