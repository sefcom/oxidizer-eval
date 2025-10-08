
  int64_t* uu_dd::Input::new_stdin::hf67655fa74f10066(int64_t* arg1, void* arg2)

{
    uu_dd::Source::stdin_as_file::h88ed056d97613b9f();
    int64_t var_e8 = 1;
    uint64_t rax_1;
    void** const rdx_1;
    
    if (!*(arg2 + 0x42))
    {
        label_48fa6b:
        int64_t rsi_1 = *(arg2 + 0x80);
        char rax_3;
        
        if (rsi_1)
            rax_3 = uu_dd::Source::skip::h56a70907a2f0c0f8(&var_e8, rsi_1);
        
        if (rsi_1 && rax_3 & 1)
        {
            rax_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            goto label_48fae6;
        }
        
        arg1[1] = var_e8;
        arg1[2] = arg2;
        *arg1 = 0;
    }
    else
    {
        int32_t var_c8;
        std::fs::File::metadata::h5e84e533705f8c98(&var_c8, &*var_e8[4]);
        
        if (var_c8 != 2)
        {
            int32_t var_90;
            
            if ((0xf000 & var_90) == 0x4000)
                goto label_48fa6b;
            
            int128_t var_e0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_e0, "setting flags for 'standard inpu…", 0x33);
            int64_t var_d0;
            int64_t var_b8_1 = var_d0;
            var_c8 = var_e0;
            int32_t var_b0_1 = 1;
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::he73dee4c808ee59f(&var_c8);
            rdx_1 = &data_53dcd8;
            goto label_48fae6;
        }
        
        rax_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        label_48fae6:
        arg1[1] = rax_1;
        arg1[2] = rdx_1;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$uu_dd..Source$GT$::h0f98b01c459a3648(*var_e8[4]);
    }
    return arg1;
}
