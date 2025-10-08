long _ZN6uu_fmt9linebreak17break_knuth_plass17hff9de5c7a48631b8E
               (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined uVar5;
  undefined auVar6 [16];
  long local_a8;
  long lStack_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined *local_80;
  undefined8 local_78;
  long *local_70;
  char local_68;
  undefined local_67;
  char local_66;
  long local_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_58 = param_1;
  lStack_50 = param_2;
  auVar6 = _ZN71__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17he39c15aea62ebab7E
                     ();
  _ZN6uu_fmt9linebreak19find_kp_breakpoints17h8e1b34bce65123f0E
            (&local_48,auVar6._0_8_,auVar6._8_8_,param_3);
  lStack_a0 = local_38 * 0x10 + local_40;
  local_a8 = local_40;
  local_90 = *(undefined4 *)(param_3 + 8);
  uStack_8c = *(undefined4 *)(param_3 + 0xc);
  uStack_88 = *(undefined4 *)(param_3 + 0x10);
  uStack_84 = *(undefined4 *)(param_3 + 0x14);
  puVar1 = (undefined *)(param_3 + 0x30);
  local_78 = *(undefined8 *)(param_3 + 0x18);
  local_70 = &local_58;
                    /* try { // try from 00161777 to 0016178a has its CatchHandler @ 0016192f */
  local_80 = puVar1;
  _ZN4core4iter6traits12double_ended19DoubleEndedIterator9try_rfold17h6f354a9d532b4781E
            (&local_68,&local_a8,&local_90);
  lVar4 = local_60;
  if (local_68 != '\x01') {
    local_a8 = local_58;
    lStack_a0 = lStack_50;
    lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h686fc6b9d9a31eabE
                      (&local_a8);
    if (lVar3 == 0) {
LAB_001618ce:
      plVar2 = *(long **)(param_3 + 0x18);
      lVar4 = plVar2[2];
      if ((ulong)(*plVar2 - lVar4) < 2) {
                    /* try { // try from 00161916 to 00161927 has its CatchHandler @ 0016192f */
        lVar4 = (*(code *)
                  PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
                )(plVar2,"\n",1);
      }
      else {
        *(undefined *)(plVar2[1] + lVar4) = 10;
        plVar2[2] = lVar4 + 1;
        lVar4 = 0;
      }
    }
    else {
                    /* try { // try from 001617de to 00161847 has its CatchHandler @ 0016192d */
      if ((local_66 == '\0') ||
         (lVar4 = _ZN6uu_fmt9linebreak13write_newline17h38b91d3d5ac133d3E
                            (*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
                             *(undefined8 *)(param_3 + 0x18)), lVar4 == 0)) {
        _ZN6uu_fmt9linebreak14slice_if_fresh17h1732064ecc95b219E
                  (&local_90,local_66,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),
                   *(undefined8 *)(lVar3 + 0x20),*puVar1,*(undefined *)(lVar3 + 0x3a),
                   *(undefined *)(lVar3 + 0x38),local_67);
        uVar5 = *(undefined *)(lVar3 + 0x39);
        lVar4 = _ZN6uu_fmt9linebreak17write_with_spaces17h61239a97c7a24215E
                          (CONCAT44(uStack_84,uStack_88),local_80,CONCAT44(uStack_8c,local_90),
                           *(undefined8 *)(param_3 + 0x18));
        if (lVar4 == 0) {
          do {
            lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h686fc6b9d9a31eabE
                              (&local_a8);
            if (lVar4 == 0) goto LAB_001618ce;
                    /* try { // try from 0016188a to 001618c3 has its CatchHandler @ 00161931 */
            _ZN6uu_fmt9linebreak14slice_if_fresh17h1732064ecc95b219E
                      (&local_90,0,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),
                       *(undefined8 *)(lVar4 + 0x20),*puVar1,*(undefined *)(lVar4 + 0x3a),
                       *(undefined *)(lVar4 + 0x38),uVar5);
            uVar5 = *(undefined *)(lVar4 + 0x39);
            lVar4 = _ZN6uu_fmt9linebreak17write_with_spaces17h61239a97c7a24215E
                              (CONCAT44(uStack_84,uStack_88),local_80,CONCAT44(uStack_8c,local_90),
                               *(undefined8 *)(param_3 + 0x18));
          } while (lVar4 == 0);
        }
      }
    }
  }
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_clap_builder__util__id__Id_GT__GT_17hcfec7ca4ac6b63a6E
            (local_48,local_40);
  return lVar4;
}