
  uint64_t uu_nl::SectionDelimiter::parse::h6872879c6cc1e509(int64_t arg1, int64_t arg2, char* arg3, int64_t arg4)

{
    uint64_t rbx;
    rbx = 3;
    
    if (arg2 && arg4)
    {
        void var_88;
        core::str::pattern::StrSearcher::new::h5c57f06bc9dca553(&var_88, arg1, arg2, arg3, arg4);
        int64_t rax_1 = core::iter::traits::iterator::Iterator::fold::h1b468fa5e36bfe1d(&var_88);
        int64_t r14_2 = arg4 * rax_1;
        
        if (rax_1 == 1)
        {
            rbx = r14_2 == arg2;
            rbx ^= 3;
        }
        else if (rax_1 == 2)
        {
            rbx = r14_2 != arg2;
            rbx *= 2;
            rbx |= 1;
        }
        else if (rax_1 == 3)
        {
            int64_t rax_2;
            rax_2 = r14_2 != arg2;
            rbx = rax_2 * 3;
        }
    }
    
    return rbx;
}
