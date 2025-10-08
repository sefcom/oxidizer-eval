
  uint64_t uu_base64::uumain::uumain::h6c6308a3430c0a47(int64_t arg1)

{
    int64_t var_78;
    uu_base32::base_common::parse_base_cmd_args::hffbaf3b1c4a659f4(&var_78, arg1);
    int64_t rax = var_78;
    uint64_t result_2;
    uint64_t result = result_2;
    
    if (rax != 2)
    {
        int64_t var_50;
        int64_t var_20_1 = var_50;
        int64_t var_48 = rax;
        uint64_t result_3 = result;
        uu_base32::base_common::get_input::hb11f0dc280e05835(&var_78, &var_48);
        result = result_2;
        int128_t var_60;
        int64_t var_68;
        
        if (var_78 != 1)
        {
            uint64_t result_1 = result;
            int64_t var_80_1 = var_68;
            var_68 = var_68;
            var_78 = var_48;
            uint64_t result_4;
            int64_t rdx_1;
            result_4 = uu_base32::base_common::handle_input::h611ac760698ac76b(&result_1, &var_78);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uu_base32..base_common..ReadSeek$GT$$GT$::hd3cbcf321e9f7917(&result_1);
        }
        else
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::hdba3db2b40d88a37(
                var_68, var_60);
    }
    
    return result;
}
