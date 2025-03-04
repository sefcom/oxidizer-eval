void _ZN7uu_test6parser6Parser3uop17h62a6f0e931485a3cE(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [40];
  
                    /* try { // try from 001af954 to 001af960 has its CatchHandler @ 001afa25 */
  _ZN7uu_test6parser6Parser10next_token17hec2da245067de41fE(&local_90,param_1);
  if (local_90 == 6) {
    local_98 = *(undefined8 *)(param_2 + 8);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = param_2[4];
    uStack_a4 = param_2[5];
    uStack_a0 = param_2[6];
    uStack_9c = param_2[7];
                    /* try { // try from 001af981 to 001af99a has its CatchHandler @ 001afa14 */
    _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(local_40,&local_b8);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_1,local_40);
                    /* try { // try from 001af99d to 001af9a6 has its CatchHandler @ 001afa25 */
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(&local_90);
  }
  else {
    local_48 = local_70;
    local_58 = local_80;
    uStack_54 = uStack_7c;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    local_68 = local_90;
    uStack_64 = uStack_8c;
    uStack_60 = uStack_88;
    uStack_5c = uStack_84;
                    /* try { // try from 001af9ca to 001afa07 has its CatchHandler @ 001afa23 */
    _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(&local_b8,&local_68);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_1,&local_b8);
    local_98 = *(undefined8 *)(param_2 + 8);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = param_2[4];
    uStack_a4 = param_2[5];
    uStack_a0 = param_2[6];
    uStack_9c = param_2[7];
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_1,&local_b8);
  }
  return;
}