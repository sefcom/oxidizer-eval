
  fn just::loader::Loader::load::hbf3396d2a4dee187(arg1: *mut i8, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64, arg6: u64) -> u64

{
    let mut r15: i64 = arg5;
    let mut var_140: i64;
    std::fs::read_to_string::hb6ecb2222cef5a14(&var_140, arg5);
    let mut result: u64;
    let mut var_128: i128;
    let mut result_2: i8;
    let var_97: i128;
    
    if !(0 + -(var_140))
    {
        let var_b8_1: i128 = var_140;
        let var_130: i64;
        let var_a8_1: i64 = var_130;
        let mut rax_1: *mut i8;
        let mut rdx_2: i64;
        rax_1 = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
        
        if rax_1 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut rax_2: i64;
        let mut rdx_4: u64;
        rax_2 = std::path::Path::strip_prefix::h70061c692fa4f661(r15, arg6, rax_1);
        
        if rax_2 == 0
        {
            rdx_4 = arg6;
        }
        
        if rax_2 != 0
        {
            r15 = rax_2;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&result_2, r15, rdx_4);
        let var_118_1: i64 = *var_97[0xf];
        var_128 = result_2;
        let mut var_108: i64;
        typed_arena::Arena$LT$T$GT$::alloc_fast_path::h1f3b99d14e4ec411(&var_108, arg2, &var_128);
        let mut rax_4: *mut c_void;
        let var_100: *mut c_void;
        
        if var_108 != -0x8000000000000000
        {
            rax_4 = typed_arena::Arena$LT$T$GT$::alloc_slow_path::h6b47dd704f26473d(arg2);
        }
        else
        {
            rax_4 = var_100;
        }
        let r12_1: i64 = *rax_4.byte_offset(8);
        let r13_1: i64 = *rax_4.byte_offset(0x10);
        let mut var_f0: i64;
        typed_arena::Arena$LT$T$GT$::alloc_fast_path::h21eb0f638a8fb3e5(&var_f0, &arg2[7], 
            &var_140);
        let result_1: u64;
        
        if var_f0 != -0x8000000000000000
        {
            result = typed_arena::Arena$LT$T$GT$::alloc_slow_path::hfb9bbf67b7dfa37d(&arg2[7]);
        }
        else
        {
            result = result_1;
        }
        let zmm0_3: i128 = *(result + 8);
        *arg1.byte_offset(8) = r12_1;
        *arg1.byte_offset(0x10) = r13_1;
        *arg1.byte_offset(0x18) = zmm0_3;
        *arg1 = 0x38;
    }
    else
    {
        let var_138: i64;
        just::loader::Loader::load::_$u7b$$u7b$closure$u7d$$u7d$::h5147053845ac39db(&result_2, r15, 
            arg6, var_138);
        result = result_2;
        var_128 = var_97;
        var_128 = var_97;
        let var_38: i64;
        *arg1.byte_offset(0x60) = var_38;
        let var_48: i128;
        *arg1.byte_offset(0x50) = var_48;
        let var_58: i128;
        *arg1.byte_offset(0x40) = var_58;
        let var_68: i128;
        *arg1.byte_offset(0x30) = var_68;
        let var_78: i128;
        *arg1.byte_offset(0x20) = var_78;
        let mut var_d8_1: i128 = var_128;
        var_d8_1 = var_128;
        *arg1.byte_offset(0x10) = var_d8_1;
        *arg1.byte_offset(1) = var_d8_1;
        *arg1 = result;
    }
    result
}
