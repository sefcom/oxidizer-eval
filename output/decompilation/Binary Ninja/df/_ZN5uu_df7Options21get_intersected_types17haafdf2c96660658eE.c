
  int64_t uu_df::Options::get_intersected_types::haafdf2c96660658e(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_80 = 0;
    int64_t var_78 = 8;
    int64_t result = 0;
    int64_t var_40 = arg2;
    int64_t var_38 = arg2 + arg3 * 0x18;
    void* i_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&var_40);
    int128_t var_68;
    
    if (!i_2)
    {
        int64_t result_2 = result;
        var_68 = var_80;
    }
    else
    {
        void* i_1 = i_2;
        void* i;
        
        do
        {
            if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(i_1, arg4, arg5))
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_68, i_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&var_80, &var_68);
            }
            
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f096fbf873cbadc(&var_40);
            i_1 = i;
        } while (i);
        int64_t result_1 = result;
        var_68 = var_80;
        
        if (result)
        {
            arg1[1] = result;
            *arg1 = var_80;
            return result;
        }
    }
    
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h25b333f73b84419d(&var_68);
}
