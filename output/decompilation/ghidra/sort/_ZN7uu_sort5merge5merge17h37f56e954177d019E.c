undefined8 *
_ZN7uu_sort5merge5merge17h37f56e954177d019E
          (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined auVar2 [16];
  
  auVar2 = _ZN7uu_sort5merge34replace_output_file_in_input_files17h1d16a350d57fc5e2E
                     (param_2,param_3,param_5,param_6,param_7);
  if (auVar2._0_8_ == 0) {
    lVar1 = param_2 + param_3 * 0x18;
    if (*(long *)(param_4 + 0x30) == -0x8000000000000000) {
      _ZN7uu_sort5merge21merge_with_file_limit17h68734aa550059387E
                (param_1,param_2,lVar1,param_4,param_7);
    }
    else {
      _ZN7uu_sort5merge21merge_with_file_limit17hd33eb504f21b1692E
                (param_1,param_2,lVar1,param_4,param_7);
    }
  }
  else {
    *(undefined (*) [16])(param_1 + 1) = auVar2;
    *param_1 = 3;
  }
  return param_1;
}