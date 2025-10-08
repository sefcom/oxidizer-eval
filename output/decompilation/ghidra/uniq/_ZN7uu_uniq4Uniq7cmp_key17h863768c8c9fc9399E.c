undefined4
_ZN7uu_uniq4Uniq7cmp_key17h863768c8c9fc9399E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  
  _ZN7uu_uniq4Uniq11skip_fields17habc1c899824c43e1E(&local_48,*param_1,param_1[1],param_2,param_3);
  uVar4 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    uVar4 = param_1[3];
  }
  lVar7 = local_38 - uVar4;
  if (local_38 < uVar4) {
    lVar7 = 0;
  }
  lVar6 = 1;
  if (local_38 >= uVar4 && local_38 - uVar4 != 0) {
    lVar6 = local_40 + uVar4;
  }
                    /* try { // try from 001668ec to 001669ac has its CatchHandler @ 001669cd */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001fc218)(&local_78,lVar6,lVar7)
  ;
  lVar1 = local_70;
  if ((int)local_78 == 1) {
    local_70 = lVar7 + lVar6;
    local_78 = lVar6;
    uVar2 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_17hb84b773afb965e5bE
                      (param_4,&local_78,&DAT_001f57a8);
  }
  else {
    lVar7 = local_68 + local_70;
    uVar3 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                      (local_70,lVar7);
    uVar5 = uVar3;
    if (*(char *)(param_1 + 4) != '\0') {
      uVar5 = param_1[5];
    }
    local_50 = _ZN4core3cmp3Ord3min17h32762a5a9ea48191E(uVar5,uVar3);
    local_60 = lVar1;
    local_58 = lVar7;
    if (*(char *)((long)param_1 + 0x34) == '\0') {
      uVar2 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_17hb84b773afb965e5bE
                        (param_4,&local_60,&DAT_001f5738);
    }
    else {
      local_78 = lVar1;
      local_70 = lVar7;
      local_68 = local_50;
      uVar2 = _ZN7uu_uniq4Uniq8cmp_keys28__u7b__u7b_closure_u7d__u7d_17hb84b773afb965e5bE
                        (param_4,&local_78,&DAT_001f5770);
    }
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hfd495873f16042daE
            (local_48,local_40);
  return uVar2;
}