
  void** uu_fmt::linebreak::break_knuth_plass::hf150f6a90b010d55(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_58 = arg1;
    int64_t var_50 = arg2;
    int64_t rax;
    int64_t rdx;
    rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0c34312a4b925c00(arg1);
    void var_48;
    uu_fmt::linebreak::find_kp_breakpoints::h79846ee711f881cb(&var_48, rax, rdx, arg3);
    int64_t var_40;
    int64_t var_a8 = var_40;
    int64_t var_38;
    int64_t var_a0 = (var_38 << 4) + var_40;
    int64_t rax_2 = arg3[3];
    int128_t var_90 = *(arg3 + 8);
    int64_t var_78 = rax_2;
    int64_t* var_70 = &var_58;
    char var_68;
    core::iter::traits::double_ended::DoubleEndedIterator::try_rfold::haf3d46e0f2661060(&var_68, 
        &var_a8, &var_90);
    void** result;
    void** result_1;
    
    if (!var_68)
    {
        var_a8 = var_58;
        void* rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_a8);
        char var_66;
        
        if (!rax_3)
        {
            label_4bb804:
            int64_t* rdi_9 = arg3[3];
            int64_t rax_7 = rdi_9[2];
            
            if (*rdi_9 - rax_7 <= 1)
                result = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(rdi_9, "\n   /home/34r7hm4n/.cargo/regis…", 1);
            else
            {
                rdi_9[1][rax_7] = 0xa;
                rdi_9[2] = rax_7 + 1;
                result = nullptr;
            }
        }
        else if (!var_66)
        {
            label_4bb72d:
            char var_67;
            uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(&var_90, var_66, *(rax_3 + 0x10), 
                *(rax_3 + 0x18), *(rax_3 + 0x20), arg3[6], *(rax_3 + 0x3a), *(rax_3 + 0x38), 
                var_67);
            char rbp_2 = *(rax_3 + 0x39);
            void** result_3 = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(*var_90[8], 
                &arg3[6], var_90, arg3[3]);
            result = result_3;
            
            if (!result_3)
            {
                while (true)
                {
                    void* rax_5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_a8);
                    
                    if (!rax_5)
                        break;
                    
                    uu_fmt::linebreak::slice_if_fresh::h6f9344101bcdf0b0(&var_90, 0, 
                        *(rax_5 + 0x10), *(rax_5 + 0x18), *(rax_5 + 0x20), arg3[6], 
                        *(rax_5 + 0x3a), *(rax_5 + 0x38), rbp_2);
                    rbp_2 = *(rax_5 + 0x39);
                    void** result_4 = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(
                        *var_90[8], &arg3[6], var_90, arg3[3]);
                    result = result_4;
                    
                    if (result_4)
                        goto label_4bb845;
                }
                
                goto label_4bb804;
            }
        }
        else
        {
            void** result_2 =
                uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(arg3[1], arg3[2], arg3[3]);
            result = result_2;
            
            if (!result_2)
                goto label_4bb72d;
        }
    }
    else
        result = result_1;
    label_4bb845:
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$uu_fmt..parasplit..WordInfo$C$bool$RP$$GT$$GT$::hf54e8bc578902a10(&var_48);
    return result;
}
