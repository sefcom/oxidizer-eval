
  fn alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::pty_write::hac42e7391fd1a434(arg1: i64, arg2: *mut i64) -> i64

{
    if arg2[0x40] == -0x7fffffffffffffff
    {
        alacritty_terminal::event_loop::State::goto_next::h7eba0190fe200f00(arg2);
    }
    
    let mut var_58: i128 = *arg2.byte_offset(0x210);
    let mut var_68: i128 = *arg2.byte_offset(0x200);
    arg2[0x40] = -0x7fffffffffffffff;
    
    if var_68 != -0x7fffffffffffffff
    {
        'label_76c459:
        let mut var_78_1: i128 = var_58;
        let mut var_88: i128 = var_68;
        let r14_1: i64 = var_78_1;
        let mut rbx_1: i64 = *var_78_1[8];
        
        loop
        {
            let mut rax_1: i64;
            let mut rdx_1: u64;
            rax_1 = alacritty_terminal::event_loop::Writing::remaining_bytes::h8069a290e44c6b0d(
                &var_88);
            let mut rax_3: i8;
            let mut result: i64;
            rax_3 = _$LT$std..fs..File$u20$as$u20$std..io..Write$GT$::write::h74f584b89f107e76(
                _$LT$alacritty_terminal..tty..unix..Pty$u20$as$u20$alacritty_terminal..tty..EventedReadWrite$GT$::reader::h3333ae7262e41769(arg1), 
                rax_1, rdx_1);
            
            if (rax_3 & 1) != 0
            {
                let mut result_1: i64 = result;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&arg2[0x40]);
                let zmm0_1: i128 = var_88;
                *arg2.byte_offset(0x210) = var_78_1;
                *arg2.byte_offset(0x200) = zmm0_1;
                let rax_5: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(result);
                
                if rax_5 != 0xd && rax_5 != 0x23
                {
                    return result;
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(&result_1);
                break;
            }
            
            if result == 0
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&arg2[0x40]);
                let zmm0_2: i128 = var_88;
                *arg2.byte_offset(0x210) = var_78_1;
                *arg2.byte_offset(0x200) = zmm0_2;
                goto 'label_76c562;
            }
            
            rbx_1 += result;
            *var_78_1[8] = rbx_1;
            
            if rbx_1 >= r14_1
            {
                alacritty_terminal::event_loop::State::goto_next::h7eba0190fe200f00(arg2);
                core::ptr::drop_in_place$LT$alacritty_terminal..event_loop..Writing$GT$::h0adefae4ca5d573e(&var_88);
                var_58 = *arg2.byte_offset(0x210);
                var_68 = *arg2.byte_offset(0x200);
                arg2[0x40] = -0x7fffffffffffffff;
                
                if var_68 != -0x7fffffffffffffff
                {
                    goto 'label_76c459;
                }
                
                goto 'label_76c440;
            }
        }
    }
    else
    {
        'label_76c440:
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&var_68);
    }
    
    'label_76c562:
    0
}
