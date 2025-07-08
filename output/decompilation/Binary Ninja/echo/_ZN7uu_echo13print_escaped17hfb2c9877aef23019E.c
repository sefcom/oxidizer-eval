
  uint64_t uu_echo::print_escaped::hfb2c9877aef23019(char* arg1, int64_t arg2, int64_t arg3, int64_t* arg4, char* arg5 @ rax)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg3 + arg2;
    int64_t rcx = 0;
    
    while (true)
    {
        int64_t var_50 = 0;
        
        if (!rcx)
            arg5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&var_40);
        
        uint64_t result;
        
        if (!arg5)
        {
            result = arg1;
            *result = 0;
            return result;
        }
        
        char rax = *arg5;
        char* var_48;
        char var_5a;
        char* rsi_2;
        int64_t* rdi_4;
        
        if (rax != 0x5c)
        {
            var_5a = rax;
            label_4a4769:
            rdi_4 = arg4;
            rsi_2 = &var_5a;
            label_4a476f:
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(rdi_4, rsi_2, 1);
            
            if (result)
            {
                *(arg1 + 8) = result;
                *arg1 = 1;
                return result;
            }
        }
        else
        {
            char* rax_2 = *core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(
                &var_50, &var_40);
            char rax_3;
            
            if (rax_2)
                rax_3 = *rax_2;
            
            if (rax_2 && rax_3 - 0x31 < 7)
            {
                char rax_4;
                char rdx_3;
                rax_4 = uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&var_50, 0, rax_3);
                
                if (rax_4 & 1)
                {
                    var_5a = rdx_3;
                    goto label_4a4769;
                }
                
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            char* rax_6 = var_48;
            bool cond:0_1 = !var_50;
            var_50 = 0;
            
            if (cond:0_1)
            {
                rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&var_40);
                
                if (!rax_6)
                {
                    label_4a47f5:
                    rdi_4 = arg4;
                    rsi_2 = &data_41b404[0x17];
                    goto label_4a476f;
                }
            }
            else if (!rax_6)
                goto label_4a47f5;
            
            result = *rax_6;
            uint64_t rcx_2 = result - 0x30;
            void* const rsi;
            uint64_t r13_1;
            
            if (rcx_2 > 0x48)
            {
                label_4a4858:
                var_5a = 0x5c;
                char var_59_1 = result;
                r13_1 = 2;
                rsi = &var_5a;
            }
            else
            {
                r13_1 = 1;
                char var_5b;
                
                switch (rcx_2)
                {
                    case 0:
                    {
                        char rax_5;
                        char rdx_4;
                        rax_5 =
                            uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&var_50, 1, 0xe0);
                        
                        if (!(rax_5 & 1))
                            rsi = &data_41b426;
                        else
                        {
                            var_5b = rdx_4;
                            rsi = &var_5b;
                        }
                        break;
                    }
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xa:
                    case 0xb:
                    case 0xc:
                    case 0xd:
                    case 0xe:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    case 0x17:
                    case 0x18:
                    case 0x19:
                    case 0x1a:
                    case 0x1b:
                    case 0x1c:
                    case 0x1d:
                    case 0x1e:
                    case 0x1f:
                    case 0x20:
                    case 0x21:
                    case 0x22:
                    case 0x23:
                    case 0x24:
                    case 0x25:
                    case 0x26:
                    case 0x27:
                    case 0x28:
                    case 0x29:
                    case 0x2a:
                    case 0x2b:
                    case 0x2d:
                    case 0x2e:
                    case 0x2f:
                    case 0x30:
                    case 0x34:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                    case 0x3a:
                    case 0x3b:
                    case 0x3c:
                    case 0x3d:
                    case 0x3f:
                    case 0x40:
                    case 0x41:
                    case 0x43:
                    case 0x45:
                    case 0x47:
                    {
                        goto label_4a4858;
                    }
                    case 0x2c:
                    {
                        rsi = &data_41b404[0x17];
                        break;
                    }
                    case 0x31:
                    {
                        rsi = &data_41b41c;
                        break;
                    }
                    case 0x32:
                    {
                        rsi = &data_41b41d;
                        break;
                    }
                    case 0x33:
                    {
                        arg1[1] = 1;
                        *arg1 = 0;
                        return result;
                        break;
                    }
                    case 0x35:
                    {
                        rsi = &data_41b41e;
                        break;
                    }
                    case 0x36:
                    {
                        rsi = &data_41b41f;
                        break;
                    }
                    case 0x3e:
                    {
                        rsi = &data_41b420;
                        break;
                    }
                    case 0x42:
                    {
                        rsi = &data_41b421;
                        break;
                    }
                    case 0x44:
                    {
                        rsi = &data_41b422;
                        break;
                    }
                    case 0x46:
                    {
                        rsi = &data_41b423;
                        break;
                    }
                    case 0x48:
                    {
                        char rax_7;
                        char rdx_5;
                        rax_7 =
                            uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&var_50, 2, 0xe0);
                        r13_1 = 2;
                        rsi = &data_41b424;
                        
                        if (rax_7 & 1)
                        {
                            var_5b = rdx_5;
                            rsi = &var_5b;
                            r13_1 = 1;
                        }
                        break;
                    }
                }
            }
            
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, rsi, r13_1);
            
            if (result)
            {
                *(arg1 + 8) = result;
                result = 1;
                *arg1 = 1;
                return result;
            }
        }
        rcx = var_50;
        arg5 = var_48;
    }
}
