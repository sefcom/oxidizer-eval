undefined8 * _ZN8uu_tsort5Graph3new17ha5caf065ef75f119E(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
                    /* try { // try from 0015ffe6 to 0015ffea has its CatchHandler @ 00160023 */
  auVar4 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17hb85c364943414371E();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  uVar1 = _UNK_001eb280;
  param_1[3] = PTR_DAT_001eb278;
  param_1[4] = uVar1;
  uVar1 = _UNK_001eb290;
  param_1[5] = _DAT_001eb288;
  param_1[6] = uVar1;
  *(undefined (*) [16])(param_1 + 7) = auVar4;
  return param_1;
}