long _ZN6uu_fmt9linebreak17break_knuth_plass17hf150f6a90b010d55E
               (long param_1,long param_2,long param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined auVar6 [16];
  long local_a8;
  long lStack_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  char local_68;
  undefined local_67;
  char local_66;
  long local_60;
  long local_58;
  long lStack_50;
  undefined local_48 [8];
  long local_40;
  long local_38;
  
  local_58 = param_1;
  lStack_50 = param_2;
  auVar6 = _ZN71__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0c34312a4b925c00E
                     ();
  _ZN6uu_fmt9linebreak19find_kp_breakpoints17h79846ee711f881cbE
            (local_48,auVar6._0_8_,auVar6._8_8_,param_3);
  lStack_a0 = local_38 * 0x10 + local_40;
  local_a8 = local_40;
  local_90 = *(undefined4 *)(param_3 + 8);
  uStack_8c = *(undefined4 *)(param_3 + 0xc);
  uStack_88 = *(undefined4 *)(param_3 + 0x10);
  uStack_84 = *(undefined4 *)(param_3 + 0x14);
  pcVar1 = (char *)(param_3 + 0x30);
  local_78 = *(undefined8 *)(param_3 + 0x18);
  local_70 = &local_58;
                    /* try { // try from 001bb68f to 001bb6a0 has its CatchHandler @ 001bb85e */
  local_80 = pcVar1;
  _ZN4core4iter6traits12double_ended19DoubleEndedIterator9try_rfold17haf3d46e0f2661060E
            (&local_68,&local_a8,&local_90);
  lVar4 = local_60;
  if (local_68 == '\0') {
    local_a8 = local_58;
    lStack_a0 = lStack_50;
    lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha7b82053f9b8098cE
                      (&local_a8);
    if (lVar3 == 0) {
LAB_001bb804:
      plVar2 = *(long **)(param_3 + 0x18);
      lVar4 = plVar2[2];
      if ((ulong)(*plVar2 - lVar4) < 2) {
                    /* try { // try from 001bb82c to 001bb83c has its CatchHandler @ 001bb85e */
        lVar4 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha7722a1d537a2c8aE
                          (plVar2,"\n",1);
      }
      else {
        *(undefined *)(plVar2[1] + lVar4) = 10;
        plVar2[2] = lVar4 + 1;
        lVar4 = 0;
      }
    }
    else {
                    /* try { // try from 001bb6eb to 001bb752 has its CatchHandler @ 001bb85c */
      if ((local_66 == '\0') ||
         (lVar4 = _ZN6uu_fmt9linebreak13write_newline17hc3973027aaf0dbf6E
                            (*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
                             *(undefined8 *)(param_3 + 0x18)), lVar4 == 0)) {
        _ZN6uu_fmt9linebreak14slice_if_fresh17h6f9344101bcdf0b0E
                  (&local_90,local_66,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),
                   *(undefined8 *)(lVar3 + 0x20),*pcVar1,*(undefined *)(lVar3 + 0x3a),
                   *(undefined *)(lVar3 + 0x38),local_67);
        cVar5 = *(char *)(lVar3 + 0x39);
        lVar4 = _ZN6uu_fmt9linebreak17write_with_spaces17hd5de12a13c23bcddE
                          (CONCAT44(uStack_84,uStack_88),local_80,CONCAT44(uStack_8c,local_90),
                           *(undefined8 *)(param_3 + 0x18));
        if (lVar4 == 0) {
          do {
            lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha7b82053f9b8098cE
                              (&local_a8);
            if (lVar4 == 0) goto LAB_001bb804;
                    /* try { // try from 001bb7be to 001bb7f5 has its CatchHandler @ 001bb860 */
            _ZN6uu_fmt9linebreak14slice_if_fresh17h6f9344101bcdf0b0E
                      (&local_90,0,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                       *(undefined8 *)(lVar4 + 0x20),*pcVar1 != '\0',*(char *)(lVar4 + 0x3a) != '\0'
                       ,*(char *)(lVar4 + 0x38) != '\0',cVar5 != '\0');
            cVar5 = *(char *)(lVar4 + 0x39);
            lVar4 = _ZN6uu_fmt9linebreak17write_with_spaces17hd5de12a13c23bcddE
                              (CONCAT44(uStack_84,uStack_88),local_80,CONCAT44(uStack_8c,local_90),
                               *(undefined8 *)(param_3 + 0x18));
          } while (lVar4 == 0);
        }
      }
    }
  }
  _ZN4core3ptr90drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_uu_fmt__parasplit__WordInfo_C_bool_RP__GT__GT_17hf54e8bc578902a10E
            (local_48);
  return lVar4;
}