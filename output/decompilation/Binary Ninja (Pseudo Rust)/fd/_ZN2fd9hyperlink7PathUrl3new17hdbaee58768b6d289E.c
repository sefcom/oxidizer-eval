
  fn fd::hyperlink::PathUrl::new::hdbaee58768b6d289(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> i64

{
    let mut var_28: i64;
    fd::filesystem::absolute_path::h431e4f2ac32a5803(&var_28, arg2, arg3);
    let r14: i64 = var_28;
    let mut result: i64 = -(r14);
    let var_20: i128;
    
    if -(r14) != -0x8000000000000000
    {
        *arg1.byte_offset(8) = var_20;
    }
    else
    {
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb59c92ea44cd99fa(&var_28);
    }
    *arg1 = r14;
    result
}
