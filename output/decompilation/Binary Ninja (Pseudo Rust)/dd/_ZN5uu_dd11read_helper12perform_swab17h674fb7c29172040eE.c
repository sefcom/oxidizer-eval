
  fn uu_dd::read_helper::perform_swab::h674fb7c29172040e(arg1: i64, arg2: i64) -> u64

{
    let mut var_48: *mut c_void;
    let mut result: u64 =
        core::iter::adapters::step_by::StepBy$LT$I$GT$::new::hccaf6edfe6d8c61d(&var_48, arg2);
    let i_2: i64;
    let mut i_1: i64 = i_2;
    
    if i_1 != 0
    {
        let mut r15_1: *mut c_void = var_48;
        let mut i: i64;
        
        do
        {
            result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::swap::ha9fdd20b56a47561(arg1, 
                arg2, r15_1, r15_1.byte_offset(-1));
            let var_38: i64;
            r15_1 += var_38 + 1;
            i = i_1;
            i_1 -= 1;
        } while i != 1;
    }
    
    result
}
