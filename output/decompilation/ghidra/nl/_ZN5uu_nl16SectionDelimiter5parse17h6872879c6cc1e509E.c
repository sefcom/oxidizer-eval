ulong __rustcall
uu_nl::SectionDelimiter::parse(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 unaff_RBX;
  ulong uVar2;
  undefined auStack_88 [104];
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,3);
  if ((param_2 != 0) && (param_4 != 0)) {
    core::str::pattern::StrSearcher::new(auStack_88,param_1,param_2,param_3,param_4);
    lVar1 = core::iter::traits::iterator::Iterator::fold(auStack_88);
    param_4 = param_4 * lVar1;
    if (lVar1 == 1) {
      uVar2 = CONCAT71(uVar3,param_4 - param_2 == 0) ^ 3;
    }
    else if (lVar1 == 2) {
      uVar2 = CONCAT71(uVar3,(param_4 - param_2 != 0) * '\x02') | 1;
    }
    else if (lVar1 == 3) {
      uVar2 = (ulong)((uint)(param_4 - param_2 != 0) * 3);
    }
  }
  return uVar2 & 0xffffffff;
}