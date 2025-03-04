/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16]
_ZN5uu_ls12display_grid17h3c5e157ceab431f0E
          (undefined8 *param_1,ushort param_2,undefined param_3,undefined8 param_4,char param_5)

{
  long lVar1;
  undefined8 **ppuVar2;
  char acVar3 [4];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auVar7 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long local_140;
  undefined8 *local_138;
  code *pcStack_130;
  long local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 **local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 ***local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 **local_60;
  code *local_58;
  undefined local_50 [32];
  
  if (param_2 == 0) {
    ppuVar2 = (undefined8 **)0x8000000000000000;
    local_118 = (undefined *)*param_1;
    uStack_110 = param_1[1];
    local_108 = (undefined8 **)param_1[2];
    uStack_100 = param_1[3];
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7a5e426642ce2a7E
              (&local_150,&local_118);
    if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) {
      _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                (&local_118);
    }
    else {
      local_128 = local_140;
      ppuVar2 = &local_138;
      while( true ) {
        local_58 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_e8 = (undefined **)&DAT_00123c10;
        uStack_e0 = 1;
        uStack_c8 = 0;
        local_d0 = 1;
        local_d8 = &local_60;
        local_60 = ppuVar2;
                    /* try { // try from 0022a37c to 0022a386 has its CatchHandler @ 0022a4d6 */
        lVar1 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_4,&local_e8);
        if (lVar1 != 0) {
          auVar7 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                             (lVar1);
          goto LAB_0022a420;
        }
                    /* try { // try from 0022a390 to 0022a397 has its CatchHandler @ 0022a4d1 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(ppuVar2);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7a5e426642ce2a7E
                  (&local_150,&local_118);
        if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) break;
        local_128 = local_140;
        local_e8 = &PTR_DAT_00312688;
        uStack_e0 = 1;
        local_d8 = (undefined8 ***)&DAT_00000008;
        local_d0 = 0;
        uStack_c8 = 0;
                    /* try { // try from 0022a3f8 to 0022a402 has its CatchHandler @ 0022a4d6 */
        lVar1 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_4,&local_e8);
        if (lVar1 != 0) {
                    /* try { // try from 0022a40c to 0022a41f has its CatchHandler @ 0022a4b1 */
          auVar7 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                             (lVar1);
LAB_0022a420:
                    /* try { // try from 0022a426 to 0022a42f has its CatchHandler @ 0022a4af */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_138);
          _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                    (&local_118);
          return auVar7;
        }
      }
      _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h7998da7d166a96bfE
                (&local_118);
      local_e8 = &PTR_DAT_003125b8;
      uStack_e0 = 1;
      local_d8 = (undefined8 ***)0x8;
      local_d0 = 0;
      uStack_c8 = 0;
      lVar1 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_4,&local_e8);
      if (lVar1 != 0) {
        auVar7 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                           (lVar1);
        return auVar7;
      }
    }
  }
  else {
    if (param_5 == '\0') {
      _ZN4core4iter6traits8iterator8Iterator7collect17hd9d48ed126578877E(&local_150);
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator3map17hb476dda254653927E(local_50);
      _ZN5alloc3vec16in_place_collect108__LT_impl_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__u20_for_u20_alloc__vec__Vec_LT_T_GT__GT_9from_iter17h0bf662e477722034E
                (&local_150,local_50);
    }
    local_e8 = (undefined **)CONCAT44(uStack_144,uStack_148);
    uStack_e0 = (long)local_e8 + local_140 * 0x18;
                    /* try { // try from 0022a200 to 0022a226 has its CatchHandler @ 0022a4b3 */
    local_108 = (undefined8 **)
                _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h2bc0af22b69decc2E
                          (&local_e8);
    acVar3 = s__00123ae0;
    uVar4 = _UNK_00123ae4;
    uVar5 = _UNK_00123ae8;
    uVar6 = _UNK_00123aec;
    if ((char)local_108 != '\0') {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
                (&local_e8,&DAT_00136242,1);
      local_108 = local_d8;
      acVar3 = local_e8._0_4_;
      uVar4 = local_e8._4_4_;
      uVar5 = (undefined4)uStack_e0;
      uVar6 = uStack_e0._4_4_;
    }
    local_128 = local_140;
    uStack_100 = (ulong)param_2;
    local_f8 = CONCAT71(local_f8._1_7_,param_3);
    local_118 = (undefined *)CONCAT44(uVar4,acVar3);
    uStack_110 = CONCAT44(uVar6,uVar5);
    ppuVar2 = &local_138;
    _ZN9term_grid13Grid_LT_T_GT_3new17he78d9ee35961568eE(&local_e8,ppuVar2,&local_118);
    pcStack_130 = 
    _ZN63__LT_term_grid__Grid_LT_T_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h7f040c401bf95897E;
    local_118 = &DAT_00123c10;
    uStack_110 = 1;
    local_f8 = 0;
    uStack_100 = 1;
                    /* try { // try from 0022a2bb to 0022a2d5 has its CatchHandler @ 0022a4c2 */
    local_138 = &local_e8;
    local_108 = ppuVar2;
    lVar1 = _ZN3std2io5Write9write_fmt17h51abc44b465d2e67E(param_4,&local_118);
    if (lVar1 != 0) {
      auVar7 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (lVar1);
      _ZN4core3ptr65drop_in_place_LT_term_grid__Grid_LT_alloc__string__String_GT__GT_17he436f5c930c56467E
                (&local_e8);
      return auVar7;
    }
    _ZN4core3ptr65drop_in_place_LT_term_grid__Grid_LT_alloc__string__String_GT__GT_17he436f5c930c56467E
              (&local_e8);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = ppuVar2;
  return auVar7 << 0x40;
}