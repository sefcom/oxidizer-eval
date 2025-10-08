
  uint64_t uu_join::State::finalize::h08fcfa0f14de09a2(int64_t* arg1, int64_t* arg2, void* arg3, void* arg4)

{
    if (arg1[2])
    {
        if (*(arg1 + 0x59) && uu_join::State::print_first_line::hca78e112704afaab(arg1, arg2, arg4))
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        
        int64_t var_98;
        uu_join::State::next_line::hd68ae9e4628c6bfa(&var_98, arg1, arg3);
        int64_t rax_3 = var_98;
        int128_t var_90;
        int128_t var_68 = var_90;
        
        if (rax_3 == -0x7fffffffffffffff)
            return alloc::boxed::Box$LT$T$GT$::new::hbde49e4af2e5852b(&var_68);
        
        int128_t var_78;
        int128_t var_b8_1 = var_78;
        int128_t var_d0_1 = var_68;
        int64_t var_80;
        int64_t var_c0_1 = var_80;
        int64_t var_d8 = rax_3;
        
        if (rax_3 != -0x8000000000000000)
        {
            int128_t var_48;
            
            while (true)
            {
                if (*(arg1 + 0x59)
                    && uu_join::State::print_line::he9418c62082595ef(arg1, arg2, &var_d8, arg4))
                {
                    uint64_t result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_d8);
                    return result;
                }
                
                var_98 = var_d8;
                uu_join::State::reset::hf11a3d581915b2af(arg1, &var_98);
                uu_join::State::next_line::hd68ae9e4628c6bfa(&var_98, arg1, arg3);
                int64_t rax_5 = var_98;
                var_48 = var_d0_1;
                
                if (rax_5 == -0x7fffffffffffffff)
                    break;
                
                int64_t var_c0_2 = var_80;
                var_d0_1 = var_48;
                var_d8 = rax_5;
                
                if (rax_5 == -0x8000000000000000)
                    goto label_463fe9;
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::hbde49e4af2e5852b(&var_48);
        }
        
        label_463fe9:
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_d8);
    }
    
    return 0;
}
