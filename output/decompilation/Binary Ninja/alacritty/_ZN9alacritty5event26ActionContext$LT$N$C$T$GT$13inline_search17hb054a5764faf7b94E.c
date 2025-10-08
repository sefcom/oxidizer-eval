
  void alacritty::event::ActionContext$LT$N$C$T$GT$::inline_search::hb054a5764faf7b94(void* arg1, char arg2)

{
    int32_t* r12 = *(arg1 + 0x70);
    int32_t rdi = *r12;
    
    if (rdi != 0x110000)
    {
        int32_t var_84 = 0;
        char* rax_1;
        void* rdx_1;
        rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(rdi, &var_84);
        int32_t* r14_1 = *(arg1 + 8);
        int64_t rdx_2 = *(r14_1 + 0x290);
        int32_t rcx_1 = r14_1[0xa6];
        int32_t var_80;
        int64_t* rdi_1 = &var_80;
        int64_t var_78;
        int32_t var_70;
        void* var_68;
        void var_40;
        int32_t rbp_2;
        int64_t r15_1;
        
        if (!arg2)
        {
            alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_left::h0e24405bbcb3ff67(rdi_1, r14_1, rdx_2, rcx_1, rax_1, rdx_1);
            
            if (var_80 != 1)
            {
                r15_1 = var_78;
                rbp_2 = var_70;
                
                if (!*(r12 + 6))
                    goto label_85507b;
                
                int32_t rcx_5 = r14_1[0x30] - 1;
                int64_t rdx_6 = *(r14_1 + 0xb8) - 1;
                var_68 = &r14_1[0xa];
                int64_t var_60_2 = r15_1;
                int32_t var_58_2 = rbp_2;
                int64_t var_50_2 = rdx_6;
                int32_t var_48_2 = rcx_5;
                _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_40, &var_68);
                label_85506c:
                int64_t rax_4;
                int32_t rdx_8;
                rax_4 = core::option::Option$LT$T$GT$::map_or::h55de4ce00cf2525f(&var_40, r15_1);
                r15_1 = rax_4;
                rbp_2 = rdx_8;
                label_85507b:
                alacritty_terminal::term::Term$LT$T$GT$::scroll_to_point::hb7f2e07c90fd62c4(r14_1, 
                    rbp_2);
                *(r14_1 + 0x290) = r15_1;
                r14_1[0xa6] = rbp_2;
                alacritty_terminal::term::Term$LT$T$GT$::vi_mode_recompute_selection::hf880b3a3d59b9937(r14_1);
                **(arg1 + 0x78) = 1;
            }
        }
        else
        {
            alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_right::hbf0568499a7b63a6(rdi_1, r14_1, rdx_2, rcx_1, rax_1, rdx_1);
            
            if (!(var_80 & 1))
            {
                r15_1 = var_78;
                rbp_2 = var_70;
                
                if (*(r12 + 6) != 1)
                    goto label_85507b;
                
                int32_t rcx_3 = r14_1[0x30] - 1;
                int64_t rdx_4 = *(r14_1 + 0xb8) - 1;
                var_68 = &r14_1[0xa];
                int64_t var_60_1 = r15_1;
                int32_t var_58_1 = rbp_2;
                int64_t var_50_1 = rdx_4;
                int32_t var_48_1 = rcx_3;
                _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_40, &var_68);
                goto label_85506c;
            }
        }
    }
}
