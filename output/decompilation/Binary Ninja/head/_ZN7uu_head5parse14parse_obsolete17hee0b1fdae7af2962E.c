
  int64_t* uu_head::parse::parse_obsolete::hee0b1fdae7af2962(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_38 = 0;
    char* var_48 = arg2;
    void* var_40 = &arg2[arg3];
    int64_t rax_1;
    int32_t rdx;
    rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
    int32_t rdx_2;
    
    if (rdx == 0x2d)
        rdx_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48) - 0x30;
    
    if (rdx != 0x2d || rdx_2 > 9)
        *arg1 = -0x7fffffffffffffff;
    else
    {
        int64_t rax_2;
        int32_t r13_1;
        
        do
        {
            int32_t rdx_3;
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
            
            if (rdx_3 == 0x110000)
            {
                r13_1 = 0;
                rax_2 = arg3;
                break;
            }
            
            r13_1 = rdx_3;
        } while (r13_1 - 0x30 < 0xa);
        
        void* rax_3;
        int64_t rdx_5;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_1 + 1, rax_2, arg2, arg3);
        
        if (!rax_3)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_1 + 1, rax_2);
            /* no return */
        }
        
        uu_head::parse::process_num_block::hda0983907d92f9a0(arg1, rax_3, rdx_5, r13_1, &var_48);
    }
    
    return arg1;
}
