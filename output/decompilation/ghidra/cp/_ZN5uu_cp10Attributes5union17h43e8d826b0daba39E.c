byte * _ZN5uu_cp10Attributes5union17h43e8d826b0daba39E
                 (byte *param_1,undefined *param_2,undefined *param_3)

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
  
  bVar1 = _ZN4core3cmp3Ord3max17h709176b67e6fd13bE(*param_2,param_2[1],*param_3,param_3[1]);
  bVar2 = _ZN4core3cmp3Ord3max17h709176b67e6fd13bE(param_2[6],param_2[7],param_3[6],param_3[7]);
  bVar3 = _ZN4core3cmp3Ord3max17h709176b67e6fd13bE(param_2[4],param_2[5],param_3[4],param_3[5]);
  bVar4 = _ZN4core3cmp3Ord3max17h709176b67e6fd13bE(param_2[2],param_2[3],param_3[2],param_3[3]);
  bVar5 = _ZN4core3cmp3Ord3max17h709176b67e6fd13bE(param_2[8],param_2[9],param_3[8],param_3[9]);
  bVar6 = _ZN4core3cmp3Ord3max17h709176b67e6fd13bE
                    (param_2[10],param_2[0xb],param_3[10],param_3[0xb]);
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