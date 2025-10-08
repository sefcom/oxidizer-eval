
  fn uu_base32::base_common::fast_encode::write_to_output::ha42615d27832fe86(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i8, arg6: i8) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    let mut result: i64;
    
    if !(0 + -(*arg1))
    {
        result = uu_base32::base_common::fast_encode::write_with_line_breaks::ha97bbfa18a6fd8e1(
            arg1, arg2, arg3, arg4, arg5);
        
        if result != 0
        {
            return result;
        }
    }
    else
    {
        result = uu_base32::base_common::fast_encode::write_without_line_breaks::h469114263688e122(
            arg2, arg3, arg4, arg5, arg6);
        
        if result != 0
        {
            return result;
        }
    }
    0
}
