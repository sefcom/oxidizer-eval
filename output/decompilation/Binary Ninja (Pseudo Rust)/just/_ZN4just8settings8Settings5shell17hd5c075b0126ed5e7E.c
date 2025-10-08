
  fn just::settings::Settings::shell::hd5c075b0126ed5e7(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let rcx: i64 = *arg3.byte_offset(0xd8);
    let mut result: i64;
    let mut r14: i64;
    let mut r15: *const i8;
    
    if !(0 + -(*arg3.byte_offset(0xc0)))
    {
        r15 = *arg3.byte_offset(0xc8);
        r14 = *arg3.byte_offset(0xd0);
        
        if rcx != -0x8000000000000000
        {
            result = core::iter::traits::iterator::Iterator::collect::h3abe9a22b7d90a72(&arg1[2], 
                *arg3.byte_offset(0xe0));
        }
        else
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hb39d7af186885eb1(&arg1[2], &data_830e20, 1);
        }
    }
    else if rcx != -0x8000000000000000
    {
        result = core::iter::traits::iterator::Iterator::collect::h3abe9a22b7d90a72(&arg1[2], 
            *arg3.byte_offset(0xe0));
        r14 = 2;
        r15 = "shmodimport?unexport src/justfil…";
    }
    else if *arg2.byte_offset(0x78) != -0x8000000000000000
    {
        r15 = *arg2.byte_offset(0x98);
        r14 = *arg2.byte_offset(0xa0);
        result = core::iter::traits::iterator::Iterator::collect::hbdad450a9838a860(&arg1[2], 
            *arg2.byte_offset(0x80));
    }
    else
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hb39d7af186885eb1(&arg1[2], &data_830e20, 1);
        r14 = 2;
        r15 = "shmodimport?unexport src/justfil…";
    }
    
    *arg1 = r15;
    arg1[1] = r14;
    result
}
