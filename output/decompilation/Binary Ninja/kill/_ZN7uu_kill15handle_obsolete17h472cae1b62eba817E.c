
  int64_t uu_kill::handle_obsolete::h472cae1b62eba817(uint64_t arg1)

{
    int128_t* r14;
    int128_t* var_10 = r14;
    
    if (*(arg1 + 0x10) >= 3)
    {
        void* rax_1 = *(arg1 + 8);
        r14 = *(rax_1 + 0x20);
        int64_t r15_1 = *(rax_1 + 0x28);
        int32_t var_30 = 0;
        int128_t* rax_3;
        uint64_t rdx_2;
        rax_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_30), r14, r15_1);
        
        if (rax_3)
        {
            var_30 = rax_3;
            char rax_5;
            int32_t rdx_3;
            rax_5 = core::str::validations::next_code_point::hcc86121977b40379(&var_30, arg1);
            
            if (!(rax_5 & 1))
            {
                label_45d04b:
                int64_t rax_8;
                int128_t* rdx_4;
                rax_8 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
                    rax_3, rdx_2);
                
                if (rax_8 == 1)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::remove::h16a410887af4f72c(&var_30, arg1);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h31b345ac50aa997d(
                        var_30, rax_3 + rdx_2);
                    return 1;
                }
            }
            else if (rdx_3 - 0x61 >= 0x1a)
            {
                if (rdx_3 < 0x80)
                    goto label_45d04b;
                
                if (!core::unicode::unicode_data::lowercase::lookup::hc935d1c20005fe8f(rdx_3))
                    goto label_45d04b;
            }
        }
    }
    
    return 0;
}
