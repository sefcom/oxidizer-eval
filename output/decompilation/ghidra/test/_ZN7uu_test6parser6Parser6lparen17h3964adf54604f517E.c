void _ZN7uu_test6parser6Parser6lparen17h3964adf54604f517E(undefined8 *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  long *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  long **local_f0;
  code *local_e8;
  undefined local_c8 [8];
  long *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined local_98 [40];
  undefined local_70 [40];
  undefined local_48 [40];
  
  _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17h51d9b9dc2856ac23E
            (&local_150,param_2 + 0x18);
  local_118 = 3;
  _ZN4core4iter6traits8iterator8Iterator7collect17h07229457d4e30845E(local_c8,&local_150);
  switch(local_b8) {
  case 0:
    local_150 = (long *)0x0;
                    /* try { // try from 00157861 to 00157b4a has its CatchHandler @ 00157b90 */
    _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_f0,&local_150);
    _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_110,param_2,&local_f0);
    break;
  case 1:
    local_110 = local_c0;
    local_f0 = &local_110;
    local_e8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc473e96781e0b048E;
    local_150 = (long *)&DAT_00117330;
    local_148 = 1;
    local_130 = 0;
    uStack_140 = &local_f0;
    local_138 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1762a7ae3f8b5d38E(&local_b0,&local_150);
    param_1[3] = local_a0;
    *(undefined4 *)(param_1 + 1) = local_b0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_ac;
    *(undefined4 *)(param_1 + 2) = uStack_a8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_a4;
    *param_1 = 3;
    goto LAB_00157b74;
  case 2:
    if (*(int *)local_c0 != 4) {
      if ((local_c0[5] != 3) ||
         (cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                            (local_c0[7],local_c0[8]), cVar1 == '\0'))
      goto switchD_00157856_caseD_4;
LAB_00157a98:
      _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_70,param_2);
      _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_150,param_2,local_70);
      if (local_150 == (long *)&DAT_00000007) {
        _ZN7uu_test6parser6Parser6expect17h104d0740cf1283eeE(&local_150,param_2);
        goto LAB_00157b4b;
      }
      goto LAB_00157b5f;
    }
    if (local_c0[5] == 3) {
      cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                        (local_c0[7],local_c0[8]);
      if (cVar1 != '\0') goto LAB_001579f5;
      cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                        (local_c0[7],local_c0[8]);
      if (cVar1 != '\0') goto LAB_00157a98;
    }
LAB_00157ae1:
    local_150 = (long *)0x0;
    _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_f0,&local_150);
    _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_110,param_2,&local_f0);
    break;
  case 3:
    iVar3 = (int)*local_c0;
    if (*local_c0 != 4) {
      if ((iVar3 != 5) ||
         ((*(int *)(local_c0 + 10) != 3 ||
          (cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                             (local_c0[0xc],local_c0[0xd]), cVar1 == '\0')))) {
LAB_00157a24:
        if (local_c0[5] == 3) {
          cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                            (local_c0[7],local_c0[8]);
          if (cVar1 != '\0') goto LAB_00157a98;
        }
        else if ((int)local_c0[5] == 4) {
          if (iVar3 != 4) goto switchD_00157856_caseD_4;
          _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_48,param_2);
          _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_150,param_2,local_48);
          if (local_150 != (long *)&DAT_00000007) goto LAB_00157b5f;
          _ZN7uu_test6parser6Parser6expect17h104d0740cf1283eeE(&local_150,param_2);
          goto LAB_00157b4b;
        }
        if (iVar3 == 4) goto LAB_00157ae1;
        goto switchD_00157856_caseD_4;
      }
      _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_98,param_2);
      _ZN7uu_test6parser6Parser3uop17h1b444c1c0da3bc2dE(param_2,local_98);
      _ZN7uu_test6parser6Parser6expect17h104d0740cf1283eeE(&local_150,param_2);
      goto LAB_00157b4b;
    }
    if ((*(int *)(local_c0 + 5) != 3) ||
       (cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17h1ffd8f17dc4fb6beE
                          (local_c0[7],local_c0[8]), cVar1 == '\0')) goto LAB_00157a24;
LAB_001579f5:
    local_150 = (long *)0x0;
    _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_f0,&local_150);
    _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_110,param_2,&local_f0);
    break;
  default:
switchD_00157856_caseD_4:
    _ZN7uu_test6parser6Parser4expr17hea95ff6631384a05E(&local_150,param_2);
    if (local_150 == (long *)&DAT_00000007) {
      _ZN7uu_test6parser6Parser6expect17h104d0740cf1283eeE(&local_150,param_2);
LAB_00157b4b:
      if (local_150 != (long *)&DAT_00000007) goto LAB_00157b5f;
      goto LAB_00157b56;
    }
LAB_00157b5f:
    param_1[3] = local_138;
    plVar2 = local_150;
    local_108 = (undefined4)local_148;
    uStack_104 = local_148._4_4_;
    uStack_100 = (undefined4)uStack_140;
    uStack_fc = uStack_140._4_4_;
    goto LAB_00157b6d;
  }
  if (local_110 == (long *)&DAT_00000007) {
LAB_00157b56:
    *param_1 = 7;
  }
  else {
    param_1[3] = local_f8;
    plVar2 = local_110;
LAB_00157b6d:
    *(undefined4 *)(param_1 + 1) = local_108;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_104;
    *(undefined4 *)(param_1 + 2) = uStack_100;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
    *param_1 = plVar2;
  }
LAB_00157b74:
  _ZN4core3ptr67drop_in_place_LT_alloc__vec__Vec_LT_uu_test__parser__Symbol_GT__GT_17h9359e9a929ed7bbeE
            (local_c8);
  return;
}