void _ZN12forc_publish14md_pre_process16MarkdownDepGraph5build17hcb57cec854dfb558E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined local_88 [16];
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_88 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17he15e8432aab59907E();
  local_a8 = PTR_DAT_00f53140;
  uStack_a0 = _UNK_00f53148;
  local_98 = _DAT_00f53150;
  uStack_94 = _UNK_00f53154;
  uStack_90 = _UNK_00f53158;
  uStack_8c = _UNK_00f5315c;
                    /* try { // try from 0076397b to 00763984 has its CatchHandler @ 00763a3f */
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h681c95fd5eba8afbE
            (&local_78);
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
                    /* try { // try from 007639a6 to 007639bd has its CatchHandler @ 00763a22 */
  _ZN12forc_publish14md_pre_process16MarkdownDepGraph15build_recursive17hfe3cf864a7cc9e04E
            (&local_78,param_2,param_3,&local_a8,&local_48);
  if (local_78 == 6) {
    *(undefined4 *)(param_1 + 4) = local_88._0_4_;
    *(undefined4 *)((long)param_1 + 0x24) = local_88._4_4_;
    *(undefined4 *)(param_1 + 5) = local_88._8_4_;
    *(undefined4 *)((long)param_1 + 0x2c) = local_88._12_4_;
    *(undefined4 *)(param_1 + 2) = local_98;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_94;
    *(undefined4 *)(param_1 + 3) = uStack_90;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_8c;
    *(undefined4 *)param_1 = (undefined4)local_a8;
    *(undefined4 *)((long)param_1 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_a0._4_4_;
    _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h686131186ad88adfE
              (&local_48);
  }
  else {
    *(undefined4 *)(param_1 + 3) = local_68;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_64;
    *(undefined4 *)(param_1 + 4) = uStack_60;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_5c;
    *(int *)(param_1 + 1) = local_78;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 2) = uStack_70;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_6c;
    *param_1 = 0;
    _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h686131186ad88adfE
              (&local_48);
    _ZN4core3ptr148drop_in_place_LT_std__collections__hash__map__HashMap_LT_std__path__PathBuf_C_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT__GT_17hd26a8e56affd436eE
              (&local_a8);
  }
  return;
}