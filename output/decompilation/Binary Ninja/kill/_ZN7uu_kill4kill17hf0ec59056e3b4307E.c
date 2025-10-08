
  void uu_kill::kill::hf0ec59056e3b4307(int32_t arg1, int32_t* arg2, int64_t arg3)

{
    if (arg3)
    {
        int64_t i = 0;
        
        do
        {
            int32_t var_94_1 = *(arg2 + i);
            
            if (nix::sys::signal::kill::hae40f56929b3de6e() != 0x86)
            {
                uint64_t var_a0 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hf3c0616e28f90799();
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                int64_t rax_4;
                int64_t rdx;
                rax_4 = uucore::util_name::h074417a1e6395129();
                int64_t var_90 = rax_4;
                int64_t var_88_1 = rdx;
                int64_t* var_80 = &var_90;
                int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
                uint64_t* var_70_1 = &var_a0;
                int64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc2db305b91b5782c;
                void* const var_60 = &data_4e7718;
                int64_t var_58_1 = 3;
                int64_t var_40_1 = 0;
                int64_t** var_50_1 = &var_80;
                int64_t var_48_1 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_60);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h133e6d19fe6e02d4(var_a0);
            }
            
            i += 4;
        } while (arg3 << 2 != i);
    }
}
