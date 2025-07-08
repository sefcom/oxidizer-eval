
  fn uu_df::table::Header::get_headers::h9deb63aa1bbc7ffc(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_88: i64 = 0;
    let var_80: i64 = 8;
    let result: i64 = 0;
    let rax: i64 = *arg2.byte_offset(8);
    let mut var_70: i64 = rax;
    let var_68: i64 = *arg2.byte_offset(0x10) + rax;
    let rax_1: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_70);
    
    if rax_1 == 0
    {
        'label_4cb3d2:
        arg1[1] = result;
        *arg1 = var_88;
        return result;
    }
    
    let rbp_1: u32 = *arg2.byte_offset(0x55);
    let r15_1: i64 = *arg2.byte_offset(0x48);
    let mut var_e8_1: i128;
    let mut var_d8_1: i64;
    let mut var_c8: i128;
    let mut var_b8: i64;
    
    match *rax_1
    {
        0 =>
        {
            'label_4cb208:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "Filesystem-blocksAvailableAvailM…", 0xa);
        }
        1 =>
        {
            loop
            {
                if rbp_1 == 1
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_c8, &data_40be9c[0xc], 4);
                    goto 'label_4cb38a;
                }
                
                let mut var_98: *mut c_void;
                
                if rbp_1 != 2
                {
                    var_98 = arg2.byte_offset(0x48);
                    let var_90_2: fn(arg1: *mut i64, arg2: *mut c_void) -> u64 = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..fmt..Display$GT$::fmt::h8e5a67f211de2b2e;
                    var_c8 = &data_541b50;
                    *var_c8[8] = 2;
                    let var_a8_2: i64 = 0;
                    let var_b8_2: *mut *mut c_void = &var_98;
                    let var_b0_2: i64 = 1;
                    let mut var_40: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(&var_40, &var_c8);
                    var_e8_1 = var_40;
                    let var_30: i64;
                    var_d8_1 = var_30;
                }
                else
                {
                    let mut var_60: i64 = r15_1;
                    var_98 = &var_60;
                    let var_90_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_c8 = &data_541b50;
                    *var_c8[8] = 2;
                    let var_a8_1: i64 = 0;
                    let var_b8_1: *mut *mut c_void = &var_98;
                    let var_b0_1: i64 = 1;
                    let mut var_58: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(&var_58, &var_c8);
                    var_e8_1 = var_58;
                    let var_48: i64;
                    var_d8_1 = var_48;
                }
                'label_4cb39d:
                var_b8 = var_d8_1;
                var_c8 = var_e8_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&var_88, &var_c8);
                let rax_13: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_70);
                
                if rax_13 == 0
                {
                    goto 'label_4cb3d2;
                }
                
                match *rax_13
                {
                    0 =>
                    {
                        goto 'label_4cb208;
                    }
                    1 =>
                    {
                        continue;
                    }
                    2 =>
                    {
                        goto 'label_4cb471;
                    }
                    3 =>
                    {
                        goto 'label_4cb24d;
                    }
                    4 =>
                    {
                        break;
                    }
                    5 =>
                    {
                        goto 'label_4cb223;
                    }
                    6 =>
                    {
                        goto 'label_4cb48c;
                    }
                    7 =>
                    {
                        goto 'label_4cb4a7;
                    }
                    8 =>
                    {
                        goto 'label_4cb2d4;
                    }
                    9 =>
                    {
                        goto 'label_4cb4dd;
                    }
                    0xa =>
                    {
                        goto 'label_4cb23e;
                    }
                    0xb =>
                    {
                        goto 'label_4cb4c2;
                    }
                }
            }
            
            goto 'label_4cb288;
        }
        2 =>
        {
            'label_4cb471:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "UsednoneNoneshimUse%name\x1b[0m …", 4);
        }
        3 =>
        {
            'label_4cb24d:
            
            if (rbp_1 | 2) != 3
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "AvailableAvailMounted onInodesIU…", 9);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "AvailMounted onInodesIUsedIFreeI…", 5);
            }
        }
        4 =>
        {
            'label_4cb288:
            
            if rbp_1 != 2
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "Use%name\x1b[0m    synctypeSizeC…", 4);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "CapacityUIoErrorEL3HLTEL3RSTELNR…", 8);
            }
        }
        5 =>
        {
            'label_4cb223:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "Mounted onInodesIUsedIFreeIUse%s…", 0xa);
        }
        6 =>
        {
            'label_4cb48c:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "InodesIUsedIFreeIUse%src/uu/df/s…", 6);
        }
        7 =>
        {
            'label_4cb4a7:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "IUsedIFreeIUse%src/uu/df/src/tab…", 5);
        }
        8 =>
        {
            'label_4cb2d4:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "IFreeIUse%src/uu/df/src/table.rs…", 5);
        }
        9 =>
        {
            'label_4cb4dd:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "IUse%src/uu/df/src/table.rs \nca…", 5);
        }
        0xa =>
        {
            'label_4cb23e:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "Fileu128for<keysKindboolmut \x1b…", 4);
        }
        0xb =>
        {
            'label_4cb4c2:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "TypeERANGEEDEADLKENAMETOOLONGENO…", 4);
        }
    }
    
    'label_4cb38a:
    var_d8_1 = var_b8;
    var_e8_1 = var_c8;
    goto 'label_4cb39d;
}
