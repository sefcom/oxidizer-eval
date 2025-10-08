
  fn just::function::without_extension::hc62b4ce9a32431ae(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_38: i64 = arg3;
    let var_30: i64 = arg4;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
    let mut var_90: i128;
    let var_80: i64;
    let mut var_78: *mut i64;
    let mut var_68: *mut *mut c_void;
    let mut rax_3: *mut *mut c_void;
    
    if rax == 0
    {
        var_78 = &var_38;
        let var_70_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        rax_3 = &data_8300d8;
        'label_66cb42:
        var_68 = rax_3;
        let var_60_1: i64 = 2;
        let var_48_1: i64 = 0;
        let var_58_1: *mut *mut i64 = &var_78;
        let var_50_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_90, 0, rdx, &var_68);
        *arg1.byte_offset(8) = var_90;
        arg1[3] = var_80;
        *arg1 = 1;
    }
    else
    {
        let r15_1: u64 = rdx;
        let mut rax_1: *mut i16;
        rax_1 = std::path::Path::file_stem::hc69c2d2c61933548(arg3, arg4);
        
        if rax_1 == 0
        {
            var_78 = &var_38;
            let var_70_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            rax_3 = &data_82fec8;
            goto 'label_66cb42;
        }
        
        camino::Utf8Path::join::h5972e239d273391e(&var_68, rax, r15_1, rax_1);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h8d6445813d8446cd(
            &var_90, &var_68);
        arg1[3] = var_80;
        *arg1.byte_offset(8) = var_90;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$camino..Utf8PathBuf$GT$::hdd3b2f225d24af37(&var_68);
    }
    arg1
}
