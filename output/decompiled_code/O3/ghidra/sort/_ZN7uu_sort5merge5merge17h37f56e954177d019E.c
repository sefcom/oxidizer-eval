undefined8 * __rustcall
uu_sort::merge::merge
          (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined auVar2 [16];
  
  auVar2 = replace_output_file_in_input_files(param_2,param_3,param_5,param_6,param_7);
  if (auVar2._0_8_ == 0) {
    lVar1 = param_2 + param_3 * 0x18;
    if (*(long *)(param_4 + 0x30) == -0x8000000000000000) {
      merge_with_file_limit(param_1,param_2,lVar1,param_4,param_7);
    }
    else {
      merge_with_file_limit(param_1,param_2,lVar1,param_4,param_7);
    }
  }
  else {
    *(undefined (*) [16])(param_1 + 1) = auVar2;
    *param_1 = 3;
  }
  return param_1;
}