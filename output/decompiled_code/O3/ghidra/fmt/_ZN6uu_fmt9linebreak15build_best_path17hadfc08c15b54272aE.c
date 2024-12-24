void __rustcall
uu_fmt::linebreak::build_best_path
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_4 + param_5 * 8;
  local_38 = param_4;
  local_28 = param_2;
  local_20 = param_3;
  puVar1 = (undefined8 *)core::iter::traits::iterator::Iterator::reduce(&local_38);
  if (puVar1 != (undefined8 *)0x0) {
    build_best_path::___closure__(param_1,param_2,param_3,*puVar1);
    return;
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return;
}