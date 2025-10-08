undefined8 *
_ZN3bat10line_range10LineRanges4from17h4ce85643fa8989acE(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong extraout_RDX;
  long lVar4;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0 [7];
  undefined8 local_78;
  long local_40;
  long local_38;
  
  lVar1 = param_2[1];
  lVar4 = param_2[2] * 0x20 + lVar1;
  bVar3 = _ZN4core4iter6traits8iterator8Iterator6reduce17h527244d24d37bf97E(lVar1,lVar4);
  local_b0[0] = 0;
  local_78 = 0;
  local_40 = lVar1;
  local_38 = lVar4;
  _ZN9itertools6minmax11minmax_impl17h4fbfb0ef3728aa92E(&local_c8,local_b0);
  lVar1 = local_c8;
  if ((local_c8 == 0) || (lVar1 = local_c0, (int)local_c8 == 1)) {
    local_c0 = lVar1;
    local_b8 = local_c0;
  }
  param_1[2] = param_2[2];
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[3] = -(ulong)((bVar3 & 1) == 0) | extraout_RDX;
  param_1[4] = local_c0;
  param_1[5] = local_b8;
  return param_1;
}