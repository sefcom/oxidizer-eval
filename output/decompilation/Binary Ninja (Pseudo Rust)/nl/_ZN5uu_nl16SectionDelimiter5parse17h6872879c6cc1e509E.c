
  fn uu_nl::SectionDelimiter::parse::h6872879c6cc1e509(arg1: i64, arg2: i64, arg3: *mut i8, arg4: i64) -> u64

{
    let mut rbx: u64;
    rbx = 3;
    
    if arg2 != 0 && arg4 != 0
    {
        let mut var_88: ();
        core::str::pattern::StrSearcher::new::h5c57f06bc9dca553(&var_88, arg1, arg2, arg3, arg4);
        let rax_1: i64 = core::iter::traits::iterator::Iterator::fold::h1b468fa5e36bfe1d(&var_88);
        let r14_2: i64 = arg4 * rax_1;
        
        if rax_1 == 1
        {
            rbx = r14_2 == arg2;
            rbx ^= 3;
        }
        else if rax_1 == 2
        {
            rbx = r14_2 != arg2;
            rbx *= 2;
            rbx |= 1;
        }
        else if rax_1 == 3
        {
            let mut rax_2: i64;
            rax_2 = r14_2 != arg2;
            rbx = rax_2 * 3;
        }
    }
    
    rbx
}
