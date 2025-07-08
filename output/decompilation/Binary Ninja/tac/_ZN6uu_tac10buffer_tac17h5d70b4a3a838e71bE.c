
  void** uu_tac::buffer_tac::h5d70b4a3a838e71b(int64_t arg1, int64_t arg2, char arg3, int64_t arg4, int64_t arg5)

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_e0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t var_108;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&var_108, 
        0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_e0));
    char var_d8 = 1;
    int128_t var_70;
    memchr::memmem::FinderBuilder::build_reverse::hb7a1b6dd41e3db97(&var_70, &var_d8, arg4);
    int128_t var_40;
    int128_t var_a8 = var_40;
    int128_t var_50;
    int128_t var_b8 = var_50;
    int128_t var_60;
    int128_t var_c8 = var_60;
    var_d8 = var_70;
    int64_t var_98 = 1;
    int64_t var_90 = arg2;
    int64_t var_88 = arg1;
    int64_t var_80 = arg2;
    void** result;
    int64_t var_100;
    int64_t var_f8;
    int64_t r13;
    
    if (!arg3)
    {
        r13 = arg2;
        
        while (true)
        {
            int64_t rax_5;
            int64_t rdx_5;
            rax_5 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13d123f2f14d62f(&var_d8);
            
            if (!rax_5)
                goto label_59fe16;
            
            int64_t rbx_3 = rdx_5 + arg5;
            int64_t rax_6;
            uint64_t rdx_7;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(rbx_3, r13, arg1, arg2);
            
            if (rdx_7 < var_108 - var_f8)
            {
                memcpy(var_100 + var_f8, rax_6, rdx_7);
                var_f8 += rdx_7;
                r13 = rbx_3;
            }
            else
            {
                void** result_2 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_108, rax_6, rdx_7);
                result = result_2;
                r13 = rbx_3;
                
                if (result_2)
                    break;
            }
        }
    }
    else
    {
        r13 = arg2;
        
        while (true)
        {
            int64_t rax_2;
            int64_t rdx_2;
            rax_2 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13d123f2f14d62f(&var_d8);
            
            if (!rax_2)
            {
                label_59fe16:
                core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h8403f4f6f5c7a3f4(
                    &var_d8);
                int64_t rax_7;
                uint64_t rdx_9;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, r13, arg1, arg2);
                
                if (rdx_9 < var_108 - var_f8)
                {
                    memcpy(var_100 + var_f8, rax_7, rdx_9);
                    int64_t var_f8_1 = rdx_9 + var_f8;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_108);
                    return nullptr;
                }
                
                void** result_3 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_108, rax_7, rdx_9);
                result = result_3;
                
                if (result_3)
                    goto label_59fe78;
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_108);
                return nullptr;
            }
            
            int64_t rax_3;
            uint64_t rdx_4;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(rdx_2, r13, arg1, arg2);
            
            if (rdx_4 < var_108 - var_f8)
            {
                memcpy(var_100 + var_f8, rax_3, rdx_4);
                var_f8 += rdx_4;
                r13 = rdx_2;
            }
            else
            {
                void** result_1 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_108, rax_3, rdx_4);
                result = result_1;
                r13 = rdx_2;
                
                if (result_1)
                    break;
            }
        }
    }
    core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h8403f4f6f5c7a3f4(&var_d8);
    label_59fe78:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_108);
    return result;
}
