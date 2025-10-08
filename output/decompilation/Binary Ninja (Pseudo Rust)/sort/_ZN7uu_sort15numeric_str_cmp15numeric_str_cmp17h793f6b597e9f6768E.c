
  fn uu_sort::numeric_str_cmp::numeric_str_cmp::h793f6b597e9f6768(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut result: *mut i64 = arg1[2];
    let mut rcx: *mut i64 = arg2[2];
    let r15: u64 = result[1];
    let rdx: u64 = rcx[1];
    
    if r15 != rdx
    {
        rcx = r15 < rdx;
        result = r15 > rdx;
        result -= rcx;
    }
    else
    {
        let r8_1: i64 = *arg1;
        let rdi: i64 = arg1[1];
        let rdx_1: i64 = *arg2;
        let rsi: i64 = arg2[1];
        let mut rcx_1: i64;
        let mut temp0_1: i64;
        let mut cond:2_1: bool;
        
        if rsi != 0 && rdi != 0
        {
            rcx_1 = *rcx;
            temp0_1 = *result;
            cond:2_1 = temp0_1 > rcx_1;
        }
        
        if rsi == 0 || rdi == 0 || temp0_1 == rcx_1
        {
            let mut var_40: i64 = r8_1;
            let var_38_1: i64 = rdi + r8_1;
            let mut var_30: i64 = rdx_1;
            let var_28_1: i64 = rsi + rdx_1;
            
            loop
            {
                let rax: i32 =
                    core::iter::traits::iterator::Iterator::try_fold::hc8d8c18dde86c3ee(&var_40);
                result =
                    core::iter::traits::iterator::Iterator::try_fold::hc8d8c18dde86c3ee(&var_30);
                
                if rax == 0x110000
                {
                    if result == 0x30
                    {
                        if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbebb28a7d7095561(core::iter::traits::iterator::Iterator::try_fold::h075f228b849c1b87(
                            &var_30)) != 0
                        {
                            result = nullptr;
                        }
                        else
                        {
                            result = 0xff;
                        }
                    }
                    else if result != 0x110000
                    {
                        result = 0xff;
                    }
                    else
                    {
                        result = nullptr;
                    }
                    
                    break;
                }
                
                if result == 0x110000
                {
                    result = 1;
                    
                    if rax == 0x30
                    {
                        result = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hbebb28a7d7095561(
                            core::iter::traits::iterator::Iterator::try_fold::h075f228b849c1b87(
                            &var_40)) ^ 1;
                    }
                    
                    break;
                }
                
                let c_1: bool = rax < result;
                let z_1: bool = rax == result;
                
                if !z_1
                {
                    result = !z_1 && !c_1;
                    result = result - 0;
                    break;
                }
            }
        }
        else
        {
            rcx_1 = temp0_1 < rcx_1;
            result = cond:2_1;
            result -= rcx_1;
        }
        
        let rcx_2: u32 = result;
        result = -(result);
        result = result;
        
        if r15 != 0
        {
            return rcx_2;
        }
    }
    
    result
}
