byte _ZN21ruff_python_formatter9statement5suite30stub_suite_can_omit_empty_line17h43e547e2359e7308E
               (long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  pcVar1 = *(code **)(param_4 + 0x30);
  lVar6 = (*pcVar1)(param_3);
  if (*(char *)(lVar6 + 0x3a) == '\0') {
    if (-0x7fffffffffffffe9 < *param_1) {
      if (*param_2 == -0x8000000000000000) {
        bVar3 = param_2[3] != 0;
      }
      else {
        bVar3 = false;
      }
      goto LAB_00421cb5;
    }
    bVar8 = false;
  }
  else {
    bVar8 = false;
    bVar4 = false;
    bVar3 = false;
    if (*param_1 < -0x7fffffffffffffe8) goto LAB_00421ce6;
LAB_00421cb5:
    bVar8 = bVar3;
    lVar6 = param_1[4];
    lVar2 = param_1[5];
    lVar7 = (*pcVar1)(param_3);
    cVar5 = _ZN21ruff_python_formatter9statement5suite25contains_only_an_ellipsis17hc074c7c945b43356E
                      (lVar6,lVar2,*(undefined8 *)(lVar7 + 0x10));
    if (cVar5 != '\0') {
      bVar4 = -0x7fffffffffffffe9 < *param_2;
      goto LAB_00421ce6;
    }
  }
  bVar4 = false;
LAB_00421ce6:
  return bVar8 | bVar4;
}