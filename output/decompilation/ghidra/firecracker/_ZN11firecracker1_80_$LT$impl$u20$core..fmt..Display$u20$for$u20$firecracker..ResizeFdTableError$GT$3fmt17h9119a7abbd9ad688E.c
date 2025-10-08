void _ZN11firecracker1_80__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__ResizeFdTableError_GT_3fmt17h9119a7abbd9ad688E
               (long *param_1,undefined8 *param_2)

{
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*param_1 == 0) {
    local_30 = &PTR_s_Failed_to_get_RLIMIT_NOFILE_004a45d8;
  }
  else if ((int)*param_1 == 1) {
    local_30 = &PTR_s_Failed_to_call_dup2_to_resize_fd_004a45c8;
  }
  else {
    local_30 = &PTR_s_Failed_to_close_dup2_d_file_desc_004a45b8;
  }
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(*param_2,param_2[1],&local_30);
  return;
}