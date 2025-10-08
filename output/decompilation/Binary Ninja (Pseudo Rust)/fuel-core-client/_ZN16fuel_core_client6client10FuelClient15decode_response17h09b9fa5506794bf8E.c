
  fn fuel_core_client::client::FuelClient::decode_response::h09b9fa5506794bf8(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64) -> *mut c_void

{
    fuel_core_client::client::FuelClient::update_chain_state_info::haf6a53de436ef9a6(arg2, arg3);
    
    if arg3[0x13] != 2
    {
        let rax_1: i8 = arg3[0x17];
        
        if rax_1 != 2 && (rax_1 & 1) != 0
        {
            arg1[1] = std::io::error::Error::new::h31653b416e5e1c98(0x28, 
                "The required block height was no…", 0x25);
            *arg1 = -0x7ffffffffffffff7;
            /* tailcall */
            return core::ptr::drop_in_place$LT$fuel_core_client..reqwest_ext..FuelGraphQlResponse$LT$fuel_core_client..client..schema..tx..TransactionStatusQuery$GT$$GT$::h52621b42781dbb48(arg3);
        }
    }
    
    let var_88: i128 = *arg3.byte_offset(0x88);
    let var_98: i128 = *arg3.byte_offset(0x78);
    let var_a8: i128 = *arg3.byte_offset(0x68);
    let var_b8: i128 = *arg3.byte_offset(0x58);
    let var_c8: i128 = *arg3.byte_offset(0x48);
    let var_d8: i128 = *arg3.byte_offset(0x38);
    let var_e8: i128 = *arg3.byte_offset(0x28);
    let var_f8: i64 = (*arg3.byte_offset(0x18));
    let mut var_78: i128 = *arg3;
    let mut result: *mut c_void = arg3[2];
    let result_1: *mut c_void = result;
    
    if var_f8 != -0x7ffffffffffffff7
    {
        *arg1.byte_offset(0x70) = *arg3.byte_offset(0x88);
        *arg1.byte_offset(0x60) = *arg3.byte_offset(0x78);
        *arg1.byte_offset(0x50) = *arg3.byte_offset(0x68);
        *arg1.byte_offset(0x40) = *arg3.byte_offset(0x58);
        let zmm0: i128 = *arg3.byte_offset(0x18);
        let zmm1: i128 = *arg3.byte_offset(0x28);
        let zmm2: i128 = *arg3.byte_offset(0x38);
        *arg1.byte_offset(0x30) = *arg3.byte_offset(0x48);
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = zmm0;
        
        if var_78 != -0x8000000000000000
        {
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$cynic..result..GraphQlError$GT$$GT$::hcfe179591baf6ce1(&var_78);
        }
    }
    else
    {
        if var_78 != -0x8000000000000000
        {
            let mut var_40: ();
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he05118ef1c285a50(&var_40, arg3);
            let mut var_58: ();
            core::iter::traits::iterator::Iterator::collect::h0ed4b21333e53f4f(&var_58, &var_40);
            result = fuel_core_client::client::from_strings_errors_to_std_error::h0d912308b953dd65(
                &var_58);
        }
        else
        {
            result = std::io::error::Error::new::h31653b416e5e1c98(0x28, 
                "Invalid responseresolved_outputs…", 0x10);
        }
        
        arg1[1] = result;
        *arg1 = -0x7ffffffffffffff7;
    }
    
    result
}
