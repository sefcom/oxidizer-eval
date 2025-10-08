
  fn uu_sort::custom_str_cmp::cmp_chars::h4df5683859bee02f(arg1: i32, arg2: i32, arg3: i32) -> i64

{
    if arg3 == 0
    {
        let c_1: bool = arg1 < arg2;
        return (arg1 != arg2 && !c_1) - 0;
    }
    
    let mut rcx_1: i32 = arg1 & 0x5f;
    
    if arg1 - 0x61 >= 0x1a
    {
        rcx_1 = arg1;
    }
    
    let mut rdx_1: i32 = arg2 & 0x5f;
    
    if arg2 - 0x61 >= 0x1a
    {
        rdx_1 = arg2;
    }
    
    let c: bool = rcx_1 < rdx_1;
    let mut result: i32;
    result = rcx_1 != rdx_1 && !c;
    result = result - 0;
    result
}
