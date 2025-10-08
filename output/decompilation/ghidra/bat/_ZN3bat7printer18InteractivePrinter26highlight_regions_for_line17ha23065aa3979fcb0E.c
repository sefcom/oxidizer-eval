void _ZN3bat7printer18InteractivePrinter26highlight_regions_for_line17ha23065aa3979fcb0E
               (undefined *param_1,long param_2,undefined *param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar3 = &DAT_00291b49;
  if (param_4 < 0x4001) {
    puVar3 = param_3;
  }
  uVar2 = 1;
  if (param_4 < 0x4001) {
    uVar2 = param_4;
  }
  (*(code *)PTR__ZN7syntect4easy14HighlightLines14highlight_line17he5ec32671249364aE_008088e0)
            (&local_78,param_2 + 0x128,puVar3,uVar2,*(undefined8 *)(param_2 + 0x1f8));
  if (local_78 == -0x7ffffffffffffff6) {
    if (0x4000 < param_4) {
      if (local_60 == 0) {
                    /* try { // try from 0053fc99 to 0053fca9 has its CatchHandler @ 0053fcac */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_008074f0)
                  (0,0,&PTR_DAT_007ceac0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(undefined **)(local_68 + 0x10) = param_3;
      *(ulong *)(local_68 + 0x18) = param_4;
    }
    *(undefined8 *)(param_1 + 8) = uStack_70;
    *(long *)(param_1 + 0x10) = local_68;
    *(long *)(param_1 + 0x18) = local_60;
    *param_1 = 0xd;
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = local_38;
    *(undefined8 *)(param_1 + 0x38) = local_48;
    *(undefined8 *)(param_1 + 0x40) = uStack_40;
    *(undefined8 *)(param_1 + 0x28) = local_58;
    *(undefined8 *)(param_1 + 0x30) = uStack_50;
    *param_1 = 2;
    *(long *)(param_1 + 8) = local_78;
    *(undefined8 *)(param_1 + 0x10) = uStack_70;
    *(long *)(param_1 + 0x18) = local_68;
    *(long *)(param_1 + 0x20) = local_60;
  }
  return;
}