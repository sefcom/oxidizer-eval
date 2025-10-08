
  fn bat::style::ComponentAction::extract_from_str::h8933be029b90204c(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut r14: i64 = arg3;
    let mut result_1: i64 = arg2;
    let mut var_28: i64 = arg2;
    let var_20: i64 = arg2 + arg3;
    let mut rax_1: i8;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::hb422a2ff18694dd5(&var_28, arg1);
    let mut result: i64;
    
    if (rax_1 & 1) == 0
    {
        result = 0;
    }
    else
    {
        let mut var_2c: i32;
        
        if rdx == 0x2b
        {
            var_2c = 0;
            let mut rax_3: *mut i8;
            let mut rdx_4: u64;
            rax_3 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_2c, 4);
            let mut rdx_6: i64;
            result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_3, rdx_4, result_1, r14);
            
            if result == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            result_1 = result;
            r14 = rdx_6;
            result = 1;
        }
        else if rdx != 0x2d
        {
            result = 0;
        }
        else
        {
            var_2c = 0;
            let mut rax_2: *mut i8;
            let mut rdx_1: u64;
            rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_2c, 4);
            let mut rdx_3: i64;
            result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_2, rdx_1, result_1, r14);
            
            if result == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            result_1 = result;
            r14 = rdx_3;
            result = 2;
        }
    }
    
    *arg1 = result;
    *(arg1 + 8) = result_1;
    *(arg1 + 0x10) = r14;
    result
}
