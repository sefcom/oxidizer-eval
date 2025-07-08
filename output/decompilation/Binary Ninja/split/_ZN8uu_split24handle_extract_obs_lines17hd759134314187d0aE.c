
  int64_t uu_split::handle_extract_obs_lines::hd759134314187d0a(int64_t* arg1, int64_t arg2, size_t arg3, int64_t* arg4)

{
    int64_t var_b8 = 0;
    int64_t var_b0 = 4;
    int64_t var_a8 = 0;
    char var_b9 = 0;
    int64_t var_70 = arg2;
    int64_t var_68 = arg2 + arg3;
    char* var_60 = &var_b9;
    int64_t* var_58 = &var_b8;
    void var_a0;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hcbe47f8a54903219(&var_a0, &var_70);
    
    if (!var_a8)
    {
        int128_t var_38;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_38, arg2, arg3);
        int64_t var_28;
        arg1[2] = var_28;
        *arg1 = var_38;
    }
    else
    {
        int128_t var_88;
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hcf3bda9dc0bd03f6(&var_88, var_b0);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h9a0a0458ef52dcc0(arg4);
        int64_t var_78;
        arg4[2] = var_78;
        *arg4 = var_88;
        int64_t var_90;
        
        if (var_90 >= 2)
        {
            int64_t var_98;
            int128_t var_50;
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hcf3bda9dc0bd03f6(&var_50, var_98);
            int64_t var_40;
            arg1[2] = var_40;
            *arg1 = var_50;
        }
        else
            *arg1 = -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::hd7f863a59b4c66da(&var_a0);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::hd7f863a59b4c66da(&var_b8);
}
