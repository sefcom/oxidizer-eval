
  fn uu_sort::tokenize_default::h6d5287f081d7f5ed(arg1: i64, arg2: i64, arg3: *mut i64) -> i64

{
    alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg3, 0, 0);
    let mut var_48: i64 = arg1;
    let var_40: i64 = arg1 + arg2;
    let var_38: i64 = 0;
    let mut rcx_1: i32;
    rcx_1 = 1;
    
    loop
    {
        let rbp_1: i8 = rcx_1;
        let mut rax_1: i64;
        let mut rdx: i32;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
        
        if rdx == 0x20
        {
            'label_4d2b0f:
            rcx_1 = 1;
            
            if (rbp_1 & 1) != 0
            {
                continue;
            }
        }
        else
        {
            if rdx == 0x110000
            {
                break;
            }
            
            if rdx - 9 < 5
            {
                goto 'label_4d2b0f;
            }
            
            rcx_1 = 0;
            
            if rdx < 0x80
            {
                continue;
            }
            else
            {
                rcx_1 = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdx);
                
                if ((rbp_1 | !rcx_1) & 1) != 0
                {
                    continue;
                }
            }
        }
        
        let rcx_2: i64 = arg3[2];
        
        if rcx_2 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *(arg3[1] + (rcx_2 << 4) - 8) = rax_1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg3, rax_1, 0);
        rcx_1 = 1;
    }
    
    let rax_3: i64 = arg3[2];
    
    if rax_3 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let result: i64 = rax_3 << 4;
    *(arg3[1] + result - 8) = arg2;
    result
}
