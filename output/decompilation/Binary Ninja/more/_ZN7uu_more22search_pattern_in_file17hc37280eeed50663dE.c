
  int64_t uu_more::search_pattern_in_file::hc37280eeed50663d(size_t arg1, int64_t arg2, int64_t* arg3)

{
    int128_t var_38;
    size_t var_28;
    int128_t var_20;
    size_t rax;
    
    if (*arg3 != -0x8000000000000000)
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_28, arg3);
        rax = var_28;
        var_38 = var_20;
    }
    else
    {
        var_38 = 1;
        *var_38[8] = 0;
        rax = 0;
    }
    
    size_t var_40 = rax;
    int64_t result;
    
    if (!arg2 || !*var_38[8])
        result = 0;
    else
    {
        var_28 = arg1;
        var_20 = arg1 + arg2 * 0x18;
        *var_20[8] = 0;
        char i;
        
        do
        {
            size_t rax_3;
            void* rdx;
            rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h718377d33ac374ce(&var_28);
            
            if (!rdx)
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_40);
                return 0;
            }
            
            i = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hce6c1a51027c4ec5(var_38, *var_38[8], *(rdx + 8), *(rdx + 0x10));
        } while (!i);
        result = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f03875085d5f083(&var_40);
    return result;
}
