
  int128_t* uu_unexpand::unexpand::h7da24873393494e4(void* arg1)

{
    std::io::stdio::stdout::h077da66234850927();
    void var_88;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb9eeab36379c6f5d(&var_88, 
        0x2000, &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
    int64_t* rbx = *(arg1 + 0x20);
    int64_t rbp = *(arg1 + 0x28);
    int64_t var_150 = 0;
    int64_t var_148 = 1;
    int64_t var_140 = 0;
    void** const r14;
    
    if (rbp <= 1)
        r14 = nullptr;
    else
        r14 = rbx[rbp - 1];
    
    int64_t rax = *(arg1 + 8);
    int64_t rcx = *(arg1 + 0x10);
    int64_t var_138 = rax;
    int64_t var_130 = rax + rcx * 0x18;
    void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&var_138);
    
    if (i)
    {
        char r12_1 = *(arg1 + 0x30);
        char r13_1 = *(arg1 + 0x31);
        
        do
        {
            int64_t var_c0;
            uu_unexpand::open::h29e09d4acbe1a140(&var_c0, *(i + 8), *(i + 0x10));
            int64_t* var_b0;
            
            if (!var_c0)
            {
                int64_t var_b8;
                int64_t var_160 = var_b8;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(var_b0[0xc]());
                int64_t rax_6;
                int64_t rdx_5;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                int64_t var_128 = rax_6;
                int64_t var_120_1 = rdx_5;
                int64_t* var_118 = &var_128;
                int64_t (* var_110_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                int64_t* var_108_1 = &var_160;
                int64_t (* var_100_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb9e3d6c183a72ce2;
                void* const var_60 = &data_51d1d0;
                int64_t var_58_1 = 3;
                int64_t var_40_1 = 0;
                int64_t** var_50_1 = &var_118;
                int64_t var_48_1 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_60);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h0082e63b91b22250(var_160, var_b0);
            }
            else
            {
                int64_t var_90;
                int64_t var_c8_1 = var_90;
                int128_t var_a0;
                int128_t var_d8_1 = var_a0;
                int128_t var_e8_1 = var_b0;
                int128_t var_f8 = var_c0;
                
                while (true)
                {
                    int64_t rax_2;
                    int64_t rdx_3;
                    rax_2 = std::io::read_until::h30a9c258ae3f26fb(&var_f8, 0xa, &var_150);
                    int64_t rcx_3 = rdx_3;
                    
                    if (rax_2)
                        rcx_3 = var_140;
                    
                    if (!rcx_3)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd39866fef2216732(rax_2, rdx_3);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::haf1e40619ceb4b94(&var_f8);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd39866fef2216732(rax_2, rdx_3);
                    
                    if (uu_unexpand::unexpand_line::hfe287a3731b6a7af(&var_150, &var_88, r12_1, 
                        r13_1, r14, rbx, rbp))
                    {
                        int128_t* result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::haf1e40619ceb4b94(&var_f8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1bd5a48277eb07cc(&var_150);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h91f26dab932e0aaf(&var_88);
                        return result;
                    }
                }
            }
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&var_138);
        } while (i);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1bd5a48277eb07cc(&var_150);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h91f26dab932e0aaf(&var_88);
    return nullptr;
}
