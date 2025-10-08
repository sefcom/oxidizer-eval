void _ZN4just6config6Config17parse_module_path17hcb242e7462a07dcdE(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  
  _ZN82__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__clone__Clone_GT_5clone17h9ebfd47e6ccea710E
            (&local_80);
  local_48 = *(undefined8 *)(param_2 + 0x38);
  _ZN4core4iter6traits8iterator8Iterator7collect17hc68524829832dccaE(&local_b0,&local_80);
  if (local_a0 == 1) {
    puVar2 = (undefined8 *)CONCAT44(uStack_a4,uStack_a8);
                    /* try { // try from 0035f65c to 0035f6a1 has its CatchHandler @ 0035f769 */
    cVar4 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                      (0x20,*puVar2,puVar2[1]);
    if (cVar4 != '\0') {
      uVar1 = puVar2[1];
      _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h46590bb9cc81fd74E
                (&local_70,*puVar2,uVar1);
      local_80 = 0;
      local_48 = CONCAT62(local_48._2_6_,1);
      uStack_78 = uVar1;
      _ZN4core4iter6traits8iterator8Iterator7collect17h28126857f0c66fb6E(&local_98,&local_80);
      bVar3 = true;
      goto LAB_0035f6bd;
    }
  }
  local_88 = local_a0;
  local_98 = local_b0;
  uStack_94 = uStack_ac;
  uStack_90 = uStack_a8;
  uStack_8c = uStack_a4;
  bVar3 = false;
LAB_0035f6bd:
  uVar1 = CONCAT44(uStack_8c,uStack_90);
                    /* try { // try from 0035f6c7 to 0035f6f4 has its CatchHandler @ 0035f76e */
  (*(code *)
    PTR__ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from17h48731c1f5c72278aE_00566a20
  )(&local_80,uVar1,local_88);
  param_1[3] = local_70;
  param_1[4] = uStack_68;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_80;
  *(undefined4 *)((long)param_1 + 0xc) = local_80._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_78;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_78._4_4_;
  *param_1 = 0x8000000000000007;
  _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
            (CONCAT44(uStack_94,local_98),uVar1);
  if (!bVar3) {
    return;
  }
  _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
            (CONCAT44(uStack_ac,local_b0),CONCAT44(uStack_a4,uStack_a8));
  return;
}