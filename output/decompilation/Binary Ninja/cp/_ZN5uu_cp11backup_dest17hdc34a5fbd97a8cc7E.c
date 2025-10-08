
  int64_t uu_cp::backup_dest::hdc34a5fbd97a8cc7(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5, int32_t arg6)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t result;
    
    if (!arg6)
    {
        int64_t rdx_1;
        result = std::fs::copy::h705af7a8cd89b11d(arg2, arg3, arg4);
        
        if (!(result & 1))
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
        
        if (!result)
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
    
    return result;
}
