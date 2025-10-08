undefined8 *
_ZN5uu_dd5Alarm13with_interval17h0592b4190ad49d75E
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined local_38 [24];
  
  local_80 = 1;
  local_78 = 1;
  local_70 = local_70 & 0xffffffffffffff00;
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h887c2a53faad888dE(&local_80);
                    /* try { // try from 0018f53a to 0018f599 has its CatchHandler @ 0018f5b2 */
  _ZN5alloc4sync16Arc_LT_T_C_A_GT_9downgrade17h42b3cc1521e60bc8E(uVar1);
  local_70 = 0x8000000000000000;
  local_80 = 0;
  local_58 = 0;
  local_50 = uVar1;
  local_48 = param_2;
  local_40 = param_3;
  _ZN3std6thread7Builder15spawn_unchecked17h9e1168d4c6f049a2E(local_38,&local_80,&local_50);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hde2740aff8c517d5E(&local_80,local_38);
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h04c84524a3cb659eE
            (&local_80);
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *param_1 = uVar1;
  return param_1;
}