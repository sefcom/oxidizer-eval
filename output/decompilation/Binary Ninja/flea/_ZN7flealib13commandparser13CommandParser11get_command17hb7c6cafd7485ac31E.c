
  int128_t* flealib::commandparser::CommandParser::get_command::hb7c6cafd7485ac31(int128_t* arg1, int64_t arg2, void* arg3, int64_t arg4)

{
    int64_t var_b8;
    roxmltree::parse::parse::hf3aa1ef302061528(&var_b8, arg3, arg4, 0xffffffff, 0);
    void* const var_1c8;
    int32_t var_1b8;
    int64_t* var_180;
    int64_t var_140;
    void* var_138;
    
    if (!(0 + -(var_b8)))
    {
        memcpy(&var_140, &var_b8, 0x88);
        int64_t var_130;
        
        if (!var_130)
        {
            core::panicking::panic_bounds_check::h8f7cc6d356d411dd(0, 0);
            /* no return */
        }
        
        var_1c8 = &var_140;
        var_1b8 = 1;
        roxmltree::Descendants::new::h4d86cf4878017524(&var_180, &var_1c8);
        core::iter::traits::iterator::Iterator::try_fold::haddb30a31b69cbae(&var_1c8, &var_180);
        void* const r13_1 = var_1c8;
        
        if (!r13_1)
        {
            core::ptr::drop_in_place$LT$roxmltree..Document$GT$::h2a51f9358b50aec5(&var_140);
            
            if (var_b8 == -0x8000000000000000)
                goto label_772ccc;
            
            goto label_772ce7;
        }
        
        void* rax_4;
        uint64_t rdx_2;
        rax_4 = roxmltree::Node::attribute::h591e30e868dc40e8(r13_1, var_138, 
            "name B\r\nLAltreprAhomChamyear  …", 4);
        
        if (!rax_4)
            rdx_2 = 0x1c;
        
        void* const rsi_6 = "'name' attribute not exists.'val…";
        
        if (rax_4)
            rsi_6 = rax_4;
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_1c8, 
            rsi_6, rdx_2);
        int128_t zmm0_2 = var_1c8;
        void* rax_6;
        uint64_t rdx_3;
        rax_6 = roxmltree::Node::attribute::h591e30e868dc40e8(r13_1, var_138, 
            "valueCommand xml corruptedComman…", 5);
        
        if (!rax_6)
            rdx_3 = 0x1d;
        
        void* const rsi_8 = "'value' attribute not exists.\nv…";
        
        if (rax_6)
            rsi_8 = rax_6;
        
        int128_t var_158;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_158, 
            rsi_8, rdx_3);
        int64_t var_1b0;
        var_1b0 = var_158;
        var_1b8 = var_1b8;
        var_1c8 = zmm0_2;
        int64_t var_1a8;
        arg1[2] = var_1a8;
        int64_t var_148;
        *(arg1 + 0x28) = var_148;
        arg1[1] = var_1b8;
        *(arg1 + 0x18) = var_1b0;
        *arg1 = zmm0_2;
        core::ptr::drop_in_place$LT$roxmltree..Document$GT$::h2a51f9358b50aec5(&var_140);
        
        if (var_b8 == -0x8000000000000000)
            core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_b8);
    }
    else
    {
        label_772ccc:
        core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_b8);
        label_772ce7:
        roxmltree::parse::parse::hf3aa1ef302061528(&var_140, arg3, arg4, 0xffffffff, 0);
        
        if (var_140 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_140);
        else
        {
            int64_t var_108;
            int64_t var_88_1 = var_108;
            int128_t var_118;
            int128_t var_98_1 = var_118;
            int128_t var_128;
            int128_t var_a8_1 = var_128;
            var_b8 = var_138;
            var_180 = &var_b8;
            int64_t (* var_178_1)(char const (* arg1)[0xcd], void* arg2) = _$LT$roxmltree..parse..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h7bb52ed52cdcb4d8;
            var_1c8 = &data_b08f18;
            int64_t var_1c0_1 = 2;
            int64_t var_1a8_1 = 0;
            var_1b8 = &var_180;
            int64_t var_1b0_1 = 1;
            std::io::stdio::_print::h17d6c2a1d6a6f99e(&var_1c8);
            core::ptr::drop_in_place$LT$roxmltree..parse..Error$GT$::h882013e7cdd3dd0a(&var_b8);
            
            if (var_140 != -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$roxmltree..Document$C$roxmltree..parse..Error$GT$$GT$::hb8e88dbba5291207(&var_140);
        }
        
        *(arg1 + 8) = "Command xml corruptedCommandExec…";
        arg1[1] = 0x15;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
