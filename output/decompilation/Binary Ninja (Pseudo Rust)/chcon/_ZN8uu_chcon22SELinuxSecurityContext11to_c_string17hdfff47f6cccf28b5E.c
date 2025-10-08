
  fn uu_chcon::SELinuxSecurityContext::to_c_string::hdfff47f6cccf28b5(arg1: *mut i32, arg2: *mut i32) -> i64

{
    if *arg2 == 2
    {
        let rax: i64 = *arg2.byte_offset(8);
        let rcx: i64 = *arg2.byte_offset(0x10);
        let mut rdx: i32;
        rdx = rax == 0;
        *arg1.byte_offset(8) = rdx * 2;
        *arg1.byte_offset(0x10) = rax;
        *arg1.byte_offset(0x18) = rcx;
        *arg1 = 0x12;
        return rax;
    }
    
    let mut var_40: i32;
    selinux::SecurityContext::to_c_string::h0c9c9ed290d135c6(&var_40, arg2);
    let var_30: i128;
    
    if var_40 == 0xa
    {
        let rax_1: i64 = *var_30[8];
        *arg1.byte_offset(0x18) = rax_1;
        let var_38: i128;
        *arg1.byte_offset(8) = var_38;
        *arg1 = 0x12;
        return rax_1;
    }
    
    let var_10: i64;
    *arg1.byte_offset(0x30) = var_10;
    let zmm0: i128 = var_40;
    let var_20: i128;
    *arg1.byte_offset(0x20) = var_20;
    *arg1.byte_offset(0x10) = var_30;
    *arg1 = zmm0;
    *arg1.byte_offset(0x38) = "SELinuxSecurityContext::to_c_str…";
    *arg1.byte_offset(0x40) = 0x25;
    var_10
}
