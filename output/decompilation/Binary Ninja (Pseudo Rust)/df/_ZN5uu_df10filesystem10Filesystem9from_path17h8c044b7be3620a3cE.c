
  fn uu_df::filesystem::Filesystem::from_path::h8c044b7be3620a3c(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h07de46ba282a0abf(arg4);
    let mut var_68: i64 = rax;
    let var_60: i64 = rdx;
    let mut var_90: i128;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h5d1558b0a1eb3735(&var_90, 
        &var_68);
    let mut var_78: i8;
    uu_df::filesystem::mount_info_from_path::hc0bcb2ea98b5090a(&var_78, arg2, arg3, arg4);
    let var_50: i64 = arg2;
    let var_48: i64 = arg3;
    var_68 = var_90;
    let var_80: i64;
    let var_58: i64 = var_80;
    
    if var_78 == 1
    {
        let var_77: i8;
        arg1[1] = var_77;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$uu_df..filesystem..Filesystem..from_path$LT$$RF$$RF$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h3f753883bea380f6(&var_68);
    }
    
    let var_28_1: i64 = var_80;
    let mut var_38: i128 = var_90;
    let var_70: *mut c_void;
    uu_df::filesystem::Filesystem::from_mount::h8c34ead0ca2ea541(arg1, arg2, arg3, var_70, &var_38)
}
