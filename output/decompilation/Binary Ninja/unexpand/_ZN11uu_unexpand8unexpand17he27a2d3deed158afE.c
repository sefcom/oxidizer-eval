
  uint64_t uu_unexpand::unexpand::he27a2d3deed158af(void* arg1)

{
    void* rbx;
    void* var_30 = rbx;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    void var_58;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h396c2b4f3a201ba9(&var_58, 
        &std::io::stdio::STDOUT::h411b213c5c9add46);
    int64_t* r14 = *(arg1 + 0x20);
    uint64_t rcx = *(arg1 + 0x28);
    int64_t var_170 = 0;
    int64_t var_168 = 1;
    int64_t var_160 = 0;
    int64_t var_148;
    int64_t rax_1;
    
    if (rcx > 1)
    {
        var_148 = r14[rcx - 1];
        rax_1 = *(arg1 + 0x10);
        
        if (!rax_1)
            goto label_45d542;
        
        goto label_45d313;
    }
    
    var_148 = 0;
    rax_1 = *(arg1 + 0x10);
    uint64_t result;
    int64_t rsi_7;
    int64_t rdi_11;
    
    if (rax_1)
    {
        label_45d313:
        rbx = *(arg1 + 8);
        void* r12_1 = rbx + rax_1 * 0x18;
        char rbp_1 = *(arg1 + 0x30);
        char r13_1 = *(arg1 + 0x31);
        void* var_140_1 = r12_1;
        
        while (true)
        {
            int64_t var_c0;
            uu_unexpand::open::h50e1d0eba05cf6a0(&var_c0, *(rbx + 8), *(rbx + 0x10));
            int64_t* var_b0;
            
            if (var_c0)
            {
                int64_t var_90;
                int64_t var_c8_1 = var_90;
                int128_t var_a0;
                int128_t var_d8_1 = var_a0;
                int128_t var_e8_1 = var_b0;
                int128_t var_f8 = var_c0;
                uint64_t i;
                
                do
                {
                    int64_t rax_4;
                    int64_t rdx_2;
                    rax_4 = std::io::read_until::h5aae19ff83fee6ca(&var_f8, &var_170);
                    int64_t rcx_1 = rdx_2;
                    
                    if (rax_4 & 1)
                        rcx_1 = var_160;
                    
                    if (!rcx_1)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h549e604d5c5e935d(rax_4, rdx_2);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hcd1e4735b34a6ffa(&var_f8);
                        r12_1 = var_140_1;
                        goto label_45d4f2;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h549e604d5c5e935d(rax_4, rdx_2);
                    void* rdx_4;
                    i = uu_unexpand::unexpand_line::h1d2ec673d7b6113d(&var_170, &var_58, rbp_1, 
                        r13_1, var_148, r14, rcx);
                    result = i;
                } while (!i);
                core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hcd1e4735b34a6ffa(&var_f8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc8e1e3a6a3c0f26a(
                    var_170, var_168);
                break;
            }
            
            int64_t var_b8;
            int64_t var_158 = var_b8;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_b0[0xb]());
            int64_t rax_8;
            int64_t rdx_5;
            rax_8 = uucore::util_name::h074417a1e6395129();
            int64_t var_128 = rax_8;
            int64_t var_120_1 = rdx_5;
            int64_t* var_118 = &var_128;
            int64_t (* var_110_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3b2c8e4a8b65ef3f;
            int64_t* var_108_1 = &var_158;
            int64_t (* var_100_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6fc909ecf6e591ec;
            void* const var_88 = &data_4e8388;
            int64_t var_80_1 = 3;
            int64_t var_68_1 = 0;
            int64_t** var_78_1 = &var_118;
            int64_t var_70_1 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hb4ab6cf7cdea7204(var_158, var_b0);
            label_45d4f2:
            rbx += 0x18;
            
            if (rbx == r12_1)
            {
                rdi_11 = var_170;
                rsi_7 = var_168;
                goto label_45d549;
            }
        }
    }
    else
    {
        label_45d542:
        rsi_7 = 1;
        rdi_11 = 0;
        label_45d549:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc8e1e3a6a3c0f26a(rdi_11, rsi_7);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h0b67ea383d9d318b(&var_58);
    return result;
}
