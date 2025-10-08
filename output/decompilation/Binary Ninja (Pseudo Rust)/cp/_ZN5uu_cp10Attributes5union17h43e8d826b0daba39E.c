
  fn uu_cp::Attributes::union::h43e8d826b0daba39(arg1: *mut i8, arg2: *mut i8, arg3: *mut i8) -> *mut i8

{
    let rax: i64;
    let mut var_38: i64 = rax;
    let mut rax_1: i8;
    let mut rdx_1: i8;
    rax_1 = core::cmp::Ord::max::h709176b67e6fd13b(*arg2, arg2[1], *arg3, arg3[1]);
    *var_38[5] = rax_1;
    *var_38[7] = rdx_1;
    let mut rax_2: i8;
    let mut rdx_3: i8;
    rax_2 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[6], arg2[7], arg3[6], arg3[7]);
    *var_38[4] = rax_2;
    *var_38[6] = rdx_3;
    let mut rax_3: i8;
    let mut rdx_5: i8;
    rax_3 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[4], arg2[5], arg3[4], arg3[5]);
    *var_38[3] = rdx_5;
    let mut rax_4: i8;
    let mut rdx_7: i8;
    rax_4 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[2], arg2[3], arg3[2], arg3[3]);
    *var_38[2] = rdx_7;
    let mut rax_5: i8;
    let mut rdx_9: i8;
    rax_5 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[8], arg2[9], arg3[8], arg3[9]);
    *var_38[1] = rdx_9;
    let mut rax_6: i8;
    let mut rdx_11: i8;
    rax_6 = core::cmp::Ord::max::h709176b67e6fd13b(arg2[0xa], arg2[0xb], arg3[0xa], arg3[0xb]);
    *arg1 = *var_38[5] & 1;
    arg1[1] = *var_38[7];
    arg1[2] = rax_4 & 1;
    arg1[3] = *var_38[2];
    arg1[4] = rax_3 & 1;
    arg1[5] = *var_38[3];
    arg1[6] = *var_38[4] & 1;
    arg1[7] = *var_38[6];
    arg1[8] = rax_5 & 1;
    arg1[9] = *var_38[1];
    arg1[0xa] = rax_6 & 1;
    arg1[0xb] = rdx_11;
    arg1
}
