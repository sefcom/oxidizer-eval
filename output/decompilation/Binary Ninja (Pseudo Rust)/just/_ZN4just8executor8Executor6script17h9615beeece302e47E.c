
  fn just::executor::Executor::script::h9615beeece302e47(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64) -> i64

{
    let mut var_b0: i64 = 0;
    let var_a8: i64 = 1;
    let result: i64 = 0;
    let r15_2: i64 = (arg5 << 5) + arg4;
    let mut var_70: i64 = arg4;
    let var_68: i64 = r15_2;
    let var_60: i8 = 0;
    let rax: i64 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h3e47d29e0f7959a7(&var_70);
    let mut i_6: *mut c_void;
    let mut rdx_1: i64;
    let mut i_5: *mut c_void;
    
    if arg2 != 0
    {
        i_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h558ebd0999430957(rax, arg6, arg7);
        i_5 = i_6;
        i_6 = rdx_1 == 0;
    }
    
    let mut i_1: i64;
    
    if arg2 != 0 && (i_5 == 0 | i_6) == 0
    {
        let r15_5: *mut c_void = rdx_1 * 0x18 + i_5;
        let mut i_3: *mut c_void = i_5.byte_offset(0x18);
        i_1 = 0;
        let mut i: *mut c_void;
        
        do
        {
            i = i_3;
            
            if just::shebang::Shebang::include_shebang_line::hfb1111885aa0823a(arg2, arg3) != 0
            {
                let rsi_5: i64 = *i_5.byte_offset(8);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_b0, rsi_5, *i_5.byte_offset(0x10) + rsi_5);
            }
            
            alloc::string::String::push::h0ede46164189e411(&var_b0, 0xa);
            i_1 += 1;
            i_3 = i.byte_offset(0x18);
            
            if i == r15_5
            {
                i_3 = i;
            }
            
            if i == r15_5
            {
                break;
            }
            
            i_5 = i;
        } while i != 0;
    }
    else
    {
        i_1 = 0;
    }
    
    core::iter::traits::iterator::Iterator::zip::h8b9e58f090f14a2c(&var_70, arg4, r15_2, arg6, 
        arg7);
    let mut i_2: i64 = i_1;
    let mut i_4: i64 = i_1;
    let mut rbx_1: *mut c_void;
    let mut r15_3: *mut c_void;
    
    for ; i_1 != 0; i_1 = i_2
    {
        i_2 = 0;
        let mut rax_1: *mut c_void;
        let mut rdx_5: *mut c_void;
        rax_1 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::nth::haeea1dad52411e3c(&var_70, i_1);
        r15_3 = rax_1;
        rbx_1 = rdx_5;
        
        if rax_1 == 0
        {
            goto 'label_667ee1;
        }
        
        'label_667e50:
        
        if i_4 < *r15_3.byte_offset(0x18)
        {
            'label_667e5e:
            alloc::string::String::push::h0ede46164189e411(&var_b0, 0xa);
            i_4 += 1;
            
            if i_4 < *r15_3.byte_offset(0x18)
            {
                goto 'label_667e5e;
            }
        }
        
        let rsi_2: i64 = *rbx_1.byte_offset(8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb25a112a407b21ec(&var_b0, rsi_2, *rbx_1.byte_offset(0x10) + rsi_2);
        alloc::string::String::push::h0ede46164189e411(&var_b0, 0xa);
        i_4 += 1;
    }
    
    let mut rax_2: *mut c_void;
    let mut rdx_6: *mut c_void;
    rax_2 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h4686d31f18b82adf(&var_70);
    r15_3 = rax_2;
    rbx_1 = rdx_6;
    
    if rax_2 != 0
    {
        goto 'label_667e50;
    }
    
    'label_667ee1:
    arg1[1] = result;
    *arg1 = var_b0;
    result
}
