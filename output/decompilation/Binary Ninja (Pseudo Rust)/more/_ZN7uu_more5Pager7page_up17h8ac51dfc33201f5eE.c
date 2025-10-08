
  fn uu_more::Pager::page_up::h8ac51dfc33201f5e(arg1: *mut c_void) -> u64

{
    let rbx: *mut c_void;
    let var_30: *mut c_void = rbx;
    let rcx: i64 = *arg1.byte_offset(0x50);
    let rax: i64 = *arg1.byte_offset(0x58);
    let mut result: u64 = rax + *arg1.byte_offset(0x78);
    let mut result_1: u64 = -1;
    
    if rax + *arg1.byte_offset(0x78) >= rax
    {
        result_1 = result;
    }
    
    let mut r14_1: i64 = rcx - result_1;
    
    if rcx < result_1
    {
        r14_1 = 0;
    }
    
    *arg1.byte_offset(0x50) = r14_1;
    
    if *arg1.byte_offset(0x81) == 1
    {
        let mut var_48: i64 = 0;
        let var_40_1: i64 = 1;
        let var_38_1: i64 = 0;
        let mut result_2: u64;
        
        if rcx <= result_1
        {
            result_2 = 0;
        }
        else
        {
            let r15_1: i64 = *arg1.byte_offset(0x40);
            let rbp_1: i64 = *arg1.byte_offset(0x48);
            
            loop
            {
                let mut result_3: u64;
                let mut rdx_1: *mut c_void;
                result_3 = uu_more::Pager::seek_to_line::h869c7595a8249d8f(arg1, r14_1);
                
                if result_3 == 0
                {
                    let var_38_2: u64 = 0;
                    
                    if ((*(rbp_1 + 0x80))(r15_1, &var_48) & 1) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h506ca15ca5b86ee2(var_40_1, var_38_2, "\nNext file: %--More--()'. Press…", 1) != 0
                        {
                            let temp3_1: i64 = r14_1;
                            r14_1 -= 1;
                            *arg1.byte_offset(0x50) = r14_1;
                            
                            if temp3_1 != 1
                            {
                                continue;
                            }
                        }
                        
                        result_2 = 0;
                        break;
                    }
                    
                    result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                
                result_2 = result_3;
                break;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::habcac018958bfd8a(&var_48);
        result = result_2;
    }
    
    result
}
