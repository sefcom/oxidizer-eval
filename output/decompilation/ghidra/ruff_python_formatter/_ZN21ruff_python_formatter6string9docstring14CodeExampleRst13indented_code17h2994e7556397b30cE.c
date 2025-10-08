undefined  [16]
_ZN21ruff_python_formatter6string9docstring14CodeExampleRst13indented_code17h2994e7556397b30cE
          (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined auVar7 [16];
  
  if (*(int *)(param_1 + 0x30) != 5) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      puVar6 = puVar1;
      do {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        lVar4 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hc9d68bd4861bf742E(uVar2,uVar3);
        if (lVar4 == 0) {
          auVar7 = ZEXT816(1);
        }
        else {
          auVar7 = _ZN21ruff_python_formatter6string9docstring11Indentation14trim_start_str17hc370b9ca7c92b427E
                             (param_1 + 0x30,uVar2,uVar3);
        }
        *(undefined (*) [16])(puVar6 + 5) = auVar7;
        puVar6 = puVar6 + 7;
      } while (puVar6 != puVar1 + lVar5 * 7);
    }
    auVar7._8_8_ = lVar5;
    auVar7._0_8_ = puVar1;
    return auVar7;
  }
  return ZEXT816(8);
}