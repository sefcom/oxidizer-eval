
  int64_t uu_more::Pager::draw_lines::h890a8f2ebbed6d60(void* arg1, int64_t* arg2)

{
    char const (** rax)[0x81] = crossterm::command::write_command_ansi::h0432cd0c76b6eef8(arg2, 4);
    
    if (!rax)
        rax = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(
            arg2);
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(rax);
    *(arg1 + 0x38) = 0;
    int64_t var_e8 = 0;
    int64_t var_e0 = 8;
    int64_t var_d8 = 0;
    int64_t rax_1 = *(arg1 + 8);
    int64_t rcx = *(arg1 + 0x10);
    int64_t rbp = *(arg1 + 0x18);
    int64_t var_d0 = rax_1;
    int64_t var_c8 = rax_1 + rcx * 0x18;
    int64_t var_c0 = rbp;
    uint64_t r13 = *(arg1 + 0x40);
    
    if (r13)
    {
        if (!*(arg1 + 0x43))
        {
            while (true)
            {
                int64_t rsi_4 = var_c0;
                int64_t rax_3;
                
                if (!rsi_4)
                {
                    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&var_d0);
                    
                    if (!rax_3)
                        break;
                }
                else
                {
                    var_c0 = 0;
                    rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&var_d0, rsi_4);
                    
                    if (!rax_3)
                        break;
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&var_e8, rax_3);
                
                if (var_d8 >= r13)
                    goto label_4dd5d7;
            }
        }
        else
        {
            char r15_1 = 0;
            int64_t r12_1 = 0;
            
            while (true)
            {
                int64_t rsi_2 = var_c0;
                void* rax_2;
                
                if (!rsi_2)
                {
                    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7d914e41eb33abbb(&var_d0);
                    
                    if (!rax_2)
                        break;
                }
                else
                {
                    var_c0 = 0;
                    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::heaaa124de6da709e(&var_d0, rsi_2);
                    
                    if (!rax_2)
                        break;
                }
                
                if (*(rax_2 + 0x10))
                {
                    if (r15_1 & 1)
                        r15_1 = 0;
                    
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&var_e8, rax_2);
                }
                else if (!(r15_1 & 1))
                {
                    r15_1 = 1;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h5fd45dac51916011(&var_e8, rax_2);
                }
                else
                {
                    r12_1 += 1;
                    *(arg1 + 0x38) = r12_1;
                    rbp += 1;
                    *(arg1 + 0x18) = rbp;
                }
                
                if (var_d8 >= r13)
                    goto label_4dd5d7;
            }
        }
        
        *(arg1 + 0x18) = *(arg1 + 0x30);
    }
    
    label_4dd5d7:
    void var_68;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::ha758e961b2d597f5(&var_68, &var_e8);
    
    for (int64_t i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&var_68); i; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5c8297444801790(&var_68))
    {
        int64_t i_1 = i;
        int64_t* var_78 = &i_1;
        int64_t (* var_70_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h11343ef90598214f;
        char const (** const var_a8)[0xa7] = &data_562a38;
        int64_t var_a0_1 = 2;
        int64_t var_88_1 = 0;
        int64_t** var_98_1 = &var_78;
        int64_t var_90_1 = 1;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::h94c131af24f37af4(&var_48, &var_a8);
        var_a8 = var_48;
        uint64_t var_38;
        uint64_t var_98_2 = var_38;
        core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(
            arg2, var_a0_1, var_38));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_a8);
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h28fddf8dcd9d6d5f(&var_68);
}
