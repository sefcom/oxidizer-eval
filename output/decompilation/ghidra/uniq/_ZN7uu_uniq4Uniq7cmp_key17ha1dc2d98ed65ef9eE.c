undefined4
_ZN7uu_uniq4Uniq7cmp_key17ha1dc2d98ed65ef9eE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined local_30 [8];
  long local_28;
  long local_20;
  
  _ZN7uu_uniq4Uniq11skip_fields17hde61277d301acf25E(local_30,*param_1,param_1[1],param_2,param_3);
  lVar2 = local_20;
  if (param_1[2] == 0) {
    if (param_1[4] == 0) {
      if (local_20 != 0) {
        if (*(char *)((long)param_1 + 0x34) == '\0') {
LAB_001bd1bc:
          local_48 = local_20 + local_28;
          local_50 = local_28;
          uVar1 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17h3c5213e1c3586ea6E
                            (param_4,param_5,&local_50,&DAT_00230318);
          goto LAB_001bd21c;
        }
        lVar3 = 0;
        goto LAB_001bd10b;
      }
    }
    else if (local_20 != 0) {
      lVar2 = param_1[5];
      if (*(char *)((long)param_1 + 0x34) == '\0') goto LAB_001bd1b7;
      lVar3 = 0;
      goto LAB_001bd106;
    }
  }
  else {
    if (param_1[4] != 0) {
      lVar2 = param_1[5];
    }
    if (local_20 != 0) {
      lVar3 = param_1[3];
      if (*(char *)((long)param_1 + 0x34) == '\0') {
        if (lVar3 == 0) {
LAB_001bd1b7:
          if (lVar2 == local_20) goto LAB_001bd1bc;
          lVar3 = 0;
        }
        local_48 = local_20 + local_28;
        local_50 = local_28;
        local_40 = lVar3;
        local_38 = lVar2;
        uVar1 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17h3c5213e1c3586ea6E
                          (param_4,param_5,&local_50,&DAT_00230350);
        goto LAB_001bd21c;
      }
LAB_001bd106:
      if (lVar3 == 0) {
LAB_001bd10b:
        if (lVar2 == local_20) {
          local_48 = local_20 + local_28;
          local_50 = local_28;
                    /* try { // try from 001bd122 to 001bd21b has its CatchHandler @ 001bd234 */
          uVar1 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17h3c5213e1c3586ea6E
                            (param_4,param_5,&local_50,&DAT_002303f8);
          goto LAB_001bd21c;
        }
      }
      local_48 = local_20 + local_28;
      local_50 = local_28;
      local_40 = lVar3;
      local_38 = lVar2;
      uVar1 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17h3c5213e1c3586ea6E
                        (param_4,param_5,&local_50,&DAT_00230430);
      goto LAB_001bd21c;
    }
  }
  local_48 = local_20 + local_28;
  local_50 = local_28;
  uVar1 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_17h3c5213e1c3586ea6E
                    (param_4,param_5,&local_50,&DAT_00230318);
LAB_001bd21c:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0ecdab8b58963e2cE(local_30);
  return uVar1;
}