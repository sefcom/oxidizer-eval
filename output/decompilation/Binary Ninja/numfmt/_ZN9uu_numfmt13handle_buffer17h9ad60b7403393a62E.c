
  int128_t* uu_numfmt::handle_buffer::h9ad60b7403393a62(int64_t arg1, int64_t* arg2)

{
    int64_t var_68 = arg1;
    int64_t* var_60 = &var_68;
    int64_t var_58 = 0;
    int64_t* var_50;
    int64_t rdx = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cf431a8968d0747(&var_50, &var_60);
    void* var_48;
    void* rax = var_48;
    
    if (rax != -0x7fffffffffffffff)
    {
        int64_t r12_1 = arg2[0x18];
        
        while (true)
        {
            int128_t* result;
            int128_t* var_c0;
            int128_t var_b0;
            int64_t var_a0;
            void* const var_98;
            int128_t* var_40;
            
            if (rax == -0x8000000000000000)
            {
                var_c0 = var_40;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4cabc1d81ea85127(
                    &var_b0, &var_c0, rdx);
                int64_t var_80_2 = var_a0;
                int128_t var_90_1 = var_b0;
                var_98 = nullptr;
                result = alloc::boxed::Box$LT$T$GT$::new::hb050645051cd6aca(&var_98);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf7266ee2a8c411ce(&var_c0);
            }
            else
            {
                int128_t var_90;
                int64_t var_38;
                
                if (var_50 >= r12_1)
                {
                    var_98 = rax;
                    var_90 = var_40;
                    *var_90[8] = var_38;
                    result = uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(var_40, 
                        var_38, arg2);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8713d35d56fb5a34(
                        &var_98);
                    
                    if (!result)
                        goto label_47144a;
                }
                else
                {
                    var_b0 = rax;
                    *var_b0[8] = var_40;
                    var_a0 = var_38;
                    var_c0 = &var_b0;
                    int64_t (* var_b8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_98 = &data_532968;
                    var_90 = 2;
                    int64_t var_78_1 = 0;
                    *var_90[8] = &var_c0;
                    int64_t var_80_1 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&var_98);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8713d35d56fb5a34(
                        &var_b0);
                    label_47144a:
                    rdx = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cf431a8968d0747(&var_50, &var_60);
                    rax = var_48;
                    
                    if (rax == -0x7fffffffffffffff)
                        break;
                    
                    continue;
                }
            }
            return result;
        }
    }
    
    return nullptr;
}
