void _ZN6binary7install16add_preload_hook17hf67ddbcc23099137E(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long extraout_RDX;
  undefined auVar4 [16];
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 *local_78;
  undefined *puStack_70;
  undefined *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar2) {
    local_50 = *(undefined8 *)(param_1 + 8);
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    local_38._0_8_ = &local_50;
    local_38._8_8_ =
         PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
    ;
    local_a8 = &PTR_DAT_019e6b08;
    local_a0 = 1;
    uStack_88 = 0;
    local_98 = (undefined4 **)local_38;
    local_90 = 1;
                    /* try { // try from 018cfb07 to 018cfb4f has its CatchHandler @ 018cfed2 */
    local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e6b88);
    local_78 = (undefined4 *)&DAT_0015023f;
    puStack_70 = &DAT_0000000f;
    local_68 = &DAT_0015023f;
    local_60 = (code *)0xf;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_a8,3,&local_78);
  }
  local_50 = 0;
  uStack_48 = 1;
  local_40 = 0;
                    /* try { // try from 018cfb6b to 018cfb80 has its CatchHandler @ 018cfee5 */
  _ZN3std2fs4File4open17hf06c0a1883d23663E(&local_a8,&DAT_001502c0,0x12);
  if ((int)local_a8 != 1) {
    local_78 = (undefined4 *)CONCAT44(local_78._4_4_,local_a8._4_4_);
                    /* try { // try from 018cfb90 to 018cfbaa has its CatchHandler @ 018cfeb3 */
    auVar4 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_14read_to_string17h90303cf0898de375E_01a27ab8
             )(&local_78,&local_50);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h60d8d6e3e44b4585E(auVar4._0_8_,auVar4._8_8_);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0d00817cc0df8c52E((int)local_78);
    if (((ulong)local_a8 & 1) == 0) goto LAB_018cfbc5;
  }
                    /* try { // try from 018cfbbb to 018cfbec has its CatchHandler @ 018cfee5 */
  _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h9c58f2ca93495b32E
            (&local_a8);
LAB_018cfbc5:
  auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hb1f4674a2fe369aeE
                     (uStack_48,local_40);
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h15b2ae7cc020fd00E_01a27ac0)
            (&local_a8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 018cfbf7 to 018cfc01 has its CatchHandler @ 018cfea4 */
  cVar1 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h11591152817aa06eE
                    (local_a0,local_98,auVar4._0_8_,auVar4._8_8_);
  if (cVar1 == '\0') {
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h8678e8e37eeffbceE(&local_a8);
    _ZN3std2fs4File6create17h5672d150972909f3E(&local_a8,&DAT_001502c0,0x12);
    local_ac = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h7df6ec60d40e0034E(&local_a8);
                    /* try { // try from 018cfccf to 018cfe7b has its CatchHandler @ 018cfed7 */
    _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hb1f4674a2fe369aeE(uStack_48,local_40);
    if (extraout_RDX == 0) {
      local_78 = *(undefined4 **)(param_1 + 8);
      puStack_70 = *(undefined **)(param_1 + 0x10);
      local_38._0_8_ = &local_78;
      local_38._8_8_ =
           PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
      ;
      local_a8 = (undefined **)&DAT_019e6b48;
      local_a0 = 2;
      uStack_88 = 0;
      local_98 = (undefined4 **)local_38;
      local_90 = 1;
      uVar3 = _ZN3std2io5Write9write_fmt17hd6ebbe7bec9da27dE(&local_ac,&local_a8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h51d2d50506e3e047E(uVar3,&PTR_DAT_019e6bd0);
    }
    else {
      local_28 = *(undefined4 *)(param_1 + 8);
      uStack_24 = *(undefined4 *)(param_1 + 0xc);
      uStack_20 = *(undefined4 *)(param_1 + 0x10);
      uStack_1c = *(undefined4 *)(param_1 + 0x14);
      local_38 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hb1f4674a2fe369aeE
                           (uStack_48,local_40);
      local_78 = &local_28;
      puStack_70 = 
      PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
      ;
      local_68 = local_38;
      local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8a47090d3f9d8101E;
      local_a8 = (undefined **)&DAT_019e6b18;
      local_a0 = 3;
      uStack_88 = 0;
      local_98 = &local_78;
      local_90 = 2;
      uVar3 = _ZN3std2io5Write9write_fmt17hd6ebbe7bec9da27dE(&local_ac,&local_a8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h51d2d50506e3e047E(uVar3,&PTR_DAT_019e6be8);
    }
    uVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (2 < uVar2) {
      local_a8 = &PTR_DAT_019e6b68;
      local_a0 = 1;
      local_98 = (undefined4 **)&DAT_00000008;
      local_90 = 0;
      uStack_88 = 0;
      local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e6c00);
      local_78 = (undefined4 *)&DAT_0015023f;
      puStack_70 = &DAT_0000000f;
      local_68 = &DAT_0015023f;
      local_60 = (code *)0xf;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_a8,3,&local_78);
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0d00817cc0df8c52E(local_ac);
  }
  else {
                    /* try { // try from 018cfc0a to 018cfcc0 has its CatchHandler @ 018cfee5 */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h8678e8e37eeffbceE(&local_a8);
    uVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (2 < uVar2) {
      local_a8 = &PTR_DAT_019e6b78;
      local_a0 = 1;
      local_98 = (undefined4 **)&DAT_00000008;
      local_90 = 0;
      uStack_88 = 0;
      local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e6c18);
      local_78 = (undefined4 *)&DAT_0015023f;
      puStack_70 = &DAT_0000000f;
      local_68 = &DAT_0015023f;
      local_60 = (code *)0xf;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_a8,3,&local_78);
    }
  }
                    /* try { // try from 018cfe85 to 018cfe8e has its CatchHandler @ 018cfed2 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdc7993f7c2e49023E(&local_50);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h11842ea3b2390ec0E(param_1);
  return;
}