
  ssize_t uu_tac::buffer_tac::hf0c4fec0ee1a5c50(int64_t arg1, int64_t arg2, char arg3, int64_t arg4, int64_t arg5)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_e0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t var_108;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb5da74aabfacf130(&var_108, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_e0));
    int128_t var_70;
    memchr::memmem::FinderBuilder::build_reverse::hc825846e9c200c29(&var_70, arg4);
    int128_t var_40;
    int128_t var_a8 = var_40;
    int128_t var_50;
    int128_t var_b8 = var_50;
    int128_t var_60;
    int128_t var_c8 = var_60;
    int128_t var_d8 = var_70;
    int64_t var_98 = 1;
    int64_t var_90 = arg2;
    int64_t var_88 = arg1;
    int64_t var_80 = arg2;
    ssize_t result;
    int64_t var_100;
    int64_t var_f8;
    int64_t r13_1;
    
    if (!arg3)
    {
        r13_1 = arg2;
        
        while (true)
        {
            char rax_5;
            int64_t rdx_6;
            rax_5 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h76b1505eadd4958f(&var_d8);
            
            if (!(rax_5 & 1))
                goto label_5128de;
            
            int64_t rbp_3 = rdx_6 + arg5;
            int64_t rax_6;
            uint64_t rdx_8;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(rbp_3, r13_1, arg1, arg2);
            
            if (rdx_8 >= var_108 - var_f8)
            {
                ssize_t result_2 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_108, rax_6, rdx_8);
                result = result_2;
                r13_1 = rbp_3;
                
                if (result_2)
                    break;
            }
            else
            {
                memcpy(var_100 + var_f8, rax_6, rdx_8);
                var_f8 += rdx_8;
                r13_1 = rbp_3;
            }
        }
    }
    else
    {
        r13_1 = arg2;
        
        while (true)
        {
            char rax_1;
            int64_t rdx_1;
            rax_1 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h76b1505eadd4958f(&var_d8);
            
            if (!(rax_1 & 1))
            {
                label_5128de:
                core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h3d1f7cc021b2545a(
                    &var_d8);
                int64_t rax_8;
                uint64_t rdx_12;
                rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, r13_1, arg1, arg2);
                
                if (rdx_12 >= var_108 - var_f8)
                {
                    ssize_t result_3 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_108, rax_8, rdx_12);
                    result = result_3;
                    
                    if (!result_3)
                        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_108);
                }
                else
                {
                    memcpy(var_100 + var_f8, rax_8, rdx_12);
                    int64_t var_f8_1 = rdx_12 + var_f8;
                    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_108);
                }
                
                goto label_512939;
            }
            
            int64_t rax_2;
            uint64_t rdx_3;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(rdx_1, r13_1, arg1, arg2);
            
            if (rdx_3 >= var_108 - var_f8)
            {
                ssize_t result_1 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_108, rax_2, rdx_3);
                r13_1 = rdx_1;
                
                if (result_1)
                {
                    result = result_1;
                    break;
                }
            }
            else
            {
                memcpy(var_100 + var_f8, rax_2, rdx_3);
                var_f8 += rdx_3;
                r13_1 = rdx_1;
            }
        }
    }
    core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h3d1f7cc021b2545a(&var_d8);
    label_512939:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h906e82980bfe4b9c(&var_108);
    return result;
}
