
  int64_t turbo_trace::tracer::Tracer::new::h4eab5fa39fe3ae41(int128_t* arg1, int128_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int128_t var_218;
    int64_t var_208;
    int128_t var_1d0;
    int64_t var_1c0;
    
    if (!(0 + -(*arg4)))
    {
        turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf::from_unknown::h6ee9ef581f0f913b(
            &var_1d0, *(arg2 + 8), arg2[1], arg4);
        var_208 = var_1c0;
        var_218 = var_1d0;
    }
    else
        var_218 = -0x8000000000000000;
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc219ee25ff47600d(&var_1d0, arg3);
    int128_t var_1e8;
    core::iter::traits::iterator::Iterator::collect::hc2abea4174d80438(&var_1e8, &var_1d0);
    int64_t var_1f8 = 8;
    void var_f0;
    _$LT$swc_common..source_map..SourceMap$u20$as$u20$core..default..Default$GT$::default::h868a0c2a871bf1c2(&var_f0);
    var_1d0 = 1;
    *var_1d0[8] = 1;
    memcpy(&var_1c0, &var_f0, 0xd0);
    int64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::h754cfb95a1fbe884(&var_1d0);
    int64_t var_1d8;
    arg1[1] = var_1d8;
    *arg1 = var_1e8;
    *(arg1 + 0x48) = var_218;
    *(arg1 + 0x58) = var_208;
    arg1[6] = rax_2;
    *(arg1 + 0x28) = arg2[1];
    *(arg1 + 0x18) = *arg2;
    arg1[3] = 0;
    arg1[4] = 0;
    *(arg1 + 0x68) = 0;
    return 0;
}
