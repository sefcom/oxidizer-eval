
  void alacritty::input::keyboard::SequenceBuilder::try_build_control_char_or_mod::h9bae1bc9cdcc4939(int64_t* arg1, char arg2, char arg3, int16_t* arg4, char* arg5)

{
    if ((arg3 & 1 || arg2 & 1) && !*arg4)
    {
        uint64_t rax = arg4[1];
        uint64_t rsi = rax - 0xe;
        int64_t rbx_1;
        char const* const r14;
        
        if (rsi > 0x1c)
        {
            label_8581b1:
            
            if (!(arg3 & 1) || rax > 0xd)
            {
                *arg1 = -0x7fffffffffffffff;
                return;
            }
            
            char rdx = arg4[0x3d];
            rbx_1 = 5;
            int32_t rdx_2;
            char rsi_3;
            char* rdi;
            int64_t* r15_1;
            
            switch (rax)
            {
                case 0:
                {
                    r14 = "57449573585744257448573605744157…";
                    
                    if (rdx == 1)
                        r14 = "57443574495735857442574485736057…";
                    
                    rdx_2 = ~arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 2;
                    break;
                }
                case 1:
                case 4:
                case 5:
                case 7:
                case 9:
                case 0xa:
                {
                    *arg1 = -0x7fffffffffffffff;
                    return;
                    break;
                }
                case 2:
                {
                    r14 = "57358574425744857360574415744757…";
                    goto label_858248;
                }
                case 3:
                {
                    r14 = "57448573605744157447574465745257…";
                    
                    if (rdx == 1)
                        r14 = "57442574485736057441574475744657…";
                    
                    rdx_2 = ~arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 4;
                    break;
                }
                case 6:
                {
                    r14 = "57360574415744757446574525744557…";
                    goto label_858248;
                }
                case 8:
                {
                    r14 = "57447574465745257445574515744457…";
                    
                    if (rdx == 1)
                        r14 = "57441574475744657452574455745157…";
                    
                    rdx_2 = ~arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 1;
                    break;
                }
                case 0xb:
                {
                    r14 = "5745257445574515744457450Ignorin…";
                    
                    if (rdx == 1)
                        r14 = "574465745257445574515744457450Ig…";
                    
                    goto label_858248;
                }
                case 0xc:
                {
                    r14 = "574515744457450Ignoring : Vi mod…";
                    
                    if (rdx == 1)
                        r14 = "57445574515744457450Ignoring : V…";
                    
                    goto label_858248;
                }
                case 0xd:
                {
                    r14 = "57450Ignoring : Vi mode inactive…";
                    
                    if (rdx == 1)
                        r14 = "5744457450Ignoring : Vi mode ina…";
                    
                    rdx_2 = ~arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 8;
                    break;
                }
            }
            
            alacritty::input::keyboard::_::InternalBitFlags::set::h73b3a8b59dbf5641(rdi, rsi_3, 
                rdx_2);
            arg1 = r15_1;
            goto label_858248;
        }
        
        rbx_1 = 2;
        
        switch (rsi)
        {
            case 0:
            {
                r14 = "13573765737757378573795738057381…";
                label_858248:
                *arg1 = -0x8000000000000000;
                arg1[1] = r14;
                arg1[2] = rbx_1;
                arg1[3] = 0x110000;
                return;
                break;
            }
            case 1:
            {
                rbx_1 = 1;
                r14 = "9NumpadEqualsa combination of Ap…";
                goto label_858248;
            }
            case 2:
            {
                r14 = "32333412727574435744957358574425…";
                goto label_858248;
            }
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xa:
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
            {
                goto label_8581b1;
            }
            case 0xb:
            {
                rbx_1 = 3;
                r14 = "12727574435744957358574425744857…";
                goto label_858248;
            }
            case 0x1c:
            {
                r14 = "27574435744957358574425744857360…";
                goto label_858248;
            }
        }
    }
    
    *arg1 = -0x7fffffffffffffff;
}
