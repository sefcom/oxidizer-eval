
  int64_t rg::types::h81a2f3911460291d(char* arg1, void* arg2)

{
    void var_70;
    rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(&var_70, arg2);
    void* r15 = *(arg2 + 0x1f8);
    void* r12_2 = *(arg2 + 0x200) * 0x30 + r15;
    int32_t var_7c = 0;
    uint64_t rax_4;
    char* rcx;
    
    while (true)
    {
        void* rbx_1 = r15 + 0x30;
        
        if (r15 == r12_2)
            rbx_1 = r15;
        
        if (r15 == r12_2)
        {
            rcx = arg1;
            rcx[1] = !var_7c;
            rax_4 = 0;
            break;
        }
        
        void** rax_1 =
            std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, *(r15 + 8), *(r15 + 0x10));
        
        if (!rax_1)
        {
            rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                ": /home/34r7hm4n/dev/oxidizer/ox…", 2);
            
            if (!rax_1)
            {
                void* r13_1 = *(r15 + 0x28);
                void* rbp_1 = 0x18;
                
                if (!r13_1)
                    rbp_1 = r13_1;
                
                if (!r13_1)
                {
                    label_65c0ef:
                    rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                        "\n/home/34r7hm4n/dev/oxidizer/ox…", 1);
                    var_7c += 1;
                    r15 = rbx_1;
                    
                    if (!rax_1)
                        continue;
                }
                else
                {
                    void* r15_1 = *(r15 + 0x20);
                    rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, *(r15_1 + 8), 
                        *(r15_1 + 0x10));
                    
                    if (!rax_1)
                    {
                        void* rbp_2 = rbp_1 + r15_1;
                        void* r15_2 = r15_1 + r13_1 * 0x18;
                        
                        while (true)
                        {
                            void* r13_2 = rbp_2 + 0x18;
                            
                            if (rbp_2 == r15_2)
                                r13_2 = rbp_2;
                            
                            if (rbp_2 == r15_2)
                                break;
                            
                            rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                                ", invalid hyperlink formatiglobI…", 2);
                            
                            if (rax_1)
                                goto label_65c10c;
                            
                            rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                                *(rbp_2 + 8), *(rbp_2 + 0x10));
                            rbp_2 = r13_2;
                            
                            if (rax_1)
                                goto label_65c10c;
                        }
                        
                        goto label_65c0ef;
                    }
                }
            }
        }
        
        label_65c10c:
        rcx = arg1;
        *(rcx + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rax_1);
        rax_4 = 1;
        break;
    }
    
    *rcx = rax_4;
    return core::ptr::drop_in_place$LT$grep_cli..wtr..StandardStream$GT$::h44e23c898ea41b40(
        &var_70);
}
