
  int64_t firecracker::api_server::request::snapshot::parse_put_snapshot::h5e0741389dee2d87(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5)

{
    int128_t var_98;
    int128_t var_92_1;
    int64_t var_82_1;
    int128_t var_68;
    
    if (!arg4)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_68, "Missing snapshot operation type.…", 0x20);
        int64_t var_58;
        var_82_1 = var_58;
        var_92_1 = var_68;
        arg1[1] = 0x301;
    }
    else
    {
        int64_t var_50 = arg4;
        uint64_t var_48_1 = arg5;
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "create/snapshot/missing field: e…", 6))
            return firecracker::api_server::request::snapshot::parse_put_snapshot_create::h4a6c9706c6202664(arg1, arg2, arg3);
        
        char rax_2;
        uint64_t rdx_1;
        rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "loadIntrSUPPopennet__DDN_STAu128…", 4);
        
        if (rax_2)
            return firecracker::api_server::request::snapshot::parse_put_snapshot_load::ha6addff4be7448a3(arg1, arg2, arg3);
        
        var_68 = &var_50;
        *var_68[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
        var_98 = &data_7a38a0;
        int128_t var_92;
        *var_92[2] = 1;
        int64_t var_78_1 = 0;
        *var_92[0xa] = &var_68;
        int64_t var_82 = 1;
        int128_t var_40;
        core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_40, 0, rdx_1, &var_98);
        var_92_1 = var_40;
        int64_t var_30;
        var_82_1 = var_30;
        arg1[1] = 0x103;
    }
    int64_t result = *var_92_1[8];
    *(arg1 + 0xa) = var_98;
    arg1[3] = result;
    arg1[4] = var_82_1;
    *arg1 = 1;
    return result;
}
