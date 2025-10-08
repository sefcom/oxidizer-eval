ulong _ZN9alacritty7display6damage11FrameDamage10intersects17h58f384c2d23e8aa8E
                (long param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined uVar5;
  uint uVar6;
  ulong uVar7;
  ulong unaff_RBX;
  undefined8 unaff_RBP;
  long local_48;
  ulong uStack_40;
  undefined local_38;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (param_2 < uVar7) {
    unaff_RBX = param_4;
    if (param_4 < uVar7) {
      uVar7 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (*(char *)(param_1 + 0x30) == '\0') {
        lVar2 = *(long *)(param_1 + 8);
        plVar1 = (long *)(lVar2 + 8 + param_2 * 0x18);
        local_48 = *plVar1;
        uStack_40 = plVar1[1];
        local_38 = 0;
        cVar4 = _ZN4core3ops5range11RangeBounds8contains17h436105b2a06e684eE(&local_48,param_3);
        if (cVar4 == '\0') {
          plVar1 = (long *)(lVar2 + 8 + param_4 * 0x18);
          local_48 = *plVar1;
          uStack_40 = plVar1[1];
          local_38 = 0;
          cVar4 = _ZN4core3ops5range11RangeBounds8contains17h436105b2a06e684eE(&local_48,param_5);
          if (cVar4 == '\0') {
            local_48 = param_2 + 1;
            uStack_40 = param_4;
            uVar5 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hf9172bfb7e74d031E
                              (&local_48,param_1);
            uVar6 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h3342db6dfe9e46fbE
                              (uVar5,1);
            uVar7 = (ulong)uVar6;
          }
        }
      }
      return uVar7 & 0xffffffff;
    }
  }
  else {
    uVar7 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                      (param_2,uVar7,&PTR_s_alacritty_src_display_damage_rs_00982378);
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (unaff_RBX,uVar7,&PTR_s_alacritty_src_display_damage_rs_00982390);
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}