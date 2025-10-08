
  fn uu_shuf::NonrepeatingIterator::produce::h3bfce2577d7903d3(arg1: *mut i64) -> i64

{
    if *arg1 == 0
    {
        let rax_6: i64 = arg1[3];
        
        if rax_6 != 0
        {
            arg1[3] = rax_6 - 1;
            return *(arg1[2] + (rax_6 << 3) - 8);
        }
        
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_50: *mut i64;
    let mut result: i64;
    let mut i: i8;
    
    do
    {
        let r14_1: i64 = arg1[7];
        _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h18cb9da65145660d(&var_50, &arg1[8]);
        result = rand::rng::Rng::random_range::ha1221712debc6f31(r14_1, &var_50);
        i = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h51345bfb8f3a667d(arg1, result);
    } while i != 0;
    let rax_2: i64 = arg1[9] - arg1[8];
    let mut rcx: i64 = -1;
    
    if rax_2 != -1
    {
        rcx = rax_2 + 1;
    }
    
    if arg1[3] >= rcx >> 2
    {
        let mut var_48: ();
        _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h18cb9da65145660d(&var_48, &arg1[8]);
        var_50 = arg1;
        let mut var_68: i128;
        core::iter::traits::iterator::Iterator::collect::hdfc6118d04e89ef8(&var_68, &var_50);
        let r8_1: i64 = arg1[6];
        let mut var_58: i64;
        
        if var_58 < r8_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: remaining.len(…");
            /* no return */
        }
        
        let var_60: i64;
        _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..slice..SliceRandom$GT$::partial_shuffle::h4298b1ac762d2851(&var_50, var_60, var_58, &arg1[7], r8_1);
        let rax_4: i64 = arg1[6];
        
        if rax_4 <= var_58
        {
            var_58 = rax_4;
        }
        
        core::ptr::drop_in_place$LT$uu_shuf..NumberSet$GT$::ha273958b9b703c98(arg1);
        *arg1 = 0;
        *arg1.byte_offset(8) = var_68;
        arg1[3] = var_58;
    }
    
    result
}
