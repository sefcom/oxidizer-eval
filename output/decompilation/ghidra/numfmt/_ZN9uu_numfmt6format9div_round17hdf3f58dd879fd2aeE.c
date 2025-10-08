undefined8
_ZN9uu_numfmt6format9div_round17hdf3f58dd879fd2aeE(double param_1,double param_2,undefined param_3)

{
  undefined8 in_RAX;
  undefined8 uStack_8;
  
  uStack_8 = CONCAT17(param_3,(int7)in_RAX);
  if ((double)(_DAT_001196f0 & (ulong)(param_1 / param_2)) < _s__00119078) {
    (*(code *)PTR__ZN9uu_numfmt7options11RoundMethod5round17h874ad1975578cac0E_002098b8)
              ((param_1 / param_2) * _s__00119078,(long)&uStack_8 + 7);
    return uStack_8;
  }
  (*(code *)PTR__ZN9uu_numfmt7options11RoundMethod5round17h874ad1975578cac0E_002098b8)
            ((long)&uStack_8 + 7);
  return uStack_8;
}