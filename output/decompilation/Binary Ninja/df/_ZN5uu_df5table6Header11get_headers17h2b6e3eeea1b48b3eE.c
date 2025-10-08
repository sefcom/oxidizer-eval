
  int64_t uu_df::table::Header::get_headers::h2b6e3eeea1b48b3e(int64_t* arg1, void* arg2)

{
    int64_t var_80 = 0;
    int64_t result = 8;
    int64_t var_70 = 0;
    int64_t rbx = *(arg2 + 0x10);
    
    if (rbx)
    {
        void* r14_1 = *(arg2 + 8);
        uint32_t rcx_1 = *(arg2 + 0x55);
        int64_t rdx_1 = *(arg2 + 0x48);
        int64_t r12_1 = 0;
        
        do
        {
            int128_t var_e8;
            void** var_d8_1;
            int128_t var_c8;
            void** var_b8;
            
            switch (*(r14_1 + r12_1))
            {
                case 0:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Filesystem-blocksAvailableAvail …", 0xa);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 1:
                {
                    if (rcx_1 == 1)
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "SizesynctypeCyan    TYPE"`$\EADV…", 4);
                        var_d8_1 = var_b8;
                        var_e8 = var_c8;
                    }
                    else
                    {
                        int128_t var_48;
                        void* var_90;
                        
                        if (rcx_1 != 2)
                        {
                            var_90 = arg2 + 0x48;
                            uint64_t (* var_88_2)(int64_t* arg1, int64_t* arg2) = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..fmt..Display$GT$::fmt::hfdf71bd12488da41;
                            var_c8 = &data_502ed0;
                            *var_c8[8] = 2;
                            int64_t var_a8_2 = 0;
                            var_b8 = &var_90;
                            int64_t var_b0_2 = 1;
                            core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(&var_48, 
                                &var_c8);
                        }
                        else
                        {
                            int64_t var_50 = rdx_1;
                            var_90 = &var_50;
                            uint64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            var_c8 = &data_502ed0;
                            *var_c8[8] = 2;
                            int64_t var_a8_1 = 0;
                            var_b8 = &var_90;
                            int64_t var_b0_1 = 1;
                            core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(&var_48, 
                                &var_c8);
                        }
                        var_e8 = var_48;
                        int64_t var_38;
                        int64_t var_d8_2 = var_38;
                    }
                    break;
                }
                case 2:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "UsedhelpnoneUse%Noneshim\x1b[0mn…", 4);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 3:
                {
                    if ((rcx_1 | 2) != 3)
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "AvailableAvail \n", 9);
                    else
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Avail \n", 5);
                    
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 4:
                {
                    if (rcx_1 != 2)
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Use%Noneshim\x1b[0mnameSizesynct…", 4);
                    else
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "CapacityUIoErrorEL3HLTEL3RSTELNR…", 8);
                    
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 5:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Mounted onFilesystem-blocksAvail…", 0xa);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 6:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "InodesMounted onFilesystem-block…", 6);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 7:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "IUsedInodesMounted onFilesystem-…", 5);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 8:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "IFreeIUsedInodesMounted onFilesy…", 5);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 9:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "IUse%IFreeIUsedInodesMounted onF…", 5);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 0xa:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Filekeys\134u128for<\x1b[1mKindb…", 4);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
                case 0xb:
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "TypeERANGEEDEADLKENAMETOOLONGENO…", 4);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                    break;
                }
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h4b8ce3b04144c5a5(&var_80, &var_e8);
            r12_1 += 1;
        } while (rbx != r12_1);
    }
    
    arg1[2] = var_70;
    *arg1 = var_80;
    arg1[1] = result;
    return result;
}
