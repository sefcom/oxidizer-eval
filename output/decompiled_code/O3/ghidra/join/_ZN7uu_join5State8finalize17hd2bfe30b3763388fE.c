undefined8 __rustcall
uu_join::State::finalize(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(char *)(param_1 + 0x59) != '\0') &&
       (lVar1 = print_first_line(param_1,param_2,param_4), lVar1 != 0)) {
      uVar2 = (*(code *)PTR_from_00239380)(lVar1);
      return uVar2;
    }
    next_line(&local_a8,param_1,param_3);
    lVar1 = CONCAT44(uStack_a4,local_a8);
    local_c8 = uStack_a0;
    uStack_c4 = uStack_9c;
    uStack_c0 = uStack_98;
    local_b8 = CONCAT44(uStack_8c,uStack_90);
    if (lVar1 == -0x7fffffffffffffff) {
LAB_001739aa:
      uStack_98 = local_b8;
      local_a8 = local_c8;
      uStack_a4 = uStack_c4;
      uStack_a0 = (undefined4)uStack_c0;
      uStack_9c = uStack_c0._4_4_;
      uVar2 = ::alloc::boxed::Box<T>::new(&local_a8);
      return uVar2;
    }
    local_50 = CONCAT44(uStack_84,local_88);
    uStack_48 = CONCAT44(uStack_7c,uStack_80);
    uStack_c0._0_4_ = (undefined4)uStack_98;
    uStack_c0._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
    uStack_60 = (undefined4)uStack_c0;
    uStack_5c = uStack_c0._4_4_;
    local_70 = lVar1;
    uStack_58 = local_b8;
    local_40 = param_4;
    if (lVar1 != -0x8000000000000000) {
      local_38 = -0x7fffffffffffffff;
      do {
        uStack_68 = uStack_a0;
        uStack_64 = uStack_9c;
                    /* try { // try from 00173a38 to 00173a4f has its CatchHandler @ 00173b2e */
        if ((*(char *)(param_1 + 0x59) != '\0') &&
           (lVar1 = print_line(param_1,param_2,&local_70,local_40), lVar1 != 0)) {
                    /* try { // try from 00173b0b to 00173b13 has its CatchHandler @ 00173b2c */
          uVar2 = (*(code *)PTR_from_00239380)(lVar1);
          core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&local_70);
          return uVar2;
        }
        local_88 = (undefined4)local_50;
        uStack_84 = local_50._4_4_;
        uStack_80 = (undefined4)uStack_48;
        uStack_7c = uStack_48._4_4_;
        uStack_98 = CONCAT44(uStack_5c,uStack_60);
        uStack_90 = (undefined4)uStack_58;
        uStack_8c = uStack_58._4_4_;
        local_a8 = (undefined4)local_70;
        uStack_a4 = local_70._4_4_;
        uStack_a0 = uStack_68;
        uStack_9c = uStack_64;
        (*(code *)PTR_reset_00239390)(param_1,&local_a8);
        next_line(&local_a8,param_1,param_3);
        lVar1 = CONCAT44(uStack_a4,local_a8);
        uStack_c0 = uStack_98;
        local_c8 = uStack_a0;
        uStack_c4 = uStack_9c;
        local_b8 = CONCAT44(uStack_8c,uStack_90);
        if (lVar1 == local_38) goto LAB_001739aa;
        local_50 = CONCAT44(uStack_84,local_88);
        uStack_48 = CONCAT44(uStack_7c,uStack_80);
        uStack_c0._0_4_ = (undefined4)uStack_98;
        uStack_60 = (undefined4)uStack_c0;
        uStack_c0._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
        uStack_5c = uStack_c0._4_4_;
        local_70 = lVar1;
        uStack_58 = local_b8;
      } while (lVar1 != -0x8000000000000000);
    }
    uStack_68 = uStack_a0;
    uStack_64 = uStack_9c;
    core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&local_70);
  }
  return 0;
}