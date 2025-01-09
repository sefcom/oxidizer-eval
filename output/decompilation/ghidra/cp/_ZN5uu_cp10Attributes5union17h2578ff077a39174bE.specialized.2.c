byte * __rustcall uu_cp::Attributes::union(byte *param_1,undefined *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte extraout_DL;
  byte extraout_DL_00;
  byte extraout_DL_01;
  byte extraout_DL_02;
  byte extraout_DL_03;
  byte extraout_DL_04;
  
  bVar1 = core::cmp::max_by(*param_2,param_2[1],1,1);
  bVar2 = core::cmp::max_by(param_2[6],param_2[7],0,0);
  bVar3 = core::cmp::max_by(param_2[4],param_2[5],1,1);
  bVar4 = core::cmp::max_by(param_2[2],param_2[3],1,1);
  bVar5 = core::cmp::max_by(param_2[8],param_2[9],0,0);
  bVar6 = core::cmp::max_by(param_2[10],param_2[0xb],1,1);
  *param_1 = bVar1 & 1;
  param_1[1] = extraout_DL;
  param_1[2] = bVar4 & 1;
  param_1[3] = extraout_DL_02;
  param_1[4] = bVar3 & 1;
  param_1[5] = extraout_DL_01;
  param_1[6] = bVar2 & 1;
  param_1[7] = extraout_DL_00;
  param_1[8] = bVar5 & 1;
  param_1[9] = extraout_DL_03;
  param_1[10] = bVar6 & 1;
  param_1[0xb] = extraout_DL_04;
  return param_1;
}