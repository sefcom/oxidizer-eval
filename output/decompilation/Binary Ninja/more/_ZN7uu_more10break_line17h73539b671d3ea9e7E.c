
  int64_t uu_more::break_line::h73539b671d3ea9e7(int128_t* arg1, char* arg2, uint64_t arg3, int64_t arg4)

{
    int64_t rax = unicode_width::str_width::hf245007b39258182(arg2, arg3, 0);
    int64_t var_150 = 0;
    int64_t var_148 = 8;
    int64_t result = 0;
    int128_t var_138;
    int64_t var_110;
    
    if (rax >= arg4)
    {
        var_110 = 0;
        int64_t var_100_1 = 0;
        int64_t var_f0_1 = 0;
        int64_t var_e0_1 = 0;
        uint64_t var_d8_1 = arg3;
        int64_t var_d0_1 = 0;
        char var_c8_1 = 2;
        int32_t var_c4_1 = 0x10020001;
        char var_c0_1 = 0x10;
        int64_t var_b8_1 = 0;
        int64_t var_a8_1 = 0;
        int64_t var_98_1 = 0;
        uint64_t var_88_1 = arg3;
        uint64_t var_80_1 = arg3;
        int64_t var_78_1 = 0;
        char var_70_1 = 2;
        int32_t var_6c_1 = 0x10020001;
        char var_68_1 = 0x10;
        char* var_60_1 = arg2;
        uint64_t var_58_1 = arg3;
        void* var_168_1 = nullptr;
        char const (** const var_120_1)[0xbe] = &data_562b98;
        int64_t r14_1 = 0;
        
        while (true)
        {
            void* rax_2;
            int64_t rdx_1;
            rax_2 = _$LT$unicode_segmentation..grapheme..Graphemes$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8ebf6d9da3d275ef(&var_110);
            void* rbp_2;
            
            if (!rax_2)
            {
                rbp_2 = arg3;
                
                if (var_168_1 == rbp_2)
                    break;
                
                void* rax_6;
                uint64_t rdx_5;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(var_168_1, arg2, rbp_2);
                
                if (rax_6)
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(
                        &var_110, rax_6, rdx_5);
                    int64_t var_128_2 = var_100_1;
                    var_138 = var_110;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&var_150, &var_138);
                    break;
                }
                
                var_120_1 = &data_562b80;
            }
            else
            {
                int64_t rax_3 = unicode_width::str_width::hf245007b39258182(rax_2, rdx_1, 0);
                r14_1 += rax_3;
                
                if (r14_1 <= arg4)
                    continue;
                else
                {
                    rbp_2 = rax_2 - arg2;
                    void* rax_4;
                    uint64_t rdx_3;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_168_1, rbp_2, arg2, arg3);
                    
                    if (rax_4)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(&var_138, rax_4, rdx_3);
                        int64_t var_128;
                        int64_t var_38_1 = var_128;
                        int128_t var_48 = var_138;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&var_150, &var_48);
                        var_168_1 = rbp_2;
                        r14_1 = rax_3;
                        continue;
                    }
                }
            }
            
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, var_168_1, rbp_2);
            /* no return */
        }
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(&var_110, 
            arg2, arg3);
        int64_t var_100;
        int64_t var_128_1 = var_100;
        var_138 = var_110;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&var_150, &var_138);
    }
    arg1[1] = result;
    *arg1 = var_150;
    return result;
}
