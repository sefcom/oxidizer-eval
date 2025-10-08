
  int64_t fd::exec::CommandBuilder::finish::hfc49bcefb3885af8(void* arg1)

{
    if (*(arg1 + 0x138))
    {
        char rax_1;
        int64_t rdx_2;
        rax_1 = argmax::Command::try_args::hece235fc07ad1533(arg1 + 0x50, *(arg1 + 0x40), 
            *(arg1 + 0x48));
        
        if (rax_1 & 1)
            return rdx_2;
        
        int32_t var_1e0;
        argmax::Command::status::h7e65af637f3ed111(&var_1e0);
        int64_t var_1d8;
        
        if (var_1e0 == 1)
            return var_1d8;
        
        int32_t var_1dc;
        
        if (var_1dc)
            *(arg1 + 0x148) = 4;
        
        fd::exec::CommandBuilder::new_command::hd2fd042878a0df86(&var_1e0, *(arg1 + 0x28), 
            *(arg1 + 0x30));
        int64_t r15_1 = var_1e0;
        
        if (-(r15_1) == -0x8000000000000000)
            return var_1d8;
        
        void var_1d0;
        void var_f8;
        memcpy(&var_f8, &var_1d0, 0xd8);
        core::ptr::drop_in_place$LT$argmax..Command$GT$::hca65ebb0b5b23438(arg1 + 0x50);
        *(arg1 + 0x50) = r15_1;
        *(arg1 + 0x58) = var_1d8;
        memcpy(arg1 + 0x60, &var_f8, 0xd8);
        *(arg1 + 0x138) = 0;
    }
    
    return 0;
}
