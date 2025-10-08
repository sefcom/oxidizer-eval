
  uint64_t alacritty::display::color::List::fill_gray_ramp::he0a77d196e870960(void* arg1, int64_t arg2, int64_t arg3)

{
    char* r14_1 = arg1 + 0x2b8;
    int64_t rbp;
    rbp = 8;
    int64_t r15;
    r15 = 0xe8;
    uint64_t result;
    
    while (true)
    {
        char var_41 = r15;
        int64_t var_40 = arg2;
        int64_t var_38_1 = arg2 + (arg3 << 2);
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h215505a183a9d6f4(&var_40, &var_41);
        
        if (result)
        {
            r14_1[2] = *(result + 2);
            result = *result;
            *r14_1 = result;
            r14_1 = &r14_1[3];
            rbp += 0xa;
            char temp0_1 = r15;
            r15 += 1;
            
            if (temp0_1 == 0xff)
                break;
        }
        else
        {
            *r14_1 = rbp;
            r14_1[1] = rbp;
            r14_1[2] = rbp;
            r14_1 = &r14_1[3];
            rbp += 0xa;
            char temp1_1 = r15;
            r15 += 1;
            
            if (temp1_1 == 0xff)
                break;
        }
    }
    
    return result;
}
