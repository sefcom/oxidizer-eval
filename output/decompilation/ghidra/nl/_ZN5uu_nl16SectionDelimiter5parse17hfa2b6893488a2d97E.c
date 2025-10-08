ulong _ZN5uu_nl16SectionDelimiter5parse17hfa2b6893488a2d97E
                (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 unaff_RBX;
  ulong uVar2;
  undefined auStack_88 [104];
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,3);
  if (param_4 != 0 && param_2 != 0) {
    (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17h3b91c04870bd602fE_00368440)
              (auStack_88,param_1,param_2,param_3,param_4);
    lVar1 = _ZN4core4iter6traits8iterator8Iterator4fold17h04ceeaa90f1ce27dE(auStack_88);
    param_4 = param_4 * lVar1;
    if (lVar1 == 1) {
      uVar2 = CONCAT71(uVar3,param_4 - param_2 == 0) ^ 3;
    }
    else if (lVar1 == 2) {
      uVar2 = CONCAT71(uVar3,(param_4 - param_2 != 0) * '\x02' + '\x01');
    }
    else if (lVar1 == 3) {
      uVar2 = (ulong)((uint)(param_4 - param_2 != 0) * 3);
    }
  }
  return uVar2 & 0xffffffff;
}