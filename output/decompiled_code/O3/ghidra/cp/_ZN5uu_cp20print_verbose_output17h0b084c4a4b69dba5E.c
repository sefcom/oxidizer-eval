void __rustcall
uu_cp::print_verbose_output
          (undefined param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

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
    indicatif::progress_bar::ProgressBar::suspend(param_2,&local_28);
    return;
  }
  print_paths(param_1,param_3,param_4,param_5,param_6);
  return;
}