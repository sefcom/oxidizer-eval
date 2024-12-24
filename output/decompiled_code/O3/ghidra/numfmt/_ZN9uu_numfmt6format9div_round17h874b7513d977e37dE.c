/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __rustcall uu_numfmt::format::div_round(double param_1,double param_2,undefined param_3)

{
  undefined8 in_RAX;
  undefined8 uStack_8;
  
  uStack_8 = CONCAT17(param_3,(int7)in_RAX);
  if ((double)(_DAT_00115fe0 & (ulong)(param_1 / param_2)) < _s__00115b98) {
    options::RoundMethod::round((param_1 / param_2) * _s__00115b98,(long)&uStack_8 + 7);
    return uStack_8;
  }
  options::RoundMethod::round((long)&uStack_8 + 7);
  return uStack_8;
}