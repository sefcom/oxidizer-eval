undefined8 * _ZN5uu_dd5Alarm13with_interval17he7e19ce09b7e3abfE(undefined8 *param_1)

{
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined local_20 [24];
  
  local_60 = 1;
  local_58 = 1;
  local_50 = local_50 & 0xffffffffffffff00;
  local_68 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hff327b290596ae78E(&local_60);
                    /* try { // try from 001d66bd to 001d671f has its CatchHandler @ 001d673f */
  local_38 = _ZN5alloc4sync16Arc_LT_T_C_A_GT_9downgrade17h3187bea099a37cc6E(&local_68);
  local_30 = 1;
  local_28 = 0;
  local_50 = 0x8000000000000000;
  local_60 = 0;
  _ZN3std6thread7Builder15spawn_unchecked17h548e90d968e6b112E(local_20,&local_60,&local_38);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hae1648ffdc1cd49bE(&local_60,local_20);
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h34f9f794f4847285E
            (&local_60);
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = local_68;
  return param_1;
}