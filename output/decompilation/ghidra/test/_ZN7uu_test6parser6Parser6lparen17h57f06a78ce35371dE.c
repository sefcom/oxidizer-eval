void _ZN7uu_test6parser6Parser6lparen17h57f06a78ce35371dE(int *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 uStack_130;
  undefined local_128 [8];
  long *local_120;
  undefined8 local_118;
  undefined8 *local_110;
  code *local_108;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined local_d0 [40];
  undefined local_a8 [40];
  undefined local_80 [40];
  undefined local_58 [56];
  undefined8 local_20;
  
  _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17h86ce5a051be3bc0bE
            (local_58,param_2 + 0x18);
  local_20 = 3;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17he3027531f5f490a6E
            (local_128,local_58);
  switch(local_118) {
  case 0:
    local_178 = (long *)0x0;
                    /* try { // try from 001af0db to 001af3a5 has its CatchHandler @ 001af3e5 */
    _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(&local_110,&local_178);
    _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_148,param_2,&local_110);
    if ((int)local_148 != 7) {
      *(ulong *)(param_1 + 4) = CONCAT44(iStack_134,iStack_138);
      *(undefined8 *)(param_1 + 6) = uStack_130;
      *param_1 = (int)local_148;
      param_1[1] = local_148._4_4_;
      param_1[2] = iStack_140;
      param_1[3] = iStack_13c;
      goto LAB_001af3ce;
    }
    break;
  case 1:
    local_148 = local_120;
    local_110 = &local_148;
    local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf994b1777394cd57E;
    local_178 = (long *)&DAT_00113dc0;
    local_170 = 1;
    local_158 = 0;
    uStack_168 = &local_110;
    local_160 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha47e44f34eb359bdE(&local_e8,&local_178);
    *(undefined8 *)(param_1 + 6) = local_d8;
    param_1[2] = local_e8;
    param_1[3] = iStack_e4;
    param_1[4] = iStack_e0;
    param_1[5] = iStack_dc;
    param_1[0] = 3;
    param_1[1] = 0;
    goto LAB_001af3ce;
  case 2:
    if (((*(int *)local_120 != 4) || (*(int *)(local_120 + 5) != 3)) ||
       (cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17hcddac707bfdce135E
                          (local_120[7],local_120[8]), cVar1 == '\0')) {
      if ((*(int *)(local_120 + 5) != 3) ||
         (cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17hcddac707bfdce135E
                            (local_120[7],local_120[8]), cVar1 == '\0')) {
        if (*(int *)local_120 != 4) goto switchD_001af0d1_caseD_4;
LAB_001af344:
        local_178 = (long *)0x0;
        _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(&local_110,&local_178);
        _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_148,param_2,&local_110);
        goto LAB_001af36b;
      }
LAB_001af300:
      _ZN7uu_test6parser6Parser10next_token17hec2da245067de41fE(local_a8,param_2);
      _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_178,param_2,local_a8);
      if (local_178 == (long *)&DAT_00000007) {
        _ZN7uu_test6parser6Parser6expect17h264bdd99a51ab46dE(&local_178,param_2);
        goto LAB_001af3a6;
      }
      goto LAB_001af3b9;
    }
LAB_001af265:
    local_178 = (long *)0x0;
    _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(&local_110,&local_178);
    _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_148,param_2,&local_110);
LAB_001af36b:
    if (local_148 == (long *)&DAT_00000007) break;
    *(undefined8 *)(param_1 + 6) = uStack_130;
    plVar2 = local_148;
    goto LAB_001af3c7;
  case 3:
    if (*local_120 == 4) {
      if ((*(int *)(local_120 + 5) == 3) &&
         (cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17hcddac707bfdce135E
                            (local_120[7],local_120[8]), cVar1 != '\0')) goto LAB_001af265;
LAB_001af291:
      if (local_120[5] == 3) {
        cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17hcddac707bfdce135E
                          (local_120[7],local_120[8]);
        if (cVar1 != '\0') goto LAB_001af300;
      }
      else if ((int)local_120[5] == 4) {
        if (*(int *)local_120 != 4) goto switchD_001af0d1_caseD_4;
        _ZN7uu_test6parser6Parser10next_token17hec2da245067de41fE(local_80,param_2);
        _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_178,param_2,local_80);
        if (local_178 != (long *)&DAT_00000007) goto LAB_001af3b9;
        _ZN7uu_test6parser6Parser6expect17h264bdd99a51ab46dE(&local_178,param_2);
        goto LAB_001af3a6;
      }
      if (*local_120 == 4) goto LAB_001af344;
      goto switchD_001af0d1_caseD_4;
    }
    if ((((int)*local_120 != 5) || (*(int *)(local_120 + 10) != 3)) ||
       (cVar1 = _ZN78__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT_str_GT__GT_2eq17hcddac707bfdce135E
                          (local_120[0xc],local_120[0xd]), cVar1 == '\0')) goto LAB_001af291;
    _ZN7uu_test6parser6Parser10next_token17hec2da245067de41fE(local_d0,param_2);
    _ZN7uu_test6parser6Parser3uop17h62a6f0e931485a3cE(param_2,local_d0);
    _ZN7uu_test6parser6Parser6expect17h264bdd99a51ab46dE(&local_178,param_2);
LAB_001af3a6:
    if (local_178 != (long *)&DAT_00000007) goto LAB_001af3b9;
    break;
  default:
switchD_001af0d1_caseD_4:
    _ZN7uu_test6parser6Parser4expr17h14b244d6254724abE(&local_178,param_2);
    if (local_178 == (long *)&DAT_00000007) {
      _ZN7uu_test6parser6Parser6expect17h264bdd99a51ab46dE(&local_178,param_2);
      goto LAB_001af3a6;
    }
LAB_001af3b9:
    *(undefined8 *)(param_1 + 6) = local_160;
    plVar2 = local_178;
    iStack_140 = (int)local_170;
    iStack_13c = local_170._4_4_;
    iStack_138 = (int)uStack_168;
    iStack_134 = uStack_168._4_4_;
LAB_001af3c7:
    param_1[2] = iStack_140;
    param_1[3] = iStack_13c;
    param_1[4] = iStack_138;
    param_1[5] = iStack_134;
    *(long **)param_1 = plVar2;
    goto LAB_001af3ce;
  }
  param_1[0] = 7;
  param_1[1] = 0;
LAB_001af3ce:
  _ZN4core3ptr67drop_in_place_LT_alloc__vec__Vec_LT_uu_test__parser__Symbol_GT__GT_17h8be5e6021bc91ab2E
            (local_128);
  return;
}