
  int128_t* uu_base32::uumain::uumain::h833af7f40bb8685c(int64_t arg1, int64_t arg2)

{
    int64_t var_78;
    uu_base32::base_common::parse_base_cmd_args::h94218dbfb2ea4ba6(&var_78, arg1, arg2, 
        "encode/decode data and print to …", 0x177, "{} [OPTION]... [FILE]", 0x15);
    int64_t rax = var_78;
    int128_t* result_2;
    int128_t* result = result_2;
    
    if (rax != 2)
    {
        int64_t var_50;
        int64_t var_18_1 = var_50;
        int64_t var_40 = rax;
        int128_t* result_3 = result;
        uu_base32::base_common::get_input::h0f77b7573e033d64(&var_78, &var_40);
        result = result_2;
        int64_t* var_68;
        int64_t* r14 = var_68;
        
        if (!var_78)
        {
            int128_t* result_1 = result;
            var_68 = var_68;
            var_78 = var_40;
            int128_t* result_4;
            int64_t* rdx_2;
            result_4 =
                uu_base32::base_common::handle_input::h2d10849ec2fe263b(&result_1, 2, &var_78);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::ha901095e617d76fc(result_1, r14);
        }
        else
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::hac45288a00438e90(
                &var_40);
    }
    
    return result;
}
