
  int64_t* uu_basename::basename::h5fea76ad93274f11(int64_t* arg1, int64_t arg2, size_t arg3, int64_t arg4, uint64_t arg5)

{
    int64_t r13 = arg2;
    int64_t rax;
    size_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb231c32269780afc(arg2, arg3);
    bool cond:0 = rdx;
    
    if (!rdx)
        rdx = arg3;
    
    if (cond:0)
        r13 = rax;
    
    void var_f0;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_f0, r13, rdx);
    int64_t var_e8;
    int64_t var_e0;
    int64_t var_d8;
    std::path::Path::components::h4f3217acf0fc8653(&var_d8, var_e8, var_e0);
    char var_60 = 0xa;
    char var_98;
    core::iter::traits::iterator::Iterator::fold::h49107edc7661eb2f(&var_98, &var_d8, &var_60);
    
    if (var_98 != 0xa)
    {
        char* rax_1;
        int64_t rdx_3;
        rax_1 = std::path::Component::as_os_str::hd2d726e30ab45bf9(&var_98);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_d8, rax_1, rdx_3);
        
        if (var_d8)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int64_t var_d0;
        int64_t r12_1 = var_d0;
        uint64_t var_c8;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hff29a2f68c8cbe60(r12_1, var_c8, arg4, arg5))
        {
            int64_t rax_3;
            uint64_t rdx_7;
            rax_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(arg4, arg5, r12_1, var_c8);
            
            if (!rax_3)
                rdx_7 = var_c8;
            
            if (rax_3)
                r12_1 = rax_3;
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc3b515191c06e2ad(
                &var_d8, r12_1, rdx_7);
        }
        else
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc3b515191c06e2ad(
                &var_d8, r12_1, var_c8);
        
        arg1[2] = var_c8;
        *arg1 = var_d8;
    }
    else
    {
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9a5db94baa57db22(&var_f0);
    return arg1;
}
