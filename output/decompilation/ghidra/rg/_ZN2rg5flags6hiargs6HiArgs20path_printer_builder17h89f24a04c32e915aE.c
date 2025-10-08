void _ZN2rg5flags6hiargs6HiArgs20path_printer_builder17h89f24a04c32e915aE
               (undefined8 *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  (*(code *)PTR__ZN12grep_printer4path18PathPrinterBuilder3new17h9f86aafacf1073e8E_005270c8)
            (&local_68);
  _ZN70__LT_grep_printer__color__ColorSpecs_u20_as_u20_core__clone__Clone_GT_5clone17h2672960dbfd8f738E
            ((long)&uStack_60 + 1,param_2 + 0x325);
  plVar1 = *(long **)(param_2 + 0x308);
  LOCK();
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 != 0 && SCARRY8(lVar3,1) == *plVar1 < 0) {
                    /* try { // try from 0034f0c4 to 0034f0cc has its CatchHandler @ 0034f132 */
    lVar3 = (*(code *)
              PTR__ZN12grep_printer4path18PathPrinterBuilder9hyperlink17h2e0784cb0da3d9d7E_005270d0)
                      (&local_68);
    *(undefined2 *)(lVar3 + 0x54) = *(undefined2 *)(param_2 + 0x31c);
    uVar4 = 10;
    if (*(char *)(param_2 + 0x31e) != '\0') {
      uVar4 = *(undefined *)(param_2 + 799);
    }
    *(undefined *)(lVar3 + 8) = uVar4;
    param_1[10] = local_18;
    param_1[8] = local_28;
    param_1[9] = uStack_20;
    param_1[6] = local_38;
    param_1[7] = uStack_30;
    param_1[4] = local_48;
    param_1[5] = uStack_40;
    param_1[2] = local_58;
    param_1[3] = uStack_50;
    *param_1 = local_68;
    param_1[1] = uStack_60;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}