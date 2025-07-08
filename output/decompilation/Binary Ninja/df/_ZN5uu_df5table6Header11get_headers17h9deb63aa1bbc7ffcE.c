
  int64_t uu_df::table::Header::get_headers::h9deb63aa1bbc7ffc(int128_t* arg1, void* arg2)

{
    int64_t var_88 = 0;
    int64_t var_80 = 8;
    int64_t result = 0;
    int64_t rax = *(arg2 + 8);
    int64_t var_70 = rax;
    int64_t var_68 = *(arg2 + 0x10) + rax;
    char* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_70);
    
    if (!rax_1)
    {
        label_4cb3d2:
        arg1[1] = result;
        *arg1 = var_88;
        return result;
    }
    
    uint32_t rbp_1 = *(arg2 + 0x55);
    int64_t r15_1 = *(arg2 + 0x48);
    int128_t var_e8_1;
    int64_t var_d8_1;
    int128_t var_c8;
    int64_t var_b8;
    
    switch (*rax_1)
    {
        case 0:
        {
            label_4cb208:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "Filesystem-blocksAvailableAvailM…", 0xa);
            break;
        }
        case 1:
        {
            while (true)
            {
                if (rbp_1 == 1)
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_c8, &data_40be9c[0xc], 4);
                    goto label_4cb38a;
                }
                
                void* var_98;
                
                if (rbp_1 != 2)
                {
                    var_98 = arg2 + 0x48;
                    uint64_t (* var_90_2)(int64_t* arg1, void* arg2) = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..fmt..Display$GT$::fmt::h8e5a67f211de2b2e;
                    var_c8 = &data_541b50;
                    *var_c8[8] = 2;
                    int64_t var_a8_2 = 0;
                    void** var_b8_2 = &var_98;
                    int64_t var_b0_2 = 1;
                    int128_t var_40;
                    core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(&var_40, &var_c8);
                    var_e8_1 = var_40;
                    int64_t var_30;
                    var_d8_1 = var_30;
                }
                else
                {
                    int64_t var_60 = r15_1;
                    var_98 = &var_60;
                    uint64_t (* var_90_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    var_c8 = &data_541b50;
                    *var_c8[8] = 2;
                    int64_t var_a8_1 = 0;
                    void** var_b8_1 = &var_98;
                    int64_t var_b0_1 = 1;
                    int128_t var_58;
                    core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(&var_58, &var_c8);
                    var_e8_1 = var_58;
                    int64_t var_48;
                    var_d8_1 = var_48;
                }
                label_4cb39d:
                var_b8 = var_d8_1;
                var_c8 = var_e8_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&var_88, &var_c8);
                char* rax_13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_70);
                
                if (!rax_13)
                    goto label_4cb3d2;
                
                switch (*rax_13)
                {
                    case 0:
                    {
                        goto label_4cb208;
                    }
                    case 1:
                    {
                        continue;
                    }
                    case 2:
                    {
                        goto label_4cb471;
                    }
                    case 3:
                    {
                        goto label_4cb24d;
                    }
                    case 4:
                    {
                        break;
                        break;
                    }
                    case 5:
                    {
                        goto label_4cb223;
                    }
                    case 6:
                    {
                        goto label_4cb48c;
                    }
                    case 7:
                    {
                        goto label_4cb4a7;
                    }
                    case 8:
                    {
                        goto label_4cb2d4;
                    }
                    case 9:
                    {
                        goto label_4cb4dd;
                    }
                    case 0xa:
                    {
                        goto label_4cb23e;
                    }
                    case 0xb:
                    {
                        goto label_4cb4c2;
                    }
                }
            }
            
            goto label_4cb288;
        }
        case 2:
        {
            label_4cb471:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "UsednoneNoneshimUse%name\x1b[0m …", 4);
            break;
        }
        case 3:
        {
            label_4cb24d:
            
            if ((rbp_1 | 2) != 3)
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "AvailableAvailMounted onInodesIU…", 9);
            else
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "AvailMounted onInodesIUsedIFreeI…", 5);
            break;
        }
        case 4:
        {
            label_4cb288:
            
            if (rbp_1 != 2)
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "Use%name\x1b[0m    synctypeSizeC…", 4);
            else
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                    &var_c8, "CapacityUIoErrorEL3HLTEL3RSTELNR…", 8);
            break;
        }
        case 5:
        {
            label_4cb223:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "Mounted onInodesIUsedIFreeIUse%s…", 0xa);
            break;
        }
        case 6:
        {
            label_4cb48c:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "InodesIUsedIFreeIUse%src/uu/df/s…", 6);
            break;
        }
        case 7:
        {
            label_4cb4a7:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "IUsedIFreeIUse%src/uu/df/src/tab…", 5);
            break;
        }
        case 8:
        {
            label_4cb2d4:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "IFreeIUse%src/uu/df/src/table.rs…", 5);
            break;
        }
        case 9:
        {
            label_4cb4dd:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "IUse%src/uu/df/src/table.rs \nca…", 5);
            break;
        }
        case 0xa:
        {
            label_4cb23e:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "Fileu128for<keysKindboolmut \x1b…", 4);
            break;
        }
        case 0xb:
        {
            label_4cb4c2:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_c8, "TypeERANGEEDEADLKENAMETOOLONGENO…", 4);
            break;
        }
    }
    
    label_4cb38a:
    var_d8_1 = var_b8;
    var_e8_1 = var_c8;
    goto label_4cb39d;
}
