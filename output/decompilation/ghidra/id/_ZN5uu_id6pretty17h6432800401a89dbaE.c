void _ZN5uu_id6pretty17h6432800401a89dbaE(undefined4 *param_1)

{
  code *pcVar1;
  undefined local_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  code *pcStack_198;
  long local_190;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 **local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 *local_40;
  code *local_38;
  
  local_f8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_f0 = *(undefined8 *)(param_1 + 0x1e);
  local_108 = *(undefined8 *)(param_1 + 0x18);
  uStack_100 = *(undefined8 *)(param_1 + 0x1a);
  local_118 = *(undefined8 *)(param_1 + 0x14);
  uStack_110 = *(undefined8 *)(param_1 + 0x16);
  local_128 = *(undefined8 *)(param_1 + 0x10);
  uStack_120 = *(undefined8 *)(param_1 + 0x12);
  local_168 = *param_1;
  uStack_164 = param_1[1];
  uStack_160 = param_1[2];
  uStack_15c = param_1[3];
  local_158 = param_1[4];
  uStack_154 = param_1[5];
  uStack_150 = param_1[6];
  uStack_14c = param_1[7];
  local_148 = param_1[8];
  uStack_144 = param_1[9];
  uStack_140 = param_1[10];
  uStack_13c = param_1[0xb];
  local_138 = param_1[0xc];
  uStack_134 = param_1[0xd];
  uStack_130 = param_1[0xe];
  uStack_12c = param_1[0xf];
  local_1a0 = &local_168;
  pcStack_198 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_c8 = &PTR_s_uid_001e8d58;
  uStack_c0 = 2;
  local_a8 = 0;
  local_b8 = &local_1a0;
  uStack_b0 = 1;
                    /* try { // try from 0015d3df to 0015d3fc has its CatchHandler @ 0015db1d */
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_c8);
  (*(code *)PTR__ZN6uucore8features7entries6Passwd10belongs_to17h86a03abed7028785E_001ef8d8)
            (&local_1a0,&local_168);
  pcVar1 = pcStack_198;
                    /* try { // try from 0015d40b to 0015d415 has its CatchHandler @ 0015db0b */
  _ZN4core4iter6traits8iterator8Iterator7collect17h7015affb243c4c0cE
            (local_1b8,pcStack_198,pcStack_198 + local_190 * 4);
                    /* try { // try from 0015d420 to 0015d433 has its CatchHandler @ 0015dafe */
  _ZN5alloc3str17join_generic_copy17h59511d2ef6868464E(&local_c8,uStack_1b0,local_1a8," \n");
  local_d8 = local_b8;
  local_e8 = (undefined4)local_c8;
  uStack_e4 = local_c8._4_4_;
  uStack_e0 = (undefined4)uStack_c0;
  uStack_dc = uStack_c0._4_4_;
  local_40 = &local_e8;
  local_38 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_c8 = (undefined **)&DAT_001e8d78;
  uStack_c0 = 2;
  local_a8 = 0;
  local_b8 = &local_40;
  uStack_b0 = 1;
                    /* try { // try from 0015d4af to 0015d4bc has its CatchHandler @ 0015dae4 */
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ef8c0)(&local_c8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h084553603f2ff391E
            (CONCAT44(uStack_e4,local_e8),CONCAT44(uStack_dc,uStack_e0));
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hd40cc4d4fa480ff0E
            (local_1b8);
  _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17h4a55a5c1ac3ca45bE
            (local_1a0,pcVar1);
  _ZN4core3ptr54drop_in_place_LT_uucore__features__entries__Passwd_GT_17h12f3820528dcc77cE
            (&local_168);
  return;
}