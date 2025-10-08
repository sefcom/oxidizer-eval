
  fn uu_df::table::Header::get_headers::h2b6e3eeea1b48b3e(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_80: i64 = 0;
    let result: i64 = 8;
    let var_70: i64 = 0;
    let rbx: i64 = *arg2.byte_offset(0x10);
    
    if rbx != 0
    {
        let r14_1: *mut c_void = *arg2.byte_offset(8);
        let rcx_1: u32 = *arg2.byte_offset(0x55);
        let rdx_1: i64 = *arg2.byte_offset(0x48);
        let mut r12_1: i64 = 0;
        
        do
        {
            let mut var_e8: i128;
            let mut var_d8_1: *mut *mut c_void;
            let mut var_c8: i128;
            let mut var_b8: *mut *mut c_void;
            
            match *r14_1.byte_offset(r12_1)
            {
                0 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Filesystem-blocksAvailableAvail …", 0xa);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                1 =>
                {
                    if rcx_1 == 1
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "SizesynctypeCyan    TYPE"`$\EADV…", 4);
                        var_d8_1 = var_b8;
                        var_e8 = var_c8;
                    }
                    else
                    {
                        let mut var_48: i128;
                        let mut var_90: *mut c_void;
                        
                        if rcx_1 != 2
                        {
                            var_90 = arg2.byte_offset(0x48);
                            let var_88_2: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..fmt..Display$GT$::fmt::hfdf71bd12488da41;
                            var_c8 = &data_502ed0;
                            *var_c8[8] = 2;
                            let var_a8_2: i64 = 0;
                            var_b8 = &var_90;
                            let var_b0_2: i64 = 1;
                            core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(&var_48, 
                                &var_c8);
                        }
                        else
                        {
                            let mut var_50: i64 = rdx_1;
                            var_90 = &var_50;
                            let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            var_c8 = &data_502ed0;
                            *var_c8[8] = 2;
                            let var_a8_1: i64 = 0;
                            var_b8 = &var_90;
                            let var_b0_1: i64 = 1;
                            core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(&var_48, 
                                &var_c8);
                        }
                        var_e8 = var_48;
                        let var_38: i64;
                        let var_d8_2: i64 = var_38;
                    }
                }
                2 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "UsedhelpnoneUse%Noneshim\x1b[0mn…", 4);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                3 =>
                {
                    if (rcx_1 | 2) != 3
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "AvailableAvail \n", 9);
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Avail \n", 5);
                    }
                    
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                4 =>
                {
                    if rcx_1 != 2
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Use%Noneshim\x1b[0mnameSizesynct…", 4);
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "CapacityUIoErrorEL3HLTEL3RSTELNR…", 8);
                    }
                    
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                5 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Mounted onFilesystem-blocksAvail…", 0xa);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                6 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "InodesMounted onFilesystem-block…", 6);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                7 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "IUsedInodesMounted onFilesystem-…", 5);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                8 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "IFreeIUsedInodesMounted onFilesy…", 5);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                9 =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "IUse%IFreeIUsedInodesMounted onF…", 5);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                0xa =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "Filekeys\134u128for<\x1b[1mKindb…", 4);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
                0xb =>
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_c8, "TypeERANGEEDEADLKENAMETOOLONGENO…", 4);
                    var_d8_1 = var_b8;
                    var_e8 = var_c8;
                }
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h4b8ce3b04144c5a5(&var_80, &var_e8);
            r12_1 += 1;
        } while rbx != r12_1;
    }
    
    arg1[2] = var_70;
    *arg1 = var_80;
    arg1[1] = result;
    result
}
