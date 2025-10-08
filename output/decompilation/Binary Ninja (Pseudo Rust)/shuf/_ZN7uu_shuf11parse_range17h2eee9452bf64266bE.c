
  fn uu_shuf::parse_range::h2eee9452bf64266b(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_40: *mut i8;
    let rdx: i64;
    core::str::_$LT$impl$u20$str$GT$::split_once::h879d31c8ba3e2bc2(&var_40, arg2, rdx);
    let rsi: *mut i8 = var_40;
    let mut result: i64;
    
    if rsi == 0
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6d7e89e89902d216(&arg1[1], "missing '-'", 0xb);
        *arg1 = 1;
    }
    else
    {
        let mut var_68: i8;
        let var_38: i64;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_68, rsi, 
            var_38);
        
        if var_68 != 0
        {
            'label_469023:
            let var_67: i8;
            let mut var_69: i8 = var_67;
            let mut var_58: i128;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h546dbc70de56d72b(
                &var_58, &var_69);
            let result_1: i64;
            result = result_1;
            *arg1.byte_offset(8) = var_58;
            arg1[3] = result;
            *arg1 = 1;
        }
        else
        {
            let var_30: *mut i8;
            let var_28: i64;
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_68, 
                var_30, var_28);
            
            if var_68 == 1
            {
                goto 'label_469023;
            }
            
            let var_60: i64;
            let mut rdx_3: i64;
            rdx_3 = var_60 != var_60 + 1;
            
            if (var_60 > var_60 & rdx_3) != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6d7e89e89902d216(&arg1[1], "start exceeds endmissing '-'", 0x11);
                result = 1;
            }
            else
            {
                arg1[1] = var_60;
                arg1[2] = var_60;
                arg1[3] = 0;
                result = 0;
            }
            
            *arg1 = result;
        }
    }
    
    result
}
