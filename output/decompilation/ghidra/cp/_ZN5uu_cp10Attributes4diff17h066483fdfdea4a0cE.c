/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN5uu_cp10Attributes4diff17h066483fdfdea4a0cE(ulong *param_1,ulong *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined auVar6 [16];
  uint uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  ulong uVar19;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  
  auVar6 = _DAT_0011e930;
  cVar1 = *param_3;
  cVar2 = param_3[2];
  cVar3 = param_3[4];
  cVar4 = param_3[8];
  cVar5 = param_3[6];
  auVar8[0] = -(cVar1 == '\0');
  auVar8[1] = -(cVar1 == '\0');
  auVar8[2] = -(cVar1 == '\0');
  auVar8[3] = -(cVar1 == '\0');
  auVar8[4] = -(cVar2 == '\0');
  auVar8[5] = -(cVar2 == '\0');
  auVar8[6] = -(cVar2 == '\0');
  auVar8[7] = -(cVar2 == '\0');
  auVar8[8] = -(cVar3 == '\0');
  auVar8[9] = -(cVar3 == '\0');
  auVar8[10] = -(cVar3 == '\0');
  auVar8[0xb] = -(cVar3 == '\0');
  auVar8[0xc] = -(cVar5 == '\0');
  auVar8[0xd] = -(cVar5 == '\0');
  auVar8[0xe] = -(cVar5 == '\0');
  auVar8[0xf] = -(cVar5 == '\0');
  auVar8 = pshuflw(auVar8,auVar8,0xe8);
  auVar8 = pshufhw(auVar8,auVar8,0xe8);
  auVar9._0_4_ = auVar8._0_4_;
  auVar9._8_4_ = auVar8._8_4_;
  auVar9._12_4_ = auVar8._12_4_;
  auVar9._4_4_ = auVar9._8_4_;
  auVar8 = psllw(auVar9,7);
  auVar8 = auVar8 & _DAT_0011e930;
  uVar19 = CONCAT17(-(auVar8[7] < '\0'),
                    CONCAT16(-(auVar8[6] < '\0'),
                             CONCAT15(-(auVar8[5] < '\0'),
                                      CONCAT14(-(auVar8[4] < '\0'),
                                               CONCAT13(-(auVar8[3] < '\0'),
                                                        CONCAT12(-(auVar8[2] < '\0'),
                                                                 CONCAT11(-(auVar8[1] < '\0'),
                                                                          -(auVar8[0] < '\0'))))))))
  ;
  cVar1 = param_3[10];
  *param_1 = ~uVar19 & SUB168(_DAT_0011e990,0) | *param_2 & uVar19;
  auVar10[0] = -(cVar4 == '\0');
  auVar10[1] = -(cVar4 == '\0');
  auVar10[2] = -(cVar1 == '\0');
  auVar10[3] = -(cVar1 == '\0');
  auVar10[4] = 0xff;
  auVar10[5] = 0xff;
  auVar10[6] = 0xff;
  auVar10[7] = 0xff;
  auVar10[8] = 0xff;
  auVar10[9] = 0xff;
  auVar10[10] = 0xff;
  auVar10[0xb] = 0xff;
  auVar10[0xc] = 0xff;
  auVar10[0xd] = 0xff;
  auVar10[0xe] = 0xff;
  auVar10[0xf] = 0xff;
  auVar8 = pshuflw(auVar10,auVar10,0x54);
  auVar18._0_14_ = auVar8._0_14_;
  auVar18[0xe] = auVar8[7];
  auVar18[0xf] = auVar8[7];
  auVar17._14_2_ = auVar18._14_2_;
  auVar17._0_13_ = auVar8._0_13_;
  auVar17[0xd] = auVar8[6];
  auVar16._13_3_ = auVar17._13_3_;
  auVar16._0_12_ = auVar8._0_12_;
  auVar16[0xc] = auVar8[6];
  auVar15._12_4_ = auVar16._12_4_;
  auVar15._0_11_ = auVar8._0_11_;
  auVar15[0xb] = auVar8[5];
  auVar14._11_5_ = auVar15._11_5_;
  auVar14._0_10_ = auVar8._0_10_;
  auVar14[10] = auVar8[5];
  auVar13._10_6_ = auVar14._10_6_;
  auVar13._0_9_ = auVar8._0_9_;
  auVar13[9] = auVar8[4];
  auVar12._9_7_ = auVar13._9_7_;
  auVar12._0_8_ = auVar8._0_8_;
  auVar12[8] = auVar8[4];
  auVar11._8_8_ = auVar12._8_8_;
  auVar11[7] = auVar8[3];
  auVar11[6] = auVar8[3];
  auVar11[5] = auVar8[2];
  auVar11[4] = auVar8[2];
  auVar11[3] = auVar8[1];
  auVar11[2] = auVar8[1];
  auVar11[0] = auVar8[0];
  auVar11[1] = auVar11[0];
  auVar8 = pshuflw(auVar11,auVar11,0xe8);
  auVar8 = psllw(auVar8,7);
  auVar8 = auVar8 & auVar6;
  uVar7 = CONCAT13(-(auVar8[3] < '\0'),
                   CONCAT12(-(auVar8[2] < '\0'),CONCAT11(-(auVar8[1] < '\0'),-(auVar8[0] < '\0'))));
  *(uint *)(param_1 + 1) = ~uVar7 & SUB164(_DAT_0011e730,0) | *(uint *)(param_2 + 1) & uVar7;
  return;
}