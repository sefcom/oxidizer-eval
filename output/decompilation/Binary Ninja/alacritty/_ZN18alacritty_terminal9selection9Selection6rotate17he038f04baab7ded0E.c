
  int128_t* alacritty_terminal::selection::Selection::rotate::he038f04baab7ded0(int128_t* arg1, int64_t* arg2, int64_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)

{
    int32_t rax = alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(arg4);
    int64_t* r12 = &arg2[3];
    char temp0 = _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(*arg2, arg2[1], arg2[3], arg2[4]);
    int64_t* rbx = r12;
    
    if (temp0 > 0)
        rbx = arg2;
    
    if (temp0 <= 0)
        r12 = arg2;
    
    int32_t r13 = r12[1];
    int32_t rax_1;
    rax_1 = r13 >= arg5;
    bool rcx_1 = !arg5 | rax_1;
    rax_1 = r13 < arg6;
    int128_t* result;
    
    if (!(rcx_1 & rax_1))
    {
        label_7746cb:
        rax_1 = !arg5;
        int32_t rdi_3 = rbx[1];
        rcx_1 = rdi_3 >= arg5 | rax_1;
        rax_1 = rdi_3 < arg6;
        
        if (!(rcx_1 & rax_1))
        {
            label_774723:
            result = arg2[6];
            arg1[3] = result;
            int128_t zmm0 = *arg2;
            int128_t zmm1 = *(arg2 + 0x10);
            arg1[2] = *(arg2 + 0x20);
            arg1[1] = zmm1;
            *arg1 = zmm0;
        }
        else
        {
            int32_t rax_2 = core::cmp::Ord::min::h08e004ced85b11eb(rdi_3 - arg7, rax);
            rbx[1] = rax_2;
            
            if (rax_2 >= r13)
            {
                if (rax_2 >= arg6)
                {
                    if (arg2[6] != 1)
                    {
                        *rbx = alacritty_terminal::grid::Dimensions::last_column::h43ccb5805f51a6ac(
                            arg3);
                        rbx[2] = 1;
                    }
                    
                    rbx[1] = arg6 - 1;
                }
                
                goto label_774723;
            }
            
            result = arg1;
            *(result + 0x28) = 2;
        }
    }
    else
    {
        rax_1 = core::cmp::Ord::min::h08e004ced85b11eb(r13 - arg7, rax);
        r13 = rax_1;
        r12[1] = rax_1;
        
        if (rax_1 < arg6 || rbx[1] >= arg6)
        {
            if (!arg5)
                goto label_7746cb;
            
            if (r13 < arg5)
            {
                if (arg2[6] != 1)
                {
                    *r12 = 0;
                    r12[2] = 0;
                }
                
                r12[1] = arg5;
                r13 = arg5;
            }
            
            goto label_7746cb;
        }
        
        result = arg1;
        *(result + 0x28) = 2;
    }
    
    return result;
}
