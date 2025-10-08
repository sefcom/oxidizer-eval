
  uint64_t alacritty::renderer::text::atlas::Atlas::load_glyph::hc84a3ea245fb6fcb(int32_t* arg1, int32_t* arg2, int64_t* arg3, int64_t* arg4, int64_t* arg5)

{
    int64_t rbp_1;
    int64_t r14_1;
    
    while (true)
    {
        rbp_1 = *arg4;
        r14_1 = arg3[2];
        
        if (rbp_1 >= r14_1)
            break;
        
        void* r15_1 = arg3[1];
        int64_t rbx_1 = rbp_1 * 0x1b;
        int32_t* r13_2 = r15_1 + rbp_1 + rbx_1;
        int128_t var_6c;
        alacritty::renderer::text::atlas::Atlas::insert::h8c37d2eea1fa4b0a(&var_6c, r13_2, arg5, 
            arg2);
        char var_50;
        uint64_t result;
        
        if (var_50 != 2)
        {
            int128_t zmm0_1 = var_6c;
            result = arg1;
            int128_t var_5c;
            *(result + 0x10) = var_5c;
            *result = zmm0_1;
            return result;
        }
        
        if (var_6c)
        {
            result = *r13_2;
            *arg1 = result;
            __builtin_memset(&arg1[1], 0, 0x19);
            return result;
        }
        
        char rax_3 = *(r15_1 + rbx_1 + rbp_1 + 0x18);
        *arg4 = rbp_1 + 1;
        
        if (rbp_1 + 1 == r14_1)
        {
            void var_4c;
            alacritty::renderer::text::atlas::Atlas::new::hbd21f71ac8ef989e(&var_4c, rax_3);
            *arg2 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6493a9a40798fa41(arg3, &var_4c);
        }
    }
    
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, r14_1);
    /* no return */
}
