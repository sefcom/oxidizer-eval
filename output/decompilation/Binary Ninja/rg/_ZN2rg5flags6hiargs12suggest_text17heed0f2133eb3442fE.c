
  int64_t rg::flags::hiargs::suggest_text::heed0f2133eb3442f(int128_t* arg1, int64_t* arg2)

{
    char rax;
    uint64_t rdx_1;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(
        "pattern contains "\0"\n\nConside…", 0x15, arg2[1], arg2[2]);
    
    if (!rax)
    {
        int64_t result = arg2[2];
        arg1[1] = result;
        *arg1 = *arg2;
        return result;
    }
    
    int64_t* var_68 = arg2;
    int64_t (* var_60)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    void* const var_40 = &data_7eb448;
    int64_t var_38 = 2;
    int64_t var_20 = 0;
    void** var_30 = &var_68;
    int64_t var_28 = 1;
    int128_t var_58;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_58, 0, rdx_1, &var_40);
    int64_t var_48;
    arg1[1] = var_48;
    *arg1 = var_58;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(arg2);
}
