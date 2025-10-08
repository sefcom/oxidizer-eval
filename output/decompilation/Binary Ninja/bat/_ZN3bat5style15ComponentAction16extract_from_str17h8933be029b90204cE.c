
  int64_t bat::style::ComponentAction::extract_from_str::h8933be029b90204c(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t r14 = arg3;
    int64_t result_1 = arg2;
    int64_t var_28 = arg2;
    int64_t var_20 = arg2 + arg3;
    char rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point::hb422a2ff18694dd5(&var_28, arg1);
    int64_t result;
    
    if (!(rax_1 & 1))
        result = 0;
    else
    {
        int32_t var_2c;
        
        if (rdx == 0x2b)
        {
            var_2c = 0;
            char* rax_3;
            uint64_t rdx_4;
            rax_3 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_2c, 4);
            int64_t rdx_6;
            result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_3, rdx_4, result_1, r14);
            
            if (!result)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            result_1 = result;
            r14 = rdx_6;
            result = 1;
        }
        else if (rdx != 0x2d)
            result = 0;
        else
        {
            var_2c = 0;
            char* rax_2;
            uint64_t rdx_1;
            rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_2c, 4);
            int64_t rdx_3;
            result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_2, rdx_1, result_1, r14);
            
            if (!result)
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
    return result;
}
