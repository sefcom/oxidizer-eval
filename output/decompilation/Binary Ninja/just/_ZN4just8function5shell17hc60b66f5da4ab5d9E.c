
  int64_t* just::function::shell::hc60b66f5da4ab5d9(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int128_t var_50;
    core::iter::traits::iterator::Iterator::chain::hccda7ad47eb94d33(&var_50, arg3, arg4, arg5);
    int64_t var_98;
    core::iter::traits::iterator::Iterator::collect::h3b3c61c1de019a3b(&var_98, &var_50);
    int64_t var_90;
    int64_t var_88;
    int64_t var_80;
    just::evaluator::Evaluator::run_command::h86d0b2f36f29e5c6(&var_80, *arg2, arg3, arg4, var_90, 
        var_88);
    
    if (!(0 + -(var_80)))
    {
        int64_t var_70;
        arg1[3] = var_70;
        *(arg1 + 8) = var_80;
        *arg1 = 0;
    }
    else
    {
        int128_t var_78;
        int128_t var_68 = var_78;
        just::function::shell::_$u7b$$u7b$closure$u7d$$u7d$::h4fdeb05a5b26fae1(&var_50, &var_68);
        int64_t var_40;
        arg1[3] = var_40;
        *(arg1 + 8) = var_50;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$similar..algorithms..utils..UniqueItem$LT$similar..algorithms..utils..OffsetLookup$LT$u32$GT$$GT$$GT$$GT$::h4d36ad61a40c2c34(var_98, var_90);
    return arg1;
}
