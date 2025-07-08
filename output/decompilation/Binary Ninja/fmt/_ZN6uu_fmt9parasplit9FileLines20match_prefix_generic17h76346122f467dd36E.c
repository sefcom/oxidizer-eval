
  int64_t uu_fmt::parasplit::FileLines::match_prefix_generic::h76346122f467dd36(int64_t arg1, uint64_t arg2, char* arg3, void* arg4, char arg5)

{
    char result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(arg3, 
        arg4, arg1, arg2);
    
    if (result || arg5)
        return result;
    
    char* var_48 = arg3;
    int64_t var_40_1 = arg3 + arg4;
    int64_t var_38_1 = 0;
    void* rax_1;
    int32_t i_2;
    rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
    
    if (i_2 != 0x110000)
    {
        void* r13 = rax_1;
        int32_t i_1 = i_2;
        int32_t i;
        
        do
        {
            void* rax_3;
            int64_t rdx_2;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r13, arg3, arg4);
            
            if (!rax_3)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(arg3, arg4, r13, arg4);
                /* no return */
            }
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfb67edc00a317262(rax_3, 
                    rdx_2, arg1, arg2))
                return 1;
            
            if (i_1 - 9 >= 5 && i_1 != 0x20)
            {
                if (i_1 < 0x80)
                    break;
                
                if (!core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(i_1))
                    break;
            }
            
            void* rax_2;
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_48);
            r13 = rax_2;
            i_1 = i;
        } while (i != 0x110000);
    }
    
    return 0;
}
