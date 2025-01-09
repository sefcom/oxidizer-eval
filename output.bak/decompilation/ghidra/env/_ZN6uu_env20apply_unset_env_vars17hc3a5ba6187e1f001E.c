undefined  [16] __rustcall uu_env::apply_unset_env_vars(long param_1)

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
           _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_d0);
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
        local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_a8 = &PTR_DAT_00248ba8;
        uStack_a0 = 2;
        local_88 = 0;
        local_98 = &local_78;
        local_90 = 1;
                    /* try { // try from 001cedde to 001cee1b has its CatchHandler @ 001cee4f */
        local_60 = uVar4;
        local_58 = lVar1;
        core::option::Option<T>::map_or_else(local_48,&local_a8);
        local_90 = CONCAT44(local_90._4_4_,0x7d);
        local_98 = (undefined8 **)local_38;
        uVar4 = ::alloc::boxed::Box<T>::new(&local_a8);
        core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&local_c0);
        goto LAB_001cee2c;
      }
                    /* try { // try from 001ced16 to 001ced3b has its CatchHandler @ 001cee51 */
      cVar2 = native_int_str::NativeStr::contains(&local_c0,&DAT_00117568);
      if (cVar2 != '\0') {
LAB_001ced70:
        if (cVar2 == '\x02') {
                    /* try { // try from 001cee45 to 001cee4e has its CatchHandler @ 001cee4f */
          uVar4 = core::option::unwrap_failed(local_d8);
                    /* catch() { ... } // from try @ 001cedde with catch @ 001cee4f
                       catch() { ... } // from try @ 001cee45 with catch @ 001cee4f */
                    /* catch() { ... } // from try @ 001ced16 with catch @ 001cee51 */
                    /* try { // try from 001cee54 to 001cee5d has its CatchHandler @ 001cee66 */
          core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&local_c0);
          auVar5 = _Unwind_Resume(uVar4);
          return auVar5;
        }
        goto LAB_001ced79;
      }
      cVar2 = native_int_str::NativeStr::contains(&local_c0,&DAT_00117620);
      if (cVar2 != '\0') {
        local_d8 = &PTR_DAT_00248be0;
        goto LAB_001ced70;
      }
      std::env::remove_var(puVar3);
      core::ptr::drop_in_place<uu_env::native_int_str::NativeStr>(&local_c0);
      puVar3 = (undefined8 *)
               _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_d0);
    } while (puVar3 != (undefined8 *)0x0);
  }
  uVar4 = 0;
LAB_001cee2c:
  auVar5._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248908;
  auVar5._0_8_ = uVar4;
  return auVar5;
}