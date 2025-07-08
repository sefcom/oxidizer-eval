
  int64_t* uu_dd::Input::new_stdin::h814376ebbe5b03ea(int64_t* arg1, void* arg2)

{
    uu_dd::Source::stdin_as_file::h2487bb1f6c82b1dd();
    int64_t var_e8 = 1;
    int32_t var_c0;
    std::fs::File::metadata::he899a18112e6f19e(&var_c0, &*var_e8[4]);
    int128_t* rax_3;
    int64_t rdx_2;
    
    if (var_c0 != 2)
    {
        int32_t var_88;
        
        if ((0xf000 & var_88) == 0x8000 && *(arg2 + 0x42))
        {
            int64_t rax_2;
            int64_t rdx_1;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            int64_t var_d0 = rax_2;
            int64_t var_c8_1 = rdx_1;
            int64_t* var_e0 = &var_d0;
            int64_t (* var_d8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            var_c0 = &data_561008;
            int64_t var_b8_1 = 2;
            int64_t var_a0_1 = 0;
            int64_t** var_b0_1 = &var_e0;
            int64_t var_a8_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c0);
            var_c0 = &data_561060;
            int64_t var_b8_2 = 1;
            int64_t var_b0_2 = 8;
            var_a8_1 = {0};
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c0);
            rax_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            goto label_4d6b91;
        }
        
        int64_t rsi_1 = *(arg2 + 0x80);
        int64_t zmm0_1;
        
        if (!rsi_1)
            zmm0_1 = data_419580;
        else
        {
            int64_t rax_5;
            int64_t rdx_3;
            rax_5 = uu_dd::Source::skip::hb4d238ded1ebd635(&var_e8, rsi_1);
            
            if (rax_5)
                goto label_4d6ac9;
            
            zmm0_1 = var_e8;
        }
        
        arg1[1] = zmm0_1;
        arg1[2] = arg2;
        *arg1 = 0;
    }
    else
    {
        label_4d6ac9:
        rax_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        label_4d6b91:
        arg1[1] = rax_3;
        arg1[2] = rdx_2;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$uu_dd..Source$GT$::hdffc88ceb2c212a0(*var_e8[4]);
    }
    return arg1;
}
