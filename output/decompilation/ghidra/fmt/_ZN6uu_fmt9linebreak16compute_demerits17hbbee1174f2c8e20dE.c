float _ZN6uu_fmt9linebreak16compute_demerits17hbbee1174f2c8e20dE
                (float param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = (float)param_2 / (float)param_3;
  if (param_2 == 0) {
    fVar6 = 0.0;
LAB_00162499:
    fVar7 = (float)((uint)(fVar6 * fVar6 * fVar6) & _DAT_00117f40) * _DAT_00118608;
    lVar3 = (long)fVar7;
    if (_DAT_00118584 < fVar7) {
      lVar3 = 0x7fffffffffffffff;
    }
    lVar5 = 0;
    if (!NAN(fVar7)) {
      lVar5 = lVar3;
    }
    lVar5 = lVar5 + 1;
    uVar2 = param_3 - param_4;
    if (param_3 < param_4 || uVar2 == 0) {
LAB_001624d7:
      lVar3 = 0;
      goto LAB_00162537;
    }
  }
  else {
    lVar5 = 0x989681;
    if ((float)((uint)fVar6 & _DAT_00117f40) <= DAT_0011853c) goto LAB_00162499;
    uVar2 = param_3 - param_4;
    if (param_3 < param_4 || uVar2 == 0) goto LAB_001624d7;
  }
  if ((long)uVar2 < 0) {
    fVar7 = (float)uVar2;
    if ((long)(param_3 - 1) < 0) goto LAB_0016247f;
LAB_001624f8:
    fVar8 = (float)(long)(param_3 - 1);
  }
  else {
    fVar7 = (float)(long)uVar2;
    if (-1 < (long)(param_3 - 1)) goto LAB_001624f8;
LAB_0016247f:
    fVar8 = (float)(param_3 - 1);
  }
  fVar7 = fVar7 / fVar8;
  fVar7 = (float)((uint)(fVar7 * fVar7 * fVar7) & _DAT_00117f40) * _s__001185e0;
  lVar4 = (long)fVar7;
  if (_DAT_00118584 < fVar7) {
    lVar4 = 0x7fffffffffffffff;
  }
  lVar3 = 0;
  if (!NAN(fVar7)) {
    lVar3 = lVar4;
  }
LAB_00162537:
  fVar7 = (fVar6 - param_1) * _DAT_00118594;
  fVar7 = (float)((uint)(fVar7 * fVar7 * fVar7) & _DAT_00117f40) * _s__001185f8;
  lVar4 = (long)fVar7;
  if (_DAT_00118584 < fVar7) {
    lVar4 = 0x7fffffffffffffff;
  }
  lVar1 = 0;
  if (!NAN(fVar7)) {
    lVar1 = lVar4;
  }
  _ZN4core3num21__LT_impl_u20_i64_GT_3pow17h1421016549973f87E(lVar5 + lVar3 + lVar1);
  return fVar6;
}