
  int64_t rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(int64_t arg1, void* arg2)

{
    int64_t r12 = *(arg2 + 0x160);
    
    if (!r12)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
        /* no return */
    }
    
    void* r15 = *(arg2 + 0x158);
    int128_t var_108;
    ignore::walk::WalkBuilder::new::h00a151c7e04b3dc1(&var_108, r15);
    void* var_1f8 = r15;
    int64_t var_1e8 = 1;
    int64_t rsi_1 = 1;
    label_6509cb:
    var_1e8 = 0;
    void* rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::h1b0f226fddfaabdf(&var_1f8, rsi_1);
    void* rsi_2 = rax_3;
    
    if (rax_3)
    {
        while (true)
        {
            ignore::walk::WalkBuilder::add::hd68dfb85308f880c(&var_108, rsi_2);
            rsi_1 = var_1e8;
            
            if (rsi_1)
                goto label_6509cb;
            
            rsi_2 = var_1f8;
            
            if (rsi_2 == r15 + r12 * 0x18)
                break;
            
            var_1f8 = rsi_2 + 0x18;
        }
    }
    
    int128_t var_1d8;
    int128_t var_1c8;
    int128_t var_178;
    
    if (!*(arg2 + 0x381))
    {
        int64_t rax_4 = *(arg2 + 0x148);
        
        if (rax_4)
        {
            void* r12_1 = *(arg2 + 0x140);
            int64_t i_1 = rax_4 * 0x18;
            int64_t i;
            
            do
            {
                ignore::walk::WalkBuilder::add_ignore::h494633bd0004d8f8(&var_178, &var_108, r12_1);
                
                if (var_178 == 9)
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$mut$u20$ignore..gitignore..GitignoreBuilder$C$ignore..Error$GT$$GT$::h61d7a7ae1f078bb4(&var_178);
                else
                {
                    int64_t var_148;
                    var_1c8 = var_148;
                    int128_t var_158;
                    var_1d8 = var_158;
                    int128_t var_168;
                    var_1e8 = var_168;
                    var_1f8 = var_178;
                    
                    if (rg::messages::messages::h9ee4188b23ce53b0()
                        && rg::messages::ignore_messages::hf16747a1cdd9c08b())
                    {
                        std::io::stdio::stdout::hb6a8e10bcccf3287();
                        void** var_248 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                        int64_t* rax_9 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_248);
                        var_248 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                        int64_t* var_258 =
                            std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_248);
                        var_248 = &data_7e99c8;
                        int64_t var_240_1 = 1;
                        int64_t var_238_1 = 8;
                        int128_t var_230_1 = {0};
                        void** rbp;
                        rbp = 1;
                        void** rax_11 =
                            std::io::Write::write_fmt::hfeba02f6870139ed(&var_258, &var_248);
                        void** var_208 = rax_11;
                        
                        if (rax_11)
                        {
                            var_248 = rax_11;
                            int32_t rdi_23;
                            rdi_23 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_11) != 0xb;
                            std::process::exit::hcda678ff272dfed1(rdi_23 * 2);
                            /* no return */
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_208);
                        var_208 = &var_1f8;
                        uint64_t (* var_200_1)(int64_t* arg1, int64_t* arg2) = _$LT$ignore..Error$u20$as$u20$core..fmt..Display$GT$::fmt::heee24f66390ed69b;
                        var_248 = &data_7ea800;
                        int64_t var_240_2 = 2;
                        *var_230_1[8] = 0;
                        void*** var_238_2 = &var_208;
                        var_230_1 = 1;
                        void** rax_12 =
                            std::io::Write::write_fmt::hfeba02f6870139ed(&var_258, &var_248);
                        void** var_210 = rax_12;
                        
                        if (rax_12)
                        {
                            var_248 = rax_12;
                            int32_t rdi_26;
                            rdi_26 = std::io::error::Error::kind::h135fe00c4e7365f3(rax_12) != 0xb;
                            std::process::exit::hcda678ff272dfed1(rdi_26 * 2);
                            /* no return */
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_210);
                        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(rax_9);
                        core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc9a1ca1256489ed0(var_258);
                    }
                    
                    core::ptr::drop_in_place$LT$ignore..Error$GT$::h648dc1fae12db6ab(&var_1f8);
                }
                
                r12_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
            } while (i != 0x18);
        }
    }
    
    var_108 = *(arg2 + 0x30);
    char var_38 = *(arg2 + 0x373);
    int128_t var_f8 = *(arg2 + 0x40);
    int64_t r15_1 = *(arg2 + 0x310);
    int64_t var_58 = r15_1;
    char var_37 = *(arg2 + 0x388);
    int32_t rsi_6;
    rsi_6 = !*(arg2 + 0x322);
    void* rax_15 = ignore::walk::WalkBuilder::skip_stdout::hdd4731dfa27d7e8b(&var_108, rsi_6);
    _$LT$ignore..gitignore..Gitignore$u20$as$u20$core..clone..Clone$GT$::clone::h17cf217e3aef61a1(
        &var_1f8, arg2 + 0xd0);
    int64_t var_198;
    int64_t var_118 = var_198;
    int128_t var_1a8;
    int128_t var_128 = var_1a8;
    int128_t var_1b8;
    int128_t var_138 = var_1b8;
    int128_t var_148_1 = var_1c8;
    int128_t var_158_1 = var_1d8;
    int128_t var_168_1 = var_1e8;
    var_178 = var_1f8;
    void* rax_17 = ignore::walk::WalkBuilder::overrides::h63e5f07af775591c(rax_15, &var_178);
    _$LT$ignore..types..Types$u20$as$u20$core..clone..Clone$GT$::clone::hd6a5e9cc2298641a(&var_1f8, 
        arg2 + 0x1f0);
    void* rax_18 = ignore::walk::WalkBuilder::types::h4c377f7b2ea7a776(rax_17, &var_1f8);
    *(rax_18 + 0x98) = *(arg2 + 0x375) ^ 1;
    *(rax_18 + 0x9a) = *(arg2 + 0x383) ^ 1;
    char rcx_2 = *(arg2 + 0x37f);
    *(rax_18 + 0x99) = rcx_2 ^ 1;
    char rsi_11 = *(arg2 + 0x384);
    char rdx_4 = *(arg2 + 0x382) ^ 1;
    
    if (rsi_11)
        rdx_4 = 0;
    
    *(rax_18 + 0x9b) = rdx_4;
    *(rax_18 + 0x9c) = rsi_11 ^ 1;
    char rdx_7 = *(arg2 + 0x380) ^ 1;
    
    if (rsi_11)
        rdx_7 = 0;
    
    *(rax_18 + 0x9d) = rdx_7;
    *(rax_18 + 0x9f) = *(arg2 + 0x385) ^ 1;
    *(rax_18 + 0x9e) = *(arg2 + 0x376);
    void var_b8;
    
    if (!rcx_2)
        ignore::dir::IgnoreBuilder::add_custom_ignore_filename::h2f2dc442a6932d20(&var_b8);
    char rax_19 = *(arg2 + 0x320);
    
    if (rax_19 != 2)
    {
        if (r15_1 != 1)
        {
            var_1f8 = &data_7eafd0;
            int64_t var_1f0_1 = 1;
            int64_t var_1e8_1 = 8;
            int128_t var_1e0 = {0};
            core::panicking::assert_failed::h449f2a7fe5426575(0, &data_4631a8, arg2 + 0x310, 
                &var_1f8);
            /* no return */
        }
        
        if (!(rax_19 & 1) && !*(arg2 + 0x321))
            ignore::walk::WalkBuilder::sort_by_file_name::hf893e8fd018a99a9(&var_108);
    }
    
    return memcpy(arg1, &var_108, 0xd8);
}
