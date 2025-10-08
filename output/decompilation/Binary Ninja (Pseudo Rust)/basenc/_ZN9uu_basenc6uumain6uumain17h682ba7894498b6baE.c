
  fn uu_basenc::uumain::uumain::h682ba7894498b6ba(arg1: i64) -> u64

{
    let mut var_88: i64;
    uu_basenc::parse_cmd_args::h179f17a9a715c835(&var_88, arg1);
    let rax: i64 = var_88;
    let result_2: u64;
    let mut result: u64 = result_2;
    
    if rax != 2
    {
        let var_60: i64;
        let var_28_1: i64 = var_60;
        let mut var_50: i64 = rax;
        let result_3: u64 = result;
        uu_base32::base_common::get_input::hb11f0dc280e05835(&var_88, &var_50);
        result = result_2;
        let var_70: i128;
        let mut var_78: i64;
        
        if var_88 != 1
        {
            let mut result_1: u64 = result;
            let var_90_1: i64 = var_78;
            var_78 = var_78;
            var_88 = var_50;
            let var_58: i8;
            let mut result_4: u64;
            let mut rdx_2: i64;
            result_4 =
                uu_base32::base_common::handle_input::hbf931206a21706fe(&result_1, var_58, &var_88);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uu_base32..base_common..ReadSeek$GT$$GT$::hbd9d2bace0cbdda3(&result_1);
        }
        else
        {
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h084e20302bc333b2(
                var_78, var_70);
        }
    }
    
    result
}
