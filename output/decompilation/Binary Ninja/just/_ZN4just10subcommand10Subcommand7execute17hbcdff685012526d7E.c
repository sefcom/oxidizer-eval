
  char* just::subcommand::Subcommand::execute::hbcdff685012526d7(char* arg1, int64_t* arg2, void* arg3, int64_t* arg4)

{
    int64_t r14 = *arg2;
    int64_t rbp_1 = r14 ^ 0x8000000000000000;
    
    if (rbp_1 > 0xc)
    {
        label_68bd15:
        int64_t rsi;
        int64_t* r13_1;
        int64_t* r15_1;
        
        if (*(arg3 + 0x78) == -0x8000000000000000)
        {
            r15_1 = arg4;
            r13_1 = arg2;
            rsi = 0;
        }
        else
        {
            r15_1 = arg4;
            r13_1 = arg2;
            rsi = *(arg3 + 0x80);
        }
        
        int64_t var_6f0;
        just::search::Search::find::h1e33858e96fbd947(&var_6f0, rsi, *(arg3 + 0x88), 
            *(arg3 + 0x20), *(arg3 + 0x28), arg3 + 0x108);
        int64_t rax_2 = var_6f0;
        int128_t var_6e8;
        int128_t var_6d8;
        
        if (rax_2 != -0x8000000000000000)
        {
            int64_t var_778 = rax_2;
            int64_t var_6c8;
            int64_t var_750_1 = var_6c8;
            
            if (r14 == -0x7ffffffffffffffb)
            {
                int64_t rcx_2;
                int64_t rdx_1;
                int64_t rsi_2;
                int64_t rdi_4;
                int64_t r8_2;
                int64_t r9_2;
                rcx_2 = just::subcommand::Subcommand::edit::h78df30ddd5b0fe41(arg1, &var_778);
                /* tailcall */
                return sub_68c327(arg1, rdi_4, rsi_2, rdx_1, rcx_2, r8_2, r9_2);
            }
            
            int64_t rcx_5;
            int64_t rdx_4;
            int64_t rsi_5;
            int64_t rdi_7;
            int64_t r8_5;
            int64_t r9_4;
            rcx_5 = just::subcommand::Subcommand::compile::hd4ddb48c754af338(&var_6f0, arg3, r15_1, 
                var_6e8, *var_6e8[8]);
            int64_t r14_1 = var_6f0;
            int128_t var_7e8 = var_6e8;
            int128_t var_7c8_1 = var_6c8;
            int128_t var_6b8;
            int128_t var_6a8;
            int128_t var_698;
            int64_t var_688;
            
            if (r14_1 == -0x8000000000000000)
            {
                *(arg1 + 0x60) = var_688;
                *(arg1 + 0x50) = var_698;
                *(arg1 + 0x40) = var_6a8;
                int128_t zmm0_3 = var_7e8;
                *(arg1 + 0x30) = var_6b8;
                *(arg1 + 0x20) = var_7c8_1;
                *(arg1 + 0x10) = var_6d8;
                *arg1 = zmm0_3;
                /* tailcall */
                return sub_68c327(arg1, rdi_7, rsi_5, rdx_4, rcx_5, r8_5, r9_4);
            }
            
            void var_680;
            void var_320;
            memcpy(&var_320, &var_680, 0x2f0);
            int128_t var_388_1 = var_7e8;
            int128_t var_378_1 = var_6d8;
            int128_t var_368_1 = var_7c8_1;
            int128_t var_358_1 = var_6b8;
            int128_t var_348_1 = var_6a8;
            int128_t var_338_1 = var_698;
            int64_t var_328_1 = var_688;
            int64_t rax_9 = 2;
            
            if (rbp_1 < 0x11)
                rax_9 = rbp_1;
            
            int64_t var_390 = r14_1;
            int64_t rax_17;
            int64_t rcx_12;
            int64_t rdx_11;
            int64_t rsi_15;
            int64_t rdi_17;
            int64_t r8_10;
            int64_t r9_9;
            
            switch (rax_9)
            {
                case 0:
                case 3:
                case 5:
                case 9:
                case 0xb:
                case 0xc:
                {
                    core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
                    /* no return */
                }
                case 1:
                {
                    int64_t r9_6;
                    
                    if (r13_1[1] == -0x8000000000000000)
                        r9_6 = 0;
                    else
                        r9_6 = r13_1[2];
                    
                    just::subcommand::Subcommand::choose::h70c66fd2ffcf2f5e(&var_6f0, arg3, 
                        &var_390, &var_778, &r13_1[4], r9_6, r13_1[3]);
                    goto label_68c2a6;
                }
                case 2:
                {
                    rax_17 = 0x30;
                    goto label_68c192;
                }
                case 4:
                {
                    memcpy(&var_6f0, &var_390, 0x360);
                    rcx_12 = just::subcommand::Subcommand::dump::h35772f52367b2bf4(&var_7e8, 
                        *(arg3 + 0x199), &var_6f0);
                    goto label_68c147;
                }
                case 6:
                {
                    rax_17 = 0x20;
                    label_68c192:
                    just::justfile::Justfile::run::h44a153d0be889dd4(&var_6f0, &var_390, arg3, 
                        &var_778, r13_1 + rax_17, 8, 0);
                    goto label_68c2a6;
                }
                case 7:
                {
                    memcpy(&var_6f0, &var_390, 0x360);
                    rcx_12 = just::subcommand::Subcommand::format::heea1de6da7464e03(&var_7e8, 
                        arg3, &var_778, &var_6f0);
                    label_68c147:
                    char rax_19 = var_7e8;
                    
                    if (rax_19 == 0x38)
                    {
                        *arg1 = 0x38;
                        /* tailcall */
                        return sub_68c327(arg1, rdi_17, rsi_15, rdx_11, rcx_12, r8_10, r9_9);
                    }
                    
                    *(arg1 + 0x60) = var_688;
                    *(arg1 + 0x51) = var_698;
                    *(arg1 + 0x41) = var_6a8;
                    int128_t zmm0_9 = var_7e8;
                    *(arg1 + 0x31) = var_6b8;
                    *(arg1 + 0x21) = var_7c8_1;
                    *(arg1 + 0x11) = var_6d8;
                    *(arg1 + 1) = zmm0_9;
                    *arg1 = rax_19;
                    /* tailcall */
                    return sub_68c327(arg1, rdi_17, rsi_15, rdx_11, var_688, r8_10, r9_9);
                }
                case 8:
                {
                    just::subcommand::Subcommand::groups::h91135709a9d2e1de(arg3, &var_390);
                    /* tailcall */
                    return sub_68c2b2(arg1);
                }
                case 0xa:
                {
                    just::subcommand::Subcommand::list::h279afbbedddd5378(&var_6f0, arg3, &var_390, 
                        &r13_1[1]);
                    goto label_68c2a6;
                }
                case 0xd:
                {
                    int128_t var_708_1 = var_6d8;
                    int128_t var_718_1 = var_6e8;
                    int128_t var_728 = var_778;
                    memcpy(&var_6f0, &var_390, 0x360);
                    just::subcommand::Subcommand::run::h0caeb55d50695da5(&var_7e8, arg3, r15_1, 
                        &var_728, &var_6f0, r13_1[2], r13_1[3], &r13_1[4]);
                    char rax_16 = var_7e8;
                    
                    if (rax_16 != 0x38)
                    {
                        *(arg1 + 0x60) = var_688;
                        *(arg1 + 0x51) = var_698;
                        *(arg1 + 0x41) = var_6a8;
                        int128_t zmm0_8 = var_7e8;
                        *(arg1 + 0x31) = var_6b8;
                        *(arg1 + 0x21) = var_7c8_1;
                        *(arg1 + 0x11) = var_6d8;
                        *(arg1 + 1) = zmm0_8;
                        *arg1 = rax_16;
                    }
                    else
                        *arg1 = 0x38;
                    break;
                }
                case 0xe:
                {
                    just::subcommand::Subcommand::show::h0bdf6b2545355152(&var_6f0, arg3, &var_390, 
                        &r13_1[1]);
                    label_68c2a6:
                    char rax_24 = var_6f0;
                    
                    if (rax_24 == 0x38)
                        /* tailcall */
                        return sub_68c2b2(arg1);
                    
                    *(arg1 + 0x60) = *var_698[8];
                    *(arg1 + 0x51) = var_6a8;
                    *(arg1 + 0x41) = var_6b8;
                    int128_t zmm0_6 = *var_6f0[1];
                    int128_t var_6bf;
                    *(arg1 + 0x31) = var_6bf;
                    *(arg1 + 0x21) = var_6d8;
                    *(arg1 + 0x11) = var_6e8;
                    *(arg1 + 1) = zmm0_6;
                    *arg1 = rax_24;
                    int64_t rcx_25;
                    int64_t rdx_21;
                    int64_t rsi_27;
                    int64_t rdi_31;
                    int64_t r8_18;
                    int64_t r9_15;
                    rcx_25 = core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(&var_390);
                    /* tailcall */
                    return sub_68c327(arg1, rdi_31, rsi_27, rdx_21, rcx_25, r8_18, r9_15);
                }
                case 0xf:
                {
                    just::subcommand::Subcommand::summary::hf6e7b6af0c5cf7fd(*(arg3 + 0x1a3), 
                        *(arg3 + 0x1a7), &var_390);
                    /* tailcall */
                    return sub_68c2b2(arg1);
                }
                case 0x10:
                {
                    just::subcommand::Subcommand::variables::hc98f87f2340c147d(&var_390);
                    /* tailcall */
                    return sub_68c2b2(arg1);
                }
            }
        }
        else
        {
            *var_6f0[7] = var_6e8;
            *arg1 = 0x2a;
            *(arg1 + 1) = var_6f0;
            *(arg1 + 0x11) = var_6d8;
            *(arg1 + 0x20) = *var_6d8[7];
        }
    }
    else
        switch (rbp_1)
        {
            case 0:
            {
                just::subcommand::Subcommand::changelog::h6283720f5077d0b0();
                *arg1 = 0x38;
                break;
            }
            case 1:
            {
                goto label_68bd15;
            }
        }
    
    return arg1;
}
