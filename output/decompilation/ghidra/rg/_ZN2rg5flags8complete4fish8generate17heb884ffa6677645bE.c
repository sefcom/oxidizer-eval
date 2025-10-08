void _ZN2rg5flags8complete4fish8generate17heb884ffa6677645bE(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 **local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined local_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 **local_c8;
  uint *local_98;
  undefined *local_90;
  uint local_80 [6];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
                    /* try { // try from 0034302a to 00343050 has its CatchHandler @ 003435a0 */
  local_68 = param_1;
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h2fdea5a3ee2c8f62E
            (&local_f0,&DAT_00169e36,&DAT_0016a1c8);
  _ZN5alloc6string6String4push17h0ede46164189e411E(&local_f0,10);
  puVar2 = PTR_DAT_004e9310;
  uVar1 = DAT_004e9308;
  local_50 = *(code **)(PTR_DAT_004e9310 + 0x28);
                    /* try { // try from 003430a9 to 00343160 has its CatchHandler @ 0034361e */
  auVar4 = (*local_50)(DAT_004e9308);
  if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_138,1,0);
    local_c8 = local_128;
    local_d8 = (undefined4)local_138;
    uStack_d4 = local_138._4_4_;
    uStack_d0 = (undefined4)uStack_130;
    uStack_cc = uStack_130._4_4_;
  }
  else {
    local_80[0] = auVar4._8_4_ & 0xff;
    local_98 = local_80;
    local_90 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00527048
    ;
    local_138 = &PTR_DAT_004e9988;
    uStack_130 = 1;
    local_118 = 0;
    local_128 = &local_98;
    local_120 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (&local_158,0,auVar4._8_8_,&local_138);
    local_d8 = local_158;
    uStack_d4 = uStack_154;
    uStack_d0 = uStack_150;
    uStack_cc = uStack_14c;
    local_c8 = local_148;
  }
                    /* try { // try from 0034317b to 003431ba has its CatchHandler @ 00343633 */
  auVar4 = (**(code **)(puVar2 + 0x30))(uVar1);
  auVar5 = (**(code **)(puVar2 + 0x58))(uVar1);
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (local_48,auVar5._0_8_,auVar5._8_8_,&DAT_0016a233,1,&DAT_0016a23a,2);
                    /* try { // try from 003431cb to 003431f1 has its CatchHandler @ 00343600 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (&local_138,&DAT_0016a23c,0x2b,&DAT_0016a267,7,CONCAT44(uStack_cc,uStack_d0),local_c8);
                    /* try { // try from 003431fc to 00343229 has its CatchHandler @ 00343605 */
  local_60 = auVar4._8_8_;
  local_58 = auVar4._0_8_;
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (&local_158,uStack_130,local_128,&DAT_0016a26e,6,auVar4._0_8_,auVar4._8_8_);
                    /* try { // try from 00343244 to 00343261 has its CatchHandler @ 0034360a */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (local_108,CONCAT44(uStack_14c,uStack_150),local_148,&DAT_0016a274,5,local_40,local_38);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_158);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_138);
                    /* try { // try from 00343276 to 003432e6 has its CatchHandler @ 00343638 */
  bVar3 = (**(code **)(puVar2 + 0x70))(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0034329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00162cec + *(int *)(&DAT_00162cec + (ulong)bVar3 * 4)))();
  return;
}