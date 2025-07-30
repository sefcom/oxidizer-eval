
  fn flealib::fileserver::FileServer::change_directory_up::hae49b0719f1d97de(arg1: *mut i64, arg2: *mut i128) -> *mut i64

{
    let mut rax: *mut i8;
    let mut rdx: i64;
    rax = std::path::Path::parent::h9c632a6976e19e68(*arg2.byte_offset(8), arg2[1]);
    
    if rax == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(arg1, 
            "Already at rootNot a directory/r…", 0xf);
    }
    else
    {
        let mut var_28: i8;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_28, rax, rdx);
        
        if (var_28 & 1) != 0
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        let var_20: i64;
        let var_18: u64;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_28, 
            var_20, var_18);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
        arg2[1] = var_18;
        *arg2 = var_28;
        *arg1 = -0x8000000000000000;
    }
    
    arg1
}
