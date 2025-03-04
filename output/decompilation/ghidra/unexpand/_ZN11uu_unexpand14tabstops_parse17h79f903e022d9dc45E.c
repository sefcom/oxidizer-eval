void _ZN11uu_unexpand14tabstops_parse17h79f903e022d9dc45E
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  char local_a0;
  char local_9f;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
            (local_68);
  local_b8 = 0;
  lStack_b0 = 8;
  local_a8 = 0;
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  do {
                    /* try { // try from 001b1850 to 001b187e has its CatchHandler @ 001b196c */
    auVar6 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17hc3086131f80cc882E(&local_78);
    lVar1 = lStack_b0;
    lVar3 = auVar6._0_8_;
    if (lVar3 == 0) {
      lVar3 = lStack_b0 + local_a8 * 8;
      local_78 = lStack_b0;
      local_70 = lVar3;
      cVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hfb74872ec2eaf285E
                        (&local_78);
      if (cVar2 == '\0') {
        uVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h5c45441c9d008661E
                          (lVar1,lVar3);
        if ((uVar5 & 1) != 0) {
          param_1[3] = local_a8;
          param_1[1] = local_b8;
          param_1[2] = lStack_b0;
          *param_1 = 0;
          return;
        }
        uVar4 = 0x8000000000000002;
      }
      else {
        uVar4 = 0x8000000000000000;
      }
LAB_001b193e:
      param_1[1] = uVar4;
LAB_001b1947:
      *param_1 = 1;
      _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17h1b908adb0cd1da04E(&local_b8)
      ;
      return;
    }
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_a0,lVar3);
    if (local_a0 != '\0') {
      if (local_9f != '\x02') {
                    /* try { // try from 001b18ff to 001b1916 has its CatchHandler @ 001b196a */
        uVar4 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17he524a6a972df7d79E
                          (lVar3,auVar6._8_8_);
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hde6101a7564f34fbE
                  (&local_90,uVar4);
        param_1[3] = local_80;
        *(undefined4 *)(param_1 + 1) = local_90;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
        *(undefined4 *)(param_1 + 2) = uStack_88;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_84;
        goto LAB_001b1947;
      }
      uVar4 = 0x8000000000000001;
      goto LAB_001b193e;
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h7c81b2a5e929de98E(&local_b8,local_98);
  } while( true );
}