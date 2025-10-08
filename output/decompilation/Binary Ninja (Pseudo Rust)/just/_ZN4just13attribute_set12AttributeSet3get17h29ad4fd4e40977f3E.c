
  fn just::attribute_set::AttributeSet::get::h29ad4fd4e40977f3(arg1: *mut i64, arg2: i8) -> *mut i64

{
    let mut var_49: i8 = arg2;
    let rax: i64 = *arg1;
    let rcx: i64 = arg1[1];
    let mut rsi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rsi = arg1[2];
    }
    
    let mut var_48: i64 = rdx;
    let var_40: i64 = 0;
    let var_38: i64 = rax;
    let var_30: i64 = rcx;
    let var_28: i64 = rdx;
    let var_20: i64 = 0;
    let var_18: i64 = rax;
    let var_10: i64 = rcx;
    let var_8: i64 = rsi;
    core::iter::traits::iterator::Iterator::try_fold::h16e498bcf7328724(&var_48, &var_49)
}
