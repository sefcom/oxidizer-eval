undefined  [16]
_ZN7uu_sort8ext_sort8ext_sort17hc251c769f969c18aE
          (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined local_188 [160];
  undefined local_e8 [24];
  undefined8 local_d0 [2];
  undefined8 local_c0;
  
                    /* try { // try from 0026726f to 0026727d has its CatchHandler @ 0026745d */
  _ZN3std4sync4mpmc12sync_channel17h3dc4982d6038534eE(&local_1a8,1);
  uVar3 = uStack_1a0;
  uVar1 = local_1a8;
  local_1d8 = local_1a8;
  local_1d0 = uStack_1a0;
  local_1e8 = (undefined4)local_198;
  uStack_1e4 = local_198._4_4_;
  uStack_1e0 = (undefined4)uStack_190;
  uStack_1dc = uStack_190._4_4_;
                    /* try { // try from 002672a9 to 002672b7 has its CatchHandler @ 00267455 */
  _ZN3std4sync4mpmc12sync_channel17h3dc4982d6038534eE(&local_1a8,1);
  uVar4 = uStack_1a0;
  uVar2 = local_1a8;
  local_1c8 = local_1a8;
  local_1c0 = uStack_1a0;
  local_1b8 = local_198;
  local_1b0 = uStack_190;
                    /* try { // try from 002672eb to 002672fa has its CatchHandler @ 00267443 */
  _ZN62__LT_uu_sort__GlobalSettings_u20_as_u20_core__clone__Clone_GT_5clone17h4b1e280250293b78E
            (local_d0,param_2);
  local_1a8 = local_198;
  uStack_1a0 = uStack_190;
  local_198 = uVar1;
  uStack_190 = uVar3;
  (*(code *)PTR_memcpy_00306c40)(local_188,local_d0,0xa0);
  local_c0 = 0x8000000000000000;
  local_d0[0] = 0;
                    /* try { // try from 00267351 to 0026738c has its CatchHandler @ 00267462 */
  _ZN3std6thread7Builder15spawn_unchecked17h2522f3c5e68f3f13E(local_e8,local_d0,&local_1a8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h58dca672c4c1d663E(local_d0,local_e8);
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h1284e7b09516a1c1E
            (local_d0);
  if (*(long *)(param_2 + 0x30) == -0x8000000000000000) {
    local_1a8 = *param_3;
    uStack_1a0 = param_3[1];
    local_198 = param_3[2];
    uStack_190 = param_3[3];
                    /* try { // try from 002673ac to 00267411 has its CatchHandler @ 0026743a */
    auVar5 = _ZN7uu_sort8ext_sort13reader_writer17hea8d60344d72eabcE
                       (param_1,param_2,&local_1e8,uVar2,uVar4,&local_1a8,param_4);
  }
  else {
    local_1a8 = *param_3;
    uStack_1a0 = param_3[1];
    local_198 = param_3[2];
    uStack_190 = param_3[3];
    auVar5 = _ZN7uu_sort8ext_sort13reader_writer17h1afdbaf3fd1ee381E
                       (param_1,param_2,&local_1e8,uVar2,uVar4,&local_1a8,param_4);
  }
  _ZN4core3ptr76drop_in_place_LT_std__sync__mpsc__Receiver_LT_uu_sort__chunks__Chunk_GT__GT_17hbe8a0150e5b7ae7fE
            (&local_1e8);
  return auVar5;
}