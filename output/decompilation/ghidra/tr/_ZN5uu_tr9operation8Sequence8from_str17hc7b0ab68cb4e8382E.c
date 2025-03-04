void _ZN5uu_tr9operation8Sequence8from_str17hc7b0ab68cb4e8382E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_89;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined local_38 [32];
  
  _ZN3nom5multi5many028__u7b__u7b_closure_u7d__u7d_17h8cf6a4b7fc883442E
            (&local_68,&local_89,param_2,param_3);
  if (local_68 == 0) {
    uStack_70 = local_40;
    uStack_80 = local_50;
    uStack_7c = uStack_4c;
    local_88 = 3;
  }
  else {
    uStack_70 = CONCAT44(uStack_44,uStack_48);
    local_88 = CONCAT44(uStack_5c,local_60);
    uStack_80 = uStack_58;
    uStack_7c = uStack_54;
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb9abf94b670d136bE(&local_68,&local_88);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h9e5e53909aab6517E
            (local_38,&local_68);
  _ZN4core4iter8adapters11try_process17hb2b95e5a82835feeE(param_1,local_38);
  return;
}