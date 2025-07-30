void _ZN13metal_crusher5music10play_audio17h7324776fa7dd087fE(void)

{
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined local_30;
  undefined local_28 [24];
  
  local_48 = 0x8000000000000000;
  local_58[0] = 0;
  local_30 = 0;
  _ZN3std6thread7Builder15spawn_unchecked17ha902c8cf0e4a2b5fE(local_28,local_58);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0f618ee5425b50acE(local_58,local_28);
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17ha4837b2075f310b9E
            (local_58);
  return;
}