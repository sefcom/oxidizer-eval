
  int128_t* uu_basenc::uumain::uumain::hc49e50b81a0d3fc1(int64_t arg1)

{
    int64_t var_88;
    uu_basenc::parse_cmd_args::haa59f9e932579024(&var_88, arg1);
    int64_t rax = var_88;
    int128_t* result_2;
    int128_t* result = result_2;
    
    if (rax != 2)
    {
        int64_t var_60;
        int64_t var_20_1 = var_60;
        int64_t var_48 = rax;
        int128_t* result_3 = result;
        uu_base32::base_common::get_input::h0f77b7573e033d64(&var_88, &var_48);
        result = result_2;
        int64_t* var_78;
        int64_t* r14 = var_78;
        
        if (!var_88)
        {
            int128_t* result_1 = result;
            var_78 = var_78;
            var_88 = var_48;
            char var_58;
            int128_t* result_4;
            int64_t* rdx_2;
            result_4 =
                uu_base32::base_common::handle_input::hb7a3beef6816c6b6(&result_1, var_58, &var_88);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h96419b3cbf10967f(result_1, r14);
        }
        else
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h700cc0223f36aeb6(
                &var_48);
    }
    
    return result;
}
