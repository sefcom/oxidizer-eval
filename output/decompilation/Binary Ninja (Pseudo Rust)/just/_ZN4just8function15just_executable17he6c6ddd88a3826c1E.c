
  fn just::function::just_executable::he6c6ddd88a3826c1(arg1: *mut i64) -> *mut i64

{
    let mut var_70: i64;
    let rdx: u64 = std::env::current_exe::h5073ac412771085b(&var_70);
    let var_68: i64;
    let mut var_58: i128;
    
    if !(0 + -(var_70))
    {
        var_58 = var_70;
        let var_60: u64;
        let var_48_1: u64 = var_60;
        let r15_1: *mut i8 = *var_58[8];
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_70, r15_1, var_60);
        
        if var_70 != 1
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_70, var_68, var_60);
            let rax_2: i64 = var_70;
            *arg1.byte_offset(0x10) = var_68;
            arg1[1] = rax_2;
            *arg1 = 0;
        }
        else
        {
            just::which::which::_$u7b$$u7b$closure$u7d$$u7d$::h1924a8d8338b238e(&var_70, r15_1, 
                var_60);
            arg1[3] = var_60;
            *arg1.byte_offset(8) = var_70;
            *arg1 = 1;
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_58);
    }
    else
    {
        just::function::just_executable::_$u7b$$u7b$closure$u7d$$u7d$::he401451eae134fec(&var_58, 
            var_68, rdx);
        let var_48: i64;
        let var_28_1: i64 = var_48;
        let zmm0_1: i128 = var_58;
        let var_38_1: i128 = zmm0_1;
        arg1[3] = var_48;
        *arg1.byte_offset(8) = zmm0_1;
        *arg1 = 1;
    }
    arg1
}
