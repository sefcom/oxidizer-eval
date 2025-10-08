
  fn uu_cp::backup_dest::hdc34a5fbd97a8cc7(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64, arg6: i32) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut result: i64;
    
    if arg6 == 0
    {
        let mut rdx_1: i64;
        result = std::fs::copy::h705af7a8cd89b11d(arg2, arg3, arg4);
        
        if (result & 1) == 0
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc9b93e2d5549764d(&arg1[1], arg4, arg5);
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = rdx_1;
        }
    }
    else
    {
        result = std::fs::rename::h4347bfdced64b0f6(arg2, arg3, arg4);
        
        if result == 0
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc9b93e2d5549764d(&arg1[1], arg4, arg5);
            *arg1 = -0x7ffffffffffffff4;
        }
        else
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
    }
    
    result
}
