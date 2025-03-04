undefined  [16]
_ZN7uu_sort5merge19check_child_success17h7aa5fa471a5255f8E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined auVar3 [16];
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  int local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
                    /* try { // try from 00233ae2 to 00233b92 has its CatchHandler @ 00233b9b */
  _ZN3std7process5Child4wait17h4ce2f205e1183efbE(&local_58,param_1);
  if (local_58 == 0) {
    bVar2 = (local_54 & 0x7f) == 0;
    uStack_68 = local_54 >> 8 & 0xff;
    uStack_6c = (uint)bVar2;
    local_70 = 0;
    if ((bVar2) && (uStack_68 != 0)) {
      _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_i32_GT__C_std__io__error__Error_GT__GT_17h9de5c560a761a38eE
                (&local_70);
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1d4334c76f34ab0eE
                (&local_70,param_2,param_3);
      local_40 = local_60;
      local_50 = local_70;
      uStack_4c = uStack_6c;
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      local_58 = CONCAT31(local_58._1_3_,6);
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hebf92c849c48588dE(&local_58);
      goto LAB_00233b16;
    }
  }
  else {
    uStack_68 = local_50;
    uStack_64 = uStack_4c;
    local_70 = 1;
  }
  _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_i32_GT__C_std__io__error__Error_GT__GT_17h9de5c560a761a38eE
            (&local_70);
  uVar1 = 0;
LAB_00233b16:
  _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17h2a8c738952384278E(param_1);
  auVar3._8_8_ = &
                 PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17he8a54a56651c7a8bE_00300230
  ;
  auVar3._0_8_ = uVar1;
  return auVar3;
}