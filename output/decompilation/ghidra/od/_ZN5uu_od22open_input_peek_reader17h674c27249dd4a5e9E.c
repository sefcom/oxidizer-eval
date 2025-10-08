long _ZN5uu_od22open_input_peek_reader17h674c27249dd4a5e9E
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78 [48];
  undefined8 local_48;
  undefined local_40 [24];
  
  _ZN4core4iter6traits8iterator8Iterator7collect17h9645941bc1bc249fE
            (local_40,param_2,param_2 + param_3 * 0x18);
  _ZN5uu_od15multifilereader15MultifileReader3new17hfa7325e7ade9d572E(local_78,local_40);
  local_88 = param_5;
  local_80 = param_6;
  local_48 = param_4;
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h6751655b61e5daa8E
            (param_1,&local_88);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return param_1;
}