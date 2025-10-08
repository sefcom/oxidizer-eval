
  uint64_t uu_nl::SectionDelimiter::parse::hfa2b6893488a2d97(int64_t arg1, int64_t arg2, char* arg3, int64_t arg4)

{
    char* rcx = arg3;
    arg3 = !arg4;
    arg3 |= !arg2;
    uint64_t rbx;
    rbx = 3;
    
    if (!arg3)
    {
        void var_88;
        core::str::pattern::StrSearcher::new::h3b91c04870bd602f(&var_88, arg1, arg2, rcx, arg4);
        int64_t rax_2 = core::iter::traits::iterator::Iterator::fold::h04ceeaa90f1ce27d(&var_88);
        int64_t r14_1 = arg4 * rax_2;
        
        if (rax_2 == 1)
        {
            rbx = r14_1 == arg2;
            rbx ^= 3;
        }
        else if (rax_2 == 2)
        {
            rbx = r14_1 != arg2;
            rbx *= 2;
            rbx += 1;
        }
        else if (rax_2 == 3)
        {
            int64_t rax_3;
            rax_3 = r14_1 != arg2;
            rbx = rax_3 * 3;
        }
    }
    
    return rbx;
}
