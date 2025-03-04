undefined8 *
_ZN7uu_sort13FieldSelector5parse17hc80187f191ca59d9E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_128 [2];
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined7 local_a0;
  char cStack_99;
  undefined local_98 [16];
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  local_100 = param_2;
  local_f8 = param_4;
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
            (local_68,0x2c,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  lVar3 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h1ca17ad8b676764cE(&local_78);
  if (lVar3 != 0) {
    _ZN7uu_sort13FieldSelector17split_key_options17h3befb314b865dbc5E(&local_d0,lVar3);
    lVar3 = lStack_b8;
    uVar5 = local_c0;
    lVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h1ca17ad8b676764cE(&local_78);
    if (lVar4 == 0) {
      local_f0[0] = 0;
    }
    else {
      _ZN4core3ops8function6FnOnce9call_once17h0bf0484f61ddc553E(local_f0,lVar4);
    }
    if ((lVar3 == 0) &&
       ((local_f0[0] == 0 ||
        (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb9af56cf5f49fd41E
                           (CONCAT44(uStack_dc,local_e0),CONCAT44(uStack_d4,uStack_d8),1,0),
        cVar2 != '\0')))) {
      local_118 = &local_f8;
      uStack_110 = local_f0;
      _ZN7uu_sort13FieldSelector5parse28__u7b__u7b_closure_u7d__u7d_17hbfab5933502ce6d9E
                (&local_d0,local_128);
    }
    else {
      local_88 = uVar5;
      local_80 = lVar3;
      uStack_110 = (long *)CONCAT44(uStack_d4,uStack_d8);
      local_128[0] = local_f0[0];
      _ZN7uu_sort13FieldSelector18parse_with_options17hf97b85c869b37397E
                (&local_d0,local_98,local_128);
    }
    if (cStack_99 == '\x02') {
      uVar5 = _ZN7uu_sort13FieldSelector5parse28__u7b__u7b_closure_u7d__u7d_17h449a10a279cbece7E
                        (local_100,param_3,local_128);
      *param_1 = uVar5;
      param_1[1] = &
                   PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17he8a54a56651c7a8bE_002ff678
      ;
      *(undefined *)((long)param_1 + 0x37) = 2;
    }
    else {
      param_1[6] = CONCAT17(cStack_99,local_a0);
      param_1[4] = local_b0;
      param_1[5] = uStack_a8;
      param_1[2] = local_c0;
      param_1[3] = lStack_b8;
      *param_1 = CONCAT44(uStack_cc,local_d0);
      param_1[1] = CONCAT44(uStack_c4,uStack_c8);
    }
    return param_1;
  }
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_sort_src_sort_rs_002ffaa8);
  pcVar1 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar1)();
  return puVar6;
}