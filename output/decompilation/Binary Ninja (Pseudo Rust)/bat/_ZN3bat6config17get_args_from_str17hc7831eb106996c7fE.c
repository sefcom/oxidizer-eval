
  fn bat::config::get_args_from_str::hc7831eb106996c7f(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_48: i64;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_48, 
        0xa, arg2, arg3);
    let mut var_58: i64 = 0;
    let var_50: i64 = arg3;
    let var_18: i16 = 1;
    let mut var_90: i64;
    let result: i64 =
        core::iter::traits::iterator::Iterator::collect::h4f2dc3a600ddf0ac(&var_90, &var_58);
    
    if 0 + -(var_90)
    {
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_80: i64;
    let var_68: i64 = var_80;
    let mut var_78: i128 = var_90;
    let rcx_1: i64 = *var_78[8];
    var_58 = rcx_1;
    let var_50_1: i64 = rcx_1 + var_80 * 0x18;
    var_48 = 0;
    let var_38: i64 = 0;
    core::iter::traits::iterator::Iterator::collect::h5cb71a7ae966d8ff(&var_90, &var_58);
    arg1[2] = var_80;
    *arg1 = var_90;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h209fbe59fdaf2615(&var_78)
}
