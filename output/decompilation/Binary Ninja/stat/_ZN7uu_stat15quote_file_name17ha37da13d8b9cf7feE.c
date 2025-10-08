
  int128_t* uu_stat::quote_file_name::ha37da13d8b9cf7fe(int128_t* arg1, int64_t arg2, uint64_t arg3, char arg4)

{
    int64_t var_48 = arg2;
    uint64_t var_40 = arg3;
    int128_t var_90;
    void** const var_78;
    
    if (arg4 < 2)
    {
        void var_28;
        alloc::str::_$LT$impl$u20$str$GT$::replace::h787bb0d29ba882e8(&var_28, arg2, arg3);
        void* var_38 = &var_28;
        int64_t (* var_30)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_78 = &data_519bc8;
        int64_t var_70 = 2;
        int64_t var_58 = 0;
        void** var_68 = &var_38;
        int64_t var_60 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_90, &var_78);
        int64_t var_80;
        arg1[1] = var_80;
        *arg1 = var_90;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_28);
    }
    
    if (arg4 != 2)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(arg1, arg2, arg3);
    
    var_90 = &var_48;
    *var_90[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
    var_78 = &data_519be8;
    int64_t var_70_1 = 2;
    int64_t var_58_1 = 0;
    int128_t* var_68_1 = &var_90;
    int64_t var_60_1 = 1;
    return core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(arg1, &var_78);
}
