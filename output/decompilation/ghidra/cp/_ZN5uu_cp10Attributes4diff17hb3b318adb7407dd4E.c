void _ZN5uu_cp10Attributes4diff17hb3b318adb7407dd4E
               (ulong *param_1,ulong *param_2,undefined *param_3)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  ushort uVar4;
  undefined auVar5 [14];
  undefined auVar6 [14];
  undefined auVar7 [14];
  undefined auVar8 [14];
  undefined auVar9 [12];
  undefined auVar10 [16];
  uint uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  ulong uVar15;
  
  auVar10 = _DAT_001209d0;
  bVar1 = param_3[6];
  auVar5[0xc] = bVar1;
  auVar5._0_12_ = ZEXT112(bVar1) << 0x30;
  auVar5[0xd] = bVar1;
  auVar6._12_2_ = auVar5._12_2_;
  auVar6._0_12_ = ZEXT112(bVar1) << 0x30;
  auVar7._11_3_ = auVar6._11_3_;
  auVar7._0_11_ = ZEXT111(bVar1) << 0x30;
  auVar8[9] = param_3[4];
  auVar8._0_9_ = (unkuint9)bVar1 << 0x30;
  auVar8._10_4_ = auVar7._10_4_;
  auVar9._2_8_ = (ulong)CONCAT51(auVar8._9_5_,param_3[4]) << 0x10;
  auVar9[1] = param_3[2];
  auVar9[0] = param_3[2];
  auVar9._10_2_ = 0;
  auVar12[1] = *param_3;
  auVar12[0] = *param_3;
  auVar12._2_12_ = auVar9 << 0x10;
  auVar12._14_2_ = 0;
  auVar12 = pshuflw(auVar12,auVar12,0xe8);
  auVar12 = pshufhw(auVar12,auVar12,0xe8);
  auVar13._4_4_ = auVar12._8_4_;
  auVar13._0_4_ = auVar12._0_4_;
  auVar13._8_4_ = auVar12._8_4_;
  auVar13._12_4_ = auVar12._12_4_;
  auVar12 = psllw(auVar13,7);
  auVar12 = auVar12 & _DAT_001209d0;
  uVar15 = CONCAT17(-(auVar12[7] < '\0'),
                    CONCAT16(-(auVar12[6] < '\0'),
                             CONCAT15(-(auVar12[5] < '\0'),
                                      CONCAT14(-(auVar12[4] < '\0'),
                                               CONCAT13(-(auVar12[3] < '\0'),
                                                        CONCAT12(-(auVar12[2] < '\0'),
                                                                 CONCAT11(-(auVar12[1] < '\0'),
                                                                          -(auVar12[0] < '\0')))))))
                   );
  uVar2 = param_3[8];
  uVar3 = param_3[10];
  *param_1 = uVar15 & SUB168(_s__00120a70,0) | ~uVar15 & *param_2;
  uVar4 = CONCAT11(uVar3,uVar3);
  auVar14._4_2_ = uVar4;
  auVar14._0_4_ =
       (int)CONCAT82((long)(((unkuint10)
                             (uint7)(((unkuint10)
                                      (uint6)(((unkuint10)
                                               (uint5)(((unkuint10)
                                                        (uint)(((unkuint10)
                                                                (uint3)(((unkuint10)uVar4 << 0x40)
                                                                       >> 0x38) << 0x38) >> 0x30) <<
                                                       0x30) >> 0x28) << 0x28) >> 0x20) << 0x20) >>
                                    0x18) << 0x18) >> 0x10),CONCAT11(uVar2,uVar2));
  auVar14._6_2_ = 0;
  auVar14._8_2_ = uVar4;
  auVar14._10_6_ = 0;
  auVar12 = pshuflw(auVar14,auVar14,0xe8);
  auVar12 = psllw(auVar12,7);
  auVar12 = auVar12 & auVar10;
  uVar11 = CONCAT13(-(auVar12[3] < '\0'),
                    CONCAT12(-(auVar12[2] < '\0'),
                             CONCAT11(-(auVar12[1] < '\0'),-(auVar12[0] < '\0'))));
  *(uint *)(param_1 + 1) = uVar11 & SUB164(_s__00120840,0) | ~uVar11 & *(uint *)(param_2 + 1);
  return;
}