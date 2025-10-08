
  uint64_t uu_basenc::uumain::uumain::h682ba7894498b6ba(int64_t arg1)

{
    int64_t var_88;
    uu_basenc::parse_cmd_args::h179f17a9a715c835(&var_88, arg1);
    int64_t rax = var_88;
    uint64_t result_2;
    uint64_t result = result_2;
    
    if (rax != 2)
    {
        int64_t var_60;
        int64_t var_28_1 = var_60;
        int64_t var_50 = rax;
        uint64_t result_3 = result;
        uu_base32::base_common::get_input::hb11f0dc280e05835(&var_88, &var_50);
        result = result_2;
        int128_t var_70;
        int64_t var_78;
        
        if (var_88 != 1)
        {
            uint64_t result_1 = result;
            int64_t var_90_1 = var_78;
            var_78 = var_78;
            var_88 = var_50;
            char var_58;
            uint64_t result_4;
            int64_t rdx_2;
            result_4 =
                uu_base32::base_common::handle_input::hbf931206a21706fe(&result_1, var_58, &var_88);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uu_base32..base_common..ReadSeek$GT$$GT$::hbd9d2bace0cbdda3(&result_1);
        }
        else
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h084e20302bc333b2(
                var_78, var_70);
    }
    
    return result;
}
