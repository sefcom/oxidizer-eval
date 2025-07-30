
  int64_t* flealib::fileserver::FileServer::change_directory_up::hae49b0719f1d97de(int64_t* arg1, int128_t* arg2)

{
    char* rax;
    int64_t rdx;
    rax = std::path::Path::parent::h9c632a6976e19e68(*(arg2 + 8), arg2[1]);
    
    if (!rax)
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(arg1, 
            "Already at rootNot a directory/r…", 0xf);
    else
    {
        char var_28;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_28, rax, rdx);
        
        if (var_28 & 1)
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        int64_t var_20;
        uint64_t var_18;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(&var_28, 
            var_20, var_18);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(arg2);
        arg2[1] = var_18;
        *arg2 = var_28;
        *arg1 = -0x8000000000000000;
    }
    
    return arg1;
}
