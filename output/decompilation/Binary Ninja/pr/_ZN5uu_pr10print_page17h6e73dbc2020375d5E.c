
  int64_t uu_pr::print_page::h6e73dbc2020375d5(int64_t arg1, int64_t arg2, void* arg3, int64_t arg4)

{
    int64_t rax = *(arg3 + 0x50);
    uint64_t rax_1 = *(arg3 + 0x58);
    int64_t rbx = *(arg3 + 0x98);
    uint64_t r15 = *(arg3 + 0xa0);
    void var_48;
    uu_pr::header_content::h02dbeaeea8884abb(&var_48, arg3, arg4);
    void var_c0;
    uu_pr::trailer_content::h355b304d1d1d6111(&var_c0, *(arg3 + 0x141), *(arg3 + 0x142));
    int64_t rbp;
    rbp = 1;
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_68 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_f8 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_68);
    int64_t var_e0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc20ab2c0828df040(&var_e0, &var_48);
    int64_t var_60;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haec41bb14c083d45(&var_60, &var_e0);
    
    if (var_60 == -0x8000000000000000)
    {
        label_5c792c:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::ha46bc5424c6e948f(&var_e0);
        int64_t rax_5;
        char const (** rdx_5)[0x9b];
        rax_5 = uu_pr::write_columns::h4b27546e3d45b76a(arg1, arg2, arg3, &var_f8);
        
        if (!rax_5)
        {
            int64_t var_b8;
            var_e0 = var_b8;
            int64_t var_b0;
            int64_t var_d8_1 = var_b8 + var_b0 * 0x18;
            int64_t var_d0_1 = 0;
            int64_t rax_7;
            void* i;
            rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he43dc31389a3d3c2(&var_e0);
            
            if (i)
            {
                int64_t r15_1 = rax_7;
                
                do
                {
                    if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, *(i + 8), *(i + 0x10)))
                        goto label_5c7a3c;
                    
                    if (r15_1 + 1 != var_b0 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, rax, rax_1))
                        goto label_5c7a3c;
                    
                    int64_t rax_8;
                    rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he43dc31389a3d3c2(&var_e0);
                    r15_1 = rax_8;
                } while (i);
            }
            
            if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, rbx, r15) && !_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&var_f8))
            {
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1(
                    var_f8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(&var_c0);
                return 0;
            }
        }
    }
    else
    {
        while (true)
        {
            int128_t var_a8 = var_60;
            uint64_t var_50;
            uint64_t var_98_1 = var_50;
            
            if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, *var_a8[8], var_50) && !_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_f8, rax, rax_1))
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_a8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haec41bb14c083d45(&var_60, &var_e0);
                
                if (var_60 == -0x8000000000000000)
                    goto label_5c792c;
                
                continue;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_a8);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::ha46bc5424c6e948f(&var_e0);
            break;
        }
    }
    
    label_5c7a3c:
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::he446444bf71f01b1(var_f8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h72ab41bb7772a064(
        &var_c0);
    return 1;
}
