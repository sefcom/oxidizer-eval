
  int64_t* uu_du::parse_depth::hceb993b72658530c(int64_t* arg1, char* arg2, uint64_t arg3, char arg4, int64_t arg5 @ rax)

{
    int64_t rax_1;
    int64_t rcx;
    
    if (!arg2)
    {
        rcx = 0;
        label_498a87:
        arg1[1] = rcx;
        arg1[2] = arg5;
        rax_1 = 0;
    }
    else
    {
        char var_40;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_40, arg2, 
            arg3);
        int64_t var_38;
        
        if (!var_40)
        {
            if (!arg4)
            {
                arg5 = var_38;
                rcx = 1;
                goto label_498a87;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_38, arg2, arg3);
            var_40 = 1;
        }
        else if (arg4)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_38, arg2, arg3);
            var_40 = 1;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hac1b67b8d5e5f2cf(&var_38, arg2, arg3);
            var_40 = 0;
        }
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h8a707cc2bcbdfcb0(&var_40);
        arg1[2] = &data_545d90;
        rax_1 = 1;
    }
    *arg1 = rax_1;
    return arg1;
}
