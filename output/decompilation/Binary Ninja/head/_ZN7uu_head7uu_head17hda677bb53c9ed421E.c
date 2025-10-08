
  uint64_t uu_head::uu_head::hda677bb53c9ed421(int64_t* arg1)

{
    int64_t (* r15)();
    int64_t (* var_10)() = r15;
    int64_t rax = arg1[4];
    
    if (!rax)
        return 0;
    
    void* r14_1 = arg1[3];
    void* rbp_1 = r14_1 + rax * 0x18;
    void* r12_1 = r14_1 + 0x18;
    char rcx_2 = *(arg1 + 0x2a);
    rax = rax != 1;
    char rcx_3 = ((arg1[5] ^ 1) & rax) | *(arg1 + 0x29);
    int64_t rbx;
    rbx = 1;
    int32_t fd;
    int32_t* var_d0_1 = &fd;
    int32_t fd_1;
    void* const var_a8;
    uint64_t result;
    int32_t fd_2;
    
    while (true)
    {
        int128_t var_90;
        int64_t var_68;
        
        if (!rcx_2)
        {
            void* rax_1 = r12_1;
            r12_1 = r14_1;
            
            while (true)
            {
                int64_t r14_2 = *(r12_1 + 8);
                r15 = *(r12_1 + 0x10);
                r12_1 = rax_1;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf89d8b6cb7931351(r14_2, r15, "-error writing 'standard output'…", 1))
                    break;
                
                int64_t var_60 = r14_2;
                int64_t (* var_58_1)() = r15;
                int32_t var_50;
                std::fs::File::open::had2dc7ba2303a5e6(&var_50, r14_2);
                
                if (var_50 != 1)
                {
                    int32_t fd_3;
                    fd = fd_3;
                    
                    if (rcx_3 & 1)
                    {
                        if (!(rbx & 1))
                        {
                            var_a8 = &data_4f79d0;
                            int64_t var_a0_5 = 1;
                            int64_t var_98_4 = 8;
                            var_90 = {0};
                            std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
                        }
                        
                        fd_1 = &var_60;
                        int64_t (* var_c0_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he50def4c4ab764c8;
                        var_a8 = &data_4f7d88;
                        int64_t var_a0_6 = 2;
                        *var_90[8] = 0;
                        int32_t* var_98_5 = &fd_1;
                        var_90 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
                    }
                    
                    if (!(uu_head::head_file::hb04afafcea474c83(&fd, arg1) & 1))
                    {
                        var_68 = 0;
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::h04c18d7ad09ce3ca(fd);
                        goto label_467d77;
                    }
                    
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    fd_2 = fd;
                    goto label_467dbc;
                }
                
                uint64_t var_70 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc23ff01e4da35d28();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                int64_t rax_4;
                int64_t rdx_3;
                rax_4 = uucore::util_name::h074417a1e6395129();
                int64_t var_40 = rax_4;
                int64_t var_38_1 = rdx_3;
                fd_1 = &var_40;
                int64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he50def4c4ab764c8;
                uint64_t* var_b8_1 = &var_70;
                int64_t (* var_b0_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h56fc0ec6d62ee034;
                var_a8 = &data_4f7d58;
                int64_t var_a0_1 = 3;
                *var_90[8] = 0;
                int32_t* var_98_1 = &fd_1;
                var_90 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_a8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h701d8b6bf603c728(var_70);
                rax_1 = r12_1 + 0x18;
                
                if (r12_1 == rbp_1)
                    return 0;
            }
        }
        
        if (rcx_3 & 1)
        {
            if (!(rbx & 1))
            {
                var_a8 = &data_4f79d0;
                int64_t var_a0_2 = 1;
                int64_t var_98_2 = 8;
                int128_t var_90_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
            }
            
            var_a8 = &data_4f7d48;
            int64_t var_a0_3 = 1;
            int64_t var_98_3 = 8;
            var_90 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_a8);
        }
        
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        fd_1 = 0;
        void* rax_5;
        int64_t rdx_4;
        rax_5 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::stream_position::hea3f1471eccd6c38(
            &fd_1);
        var_a8 = rax_5;
        int64_t var_a0_4 = rdx_4;
        char rax_6;
        
        if (!(rax_5 & 1))
        {
            char rax_7;
            int64_t rdx_5;
            rax_7 = uu_head::head_file::hb04afafcea474c83(&fd_1, arg1);
            
            if (rax_7 & 1)
                break;
            
            rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(&fd_1, 
                0, rdx_4 + rdx_5);
        }
        else
            rax_6 = uu_head::head_file::hb04afafcea474c83(&fd_1, arg1);
        
        if (rax_6 & 1)
            break;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_a8);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h04c18d7ad09ce3ca(fd_1);
        var_68 = 0;
        label_467d77:
        r14_1 = r12_1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hd58954f55c2f1209(&var_68);
        r12_1 += 0x18;
        rbx = 0;
        
        if (r14_1 == rbp_1)
            r12_1 = r14_1;
        
        if (r14_1 == rbp_1)
            return 0;
    }
    
    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::heb28040cc99787a6(&var_a8);
    fd_2 = fd_1;
    label_467dbc:
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h04c18d7ad09ce3ca(fd_2);
    return result;
}
