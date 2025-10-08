
  fn bat::vscreen::Attributes::to_reset_sequence::h222042b0fc402e3a(arg1: *mut i64, arg2: i64) -> i64

{
    let mut rax: i64;
    let mut result: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h2ab28548f23fa4ab(0x11, 1, 1);
    let mut var_28: i64 = rax;
    let var_18: i64 = 0;
    
    if arg2 != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_28, "\x1b]8;;\x1b\", &data_5a2ff2);
    }
    
    arg1[2] = var_18;
    *arg1 = var_28;
    arg1[1] = result;
    result
}
