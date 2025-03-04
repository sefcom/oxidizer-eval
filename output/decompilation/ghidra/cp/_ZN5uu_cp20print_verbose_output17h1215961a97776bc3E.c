void _ZN5uu_cp20print_verbose_output17h1215961a97776bc3E
               (undefined param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined local_29;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_29 = param_1;
  if (*param_2 != 0) {
    local_28 = &local_29;
    local_20 = param_3;
    local_18 = param_4;
    local_10 = param_5;
    local_8 = param_6;
    _ZN9indicatif12progress_bar11ProgressBar7suspend17h78333758525eb5c8E(param_2,&local_28);
    return;
  }
  _ZN5uu_cp11print_paths17h93d7a9a3ec668051E(param_1,param_3,param_4,param_5,param_6);
  return;
}