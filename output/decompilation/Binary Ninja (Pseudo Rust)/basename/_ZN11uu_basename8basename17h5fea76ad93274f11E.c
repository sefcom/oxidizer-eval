
  fn uu_basename::basename::h5fea76ad93274f11(arg1: *mut i64, arg2: i64, arg3: size_t, arg4: i64, arg5: u64) -> *mut i64

{
    let mut r13: i64 = arg2;
    let mut rax: i64;
    let mut rdx: size_t;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb231c32269780afc(arg2, arg3);
    let cond:0: bool = rdx != 0;
    
    if rdx == 0
    {
        rdx = arg3;
    }
    
    if cond:0
    {
        r13 = rax;
    }
    
    let mut var_f0: ();
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_f0, r13, rdx);
    let var_e8: i64;
    let var_e0: i64;
    let mut var_d8: i64;
    std::path::Path::components::h4f3217acf0fc8653(&var_d8, var_e8, var_e0);
    let mut var_60: i8 = 0xa;
    let mut var_98: i8;
    core::iter::traits::iterator::Iterator::fold::h49107edc7661eb2f(&var_98, &var_d8, &var_60);
    
    if var_98 != 0xa
    {
        let mut rax_1: *mut i8;
        let mut rdx_3: i64;
        rax_1 = std::path::Component::as_os_str::hd2d726e30ab45bf9(&var_98);
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_d8, rax_1, rdx_3);
        
        if var_d8 != 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let var_d0: i64;
        let mut r12_1: i64 = var_d0;
        let var_c8: u64;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hff29a2f68c8cbe60(r12_1, var_c8, arg4, arg5) == 0
        {
            let mut rax_3: i64;
            let mut rdx_7: u64;
            rax_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(arg4, arg5, r12_1, var_c8);
            
            if rax_3 == 0
            {
                rdx_7 = var_c8;
            }
            
            if rax_3 != 0
            {
                r12_1 = rax_3;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc3b515191c06e2ad(
                &var_d8, r12_1, rdx_7);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc3b515191c06e2ad(
                &var_d8, r12_1, var_c8);
        }
        
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
    arg1
}
