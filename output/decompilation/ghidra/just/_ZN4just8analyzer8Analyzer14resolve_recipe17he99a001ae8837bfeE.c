undefined8
_ZN4just8analyzer8Analyzer14resolve_recipe17he99a001ae8837bfeE
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 local_48;
  long local_40;
  long local_38;
  
  _ZN4just8namepath8Namepath10split_last17h366fd2e2956db644E(&local_48,param_1,param_2);
  puVar3 = PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10;
  if (local_38 != 0) {
    lVar7 = local_38 * 0x48;
    lVar6 = local_40;
    do {
      auVar9 = (*(code *)puVar3)(lVar6);
      lVar4 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17he9fea18cadddca02E
                        (*param_3,param_3[1],auVar9._0_8_,auVar9._8_8_);
      if (lVar4 == 0) {
        return 0;
      }
      lVar6 = lVar6 + 0x48;
      param_3 = (undefined8 *)(lVar4 + 0x2a0);
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
    param_4 = (undefined8 *)(lVar4 + 0x2b8);
  }
  auVar9 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(local_48);
  puVar5 = (undefined8 *)
           _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h3ce94925646e0fd0E
                     (*param_4,param_4[1],auVar9._0_8_,auVar9._8_8_);
  if (puVar5 == (undefined8 *)0x0) {
    uVar8 = 0;
  }
  else {
    plVar1 = (long *)*puVar5;
    LOCK();
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar7,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar8 = *puVar5;
  }
  return uVar8;
}