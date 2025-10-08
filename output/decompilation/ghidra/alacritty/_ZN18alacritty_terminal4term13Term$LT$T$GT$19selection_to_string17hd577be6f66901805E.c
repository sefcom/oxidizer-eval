void _ZN18alacritty_terminal4term13Term_LT_T_GT_19selection_to_string17hd577be6f66901805E
               (undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined auVar5 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  int local_68;
  char local_60;
  int local_54;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if ((*(char *)(param_2 + 0x280) == '\x02') ||
     (_ZN18alacritty_terminal9selection9Selection8to_range17h2a26a8fa10c1a05cE
                (&local_80,param_2 + 600,param_2), uVar3 = local_70, local_60 == '\x02')) {
    *param_1 = 0x8000000000000000;
    return;
  }
  lVar2 = CONCAT44(uStack_7c,local_80);
  local_98 = 0;
  uStack_90 = 1;
  local_88 = 0;
  if (*(char *)(param_2 + 0x288) == '\x03') {
                    /* try { // try from 0046ff49 to 0046ffe8 has its CatchHandler @ 00470039 */
    _ZN18alacritty_terminal4term13Term_LT_T_GT_16bounds_to_string17h4abdcbf42c50785aE
              (&local_80,param_2,lVar2,iStack_78,local_70);
    _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
              (&local_48,&local_80,"\n");
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_98);
    local_88 = local_38;
    local_80 = local_48;
    uStack_7c = uStack_44;
    iStack_78 = iStack_40;
    uStack_74 = uStack_3c;
  }
  else {
    if (*(char *)(param_2 + 0x288) == '\x01') {
      local_54 = local_68;
      iVar1 = local_68;
      if (local_68 < iStack_78) {
        iVar1 = iStack_78;
      }
      local_50 = param_1;
      for (iVar4 = iStack_78; iVar1 != iVar4; iVar4 = iVar4 + 1) {
                    /* try { // try from 0046fef3 to 0046ff08 has its CatchHandler @ 0047005a */
        _ZN18alacritty_terminal4term13Term_LT_T_GT_14line_to_string17h817f918a5b9412b8E
                  (&local_80,param_2,iVar4,lVar2,uVar3,lVar2 != 0);
        auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hea7d013d5dc126f6E
                           (CONCAT44(uStack_74,iStack_78),local_70);
                    /* try { // try from 0046ff1b to 0046ff25 has its CatchHandler @ 0047003b */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                  (&local_98,auVar5._0_8_,auVar5._8_8_ + auVar5._0_8_);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_80);
                    /* try { // try from 0046ff31 to 0046ff46 has its CatchHandler @ 0047005a */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                  (&local_98,"\n","");
      }
      _ZN18alacritty_terminal4term13Term_LT_T_GT_14line_to_string17h817f918a5b9412b8E
                (&local_80,param_2,local_54,lVar2,uVar3,1);
      param_1 = local_50;
      auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hea7d013d5dc126f6E
                         (CONCAT44(uStack_74,iStack_78),local_70);
                    /* try { // try from 00470000 to 0047000c has its CatchHandler @ 00470037 */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
                (&local_98,auVar5._0_8_,auVar5._8_8_ + auVar5._0_8_);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_80);
      goto LAB_00470017;
    }
    _ZN18alacritty_terminal4term13Term_LT_T_GT_16bounds_to_string17h4abdcbf42c50785aE
              (&local_80,param_2,lVar2,iStack_78,local_70);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_98);
    local_88 = local_70;
  }
  local_98 = CONCAT44(uStack_7c,local_80);
  uStack_90 = CONCAT44(uStack_74,iStack_78);
LAB_00470017:
  param_1[2] = local_88;
  *param_1 = local_98;
  param_1[1] = uStack_90;
  return;
}