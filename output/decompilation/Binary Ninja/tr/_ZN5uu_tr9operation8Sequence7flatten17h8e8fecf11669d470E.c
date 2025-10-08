
  uint64_t uu_tr::operation::Sequence::flatten::h8e8fecf11669d470(char* arg1)

{
    switch (*arg1)
    {
        case 0:
        {
            return alloc::boxed::Box$LT$T$GT$::new::h72258ddf9d58e11e(arg1[1]);
            break;
        }
        case 1:
        {
            return alloc::boxed::Box$LT$T$GT$::new::ha45dd8fba03d2be5(*(arg1 + 1) << 8);
            break;
        }
        case 2:
        {
            return alloc::boxed::Box$LT$T$GT$::new::h286e7d86ff8f885c(arg1[1]);
            break;
        }
        case 3:
        {
            int64_t rdi_3 = *(arg1 + 8);
            
            if (!rdi_3)
                rdi_3 = 0;
            
            return alloc::boxed::Box$LT$T$GT$::new::h92ab3532b6bf7d65(rdi_3, arg1[1]);
            break;
        }
        case 4:
        {
            void var_3c;
            void var_25;
            uint32_t rdi_5;
            
            switch (arg1[1])
            {
                case 0:
                {
                    core::iter::traits::iterator::Iterator::chain::hb9dcf081c59fa8d8(&var_3c, 
                        core::iter::traits::iterator::Iterator::chain::hd1672dcd7a3437f3(0x393000, 
                            0x5a4100), 
                        0x7a6100);
                    return alloc::boxed::Box$LT$T$GT$::new::h1cc6dd8fc6b9d856(&var_3c);
                    break;
                }
                case 1:
                {
                    return alloc::boxed::Box$LT$T$GT$::new::h1bcdd4558520a2e0(
                        core::iter::traits::iterator::Iterator::chain::hd1672dcd7a3437f3(0x5a4100, 
                        0x7a6100));
                    break;
                }
                case 2:
                {
                    return alloc::boxed::Box$LT$T$GT$::new::h36b410b08a8bd479(
                        "\t (uutils coreutils) 0.0.30Tran…", "(uutils coreutils) 0.0.30Transla…");
                    break;
                }
                case 3:
                {
                    return alloc::boxed::Box$LT$T$GT$::new::h41b9beafdf6d7c1b(
                        core::iter::traits::iterator::Iterator::chain::h035f31395d1629f8());
                    break;
                }
                case 4:
                {
                    rdi_5 = 0x393000;
                    break;
                }
                case 5:
                {
                    core::iter::traits::iterator::Iterator::chain::hb9dcf081c59fa8d8(&var_25, 
                        core::iter::traits::iterator::Iterator::chain::hd1672dcd7a3437f3(0x393000, 
                            0x5a4100), 
                        0x7a6100);
                    core::iter::traits::iterator::Iterator::chain::h08a36c16b172fdca(&var_3c, 
                        &var_25, 0x2f2100);
                    core::iter::traits::iterator::Iterator::chain::ha8193670d70afe2e(&var_25, 
                        &var_3c);
                    core::iter::traits::iterator::Iterator::chain::h9d8ece84bcda5e9f(&var_3c, 
                        &var_25);
                    core::iter::traits::iterator::Iterator::chain::hbba73aedcc7b76ce(&var_25, 
                        &var_3c);
                    core::iter::traits::iterator::Iterator::chain::h005cc46f388fb5ca(&var_3c, 
                        &var_25);
                    return alloc::boxed::Box$LT$T$GT$::new::h5f4765a35b048375(&var_3c);
                    break;
                }
                case 6:
                {
                    rdi_5 = 0x7a6100;
                    break;
                }
                case 7:
                {
                    core::iter::traits::iterator::Iterator::chain::hb9dcf081c59fa8d8(&var_3c, 
                        core::iter::traits::iterator::Iterator::chain::hd1672dcd7a3437f3(0x393000, 
                            0x5a4100), 
                        0x7a6100);
                    core::iter::traits::iterator::Iterator::chain::h08a36c16b172fdca(&var_25, 
                        &var_3c, 0x2f2100);
                    core::iter::traits::iterator::Iterator::chain::ha8193670d70afe2e(&var_3c, 
                        &var_25);
                    core::iter::traits::iterator::Iterator::chain::h9d8ece84bcda5e9f(&var_25, 
                        &var_3c);
                    core::iter::traits::iterator::Iterator::chain::hbba73aedcc7b76ce(&var_3c, 
                        &var_25);
                    return alloc::boxed::Box$LT$T$GT$::new::hacb1974d6f151234(&var_3c);
                    break;
                }
                case 8:
                {
                    core::iter::traits::iterator::Iterator::chain::hb9dcf081c59fa8d8(&var_25, 
                        core::iter::traits::iterator::Iterator::chain::hd1672dcd7a3437f3(0x2f2100, 
                            &__elf_rela_table[0x1bd].r_info), 
                        0x605b00);
                    core::iter::traits::iterator::Iterator::chain::h08a36c16b172fdca(&var_3c, 
                        &var_25, 0x7e7b00);
                    return alloc::boxed::Box$LT$T$GT$::new::h172d689237cf44d1(&var_3c);
                    break;
                }
                case 9:
                {
                    return alloc::boxed::Box$LT$T$GT$::new::h36b410b08a8bd479(&data_41bc68[0xa0], 
                        "\t (uutils coreutils) 0.0.30Tran…");
                    break;
                }
                case 0xa:
                {
                    rdi_5 = 0x5a4100;
                    break;
                }
                case 0xb:
                {
                    core::iter::traits::iterator::Iterator::chain::hb9dcf081c59fa8d8(&var_3c, 
                        core::iter::traits::iterator::Iterator::chain::hd1672dcd7a3437f3(0x393000, 
                            0x464100), 
                        0x666100);
                    return alloc::boxed::Box$LT$T$GT$::new::h1cc6dd8fc6b9d856(&var_3c);
                    break;
                }
            }
            
            return alloc::boxed::Box$LT$T$GT$::new::ha45dd8fba03d2be5(rdi_5);
            break;
        }
    }
}
