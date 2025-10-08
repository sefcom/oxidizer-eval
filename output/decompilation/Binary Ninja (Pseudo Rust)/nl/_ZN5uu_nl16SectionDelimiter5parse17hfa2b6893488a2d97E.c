
  fn uu_nl::SectionDelimiter::parse::hfa2b6893488a2d97(arg1: i64, arg2: i64, arg3: *mut i8, arg4: i64) -> u64

{
    let rcx: *mut i8 = arg3;
    arg3 = arg4 == 0;
    arg3 |= arg2 == 0;
    let mut rbx: u64;
    rbx = 3;
    
    if arg3 == 0
    {
        let mut var_88: ();
        core::str::pattern::StrSearcher::new::h3b91c04870bd602f(&var_88, arg1, arg2, rcx, arg4);
        let rax_2: i64 = core::iter::traits::iterator::Iterator::fold::h04ceeaa90f1ce27d(&var_88);
        let r14_1: i64 = arg4 * rax_2;
        
        if rax_2 == 1
        {
            rbx = r14_1 == arg2;
            rbx ^= 3;
        }
        else if rax_2 == 2
        {
            rbx = r14_1 != arg2;
            rbx *= 2;
            rbx += 1;
        }
        else if rax_2 == 3
        {
            let mut rax_3: i64;
            rax_3 = r14_1 != arg2;
            rbx = rax_3 * 3;
        }
    }
    
    rbx
}
