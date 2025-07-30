
  int128_t* flealib::fileserver::FileServer::new::h6bacdb3658abb825(int128_t* arg1)

{
    char var_40;
    std::env::current_dir::h40c04c259438f175(&var_40);
    void var_28;
    core::result::Result$LT$T$C$E$GT$::unwrap::hd09044e2a73feced(&var_28, &var_40);
    char* var_20;
    int64_t var_18;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_40, var_20, var_18);
    
    if (var_40 & 1)
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    int64_t var_38;
    uint64_t var_30;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_40, 
        var_38, var_30);
    arg1[1] = var_30;
    *arg1 = var_40;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_28);
    return arg1;
}
