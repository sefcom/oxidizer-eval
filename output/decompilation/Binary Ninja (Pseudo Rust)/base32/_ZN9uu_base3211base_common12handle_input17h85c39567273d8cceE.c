
  fn uu_base32::base_common::handle_input::h85c39567273d8cce(arg1: *mut i64, arg2: *mut i128) -> u64

{
    let mut result_1: u64;
    uu_base32::base_common::has_padding::h3e2f3a909ac9db29(&result_1, arg1);
    let mut result: u64 = result_1;
    
    if result == 0
    {
        let rbp_1: i8 = *arg2.byte_offset(0x28);
        let var_38: i8;
        let mut rax_1: u64;
        let mut rdx_2: *mut i64;
        rax_1 = uu_base32::base_common::get_supports_fast_decode_and_encode::h8af4b430fe326b3b(2, 
            rbp_1, var_38);
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        result_1 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        let mut var_48: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&result_1);
        let mut result_2: u64;
        let mut rdx_4: i64;
        
        if rbp_1 == 0
        {
            result_2 = uu_base32::base_common::fast_encode::fast_encode::ha8818e0efe68ac62(arg1, 
                &data_50cf10, &var_48, &data_50cf68, rax_1, rdx_2, *arg2);
        }
        else
        {
            result_2 = uu_base32::base_common::fast_decode::fast_decode::h4656aa0145473fc1(arg1, 
                &data_50cf10, &var_48, &data_50cf68, rax_1, rdx_2, *arg2.byte_offset(0x29));
        }
        result = result_2;
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h293464c87ce8e591(&var_48);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h28b95ed2c72bb100(rax_1, rdx_2);
    }
    
    core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h63e75792cc7caf14(arg2[1], 
        *arg2.byte_offset(0x18));
    result
}
