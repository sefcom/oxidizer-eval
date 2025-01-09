void __rustcall
uu_fmt::linebreak::build_best_path
          (long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long local_38;
  long local_30;
  long lStack_28;
  undefined8 local_20;
  
  local_30 = param_4 + param_5 * 8;
  local_38 = param_4;
  lStack_28 = param_2;
  local_20 = param_3;
  puVar1 = (undefined8 *)core::iter::traits::iterator::Iterator::reduce(&local_38);
  if (puVar1 == (undefined8 *)0x0) {
    param_1[1] = 8;
    param_1[2] = 0;
    local_38 = 0;
  }
  else {
    build_best_path::___closure__(&local_38,param_2,param_3,*puVar1);
    param_1[1] = local_30;
    param_1[2] = lStack_28;
  }
  *param_1 = local_38;
  return;
}