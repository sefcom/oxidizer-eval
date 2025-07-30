
  fn backdoorautomater::sanitizer::sanitize_param_hub::h407aa3fa6f2031da(arg1: *mut i128, arg2: i8, arg3: bool, arg4: u64) -> i64

{
    let var_58: i64 = arg1[1];
    let mut var_68: i128 = *arg1;
    let mut var_50: i128;
    backdoorautomater::sanitizer::sanitize_ip::hca067074337469f3(&var_50, &var_68, arg3, arg4);
    let var_40: i64;
    arg1[1] = var_40;
    *arg1 = var_50;
    let var_58_1: i64 = *arg1.byte_offset(0x28);
    var_68 = *arg1.byte_offset(0x18);
    let mut r13: i64;
    r13 = 1;
    let var_6c: i32 = 0;
    let mut r12: i64;
    r12 = 1;
    let mut r15: i64;
    r15 = 1;
    backdoorautomater::sanitizer::sanitize_service::h7d78d971da576c98(&var_50, &var_68);
    *arg1.byte_offset(0x28) = var_40;
    *arg1.byte_offset(0x18) = var_50;
    let var_58_2: i64 = arg1[4];
    var_68 = arg1[3];
    let mut rax_4: i64;
    rax_4 = 1;
    let var_6c_1: i32 = rax_4;
    r12 = 1;
    r15 = 1;
    backdoorautomater::sanitizer::sanitize_port::h389e8c38eed4b27b(&var_50, &var_68);
    arg1[4] = var_40;
    arg1[3] = var_50;
    let var_58_3: i64 = *arg1.byte_offset(0x58);
    var_68 = *arg1.byte_offset(0x48);
    let mut rax_6: i64;
    rax_6 = 1;
    let var_6c_2: i32 = rax_6;
    let mut r13_1: i64;
    r13_1 = 1;
    r12 = 1;
    r15 = 1;
    backdoorautomater::sanitizer::sanitize_time::hd3370276699eb02b(&var_50, &var_68);
    *arg1.byte_offset(0x58) = var_40;
    *arg1.byte_offset(0x48) = var_50;
    let var_58_4: i64 = arg1[7];
    var_68 = arg1[6];
    let mut rax_8: i64;
    rax_8 = 1;
    let var_6c_3: i32 = rax_8;
    r13_1 = 1;
    let mut rbp_1: i64;
    rbp_1 = 1;
    r15 = 1;
    backdoorautomater::sanitizer::sanitize_path::h9d14fc69d5f617e3(&var_50, &var_68);
    arg1[7] = var_40;
    arg1[6] = var_50;
    let r14: i8 = arg1[9];
    let mut rax_9: *mut c_void;
    rax_9 = 1;
    let var_6c_4: i32 = rax_9;
    r13_1 = 1;
    rbp_1 = 1;
    let mut r12_1: i64;
    r12_1 = 1;
    r15 = 1;
    backdoorautomater::sanitizer::sanitize_choice::h12bb61fb68c957ca(r14, arg2);
    arg1[9] = r14;
    let var_58_5: i64 = *arg1.byte_offset(0x88);
    var_68 = *arg1.byte_offset(0x78);
    r13_1 = 1;
    rbp_1 = 1;
    r12_1 = 1;
    backdoorautomater::sanitizer::sanitize_script::h080ed7420ce68219(&var_50, &var_68);
    *arg1.byte_offset(0x88) = var_40;
    *arg1.byte_offset(0x78) = var_50;
    /* tailcall */
    core::ptr::drop_in_place$LT$backdoorautomater..Param$GT$::h3d52124aa8e3b978(arg1)
}
