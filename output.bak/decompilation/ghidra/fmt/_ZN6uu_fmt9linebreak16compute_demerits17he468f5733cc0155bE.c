/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __rustcall
uu_fmt::linebreak::compute_demerits
          (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          ulong param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulong)param_4 >> 0x20);
  if ((long)param_6 < 0) {
    fVar6 = (float)param_6;
    if (param_5 == 0) goto LAB_001bc2a6;
LAB_001bc27f:
    fVar6 = (float)param_5 / fVar6;
  }
  else {
    fVar6 = (float)(long)param_6;
    if (param_5 != 0) goto LAB_001bc27f;
LAB_001bc2a6:
    fVar6 = 0.0;
    uVar9 = 0;
  }
  lVar5 = 0x989681;
  if ((float)(_DAT_00114fd0 & (uint)fVar6) <= DAT_001148e4) {
    fVar7 = (float)((uint)(fVar6 * fVar6 * fVar6) & _DAT_00114fd0) * _DAT_001149a4;
    lVar2 = (long)fVar7;
    if (_DAT_0011492c < fVar7) {
      lVar2 = 0x7fffffffffffffff;
    }
    lVar5 = 0;
    if (!NAN(fVar7)) {
      lVar5 = lVar2;
    }
    lVar5 = lVar5 + 1;
  }
  uVar3 = param_6 - param_7;
  if (param_6 < param_7 || uVar3 == 0) {
    lVar2 = 0;
    goto LAB_001bc385;
  }
  if ((long)uVar3 < 0) {
    fVar7 = (float)uVar3;
    if (-1 < (long)(param_6 - 1)) goto LAB_001bc350;
LAB_001bc318:
    fVar8 = (float)(param_6 - 1);
  }
  else {
    fVar7 = (float)(long)uVar3;
    if ((long)(param_6 - 1) < 0) goto LAB_001bc318;
LAB_001bc350:
    fVar8 = (float)(long)(param_6 - 1);
  }
  fVar7 = fVar7 / fVar8;
  fVar7 = fVar7 * fVar7 * fVar7 * _s__0011497c;
  lVar4 = (long)fVar7;
  if (_DAT_0011492c < fVar7) {
    lVar4 = 0x7fffffffffffffff;
  }
  lVar2 = 0;
  if (!NAN(fVar7)) {
    lVar2 = lVar4;
  }
LAB_001bc385:
  fVar7 = (fVar6 - param_1) * _DAT_00114938;
  fVar7 = (float)((uint)(fVar7 * fVar7 * fVar7) & _DAT_00114fd0) * _DAT_00114994;
  lVar4 = (long)fVar7;
  if (_DAT_0011492c < fVar7) {
    lVar4 = 0x7fffffffffffffff;
  }
  lVar1 = 0;
  if (!NAN(fVar7)) {
    lVar1 = lVar4;
  }
  core::num::_<impl_i64>::pow(lVar5 + lVar2 + lVar1);
  return CONCAT44(uVar9,fVar6);
}