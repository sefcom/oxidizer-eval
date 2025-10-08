
  uint64_t uu_join::parse_file_number::h9b8850bce422b1b9(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    uint64_t result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(arg2, arg3, "12itoenocheck-ordercheck-orderhe…", 1);
    
    if (!result)
    {
        result = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(arg2, arg3, "2itoenocheck-ordercheck-orderhea…", 1);
        
        if (!result)
        {
            int64_t var_88 = 0;
            int64_t var_80_1 = arg2;
            uint64_t var_78_1 = arg3;
            char var_70_1 = 1;
            int64_t* var_98 = &var_88;
            int64_t (* var_90_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            void** const var_68 = &data_4fe5a8;
            int64_t var_60_1 = 1;
            int64_t var_48_1 = 0;
            int64_t** var_58_1 = &var_98;
            int64_t var_50_1 = 1;
            void var_38;
            core::option::Option$LT$T$GT$::map_or_else::h9a77d6fb89838746(&var_38, &var_68);
            int32_t var_20_1 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h6838e3ae00012226(&var_38);
            *arg1 = result;
            arg1[1] = &data_4fe360;
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
