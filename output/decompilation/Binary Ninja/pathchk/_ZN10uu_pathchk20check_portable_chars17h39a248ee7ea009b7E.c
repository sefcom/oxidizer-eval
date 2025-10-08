
  int64_t uu_pathchk::check_portable_chars::h39a248ee7ea009b7(char* arg1, int64_t arg2)

{
    char* var_80 = arg1;
    void* var_78 = &arg1[arg2];
    int64_t var_70 = 0;
    int64_t result;
    char* rdx_1;
    
    while (true)
    {
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc9d3bd4ed76b4919(&var_80);
        
        if (!rdx_1)
            break;
        
        if (core::slice::memchr::memchr::hf33a0085a04e009d(*rdx_1) != 1)
        {
            void* rax_2;
            void* rdx_3;
            rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(result, arg1, arg2);
            
            if (!rax_2)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, result, arg2);
                /* no return */
            }
            
            void* var_b0 = rax_2;
            void* var_a8_1 = rdx_3 + rax_2;
            char rax_3;
            int32_t rdx_5;
            rax_3 = core::str::validations::next_code_point::h57324ef1edfff360(&var_b0, rdx_1);
            
            if (!(rax_3 & 1))
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            int32_t var_bc = rdx_5;
            void* var_b8 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            int64_t var_48 = 0;
            char* var_40_1 = arg1;
            int64_t var_38_1 = arg2;
            char var_30_1 = 1;
            int32_t* var_68 = &var_bc;
            int64_t (* var_60_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
            int64_t* var_58_1 = &var_48;
            int64_t (* var_50_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_b0 = &data_4deb08;
            int64_t var_a8_2 = 3;
            int64_t var_90_1 = 0;
            int32_t** var_a0_1 = &var_68;
            int64_t var_98_1 = 2;
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
                &var_b8, &var_b0));
            break;
        }
    }
    
    result = !rdx_1;
    return result;
}
