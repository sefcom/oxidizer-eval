undefined8
_ZN13metal_crusher3fun15run_in_terminal17hb55afbf220dc8f24E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined local_30;
  undefined local_28 [24];
  
  local_48 = 0x8000000000000000;
  local_58[0] = 0;
  local_30 = 0;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = param_4;
  _ZN3std6thread7Builder15spawn_unchecked17h3f7242434e56150bE(local_28,local_58,&local_78);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0f618ee5425b50acE(local_58,local_28);
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17ha4837b2075f310b9E
            (local_58);
  return 0;
}