
  int64_t alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::key_release::h4e004f4cf113a66b(int64_t* arg1, int16_t* arg2, int32_t arg3, int32_t arg4)

{
    if ((arg3 & 0x90000) == 0x80000 && !_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(arg1[0xd]) && !*(arg1[6] + 0x478))
    {
        char* rcx;
        void* const r8_1;
        
        if (arg2[0x20] != 0x1a)
        {
            char* rax_4;
            void* rdx;
            rax_4 = smol_str::Repr::as_str::ha71f0b13e811ba13(&arg2[0x20]);
            rcx = rax_4;
            r8_1 = rdx;
        }
        else
        {
            rcx = 1;
            r8_1 = nullptr;
        }
        
        int32_t r12_3 = arg4 & 0x824;
        int32_t zmm0[0x4];
        
        if (alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::alt_send_esc::h03648dcc30b21fed(arg1[5], *arg2, arg2[1], rcx, r8_1, zmm0))
            r12_3 = arg4;
        
        char var_d8;
        winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_d8, arg2);
        
        if (var_d8 != 0x1f)
        {
            label_856e70:
            int128_t var_38_1 = *(arg2 + 0x70);
            int128_t var_48_1 = *(arg2 + 0x60);
            int128_t var_58_1 = *(arg2 + 0x50);
            int128_t var_68_1 = *(arg2 + 0x40);
            int128_t var_78_1 = *(arg2 + 0x30);
            int128_t var_88_1 = *(arg2 + 0x20);
            int128_t var_98_1 = *(arg2 + 0x10);
            int128_t var_a8 = *arg2;
            void var_c0;
            alacritty::input::keyboard::build_sequence::hb59ed84f2bd9b92a(&var_c0, &var_a8, r12_3, 
                arg3);
            core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
                &var_d8);
            return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(*arg1, &var_c0);
        }
        
        int16_t var_d6;
        uint32_t rax_6 = var_d6;
        
        if (rax_6 == 0xe || rax_6 == 0xf)
        {
            if (arg3 & 0x200000)
                goto label_856e70;
        }
        else if (rax_6 != 0x19 || arg3 & 0x200000)
            goto label_856e70;
        
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_d8);
    }
    
    return core::ptr::drop_in_place$LT$winit..event..KeyEvent$GT$::hd16fceb331fb972b(arg2);
}
