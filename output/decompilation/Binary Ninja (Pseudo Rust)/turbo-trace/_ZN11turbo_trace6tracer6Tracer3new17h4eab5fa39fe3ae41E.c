
  fn turbo_trace::tracer::Tracer::new::h4eab5fa39fe3ae41(arg1: *mut i128, arg2: *mut i128, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let mut var_218: i128;
    let mut var_208: i64;
    let mut var_1d0: i128;
    let mut var_1c0: i64;
    
    if !(0 + -(*arg4))
    {
        turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf::from_unknown::h6ee9ef581f0f913b(
            &var_1d0, *arg2.byte_offset(8), arg2[1], arg4);
        var_208 = var_1c0;
        var_218 = var_1d0;
    }
    else
    {
        var_218 = -0x8000000000000000;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc219ee25ff47600d(&var_1d0, arg3);
    let mut var_1e8: i128;
    core::iter::traits::iterator::Iterator::collect::hc2abea4174d80438(&var_1e8, &var_1d0);
    let var_1f8: i64 = 8;
    let mut var_f0: ();
    _$LT$swc_common..source_map..SourceMap$u20$as$u20$core..default..Default$GT$::default::h868a0c2a871bf1c2(&var_f0);
    var_1d0 = 1;
    *var_1d0[8] = 1;
    memcpy(&var_1c0, &var_f0, 0xd0);
    let rax_2: i64 = alloc::boxed::Box$LT$T$GT$::new::h754cfb95a1fbe884(&var_1d0);
    let var_1d8: i64;
    arg1[1] = var_1d8;
    *arg1 = var_1e8;
    *arg1.byte_offset(0x48) = var_218;
    *arg1.byte_offset(0x58) = var_208;
    arg1[6] = rax_2;
    *arg1.byte_offset(0x28) = arg2[1];
    *arg1.byte_offset(0x18) = *arg2;
    arg1[3] = 0;
    arg1[4] = 0;
    *arg1.byte_offset(0x68) = 0;
    0
}
