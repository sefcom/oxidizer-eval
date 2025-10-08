void _ZN5uu_tr9operation8Sequence8from_str17h4181ffdd5168ac11E(undefined8 param_1)

{
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  int local_60 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined local_30 [24];
  
  _ZN77__LT_nom__multi__Many0_LT_F_GT__u20_as_u20_nom__internal__Parser_LT_I_GT__GT_7process17hf61a4f0c57043b6eE
            (local_60);
  if (local_60[0] == 1) {
    uStack_70 = CONCAT44(uStack_3c,uStack_40);
    local_88 = CONCAT44(uStack_54,local_58);
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
  }
  else {
    uStack_70 = local_38;
    uStack_80 = local_48;
    uStack_7c = uStack_44;
    local_88 = 3;
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17had610963c451fde2E(local_30,&local_88);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hb4c43fc8bf470e5dE
            (local_60,local_30);
  _ZN4core4iter6traits8iterator8Iterator7collect17hc903770427f87edeE(param_1,local_60);
  return;
}