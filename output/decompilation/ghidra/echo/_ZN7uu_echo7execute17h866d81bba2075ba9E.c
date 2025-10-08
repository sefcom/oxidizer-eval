undefined  [16]
_ZN7uu_echo7execute17h866d81bba2075ba9E
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  char local_b4;
  undefined4 local_b3;
  undefined2 local_af;
  undefined local_ad;
  undefined4 local_ac;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_80;
  char local_7f;
  undefined8 local_78;
  undefined local_70 [32];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  
  local_ac = param_3;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h527faf55c2d777e2E
            (local_70);
  local_50 = 0;
  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he6dff610b9c2e1c1E
            (&local_a8,local_70);
  puVar1 = 
  PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00173a98
  ;
  if (param_4 == '\0') {
    do {
      uVar4 = local_90;
      uVar5 = local_98;
      lVar2 = local_a0;
                    /* try { // try from 001284a2 to 001284c4 has its CatchHandler @ 00128557 */
      if ((local_a8 != 0) && (lVar3 = (*(code *)puVar1)(param_1," ",1), lVar3 != 0))
      goto LAB_00128517;
      lVar3 = (*(code *)puVar1)(param_1,uVar5,uVar4);
      if (lVar3 != 0) {
        auVar6 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00173ab8
                 )(lVar3);
        param_1 = auVar6._8_8_;
        uVar4 = auVar6._0_8_;
        goto LAB_00128523;
      }
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hefddfe54ca5d0faaE(lVar2,uVar5)
      ;
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he6dff610b9c2e1c1E
                (&local_a8,local_70);
    } while (local_a0 != -0x8000000000000000);
  }
  else {
    do {
      uVar5 = local_98;
      lVar2 = local_a0;
      local_88 = local_90;
                    /* try { // try from 001283ad to 001283c1 has its CatchHandler @ 00128553 */
      if ((local_a8 != 0) &&
         (lVar3 = (*(code *)
                    PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00173a98
                  )(param_1," ",1), lVar3 != 0)) goto LAB_00128517;
      local_48 = uVar5;
      local_40 = local_88;
      local_38 = 3;
      while( true ) {
                    /* try { // try from 001283f0 to 0012842c has its CatchHandler @ 00128559 */
        uVar4 = _ZN6uucore8features6format17parse_escape_only28__u7b__u7b_closure_u7d__u7d_17h726220761a80ac0bE
                          (&local_48);
        if ((char)uVar4 == '\x04') break;
        local_ad = (undefined)((ulong)uVar4 >> 0x38);
        local_af = (undefined2)((ulong)uVar4 >> 0x28);
        local_b3 = (undefined4)((ulong)uVar4 >> 8);
        local_b4 = (char)uVar4;
        _ZN102__LT_uucore__features__format__escape__EscapedChar_u20_as_u20_uucore__features__format__FormatChar_GT_5write17hb1494e2c0e077970E
                  (&local_80,&local_b4,param_1);
        if (local_80 != '\0') {
                    /* try { // try from 00128500 to 0012851f has its CatchHandler @ 00128555 */
          auVar6 = (*(code *)
                     PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00173ab8
                   )(local_78);
          param_1 = auVar6._8_8_;
          uVar4 = auVar6._0_8_;
          goto LAB_00128523;
        }
        if (local_7f != '\0') {
          uVar4 = 0;
          goto LAB_00128523;
        }
      }
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hefddfe54ca5d0faaE(lVar2,uVar5)
      ;
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he6dff610b9c2e1c1E
                (&local_a8,local_70);
    } while (local_a0 != -0x8000000000000000);
  }
  _ZN4core3ptr136drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT__GT_17h7a79484182e34883E
            (local_70);
  if (((char)local_ac == '\0') ||
     (lVar2 = (*(code *)
                PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00173a98
              )(param_1,"\n",1), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00173ab8
             )(lVar2);
    param_1 = auVar6._8_8_;
    uVar4 = auVar6._0_8_;
  }
LAB_0012853e:
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = uVar4;
  return auVar6;
LAB_00128517:
  auVar6 = (*(code *)
             PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00173ab8
           )(lVar3);
  param_1 = auVar6._8_8_;
  uVar4 = auVar6._0_8_;
LAB_00128523:
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hefddfe54ca5d0faaE(lVar2,uVar5);
  _ZN4core3ptr136drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT__GT_17h7a79484182e34883E
            (local_70);
  goto LAB_0012853e;
}