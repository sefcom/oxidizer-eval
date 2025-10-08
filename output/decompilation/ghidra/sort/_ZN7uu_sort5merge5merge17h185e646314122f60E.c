undefined  [16]
_ZN7uu_sort5merge5merge17h185e646314122f60E
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined auVar2 [16];
  
                    /* try { // try from 001c54da to 001c54e7 has its CatchHandler @ 001c556b */
  auVar2 = _ZN7uu_sort5merge34replace_output_file_in_input_files17hfdb0f95794ab3c79E
                     (param_1,param_2,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                      param_5);
  if (auVar2._0_8_ != 0) {
    _ZN4core3ptr36drop_in_place_LT_uu_sort__Output_GT_17h7def0b71731a8447E(param_4);
    return auVar2;
  }
  lVar1 = param_1 + param_2 * 0x18;
  if (*(long *)(param_3 + 0x30) != -0x8000000000000000) {
    auVar2 = _ZN7uu_sort5merge21merge_with_file_limit17h70249b242f083bc2E
                       (param_1,lVar1,param_3,param_4,param_5);
    return auVar2;
  }
  auVar2 = _ZN7uu_sort5merge21merge_with_file_limit17hb24f5112306a39a4E
                     (param_1,lVar1,param_3,param_4,param_5);
  return auVar2;
}