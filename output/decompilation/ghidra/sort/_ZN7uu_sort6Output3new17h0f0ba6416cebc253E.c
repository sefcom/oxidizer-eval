undefined8 *
_ZN7uu_sort6Output3new17h0f0ba6416cebc253E(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 unaff_EBP;
  undefined8 uVar1;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined local_b8;
  undefined2 uStack_b7;
  undefined uStack_b5;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined local_78;
  undefined2 local_77;
  undefined local_75;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar1 = 0x8000000000000000;
  if (param_2 != 0) {
    local_d8 = 0x1b600000000;
    local_d0 = 0x100;
    local_cc = 1;
    _ZN3std2fs11OpenOptions4open17h2cdbe8cd70abf308E(&local_c8,&local_d8,param_2,param_3);
    if (local_c8 != 0) {
      _ZN7uu_sort6Output3new28__u7b__u7b_closure_u7d__u7d_17hb3d002288addb3b9E
                (&local_78,param_2,param_3,local_c0);
      uStack_b5 = local_75;
      uStack_b7 = local_77;
      local_b0 = local_70;
      uStack_a8 = uStack_68;
      local_a0 = local_60;
      uStack_98 = uStack_58;
      local_90 = local_50;
      uStack_8c = uStack_4c;
      uStack_88 = uStack_48;
      uStack_84 = uStack_44;
      local_80 = local_40;
      local_b8 = local_78;
      uStack_b4 = local_74;
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hebf92c849c48588dE(&local_b8);
      param_1[1] = uVar1;
      param_1[2] = &
                   PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17he8a54a56651c7a8bE_002ff678
      ;
      *param_1 = 0x8000000000000001;
      return param_1;
    }
                    /* try { // try from 0021e4b8 to 0021e4c7 has its CatchHandler @ 0021e4ff */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1d4334c76f34ab0eE
              (&local_b8,param_2,param_3);
    uVar1 = CONCAT44(uStack_b4,CONCAT13(uStack_b5,CONCAT21(uStack_b7,local_b8)));
    local_38 = local_b0;
    uStack_30 = uStack_a8;
    unaff_EBP = local_c4;
  }
  *param_1 = uVar1;
  param_1[1] = local_38;
  param_1[2] = uStack_30;
  *(undefined4 *)(param_1 + 3) = unaff_EBP;
  return param_1;
}