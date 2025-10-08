
  fn just::function::shell::hc60b66f5da4ab5d9(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> *mut i64

{
    let mut var_50: i128;
    core::iter::traits::iterator::Iterator::chain::hccda7ad47eb94d33(&var_50, arg3, arg4, arg5);
    let mut var_98: i64;
    core::iter::traits::iterator::Iterator::collect::h3b3c61c1de019a3b(&var_98, &var_50);
    let var_90: i64;
    let var_88: i64;
    let mut var_80: i64;
    just::evaluator::Evaluator::run_command::h86d0b2f36f29e5c6(&var_80, *arg2, arg3, arg4, var_90, 
        var_88);
    
    if !(0 + -(var_80))
    {
        let var_70: i64;
        arg1[3] = var_70;
        *arg1.byte_offset(8) = var_80;
        *arg1 = 0;
    }
    else
    {
        let var_78: i128;
        let mut var_68: i128 = var_78;
        just::function::shell::_$u7b$$u7b$closure$u7d$$u7d$::h4fdeb05a5b26fae1(&var_50, &var_68);
        let var_40: i64;
        arg1[3] = var_40;
        *arg1.byte_offset(8) = var_50;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_98, var_90);
    arg1
}
