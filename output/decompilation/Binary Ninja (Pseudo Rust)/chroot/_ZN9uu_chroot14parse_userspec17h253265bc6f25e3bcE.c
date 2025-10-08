
  fn uu_chroot::parse_userspec::h253265bc6f25e3bc(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut var_68: i64;
    let mut result: *mut i64 =
        core::str::_$LT$impl$u20$str$GT$::split_once::ha5f14f7e36c5d4c1(&var_68, arg2, arg3);
    let r14: i64 = var_68;
    let mut r14_1: i64;
    
    if r14 == 0
    {
        r14_1 = -0x8000000000000000;
        
        if arg3 != 0
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&arg1[1], arg2, arg3);
            r14_1 = -0x7fffffffffffffff;
        }
        
        *arg1 = r14_1;
    }
    else
    {
        let var_60: u64;
        let rax: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h05bfd7e2261aa2d8(r14, var_60, 1, 0);
        let var_58: i64;
        let var_50: u64;
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h05bfd7e2261aa2d8(var_58, var_50, 1, 0);
        
        if rax != 0
        {
            r14_1 = -0x8000000000000000;
            
            if result == 0
            {
                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&arg1[1], var_58, var_50);
                r14_1 = -0x7ffffffffffffffe;
            }
            
            *arg1 = r14_1;
        }
        else if result == 0
        {
            let mut var_80: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_80, r14, var_60);
            let mut var_48: i128;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&var_48, var_58, var_50);
            let var_38: i64;
            arg1[5] = var_38;
            *arg1.byte_offset(0x18) = var_48;
            let result_1: *mut i64;
            result = result_1;
            arg1[2] = result;
            *arg1 = var_80;
        }
        else
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f2965073c9f102f(&arg1[1], r14, var_60);
            *arg1 = -0x7fffffffffffffff;
        }
    }
    result
}
