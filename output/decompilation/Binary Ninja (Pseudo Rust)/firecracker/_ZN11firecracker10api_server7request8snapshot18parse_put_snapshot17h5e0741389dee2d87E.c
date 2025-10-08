
  fn firecracker::api_server::request::snapshot::parse_put_snapshot::h5e0741389dee2d87(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64) -> i64

{
    let mut var_98: i128;
    let mut var_92_1: i128;
    let mut var_82_1: i64;
    let mut var_68: i128;
    
    if arg4 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_68, "Missing snapshot operation type.…", 0x20);
        let var_58: i64;
        var_82_1 = var_58;
        var_92_1 = var_68;
        arg1[1] = 0x301;
    }
    else
    {
        let mut var_50: i64 = arg4;
        let var_48_1: u64 = arg5;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "create/snapshot/missing field: e…", 6) != 0
        {
            return firecracker::api_server::request::snapshot::parse_put_snapshot_create::h4a6c9706c6202664(arg1, arg2, arg3);
        }
        
        let mut rax_2: i8;
        let mut rdx_1: u64;
        rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "loadIntrSUPPopennet__DDN_STAu128…", 4);
        
        if rax_2 != 0
        {
            return firecracker::api_server::request::snapshot::parse_put_snapshot_load::ha6addff4be7448a3(arg1, arg2, arg3);
        }
        
        var_68 = &var_50;
        *var_68[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
        var_98 = &data_7a38a0;
        let mut var_92: i128;
        *var_92[2] = 1;
        let var_78_1: i64 = 0;
        *var_92[0xa] = &var_68;
        let var_82: i64 = 1;
        let mut var_40: i128;
        core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_40, 0, rdx_1, &var_98);
        var_92_1 = var_40;
        let var_30: i64;
        var_82_1 = var_30;
        arg1[1] = 0x103;
    }
    let result: i64 = *var_92_1[8];
    *arg1.byte_offset(0xa) = var_98;
    arg1[3] = result;
    arg1[4] = var_82_1;
    *arg1 = 1;
    result
}
