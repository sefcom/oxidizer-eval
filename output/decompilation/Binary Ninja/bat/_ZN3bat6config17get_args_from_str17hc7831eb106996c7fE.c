
  int64_t bat::config::get_args_from_str::hc7831eb106996c7f(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_48;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_48, 
        0xa, arg2, arg3);
    int64_t var_58 = 0;
    int64_t var_50 = arg3;
    int16_t var_18 = 1;
    int64_t var_90;
    int64_t result =
        core::iter::traits::iterator::Iterator::collect::h4f2dc3a600ddf0ac(&var_90, &var_58);
    
    if (0 + -(var_90))
    {
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int64_t var_80;
    int64_t var_68 = var_80;
    int128_t var_78 = var_90;
    int64_t rcx_1 = *var_78[8];
    var_58 = rcx_1;
    int64_t var_50_1 = rcx_1 + var_80 * 0x18;
    var_48 = 0;
    int64_t var_38 = 0;
    core::iter::traits::iterator::Iterator::collect::h5cb71a7ae966d8ff(&var_90, &var_58);
    arg1[2] = var_80;
    *arg1 = var_90;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h209fbe59fdaf2615(&var_78);
}
