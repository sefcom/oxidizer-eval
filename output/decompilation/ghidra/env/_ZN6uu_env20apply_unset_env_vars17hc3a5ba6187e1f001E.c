undefined  [16] _ZN6uu_env20apply_unset_env_vars17hc3a5ba6187e1f001E(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined **local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_d0 = *(long *)(param_1 + 0x20);
  local_c8 = *(long *)(param_1 + 0x28) * 0x10 + local_d0;
  puVar3 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4336037a61c6f015E
                     (&local_d0);
  if (puVar3 != (undefined8 *)0x0) {
    local_d8 = &PTR_DAT_00248bc8;
    do {
      uVar4 = *puVar3;
      lVar1 = puVar3[1];
      local_c0 = 0x8000000000000000;
      local_b8 = uVar4;
      local_b0 = lVar1;
      if (lVar1 == 0) {
LAB_001ced79:
        local_68 = 1;
        local_50 = 1;
        local_78 = &local_68;
        local_70 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_a8 = &PTR_DAT_00248ba8;
        uStack_a0 = 2;
        local_88 = 0;
        local_98 = &local_78;
        local_90 = 1;
                    /* try { // try from 001cedde to 001cee1b has its CatchHandler @ 001cee4f */
        local_60 = uVar4;
        local_58 = lVar1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17ha7b9eb55e1cbc84dE(local_48,&local_a8);
        local_90 = CONCAT44(local_90._4_4_,0x7d);
        local_98 = (undefined8 **)local_38;
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h48315bbd00cc7109E(&local_a8);
        _ZN4core3ptr54drop_in_place_LT_uu_env__native_int_str__NativeStr_GT_17hef710a318dedb98dE
                  (&local_c0);
        goto LAB_001cee2c;
      }
                    /* try { // try from 001ced16 to 001ced3b has its CatchHandler @ 001cee51 */
      cVar2 = _ZN6uu_env14native_int_str9NativeStr8contains17h70e4bf3944233adaE
                        (&local_c0,&DAT_00117568);
      if (cVar2 != '\0') {
LAB_001ced70:
        if (cVar2 == '\x02') {
                    /* try { // try from 001cee45 to 001cee4e has its CatchHandler @ 001cee4f */
          uVar4 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(local_d8);
                    /* catch() { ... } // from try @ 001cedde with catch @ 001cee4f
                       catch() { ... } // from try @ 001cee45 with catch @ 001cee4f */
                    /* catch() { ... } // from try @ 001ced16 with catch @ 001cee51 */
                    /* try { // try from 001cee54 to 001cee5d has its CatchHandler @ 001cee66 */
          _ZN4core3ptr54drop_in_place_LT_uu_env__native_int_str__NativeStr_GT_17hef710a318dedb98dE
                    (&local_c0);
          auVar5 = _Unwind_Resume(uVar4);
          return auVar5;
        }
        goto LAB_001ced79;
      }
      cVar2 = _ZN6uu_env14native_int_str9NativeStr8contains17h70e4bf3944233adaE
                        (&local_c0,&DAT_00117620);
      if (cVar2 != '\0') {
        local_d8 = &PTR_DAT_00248be0;
        goto LAB_001ced70;
      }
      _ZN3std3env10remove_var17h15b89aa0b6126639E(puVar3);
      _ZN4core3ptr54drop_in_place_LT_uu_env__native_int_str__NativeStr_GT_17hef710a318dedb98dE
                (&local_c0);
      puVar3 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4336037a61c6f015E
                         (&local_d0);
    } while (puVar3 != (undefined8 *)0x0);
  }
  uVar4 = 0;
LAB_001cee2c:
  auVar5._8_8_ = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h03ce124f780b058aE_00248908
  ;
  auVar5._0_8_ = uVar4;
  return auVar5;
}