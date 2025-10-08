
  int64_t uu_pr::print_page::hc11615535955301d(void* arg1, int64_t arg2, void* arg3, int64_t arg4)

{
    int64_t rax = *(arg3 + 0x50);
    uint64_t rax_1 = *(arg3 + 0x58);
    int64_t r15 = *(arg3 + 0x98);
    uint64_t r12 = *(arg3 + 0xa0);
    void var_48;
    uu_pr::header_content::h1c434cc3245eafa3(&var_48, arg3, arg4);
    void var_60;
    uu_pr::trailer_content::hfb8d3a6ef2744922(&var_60, *(arg3 + 0x141), *(arg3 + 0x142));
    void* var_d8 = &var_60;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_68 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_e0 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_68);
    int64_t var_a8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0b8c6871f9c67703(&var_a8, &var_48);
    int64_t var_c0;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&var_c0, &var_a8);
    
    if (!(0 + -(var_c0)))
    {
        while (true)
        {
            int64_t var_b8;
            uint64_t var_b0;
            
            if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, var_b8, var_b0) && !_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, rax, rax_1))
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_c0);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&var_c0, &var_a8);
                
                if (var_c0 == -0x8000000000000000)
                    goto label_536f91;
                
                continue;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_c0);
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h31fc898d73f77abb(&var_a8);
            break;
        }
        
        goto label_537095;
    }
    
    label_536f91:
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h31fc898d73f77abb(&var_a8);
    char rax_5;
    ssize_t rdx_5;
    rax_5 = uu_pr::write_columns::h498c3fffc8cb79bc(arg1, arg2, arg3, &var_e0);
    int64_t result;
    
    if (rax_5 & 1)
    {
        label_537095:
        result = 1;
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h9a5bea2ce40ac794(var_e0);
    }
    else
    {
        int64_t var_58;
        var_a8 = var_58;
        int64_t var_50;
        int64_t var_a0_1 = var_58 + var_50 * 0x18;
        int64_t var_98_1 = 0;
        int64_t rax_7;
        void* i;
        rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b3b0cf146fef1f3(&var_a8);
        
        if (i)
        {
            int64_t r15_1 = rax_7;
            
            do
            {
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, *(i + 8), *(i + 0x10)))
                    goto label_537095;
                
                if (r15_1 + 1 != var_50 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, rax, rax_1))
                    goto label_537095;
                
                int64_t rax_8;
                rax_8 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9b3b0cf146fef1f3(&var_a8);
                r15_1 = rax_8;
            } while (i);
        }
        
        if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_e0, r15, r12))
            goto label_537095;
        
        if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(
                &var_e0))
            goto label_537095;
        
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h9a5bea2ce40ac794(var_e0);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::ha75e71cb54c06334(
        &var_60);
    return result;
}
