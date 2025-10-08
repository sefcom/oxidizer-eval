
  int64_t alacritty::display::content::HintMatches::advance::hba48573630649a2f(void* arg1, int64_t arg2, int32_t arg3)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r12 = *(arg1 + 0x10);
    int64_t r13 = *(arg1 + 0x18);
    
    if (r13 < r12)
    {
        int64_t r13_1 = r13 + 1;
        void* rbp_2 = *(arg1 + 8) + r13 * 0x28 + 0x18;
        int64_t i;
        
        do
        {
            if (_$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(*(rbp_2 - 0x18), *(rbp_2 - 0x10), arg2, arg3) > 0)
                break;
            
            if (_$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(*(rbp_2 - 8), *rbp_2, arg2, arg3) >= 0)
                return 1;
            
            *(arg1 + 0x18) = r13_1;
            i = -(r12) + r13_1 + 1;
            r13_1 += 1;
            rbp_2 += 0x28;
        } while (i != 1);
    }
    
    return 0;
}
