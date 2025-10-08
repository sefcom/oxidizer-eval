
  fn uu_dd::parseargs::parse_bytes_no_x::h5472f4e3f9be4cac(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut i8, arg5: u64) -> i64

{
    let var_50: i16 = 0x101;
    let var_4e: i8 = 0;
    let mut var_70: i64 = 0;
    let var_60: i64 = 0;
    let mut rax: i8;
    let mut rdx: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::find::h6461d5410b9c813f(arg4, arg5);
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::hd52c4edbc17dbe8d(arg4, arg5, 0x77);
    let mut rax_2: i8;
    let mut rdx_2: i64;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::rfind::hd52c4edbc17dbe8d(arg4, arg5, 0x62);
    let mut result: i64;
    let mut var_a0: i64;
    let result_1: i64;
    let mut rax_3: i64;
    let mut rcx_1: i64;
    let mut r14_1: *mut i64;
    
    if (rax & 1) != 0
    {
        if (rax_1 & 1) == 0 && (rax_2 & 1) == 0
        {
            uu_dd::parseargs::parse_bytes_only::h06067fef7da3f98f(&var_a0, arg4, arg5, rdx);
            rcx_1 = var_a0;
            result = result_1;
            
            if rcx_1 != 0xe
            {
                goto 'label_48e2e7;
            }
            
            r14_1 = arg1;
            rax_3 = result * 1;
            
            if (result * 1) >> 0x40 == {0}
            {
                goto 'label_48e2d0;
            }
            
            goto 'label_48e355;
        }
        
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&arg1[1], arg2, arg3);
        *arg1 = 7;
    }
    else if (rax_1 & 1) == 0
    {
        if (rax_2 & 1) == 0
        {
            uucore::features::parser::parse_size::Parser::parse_u64::hc6a4e82bc9fca0a2(&var_a0, 
                &var_70, arg4, arg5);
            let rax_4: i64 = var_a0;
            let mut result_2: i64;
            
            if rax_4 == 2
            {
                result_2 = -1;
                r14_1 = arg1;
            }
            else
            {
                r14_1 = arg1;
                
                if rax_4 != 4
                {
                    let mut var_48: i128;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_48, arg2, arg3);
                    let var_38: i64;
                    r14_1[3] = var_38;
                    *r14_1.byte_offset(8) = var_48;
                    *r14_1 = 0xd;
                    return core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::haf9c715b0b3262bc(&var_a0);
                }
                
                result_2 = result_1;
            }
            
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::haf9c715b0b3262bc(&var_a0);
            rax_3 = result_2 * 1;
            
            if (result_2 * 1) >> 0x40 == {0}
            {
                goto 'label_48e2d0;
            }
            
            goto 'label_48e355;
        }
        
        uu_dd::parseargs::parse_bytes_only::h06067fef7da3f98f(&var_a0, arg4, arg5, rdx_2);
        rcx_1 = var_a0;
        result = result_1;
        
        if rcx_1 != 0xe
        {
            'label_48e2e7:
            let var_90: i128;
            *arg1.byte_offset(0x10) = var_90;
            *arg1 = rcx_1;
            arg1[1] = result;
        }
        else
        {
            r14_1 = arg1;
            rax_3 = result * 0x200;
            
            if (result * 0x200) >> 0x40 == {0}
            {
                'label_48e2d0:
                r14_1[1] = rax_3;
                result = 0xe;
                *r14_1 = result;
            }
            else
            {
                'label_48e355:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&r14_1[1], arg2, arg3);
                result = 8;
                *r14_1 = result;
            }
        }
    }
    else
    {
        if (rax_2 & 1) == 0
        {
            uu_dd::parseargs::parse_bytes_only::h06067fef7da3f98f(&var_a0, arg4, arg5, rdx_1);
            rcx_1 = var_a0;
            result = result_1;
            
            if rcx_1 != 0xe
            {
                goto 'label_48e2e7;
            }
            
            r14_1 = arg1;
            rax_3 = result * 2;
            
            if (result * 2) >> 0x40 != {0}
            {
                goto 'label_48e355;
            }
            
            goto 'label_48e2d0;
        }
        
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&arg1[1], arg2, arg3);
        *arg1 = 7;
    }
    result
}
