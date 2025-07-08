
  fn uu_sort::numeric_str_cmp::numeric_str_cmp::h462d5662bf6f9278(arg1: *mut i64, arg2: *mut i64) -> i8

{
    let mut rax: *mut i64 = arg1[2];
    let r9: *mut i64 = arg2[2];
    let r15: i8 = rax[1];
    let rcx: i8 = r9[1];
    
    if r15 != rcx
    {
        return (0 - 0) | 1;
    }
    
    let r8_1: i64 = *arg1;
    let rdi: i64 = arg1[1];
    let rcx_1: i64 = *arg2;
    let rdx_1: i64 = arg2[1];
    let mut rsi: i64;
    let mut temp0_1: i64;
    
    if rdx_1 != 0 && rdi != 0
    {
        rsi = *r9;
        temp0_1 = *rax;
    }
    
    if rdx_1 == 0 || rdi == 0 || temp0_1 == rsi
    {
        let mut var_40: i64 = r8_1;
        let var_38_1: i64 = rdi + r8_1;
        let mut var_30: i64 = rcx_1;
        let var_28_1: i64 = rdx_1 + rcx_1;
        
        loop
        {
            let rax_2: i32 =
                core::iter::traits::iterator::Iterator::try_fold::h31e394c0050656fe(&var_40);
            rax = core::iter::traits::iterator::Iterator::try_fold::h31e394c0050656fe(&var_30);
            
            if rax_2 == 0x110000
            {
                if rax == 0x30
                {
                    if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h197dcbabd20ebd5c(core::iter::traits::iterator::Iterator::try_fold::h06b3cdfc65d0e745(&var_30))
                        != 0
                    {
                        rax = nullptr;
                    }
                    else
                    {
                        rax = 0xff;
                    }
                }
                else if rax != 0x110000
                {
                    rax = 0xff;
                }
                else
                {
                    rax = nullptr;
                }
                
                break;
            }
            
            if rax == 0x110000
            {
                rax = 1;
                
                if rax_2 == 0x30
                {
                    rax = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h197dcbabd20ebd5c(core::iter::traits::iterator::Iterator::try_fold::h38cf5fff87cdbaf2(
                        &var_40)) ^ 1;
                }
                
                break;
            }
            
            if rax_2 != rax
            {
                rax = 0 - 0;
                goto 'label_570e5d;
            }
        }
    }
    else
    {
        rax = temp0_1 < rsi;
        rax = -(rax);
        'label_570e5d:
        rax |= 1;
    }
    
    let result: i8 = rax;
    rax = -(rax);
    
    if r15 != 0
    {
        return result;
    }
    
    rax
}
