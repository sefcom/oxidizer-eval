
  fn alacritty_terminal::term::Term$LT$T$GT$::selection_to_string::hd577be6f66901805(arg1: *mut i128, arg2: *mut c_void)

{
    let mut var_80: i64;
    
    if *arg2.byte_offset(0x280) != 2
    {
        alacritty_terminal::selection::Selection::to_range::h2a26a8fa10c1a05c(&var_80, 
            arg2.byte_offset(0x258), arg2);
    }
    
    let var_60: i8;
    
    if *arg2.byte_offset(0x280) == 2 || var_60 == 2
    {
        *arg1 = -0x8000000000000000;
        return;
    }
    
    let r12_1: i64 = var_80;
    let var_78: i32;
    let mut r13_1: i32 = var_78;
    let mut var_98: i64 = 0;
    let var_90_1: i64 = 1;
    let mut var_88_1: *mut i64 = nullptr;
    let rax_2: u32 = *arg2.byte_offset(0x288);
    let var_70: *mut i64;
    let var_68: i32;
    
    if rax_2 == 3
    {
        alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(&var_80, arg2, 
            r12_1, r13_1, var_70, var_68);
        let mut var_48: i128;
        _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_48, &var_80, "\n");
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_98);
        let var_38: *mut i64;
        var_88_1 = var_38;
        var_98 = var_48;
    }
    else if rax_2 != 1
    {
        alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(&var_80, arg2, 
            r12_1, r13_1, var_70, var_68);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_98);
        var_88_1 = var_70;
        var_98 = var_80;
    }
    else
    {
        let mut r15_1: i32 = var_68;
        
        if r13_1 > var_68
        {
            r15_1 = r13_1;
        }
        
        while r15_1 != r13_1
        {
            alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(&var_80, 
                arg2, r13_1, r12_1, var_70, r12_1 != 0);
            let mut rax_3: i64;
            let mut rdx_3: i64;
            rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hea7d013d5dc126f6(var_78, 
                var_70);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_98, rax_3, rdx_3 + rax_3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_80);
            r13_1 += 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_98, "\n", &data_4f7795[0xaf]);
        }
        
        alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(&var_80, arg2, 
            var_68, r12_1, var_70, 1);
        let mut rax_6: i64;
        let mut rdx_8: i64;
        rax_6 =
            core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hea7d013d5dc126f6(var_78, var_70);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(&var_98, rax_6, rdx_8 + rax_6);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_80);
    }
    arg1[1] = var_88_1;
    *arg1 = var_98;
}
