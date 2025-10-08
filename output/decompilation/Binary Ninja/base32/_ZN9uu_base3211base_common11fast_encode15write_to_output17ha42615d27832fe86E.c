
  int64_t uu_base32::base_common::fast_encode::write_to_output::ha42615d27832fe86(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, char arg5, char arg6)

{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t result;
    
    if (!(0 + -(*arg1)))
    {
        result = uu_base32::base_common::fast_encode::write_with_line_breaks::ha97bbfa18a6fd8e1(
            arg1, arg2, arg3, arg4, arg5);
        
        if (result)
            return result;
    }
    else
    {
        result = uu_base32::base_common::fast_encode::write_without_line_breaks::h469114263688e122(
            arg2, arg3, arg4, arg5, arg6);
        
        if (result)
            return result;
    }
    return 0;
}
