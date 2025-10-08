undefined8 *
_ZN12forc_publish15forc_pub_client13ForcPubClient3new17h0322be1705e5b295E
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
                    /* try { // try from 0076346a to 0076346f has its CatchHandler @ 007634b2 */
  uVar7 = (*(code *)PTR__ZN7reqwest10async_impl6client6Client3new17h9d590478b2d50254E_01049930)();
  param_1[0xb] = uVar7;
  uVar7 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  param_1[10] = param_2[10];
  return param_1;
}