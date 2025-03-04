undefined  [16]
_ZN6uu_env16parse_signal_opt17h51ec0e44148ee3e7E
          (undefined **param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **unaff_RBX;
  undefined auVar5 [16];
  undefined *local_118;
  undefined **ppuStack_110;
  long **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined local_c0 [16];
  undefined local_b0;
  undefined ***local_a8;
  code *local_a0;
  undefined local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined local_70;
  undefined local_68 [32];
  undefined local_48 [16];
  undefined8 local_38;
  
  if (param_3 != 0) {
    local_70 = 0;
    local_80 = param_2;
    local_78 = param_3;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hdbc1dc456658658eE
              (local_98,&local_80);
                    /* try { // try from 001cc442 to 001cc44b has its CatchHandler @ 001cc644 */
    _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17h38052905bffb397aE
              (&local_118,local_88,0);
    if (local_118 != (undefined *)0x0) {
                    /* try { // try from 001cc62d to 001cc632 has its CatchHandler @ 001cc644 */
      uVar4 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(ppuStack_110,local_108);
                    /* catch() { ... } // from try @ 001cc5b9 with catch @ 001cc633 */
                    /* catch() { ... } // from try @ 001cc4e8 with catch @ 001cc656 */
      _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h97b2a0834aefedf7E
                (local_68);
      auVar5 = _Unwind_Resume(uVar4);
      return auVar5;
    }
    local_e0 = ppuStack_110;
    local_d8 = local_108;
    local_d0 = 0;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h19448f981cde5e53E
              (&local_118,local_98);
                    /* try { // try from 001cc487 to 001cc493 has its CatchHandler @ 001cc635 */
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h3d344e0b0e9083cdE
              (&local_118,&local_e0);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h19448f981cde5e53E
              (local_68,&local_e0);
    auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8b5092016aec3a93E
                       (local_68);
    if (auVar5._0_8_ != 0) {
      do {
                    /* try { // try from 001cc4e8 to 001cc544 has its CatchHandler @ 001cc656 */
        _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
                  (&local_118,auVar5._0_8_,auVar5._8_8_);
        if (local_118 != (undefined *)0x0) {
          local_c8 = (undefined **)0x1;
          local_b0 = 1;
          local_a8 = &local_c8;
          local_a0 = 
          _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
          local_118 = &DAT_002488b0;
          ppuStack_110 = (undefined **)0x2;
          local_f8 = 0;
          local_108 = (long **)&local_a8;
          local_100 = 1;
                    /* try { // try from 001cc5b9 to 001cc5f1 has its CatchHandler @ 001cc633 */
          local_c0 = auVar5;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17ha7b9eb55e1cbc84dE(local_48,&local_118);
          local_100 = CONCAT44(local_100._4_4_,1);
          local_108 = (long **)local_38;
          puVar3 = (undefined *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h48315bbd00cc7109E(&local_118);
          unaff_RBX = &
                      PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h03ce124f780b058aE_00248908
          ;
LAB_001cc603:
          _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h97b2a0834aefedf7E
                    (local_68);
          goto LAB_001cc613;
        }
        _ZN6uu_env18parse_signal_value17hd39e24cc594f23d4E(&local_118,ppuStack_110,local_108);
        ppuVar1 = ppuStack_110;
        unaff_RBX = ppuStack_110;
        puVar3 = local_118;
        if (local_118 != (undefined *)0x0) goto LAB_001cc603;
        local_c8 = ppuStack_110;
        cVar2 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h4b9b47ba52f5f211E
                          (&local_c8,param_1[0xd],param_1[0xe]);
        if (cVar2 == '\0') {
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h7268e86c4e26498fE(param_1 + 0xc,ppuVar1);
        }
        auVar5 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8b5092016aec3a93E
                           (local_68);
      } while (auVar5._0_8_ != 0);
    }
    _ZN4core3ptr87drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_std__ffi__os_str__OsStr_GT__GT_17h97b2a0834aefedf7E
              (local_68);
    unaff_RBX = param_1;
  }
  puVar3 = (undefined *)0x0;
LAB_001cc613:
  auVar5._8_8_ = unaff_RBX;
  auVar5._0_8_ = puVar3;
  return auVar5;
}