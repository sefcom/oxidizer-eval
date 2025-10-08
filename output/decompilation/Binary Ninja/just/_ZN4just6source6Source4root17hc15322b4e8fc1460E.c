
  int64_t just::source::Source::root::hc15322b4e8fc1460(int128_t* arg1, int64_t arg2, uint64_t arg3)

{
    uint64_t rax = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    int128_t var_80;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, arg2, arg3);
    int64_t result;
    int64_t result_1 = result;
    int128_t zmm0 = var_80;
    int128_t var_68 = zmm0;
    *(rax + 0x10) = result;
    *rax = zmm0;
    int64_t var_50 = 1;
    uint64_t var_48 = rax;
    int64_t var_40 = 1;
    int64_t var_38 = -0x8000000000000000;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, arg2, arg3);
    int128_t zmm0_1 = var_80;
    char* rax_3;
    uint64_t rdx_2;
    rax_3 = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    
    if (!rax_3)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, rax_3, rdx_2);
    *(arg1 + 0x58) = result;
    *(arg1 + 0x48) = var_80;
    *(arg1 + 0x78) = 0;
    *arg1 = var_50;
    arg1[1] = var_40;
    *(arg1 + 0x18) = 0;
    arg1[2] = 8;
    *(arg1 + 0x28) = 0;
    arg1[6] = var_38;
    int64_t var_28;
    arg1[7] = var_28;
    arg1[3] = zmm0_1;
    arg1[4] = result;
    return result;
}
