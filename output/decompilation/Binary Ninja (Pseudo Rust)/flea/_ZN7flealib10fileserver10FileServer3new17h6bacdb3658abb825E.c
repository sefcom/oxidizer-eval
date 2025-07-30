
  fn flealib::fileserver::FileServer::new::h6bacdb3658abb825(arg1: *mut i128) -> *mut i128

{
    let mut var_40: i8;
    std::env::current_dir::h40c04c259438f175(&var_40);
    let mut var_28: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::hd09044e2a73feced(&var_28, &var_40);
    let var_20: *mut i8;
    let var_18: i64;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_40, var_20, var_18);
    
    if (var_40 & 1) != 0
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    let var_38: i64;
    let var_30: u64;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_40, 
        var_38, var_30);
    arg1[1] = var_30;
    *arg1 = var_40;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_28);
    arg1
}
