
  fn uu_echo::parse_backslash_number::he56ed8545e2dc3bc(arg1: *mut i64, arg2: i32, arg3: i8) -> *mut i8

{
    let rax: i40;
    let mut var_38: i40 = rax;
    let mut r14: i64;
    
    if arg2 == 0
    {
        r14 = 0;
        'label_4a45cd:
        let rdi_1: u32 = r14;
        *var_38[4] = rdi_1;
        let mut rax_3: i8;
        let mut rdx: i32;
        rax_3 = uu_echo::Base::ascii_to_number::h59ff941f17249d67(rdi_1, arg3);
        
        if (rax_3 & 1) != 0
        {
            let mut rbp: i32 = rdx;
            let cond:0_1: bool = *arg1 != 0;
            *arg1 = 0;
            
            if !cond:0_1
            {
                _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&arg1[2]);
            }
            
            let mut r13: i64;
            r13 = r14 == 0;
            *var_38[3] = 4 - r13;
            r13 |= 2;
            let mut r15: u64;
            r15 = 1;
            let mut result: *mut i8;
            
            do
            {
                r15 = _$LT$u8$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h78b98a6df4caa3d9(r15);
                result = *core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(
                    arg1, &arg1[2]);
                
                if result == 0
                {
                    break;
                }
                
                let mut rdx_1: i8;
                result = uu_echo::Base::ascii_to_number::h59ff941f17249d67(*var_38[4], *result);
                
                if (result & 1) == 0
                {
                    break;
                }
                
                let cond:1_1: bool = *arg1 != 0;
                *arg1 = 0;
                
                if !cond:1_1
                {
                    _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&arg1[2]);
                }
                
                rbp <<= *var_38[3];
                rbp += rdx_1;
            } while r15 < r13;
            
            result = 1;
            return result;
        }
    }
    else
    {
        let rax_2: *mut i8 =
            *core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(arg1, &arg1[2]);
        
        if rax_2 != 0
        {
            arg3 = *rax_2;
            r14 = arg2 != 1;
            goto 'label_4a45cd;
        }
    }
    nullptr
}
