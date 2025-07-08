
  fn uu_basenc::uumain::uumain::hc49e50b81a0d3fc1(arg1: i64) -> *mut i128

{
    let mut var_88: i64;
    uu_basenc::parse_cmd_args::haa59f9e932579024(&var_88, arg1);
    let rax: i64 = var_88;
    let result_2: *mut i128;
    let mut result: *mut i128 = result_2;
    
    if rax != 2
    {
        let var_60: i64;
        let var_20_1: i64 = var_60;
        let mut var_48: i64 = rax;
        let result_3: *mut i128 = result;
        uu_base32::base_common::get_input::h0f77b7573e033d64(&var_88, &var_48);
        result = result_2;
        let mut var_78: *mut i64;
        let r14: *mut i64 = var_78;
        
        if var_88 == 0
        {
            let mut result_1: *mut i128 = result;
            var_78 = var_78;
            var_88 = var_48;
            let var_58: i8;
            let mut result_4: *mut i128;
            let mut rdx_2: *mut i64;
            result_4 =
                uu_base32::base_common::handle_input::hb7a3beef6816c6b6(&result_1, var_58, &var_88);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h96419b3cbf10967f(result_1, r14);
        }
        else
        {
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h700cc0223f36aeb6(
                &var_48);
        }
    }
    
    result
}
