
  uint64_t uu_ls::dired::is_dired_arg_present::h4057440d3249dc1d()

{
    void var_30;
    std::env::args_os::h5ff0cf6a45e392f2(&var_30);
    int32_t rax_1 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hff7ad56065d75b13(_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hbf9838f5dc1f303e(&var_30));
    core::ptr::drop_in_place$LT$std..env..ArgsOs$GT$::he1cdef38831e5940(&var_30);
    return rax_1;
}
