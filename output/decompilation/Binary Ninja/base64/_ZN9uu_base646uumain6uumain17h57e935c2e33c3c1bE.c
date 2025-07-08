
  int128_t* uu_base64::uumain::uumain::h57e935c2e33c3c1b(int64_t arg1, int64_t arg2)

{
    int64_t var_78;
    uu_base32::base_common::parse_base_cmd_args::hebf5c3bfe7660b5f(&var_78, arg1, arg2, 
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
                uu_base32::base_common::handle_input::h3e33950ee952075b(&result_1, 0, &var_78);
            result = result_4;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h7155bfd3c4b56ec3(result_1, r14);
        }
        else
            core::ptr::drop_in_place$LT$uu_base32..base_common..Config$GT$::h99d51649836290b4(
                &var_40);
    }
    
    return result;
}
