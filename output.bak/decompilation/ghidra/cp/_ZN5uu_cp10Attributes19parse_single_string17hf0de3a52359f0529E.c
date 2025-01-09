/* WARNING: Type propagation algorithm not settling */

undefined8 * __rustcall uu_cp::Attributes::parse_single_string(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined local_b8 [8];
  undefined local_b0 [8];
  undefined local_a8 [8];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 *local_90;
  code *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined local_20;
  
  puVar4 = (undefined8 *)local_b8;
  ::alloc::str::_<impl_str>::to_lowercase(local_a8);
  uVar1 = CONCAT44(uStack_9c,local_a0);
  uVar2 = CONCAT44(uStack_94,uStack_98);
                    /* try { // try from 002018d4 to 002019d3 has its CatchHandler @ 00201acc */
  cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0012bfc2,3);
  if (cVar3 == '\0') {
    local_b0._0_4_ = 0;
    local_b8 = (undefined  [8])0x0;
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,"mode",4);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0012bf9e,9);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0012bfa7,10);
        if (cVar3 == '\0') {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0012bfb1,7);
          if (cVar3 == '\0') {
            cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,uVar2,&DAT_0011e218,4)
            ;
            if ((cVar3 == '\0') &&
               (cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                  (uVar1,uVar2,&DAT_0012bfb8,5), cVar3 == '\0')) {
                    /* try { // try from 00201a12 to 00201aad has its CatchHandler @ 00201acc */
              cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (uVar1,uVar2,&DAT_0012bfbd,5);
              if (cVar3 == '\0') {
                local_38 = 0;
                local_30 = local_a0;
                uStack_2c = uStack_9c;
                uStack_28 = uStack_98;
                uStack_24 = uStack_94;
                local_20 = 1;
                local_90 = &local_38;
                local_88 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
                local_68 = &PTR_s_invalid_attribute_002b5c40;
                local_60 = 1;
                local_48 = 0;
                local_58 = &local_90;
                local_50 = 1;
                core::option::Option<T>::map_or_else(&local_80,&local_68);
                param_1[3] = local_70;
                *(undefined4 *)(param_1 + 1) = local_80;
                *(undefined4 *)((long)param_1 + 0xc) = uStack_7c;
                *(undefined4 *)(param_1 + 2) = uStack_78;
                *(undefined4 *)((long)param_1 + 0x14) = uStack_74;
                *param_1 = 9;
                goto LAB_002019f8;
              }
              puVar4 = (undefined8 *)((long)local_b0 + 2);
            }
            else {
              puVar4 = (undefined8 *)local_b0;
            }
          }
          else {
            puVar4 = (undefined8 *)((long)local_b8 + 6);
          }
        }
        else {
          puVar4 = (undefined8 *)((long)local_b8 + 4);
        }
      }
    }
    else {
      puVar4 = (undefined8 *)((long)local_b8 + 2);
    }
    *(undefined2 *)puVar4 = 0x101;
    *(undefined4 *)(param_1 + 2) = local_b0._0_4_;
    param_1[1] = local_b8;
  }
  else {
    param_1[1] = 0x10101010101;
    *(undefined4 *)(param_1 + 2) = 0x10101;
  }
  *param_1 = 0xd;
LAB_002019f8:
  core::ptr::drop_in_place<alloc::string::String>(local_a8);
  return param_1;
}