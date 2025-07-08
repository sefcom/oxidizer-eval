
  int128_t* uu_join::parse_file_number::h95ac4b0d73e9ada5(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int128_t* result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(arg2, arg3, "12itoenocheck-ordercheck-orderhe…", 1);
    
    if (!result)
    {
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(arg2, arg3, "2itoenocheck-ordercheck-orderhea…", 1);
        
        if (!result)
        {
            int64_t var_88 = 0;
            int64_t var_80_1 = arg2;
            uint64_t var_78_1 = arg3;
            char var_70_1 = 1;
            int64_t* var_98 = &var_88;
            int64_t (* var_90_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            void** const var_68 = &data_5354c0;
            int64_t var_60_1 = 1;
            int64_t var_48_1 = 0;
            int64_t** var_58_1 = &var_98;
            int64_t var_50_1 = 1;
            void var_38;
            core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_38, &var_68);
            int32_t var_20_1 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_38);
            *arg1 = result;
            arg1[1] = &data_5352b8;
        }
        else
        {
            arg1[1] = 1;
            *arg1 = 0;
        }
    }
    else
    {
        arg1[1] = 0;
        *arg1 = 0;
    }
    
    return result;
}
