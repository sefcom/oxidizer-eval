void _ZN11uu_unexpand14tabstops_parse17hd6618068ebda3834E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined auVar5 [16];
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
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_68);
  local_b8 = 0;
  lStack_b0 = 8;
  local_a8 = 0;
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  do {
                    /* try { // try from 0015be00 to 0015be31 has its CatchHandler @ 0015bf07 */
    auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h7e3823b43e930040E(&local_78);
    lVar2 = auVar5._0_8_;
    if (lVar2 == 0) {
      cVar1 = _ZN57__LT_usize_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5183ddd93362b17dE
                        (lStack_b0,local_a8);
      if (cVar1 == '\0') {
        uVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17he3583de373be94d7E
                          (lStack_b0,lStack_b0 + local_a8 * 8);
        if ((uVar4 & 1) != 0) {
          param_1[3] = local_a8;
          param_1[1] = local_b8;
          param_1[2] = lStack_b0;
          *param_1 = 0;
          return;
        }
        uVar3 = 0x8000000000000002;
      }
      else {
        uVar3 = 0x8000000000000000;
      }
LAB_0015beda:
      param_1[1] = uVar3;
LAB_0015bede:
      *param_1 = 1;
      _ZN4core3ptr49drop_in_place_LT_alloc__vec__Vec_LT_usize_GT__GT_17hc24bb36679b53478E
                (local_b8,lStack_b0);
      return;
    }
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_a0,lVar2);
    if (local_a0 != '\0') {
      if (local_9f != '\x02') {
                    /* try { // try from 0015bea0 to 0015beb7 has its CatchHandler @ 0015bf05 */
        uVar3 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hf9870a4d295deabbE
                          (lVar2,auVar5._8_8_);
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc756f0904f45cd83E
                  (&local_90,uVar3);
        param_1[3] = local_80;
        *(undefined4 *)(param_1 + 1) = local_90;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
        *(undefined4 *)(param_1 + 2) = uStack_88;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_84;
        goto LAB_0015bede;
      }
      uVar3 = 0x8000000000000001;
      goto LAB_0015beda;
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h69a9a8bac04a407aE(&local_b8,local_98);
  } while( true );
}