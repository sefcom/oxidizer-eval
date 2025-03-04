undefined8 *
_ZN8uu_split8strategy13StrategyError5Lines17h90ca753e299957d9E
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[3] = param_2[2];
  param_1[4] = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *param_1 = 0;
  return param_1;
}