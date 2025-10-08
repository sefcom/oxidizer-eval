undefined  [16]
_ZN7uu_sort8ext_sort8ext_sort17h60e5943f5d1a9d29E
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined local_188 [160];
  undefined local_e8 [24];
  undefined8 local_d0 [2];
  undefined8 local_c0;
  undefined local_a8;
  
                    /* try { // try from 001c371e to 001c372c has its CatchHandler @ 001c3906 */
  _ZN3std4sync4mpmc12sync_channel17hb189ed79e26d1c27E(&local_1a8,1);
  uVar6 = local_190;
  uVar5 = local_198;
  uVar3 = local_1a0;
  uVar1 = local_1a8;
  local_1d8 = local_1a8;
  local_1d0 = local_1a0;
  local_1e8 = local_198;
  local_1e0 = local_190;
                    /* try { // try from 001c376f to 001c377d has its CatchHandler @ 001c38fc */
  _ZN3std4sync4mpmc12sync_channel17hb189ed79e26d1c27E(&local_1a8,1);
  uVar4 = local_1a0;
  uVar2 = local_1a8;
  local_1c8 = local_1a8;
  local_1c0 = local_1a0;
  local_1b8 = local_198;
  local_1b0 = local_190;
                    /* try { // try from 001c37b1 to 001c37c0 has its CatchHandler @ 001c38ea */
  _ZN62__LT_uu_sort__GlobalSettings_u20_as_u20_core__clone__Clone_GT_5clone17h43265696f2462bc6E
            (local_d0,param_2);
  local_1a8 = local_198;
  local_1a0 = local_190;
  local_198 = uVar1;
  local_190 = uVar3;
  (*(code *)PTR_memcpy_00296e48)(local_188,local_d0,0xa0);
  local_c0 = 0x8000000000000000;
  local_d0[0] = 0;
  local_a8 = 0;
                    /* try { // try from 001c381f to 001c385a has its CatchHandler @ 001c391a */
  _ZN3std6thread7Builder15spawn_unchecked17hb824ac581027dbd9E(local_e8,local_d0,&local_1a8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h12022375ebf47b21E(local_d0,local_e8);
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17hd410c122727f1aa9E
            (local_d0);
  if (*(long *)(param_2 + 0x30) == -0x8000000000000000) {
                    /* try { // try from 001c3861 to 001c38b8 has its CatchHandler @ 001c38e1 */
    auVar7 = _ZN7uu_sort8ext_sort13reader_writer17h849ad3f081ba95beE
                       (param_1,param_2,uVar5,uVar6,uVar2,uVar4,param_3,param_4);
  }
  else {
    auVar7 = _ZN7uu_sort8ext_sort13reader_writer17ha45870364be7fd58E
                       (param_1,param_2,uVar5,uVar6,uVar2,uVar4,param_3,param_4);
  }
  _ZN4core3ptr76drop_in_place_LT_std__sync__mpsc__Receiver_LT_uu_sort__chunks__Chunk_GT__GT_17h46cfb158905bad70E
            (&local_1e8);
  return auVar7;
}