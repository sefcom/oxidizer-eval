
  fn flea::updater::find_update::he78be416422e025a(arg1: *mut i64, arg2: i64, arg3: u64, arg4: i64) -> *mut i64

{
    let mut var_e8: ();
    std::sys::os_str::bytes::Slice::to_owned::hc28911b40fe28e29(&var_e8, arg2, arg3);
    std::path::PathBuf::push::h236d17cf90268e08(&var_e8, arg4);
    let var_e0: *mut i8;
    let mut var_d0: i64;
    std::fs::metadata::h65666ff0bc69322a(&var_d0, var_e0);
    let r14_1: i32 = var_d0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h3fd70f9a0b8ae97a(&var_d0);
    
    if r14_1 != 2
    {
        let var_d8: i64;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_d0, var_e0, var_d8);
        
        if (var_d0 & 1) != 0
        {
            core::option::unwrap_failed::hf53ee17a2013bd69();
            /* no return */
        }
        
        let var_c8: i64;
        let var_c0: u64;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f11c760132d323d(&var_d0, 
            var_c8, var_c0);
        arg1[2] = var_c0;
        *arg1 = var_d0;
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb8ab2c35932f4c39(&var_e8);
    arg1
}
