
  uint64_t uu_fmt::parasplit::FileLines::match_prefix_generic::hd0d8d5b446adcff4(int64_t arg1, uint64_t arg2, char* arg3, int64_t arg4, char arg5)

{
    int32_t rax = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb830fba2111df73f(arg3, 
        arg4, arg1, arg2);
    int32_t rbp_1;
    
    if (!(arg5 | rax))
    {
        char* var_48 = arg3;
        void* var_40_1 = &arg3[arg4];
        int64_t var_38_1 = 0;
        int64_t rax_2;
        int32_t i_2;
        rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
        
        if (i_2 != 0x110000)
        {
            int64_t r13_1 = rax_2;
            int32_t i_1 = i_2;
            int32_t i;
            
            do
            {
                void* rax_5;
                int64_t rdx_3;
                rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13_1, arg3, arg4);
                
                if (!rax_5)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, r13_1, arg4);
                    /* no return */
                }
                
                int32_t rax_6 =
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb830fba2111df73f(
                    rax_5, rdx_3, arg1, arg2);
                rbp_1 = rax_6;
                
                if (rax_6)
                    break;
                
                if (i_1 - 9 >= 5 && i_1 != 0x20)
                {
                    if (i_1 < 0x80)
                        break;
                    
                    if (!core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(i_1))
                        break;
                }
                
                int64_t rax_4;
                rax_4 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                r13_1 = rax_4;
                i_1 = i;
            } while (i != 0x110000);
        }
        else
            rbp_1 = 0;
    }
    else
        rbp_1 = rax;
    
    return rbp_1;
}
