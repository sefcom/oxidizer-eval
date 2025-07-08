
  fn uu_sort::tokenize_default::hbd8e160b62a3efd1(arg1: i64, arg2: i64, arg3: *mut i64) -> i64

{
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg3, 0, 0);
    let mut var_40: i64 = arg1;
    let var_38: i64 = arg1 + arg2;
    let var_30: i64 = 0;
    let mut rcx: i32;
    rcx = 1;
    
    loop
    {
        let rbp_1: i8 = rcx;
        let mut rax_1: i64;
        let mut rdx: i32;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_40);
        
        if rdx == 0x20
        {
            'label_520c1f:
            rcx = 1;
            
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
                goto 'label_520c1f;
            }
            
            rcx = 0;
            
            if rdx < 0x80
            {
                continue;
            }
            else
            {
                rcx = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdx);
                
                if ((rbp_1 | !rcx) & 1) != 0
                {
                    continue;
                }
            }
        }
        
        let rcx_1: i64 = arg3[2];
        
        if rcx_1 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        *((rcx_1 << 4) + arg3[1] - 8) = rax_1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg3, rax_1, 0);
        rcx = 1;
    }
    
    let rax_3: i64 = arg3[2];
    
    if rax_3 == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let result: i64 = rax_3 << 4;
    *(result + arg3[1] - 8) = arg2;
    result
}
