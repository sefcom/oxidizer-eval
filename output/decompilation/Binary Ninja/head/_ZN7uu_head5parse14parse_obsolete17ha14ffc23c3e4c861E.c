
  int64_t* uu_head::parse::parse_obsolete::ha14ffc23c3e4c861(int64_t* arg1, char* arg2, void* arg3)

{
    int64_t r13;
    int64_t var_20 = r13;
    int64_t var_50 = 0;
    char* var_60 = arg2;
    void* var_58 = arg2 + arg3;
    int32_t rdx = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
    int64_t rax_1;
    int32_t rdx_1;
    
    if (rdx == 0x2d)
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
    
    if (rdx != 0x2d || rdx_1 - 0x30 > 9)
        *arg1 = 0;
    else
    {
        int64_t rbp_1 = rax_1;
        int64_t rax_2;
        int32_t i_2;
        rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
        int32_t i_1;
        
        if (i_2 != 0x110000)
        {
            r13 = rax_2;
            i_1 = i_2;
            
            if (i_2 - 0x30 <= 9)
            {
                int64_t rax_5;
                int32_t i_3;
                rax_5 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
                
                if (i_3 != 0x110000)
                {
                    i_1 = i_3;
                    int32_t i;
                    
                    do
                    {
                        rbp_1 = r13;
                        r13 = rax_5;
                        
                        if (i_1 - 0x30 >= 0xa)
                            goto label_4be35b;
                        
                        rax_5 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_60);
                        i_1 = i;
                    } while (i != 0x110000);
                }
                
                i_1 = 0;
                rbp_1 = r13;
            }
        }
        else
            i_1 = 0;
        
        label_4be35b:
        int64_t var_48 = 1;
        int64_t var_40_1 = rbp_1;
        char var_38_1 = 0;
        void* rax_7;
        int64_t rdx_4;
        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::h3fe2ad0e36dabac9(&var_48, arg2, arg3);
        uu_head::parse::process_num_block::h8e5bdc2257d4c6b6(arg1, rax_7, rdx_4, i_1, &var_60, r13);
    }
    
    return arg1;
}
