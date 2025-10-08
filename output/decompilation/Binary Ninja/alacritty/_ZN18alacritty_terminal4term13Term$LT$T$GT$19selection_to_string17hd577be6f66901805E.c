
  void alacritty_terminal::term::Term$LT$T$GT$::selection_to_string::hd577be6f66901805(int128_t* arg1, void* arg2)

{
    int64_t var_80;
    
    if (*(arg2 + 0x280) != 2)
        alacritty_terminal::selection::Selection::to_range::h2a26a8fa10c1a05c(&var_80, 
            arg2 + 0x258, arg2);
    
    char var_60;
    
    if (*(arg2 + 0x280) == 2 || var_60 == 2)
    {
        *arg1 = -0x8000000000000000;
        return;
    }
    
    int64_t r12_1 = var_80;
    int32_t var_78;
    int32_t r13_1 = var_78;
    int64_t var_98 = 0;
    int64_t var_90_1 = 1;
    int64_t* var_88_1 = nullptr;
    uint32_t rax_2 = *(arg2 + 0x288);
    int64_t* var_70;
    int32_t var_68;
    
    if (rax_2 == 3)
    {
        alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(&var_80, arg2, 
            r12_1, r13_1, var_70, var_68);
        int128_t var_48;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_48, &var_80, "\n");
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_98);
        int64_t* var_38;
        var_88_1 = var_38;
        var_98 = var_48;
    }
    else if (rax_2 != 1)
    {
        alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(&var_80, arg2, 
            r12_1, r13_1, var_70, var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_98);
        var_88_1 = var_70;
        var_98 = var_80;
    }
    else
    {
        int32_t r15_1 = var_68;
        
        if (r13_1 > var_68)
            r15_1 = r13_1;
        
        while (r15_1 != r13_1)
        {
            alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(&var_80, 
                arg2, r13_1, r12_1, var_70, r12_1);
            int64_t rax_3;
            int64_t rdx_3;
            rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hea7d013d5dc126f6(var_78, 
                var_70);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_98, rax_3, rdx_3 + rax_3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_80);
            r13_1 += 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_98, "\n", &data_4f7795[0xaf]);
        }
        
        alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(&var_80, arg2, 
            var_68, r12_1, var_70, 1);
        int64_t rax_6;
        int64_t rdx_8;
        rax_6 =
            core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hea7d013d5dc126f6(var_78, var_70);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_98, rax_6, rdx_8 + rax_6);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_80);
    }
    arg1[1] = var_88_1;
    *arg1 = var_98;
}
