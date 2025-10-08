
  int64_t uu_paste::parse_delimiters::h5f1c6018d1fadef2(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_60 = arg2;
    int64_t var_58 = arg3;
    int32_t var_c4 = 0;
    int64_t rax;
    int64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h1fa32acdd47f5e6e(arg3, 8, 0x10);
    int64_t var_c0 = rax;
    int64_t var_b8 = rdx;
    int64_t var_b0 = 0;
    int64_t var_70 = arg2;
    int64_t var_68 = arg3 + arg2;
    char rax_1;
    int32_t rdx_1;
    rax_1 = core::str::validations::next_code_point::hd6fb93637fe3850a(&var_70, arg1);
    int128_t var_a8;
    
    if (rax_1 & 1)
    {
        char rax_2;
        
        do
        {
            if (rdx_1 != 0x5c)
                uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h350d698bfe18c7ac(
                    &var_c4, &var_c0, rdx_1);
            else
            {
                char rax_3;
                rax_3 = core::str::validations::next_code_point::hd6fb93637fe3850a(&var_70, arg1);
                
                if (!(rax_3 & 1))
                {
                    int64_t* var_50 = &var_60;
                    int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h733750fe09afa4a3;
                    var_a8 = &data_4dec90;
                    *var_a8[8] = 1;
                    int64_t var_88_1 = 0;
                    int64_t** var_98_1 = &var_50;
                    int64_t var_90_1 = 1;
                    int128_t var_40;
                    core::option::Option$LT$T$GT$::map_or_else::ha1ed41d4b248c8ea(&var_40, &var_a8);
                    var_90_1 = 1;
                    var_a8 = var_40;
                    int64_t var_30;
                    int64_t var_98_2 = var_30;
                    *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::hd8d95bce55d08a3c(&var_a8);
                    *(arg1 + 0x10) = &data_4decf0;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$GT$$GT$::ha43f19f279a403ea(&var_c0);
                }
                
                if (rdx_1 > 0x6d)
                {
                    if (rdx_1 == 0x6e)
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::hd82d0d9f8e58e2ab(&var_c0, 0xa);
                    else if (rdx_1 != 0x74)
                        uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h350d698bfe18c7ac(
                            &var_c4, &var_c0, rdx_1);
                    else
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::hd82d0d9f8e58e2ab(&var_c0, 9);
                }
                else if (rdx_1 == 0x30)
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hab9f65348b292abf(&var_c0, 
                        alloc::boxed::Box$LT$T$GT$::new::h696e36a6348774e2(), 0);
                else if (rdx_1 == 0x5c)
                    uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::hd82d0d9f8e58e2ab(&var_c0, 0x5c);
                else
                    uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h350d698bfe18c7ac(
                        &var_c4, &var_c0, rdx_1);
            }
            
            rax_2 = core::str::validations::next_code_point::hd6fb93637fe3850a(&var_70, arg1);
        } while (rax_2 & 1);
    }
    
    int64_t var_98 = var_b0;
    var_a8 = var_c0;
    int64_t result;
    int64_t rdx_2;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::h5a5236d680e487a4(&var_a8);
    *(arg1 + 8) = result;
    *(arg1 + 0x10) = rdx_2;
    *arg1 = 0;
    return result;
}
