
  fn rg::flags::parse::FlagMap::new::h57afd0ad02f8204a(arg1: *mut i128, arg2: i64, arg3: i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::h3cee8e0035d6d40e();
    let mut var_90: i128;
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h9613a7b1f59842a2(&var_90, 
        arg3, rax, rdx);
    let mut var_c8: i64 = arg2;
    let var_c0: i64 = arg2 + arg3 * 0x28;
    let var_b8: i64 = 0;
    let mut result: i64;
    let mut i: *mut c_void;
    result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1da52e6881dbc92(&var_c8);
    
    if i != 0
    {
        let mut result_1: i64 = result;
        
        do
        {
            let rsi_1: i64 = *i.byte_offset(0x10);
            let mut var_60: i64;
            let mut rdx_7: *mut i64;
            
            if rsi_1 == 0
            {
                let rbp_1: i8 = *i.byte_offset(0x18);
                let rax_4: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 1, 0);
                
                if rax_4 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_4 = rbp_1;
                var_60 = 1;
                let var_58_1: u64 = rax_4;
                let var_50_1: i64 = 1;
                let mut rax_5: i64;
                let mut rdx_6: i64;
                rax_5 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h285a29dab23554b5(
                    &var_90, &var_60, result_1);
                let mut var_a0: i64 = rax_5;
                let var_98_1: i64 = rdx_6;
                
                if rax_5 != 0
                {
                    rdx_7 = &var_a0;
                    'label_65544f:
                    var_60 = 0;
                    core::panicking::assert_failed::h2eb0a2f9b5b29742(0, &data_462620, rdx_7, 
                        &var_60);
                    /* no return */
                }
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_60, rsi_1, *i.byte_offset(0x18));
                let mut rax_3: i64;
                let mut rdx_4: i64;
                rax_3 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h285a29dab23554b5(
                    &var_90, &var_60, result_1);
                let mut var_b0: i64 = rax_3;
                let var_a8_1: i64 = rdx_4;
                
                if rax_3 != 0
                {
                    rdx_7 = &var_b0;
                    goto 'label_65544f;
                }
            }
            result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf1da52e6881dbc92(&var_c8);
            result_1 = result;
        } while i != 0;
    }
    
    let zmm0: i128 = var_90;
    let var_70: i128;
    arg1[2] = var_70;
    let var_80: i128;
    arg1[1] = var_80;
    *arg1 = zmm0;
    result
}
