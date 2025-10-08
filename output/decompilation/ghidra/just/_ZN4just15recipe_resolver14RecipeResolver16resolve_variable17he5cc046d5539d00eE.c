void _ZN4just15recipe_resolver14RecipeResolver16resolve_variable17he5cc046d5539d00eE
               (long param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined local_a0 [16];
  long local_90;
  long local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_a0 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_3);
  lVar2 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h62a22d89973a7e72E
                    (*param_2,param_2[1],local_a0._0_8_,local_a0._8_8_);
  if (lVar2 == 0) {
    local_88 = param_5 * 0xd0 + param_4;
    local_90 = param_4;
    cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hfdd1394427431362E
                      (&local_90,local_a0);
    if (cVar1 == '\0') {
      uVar3 = _ZN4just9constants9constants17h3594f93ebbf36f97E();
      lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h10d5bbd0b5ef08d9E
                        (uVar3,local_a0._0_8_,local_a0._8_8_);
      if (lVar2 == 0) {
        local_88 = local_a0._0_8_;
        uStack_80 = local_a0._8_4_;
        uStack_7c = local_a0._12_4_;
        local_90 = -0x7fffffffffffffcc;
        _ZN4just5token5Token5error17h986494da066a4455E(param_1,param_3,&local_90);
        return;
      }
    }
  }
  *(undefined *)(param_1 + 0x48) = 0x25;
  return;
}