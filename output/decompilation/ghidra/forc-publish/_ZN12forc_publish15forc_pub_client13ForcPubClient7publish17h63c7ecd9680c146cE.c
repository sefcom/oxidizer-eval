void _ZN12forc_publish15forc_pub_client13ForcPubClient7publish17h63c7ecd9680c146cE
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  param_1[0x19] = param_2;
  uVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[6] = param_4;
  param_1[7] = param_5;
  *(undefined *)((long)param_1 + 0xd4) = 0;
  return;
}