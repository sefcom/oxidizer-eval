
  fn uu_dd::read_helper::perform_swab::h85f2ce77153961c5(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_48: i64;
    let mut result: i64 =
        core::iter::adapters::step_by::StepBy$LT$I$GT$::new::hc206f71f6fe0b664(&var_48, arg2);
    let i_1: i64;
    let mut i: i64 = i_1;
    
    if i != 0
    {
        let mut r15_1: i64 = var_48;
        
        do
        {
            if r15_1 >= arg2
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1, arg2);
                /* no return */
            }
            
            if r15_1 - 1 >= arg2
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1 - 1, arg2);
                /* no return */
            }
            
            i -= 1;
            result = core::ptr::swap::h905a97f5e78b1d89(arg1.byte_offset(r15_1), 
                arg1.byte_offset(r15_1).byte_offset(-1));
            let var_38: i64;
            r15_1 += var_38 + 1;
        } while i != 0;
    }
    
    result
}
