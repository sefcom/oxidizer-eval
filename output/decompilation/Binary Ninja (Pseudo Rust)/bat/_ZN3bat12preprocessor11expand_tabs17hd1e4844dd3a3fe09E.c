
  fn bat::preprocessor::expand_tabs::hd1e4844dd3a3fe09(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h2ab28548f23fa4ab(arg3 * 2, 1, 1);
    let var_e8: i64 = rdx;
    let mut var_80: i64 = arg2;
    let var_f8: i64 = arg3;
    let var_78: i64 = arg3;
    let var_70: i64 = arg2;
    let var_68: i64 = arg2 + arg3;
    let var_60: i64 = 0;
    let var_50: i32 = 0x110001;
    let var_d0: i64 = arg2;
    let mut var_b0: i64;
    _$LT$bat..vscreen..EscapeSequenceOffsetsIterator$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h292aaa547b62c7bf(&var_b0, &var_80);
    let rax_2: i64 = var_b0;
    
    if rax_2 != 5
    {
        /* jump -> *(&data_49c380).byte_offset(rax_2 << 2) + &data_49c380 */
    }
    
    arg1[1] = 0;
    *arg1 = rax;
    0
}
