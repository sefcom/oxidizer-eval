/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_ZN9uu_numfmt6format9div_round17hcdae20ad69b44c09E(double param_1,double param_2,undefined param_3)

{
  undefined8 in_RAX;
  undefined8 uStack_8;
  
  uStack_8 = CONCAT17(param_3,(int7)in_RAX);
  if ((double)(_DAT_00115de0 & (ulong)(param_1 / param_2)) < _s__00115a18) {
    _ZN9uu_numfmt7options11RoundMethod5round17hb878c776bde79bdeE
              ((param_1 / param_2) * _s__00115a18,(long)&uStack_8 + 7);
    return uStack_8;
  }
  _ZN9uu_numfmt7options11RoundMethod5round17hb878c776bde79bdeE((long)&uStack_8 + 7);
  return uStack_8;
}