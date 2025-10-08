undefined8
_ZN12linera_proxy12ProxyContext12from_options17ha7ab8772410a7c34E(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_218;
  undefined8 local_210;
  undefined local_208 [488];
  
  _ZN14linera_service4util9read_json17h97c6a3f008eca69bE
            (&local_218,*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
  (*(code *)PTR_memcpy_0164bc18)(param_1 + 2,local_208,0x1e8);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  uVar4 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  if (*(char *)(param_2 + 0x58) == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x60);
  }
  param_1[0x3f] = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  param_1[0x41] = uVar4;
  *(undefined4 *)(param_1 + 0x42) = uVar2;
  param_1[0x43] = uVar5;
  param_1[1] = local_210;
  *param_1 = local_218;
  return uVar3;
}