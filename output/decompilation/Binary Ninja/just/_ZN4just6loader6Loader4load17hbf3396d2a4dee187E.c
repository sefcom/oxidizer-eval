
  uint64_t just::loader::Loader::load::hbf3396d2a4dee187(char* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, uint64_t arg6)

{
    int64_t r15 = arg5;
    int64_t var_140;
    std::fs::read_to_string::hb6ecb2222cef5a14(&var_140, arg5);
    uint64_t result;
    int128_t var_128;
    char result_2;
    int128_t var_97;
    
    if (!(0 + -(var_140)))
    {
        int128_t var_b8_1 = var_140;
        int64_t var_130;
        int64_t var_a8_1 = var_130;
        char* rax_1;
        int64_t rdx_2;
        rax_1 = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
        
        if (!rax_1)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int64_t rax_2;
        uint64_t rdx_4;
        rax_2 = std::path::Path::strip_prefix::h70061c692fa4f661(r15, arg6, rax_1);
        
        if (!rax_2)
            rdx_4 = arg6;
        
        if (rax_2)
            r15 = rax_2;
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&result_2, r15, rdx_4);
        int64_t var_118_1 = *var_97[0xf];
        var_128 = result_2;
        int64_t var_108;
        typed_arena::Arena$LT$T$GT$::alloc_fast_path::h1f3b99d14e4ec411(&var_108, arg2, &var_128);
        void* rax_4;
        void* var_100;
        
        if (var_108 != -0x8000000000000000)
            rax_4 = typed_arena::Arena$LT$T$GT$::alloc_slow_path::h6b47dd704f26473d(arg2);
        else
            rax_4 = var_100;
        int64_t r12_1 = *(rax_4 + 8);
        int64_t r13_1 = *(rax_4 + 0x10);
        int64_t var_f0;
        typed_arena::Arena$LT$T$GT$::alloc_fast_path::h21eb0f638a8fb3e5(&var_f0, &arg2[7], 
            &var_140);
        uint64_t result_1;
        
        if (var_f0 != -0x8000000000000000)
            result = typed_arena::Arena$LT$T$GT$::alloc_slow_path::hfb9bbf67b7dfa37d(&arg2[7]);
        else
            result = result_1;
        int128_t zmm0_3 = *(result + 8);
        *(arg1 + 8) = r12_1;
        *(arg1 + 0x10) = r13_1;
        *(arg1 + 0x18) = zmm0_3;
        *arg1 = 0x38;
    }
    else
    {
        int64_t var_138;
        just::loader::Loader::load::_$u7b$$u7b$closure$u7d$$u7d$::h5147053845ac39db(&result_2, r15, 
            arg6, var_138);
        result = result_2;
        var_128 = var_97;
        var_128 = var_97;
        int64_t var_38;
        *(arg1 + 0x60) = var_38;
        int128_t var_48;
        *(arg1 + 0x50) = var_48;
        int128_t var_58;
        *(arg1 + 0x40) = var_58;
        int128_t var_68;
        *(arg1 + 0x30) = var_68;
        int128_t var_78;
        *(arg1 + 0x20) = var_78;
        int128_t var_d8_1 = var_128;
        var_d8_1 = var_128;
        *(arg1 + 0x10) = var_d8_1;
        *(arg1 + 1) = var_d8_1;
        *arg1 = result;
    }
    return result;
}
