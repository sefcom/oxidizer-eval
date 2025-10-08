
  fn bat::assets::build_assets::acknowledgements::handle_license::h76a66dfc08dd74eb(arg1: *mut i8, arg2: i64) -> *mut *mut c_void

{
    let mut var_50: i64 = arg2;
    let rdx: i64;
    let var_48: i64 = rdx;
    let mut result_1: *mut *mut c_void;
    std::fs::read_to_string::h512db2d9218e57c1(&result_1, arg2);
    let mut result: *mut *mut c_void = result_1;
    let var_90: *mut i8;
    
    if -(result) != -0x8000000000000000
    {
        let mut result_3: *mut *mut c_void = result;
        let var_60_1: *mut i8 = var_90;
        let result_2: *mut *mut c_void;
        
        if bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments::h502a9fe06636a5ab(var_90, result_2) == 0
        {
            let mut rax_1: i8;
            let mut rdx_1: u64;
            rax_1 = bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements::h305a91287eb31f3e(var_90, result_2);
            
            if rax_1 == 0
            {
                let mut var_40: *mut i64 = &var_50;
                let var_38_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h658aa54aded8ca97;
                result_1 = &data_acdfa8;
                let var_90_1: i64 = 1;
                let var_78_1: i64 = 0;
                let mut var_88: *mut *mut i64 = &var_40;
                let var_80_1: i64 = 1;
                let mut var_30: i128;
                core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_30, 0, rdx_1, 
                    &result_1);
                *result_1[7] = var_30;
                let var_20: i64;
                var_88 = var_20;
                *arg1 = 0xb;
                *arg1.byte_offset(1) = result_1;
                *arg1.byte_offset(0x10) = var_90_1;
                *arg1.byte_offset(0x18) = var_88;
            }
            else
            {
                *arg1.byte_offset(8) = -0x8000000000000000;
                *arg1 = 0xd;
            }
            
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                &result_3);
        }
        
        result = result_2;
        *arg1.byte_offset(0x18) = result;
        *arg1.byte_offset(8) = result_3;
        *arg1 = 0xd;
    }
    else
    {
        *arg1 = 0;
        *arg1.byte_offset(8) = var_90;
    }
    result
}
