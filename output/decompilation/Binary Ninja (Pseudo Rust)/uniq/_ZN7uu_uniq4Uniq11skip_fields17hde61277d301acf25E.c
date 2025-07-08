
  fn uu_uniq::Uniq::skip_fields::hde61277d301acf25(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64) -> i64

{
    if arg2 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(
            arg1, arg4, arg5);
    }
    
    let mut r8: *mut c_void = &arg4[arg5];
    let mut var_78: *mut i8 = arg4;
    let var_70: *mut c_void = r8;
    let mut result: i8;
    let mut var_68: i128;
    
    if arg3 == 0
    {
        'label_4bcde4:
        result = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd1aa47cd5a9c156d(arg1, arg4, r8);
        
        if arg3 != 0
        {
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(
                &var_68);
        }
    }
    else
    {
        let mut r15_1: i64 =
            _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(
            0);
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::ha47f57631c24eb87(&var_78);
        
        if result == 0
        {
            let mut var_48: i128;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf69df60c24087007(&var_48, &var_78, 0);
            let var_38: *mut c_void;
            let var_58_1: *mut c_void = var_38;
            var_68 = var_48;
            
            if var_38 != 0
            {
                arg4 = *var_68[8];
                r8 = var_38.byte_offset(arg4);
                var_78 = arg4;
                let var_70_1: *mut c_void = r8;
                
                if r15_1 >= arg3
                {
                    goto 'label_4bcde4;
                }
                
                loop
                {
                    r15_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r15_1);
                    
                    if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::ha47f57631c24eb87(&var_78) != 0
                    {
                        break;
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hf69df60c24087007(&var_48, &var_78, 0);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(
                        &var_68);
                    let var_58_2: *mut c_void = var_38;
                    var_68 = var_48;
                    
                    if var_38 == 0
                    {
                        break;
                    }
                    
                    arg4 = *var_68[8];
                    r8 = var_38.byte_offset(arg4);
                    var_78 = arg4;
                    let var_70_2: *mut c_void = r8;
                    
                    if r15_1 >= arg3
                    {
                        goto 'label_4bcde4;
                    }
                }
            }
            
            *arg1 = 0;
            arg1[1] = 1;
            arg1[2] = 0;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(
                &var_68);
        }
        
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
    }
    result
}
