
  int64_t alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::pty_write::hac42e7391fd1a434(int64_t arg1, int64_t* arg2)

{
    if (arg2[0x40] == -0x7fffffffffffffff)
        alacritty_terminal::event_loop::State::goto_next::h7eba0190fe200f00(arg2);
    
    int128_t var_58 = *(arg2 + 0x210);
    int128_t var_68 = *(arg2 + 0x200);
    arg2[0x40] = -0x7fffffffffffffff;
    
    if (var_68 != -0x7fffffffffffffff)
    {
        label_76c459:
        int128_t var_78_1 = var_58;
        int128_t var_88 = var_68;
        int64_t r14_1 = var_78_1;
        int64_t rbx_1 = *var_78_1[8];
        
        while (true)
        {
            int64_t rax_1;
            uint64_t rdx_1;
            rax_1 = alacritty_terminal::event_loop::Writing::remaining_bytes::h8069a290e44c6b0d(
                &var_88);
            char rax_3;
            int64_t result;
            rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Write$GT$::write::h74f584b89f107e76(
                _$LT$alacritty_terminal..tty..unix..Pty$u20$as$u20$alacritty_terminal..tty..EventedReadWrite$GT$::reader::h3333ae7262e41769(arg1), 
                rax_1, rdx_1);
            
            if (rax_3 & 1)
            {
                int64_t result_1 = result;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&arg2[0x40]);
                int128_t zmm0_1 = var_88;
                *(arg2 + 0x210) = var_78_1;
                *(arg2 + 0x200) = zmm0_1;
                char rax_5 = std::io::error::Error::kind::h135fe00c4e7365f3(result);
                
                if (rax_5 != 0xd && rax_5 != 0x23)
                    return result;
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(&result_1);
                break;
            }
            
            if (!result)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&arg2[0x40]);
                int128_t zmm0_2 = var_88;
                *(arg2 + 0x210) = var_78_1;
                *(arg2 + 0x200) = zmm0_2;
                goto label_76c562;
            }
            
            rbx_1 += result;
            *var_78_1[8] = rbx_1;
            
            if (rbx_1 >= r14_1)
            {
                alacritty_terminal::event_loop::State::goto_next::h7eba0190fe200f00(arg2);
                core::ptr::drop_in_place$LT$alacritty_terminal..event_loop..Writing$GT$::h0adefae4ca5d573e(&var_88);
                var_58 = *(arg2 + 0x210);
                var_68 = *(arg2 + 0x200);
                arg2[0x40] = -0x7fffffffffffffff;
                
                if (var_68 != -0x7fffffffffffffff)
                    goto label_76c459;
                
                goto label_76c440;
            }
        }
    }
    else
    {
        label_76c440:
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&var_68);
    }
    
    label_76c562:
    return 0;
}
