
  fn uu_base32::uumain::uumain::h208a253a8567c2bd(arg1: i64) -> u64

{
    let mut var_78: i64;
    uu_base32::base_common::parse_base_cmd_args::h8afd9fd4b899cabf(&var_78, arg1);
    let rax: i64 = var_78;
    let result_2: u64;
    let mut result: u64 = result_2;
    
    if rax != 2
    {
        let var_50: i64;
        let var_20_1: i64 = var_50;
        let mut var_48: i64 = rax;
        let result_3: u64 = result;
        uu_base32::base_common::get_input::hb11f0dc280e05835(&var_78, &var_48);
        result = result_2;
        let var_60: i128;
        let mut var_68: i64;
        
        if var_78 != 1
        {
            let mut result_1: u64 = result;
            let var_80_1: i64 = var_68;
            var_68 = var_68;
            var_78 = var_48;
            let mut result_4: u64;
            let mut rdx_1: i64;
            result_4 = uu_base32::base_common::handle_input::h85c39567273d8cce(&result_1, &var_78);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uu_base32..base_common..ReadSeek$GT$$GT$::h7827976690eb04cf(&result_1);
        }
        else
        {
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h63e75792cc7caf14(
                var_68, var_60);
        }
    }
    
    result
}
