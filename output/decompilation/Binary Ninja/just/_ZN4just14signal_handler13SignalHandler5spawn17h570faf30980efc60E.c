
  int64_t just::signal_handler::SignalHandler::spawn::h570faf30980efc60(int64_t* arg1, int64_t* arg2)

{
    int32_t* rax;
    char rdx;
    rax = just::signal_handler::SignalHandler::instance::h68aa94a07828712f();
    char rbp = rdx & 1;
    int32_t var_1f0;
    uint64_t rdx_1 = std::process::Command::spawn::haea730ea7b05a977(&var_1f0, arg2);
    int128_t var_1ec;
    
    if (var_1f0 != 1)
    {
        int128_t var_25c_1 = var_1ec;
        int128_t var_268 = var_1ec;
        int32_t r12_1 = *var_268[8];
        uint32_t var_26c_1 = r12_1 >> 0x1f;
        void* var_110;
        
        if (r12_1 >= 0)
        {
            memcpy(&var_1f0, arg2, 0xe0);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h09a706d466e486d9(
                &var_110, &rax[2], r12_1, &var_1f0);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..process..Command$GT$$GT$::h96bb04e57b0be99b(&var_110);
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax, rbp);
            int128_t var_240;
            core::ops::function::Fn::call::hf37251a2e5a30d6e(&var_240, &var_268);
            int32_t* rax_4;
            char rdx_3;
            rax_4 = just::signal_handler::SignalHandler::instance::h68aa94a07828712f();
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h0d088e6304f84304(
                &var_1f0, &rax_4[2], r12_1);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..process..Command$GT$$GT$::h96bb04e57b0be99b(&var_1f0);
            int32_t rax_5 = rax_4[8];
            int64_t var_210;
            arg1[6] = var_210;
            int128_t zmm0_2 = var_240;
            int128_t var_220;
            *(arg1 + 0x20) = var_220;
            int128_t var_230;
            *(arg1 + 0x10) = var_230;
            *arg1 = zmm0_2;
            arg1[7] = rax_5;
            /* tailcall */
            return core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax_4, rdx_3 & 1);
        }
        
        void var_26d;
        var_110 = &var_26d;
        int64_t (* var_108_1)(int64_t arg1, int64_t* arg2) = _$LT$core..num..error..TryFromIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h290431c872b2642a;
        var_1f0 = &data_830f40;
        *var_1ec[4] = 1;
        int64_t var_1d0_1 = 0;
        *var_1ec[0xc] = &var_110;
        int64_t var_1d8_1 = 1;
        void var_208;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_208, 0, rdx_1, &var_1f0);
        void* rax_8 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::hf7e2634ead86a888(&var_208), &data_830e98);
        *arg1 = -0x8000000000000000;
        arg1[1] = rax_8;
        arg1[7] = 0;
        core::ptr::drop_in_place$LT$std..process..Child$GT$::h297edfa0c5bf1f96(&var_268);
    }
    else
    {
        *arg1 = -0x8000000000000000;
        arg1[1] = *var_1ec[4];
        arg1[7] = 0;
    }
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$just..signal_handler..SignalHandler$GT$$GT$::hf98ecd4a30a182c6(rax, rbp);
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::h68c11017a1ebd395(arg2);
}
