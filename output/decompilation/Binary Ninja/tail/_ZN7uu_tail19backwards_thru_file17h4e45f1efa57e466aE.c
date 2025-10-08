
  char uu_tail::backwards_thru_file::h4e45f1efa57e466a(int32_t* arg1, int64_t arg2, char arg3)

{
    int64_t var_a0 = arg2;
    int64_t var_d0 = 0;
    void var_80;
    uu_tail::chunks::ReverseChunks::new::h6119ac2ef47f2bfc(&var_80, arg1);
    int64_t i_1;
    _$LT$uu_tail..chunks..ReverseChunks$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1198ad157f2d09d4(&i_1, &var_80);
    int64_t i = i_1;
    char result = -(i);
    
    if (-(i) != -0x8000000000000000)
    {
        int64_t rbp_1 = 0;
        result = 0;
        
        do
        {
            void* var_90;
            int64_t var_88;
            void* rcx_1 = var_90 + var_88;
            void* var_f0 = var_90;
            char var_d8 = arg3;
            int64_t rdx;
            rdx = !var_88;
            rdx |= result;
            
            if (!(rdx & 1) && *(rcx_1 - 1) == arg3)
                memchr::arch::generic::memchr::Iter::next_back::h8b6e16488b52dba2(&var_f0, &var_d8);
            
            void* rax_2 = var_f0;
            void* var_b8_1 = rcx_1;
            char var_b0 = var_d8;
            int32_t var_d7;
            int32_t var_af_1 = var_d7;
            int16_t var_d3;
            int16_t var_ab_1 = var_d3;
            char var_d1;
            char var_a9_1 = var_d1;
            void* var_c8 = rax_2;
            void* var_c0_1 = var_90;
            
            while (true)
            {
                char rax_3;
                int64_t rdx_6;
                rax_3 = memchr::arch::generic::memchr::Iter::next_back::h8b6e16488b52dba2(&var_c8, 
                    &var_b0);
                
                if (!(rax_3 & 1))
                    break;
                
                rbp_1 += 1;
                var_d0 = rbp_1;
                
                if (rbp_1 >= arg2)
                {
                    if (rbp_1 == arg2)
                    {
                        char rax_4;
                        int64_t rdx_8;
                        rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 2, rdx_6 + 1);
                        core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_4, rdx_8);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd2297b40d9b55d99(i, var_90);
                    }
                    
                    int64_t var_60 = 0;
                    core::panicking::assert_failed::h44a849fd8057adff(0, &var_d0, &var_a0, &var_60);
                    /* no return */
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd2297b40d9b55d99(i, var_90);
            _$LT$uu_tail..chunks..ReverseChunks$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1198ad157f2d09d4(&i_1, &var_80);
            i = i_1;
            result = 1;
        } while (i != -0x8000000000000000);
    }
    
    return result;
}
