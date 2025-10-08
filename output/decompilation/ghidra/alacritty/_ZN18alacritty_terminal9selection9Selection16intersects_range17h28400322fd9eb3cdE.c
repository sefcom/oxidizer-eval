undefined4
_ZN18alacritty_terminal9selection9Selection16intersects_range17h28400322fd9eb3cdE
          (int param_1,int param_2)

{
  int *piVar1;
  undefined4 local_c;
  
  local_c = 0;
  if (param_1 < param_2) {
    param_2 = param_1;
  }
  piVar1 = (int *)_ZN93__LT_core__ops__range__RangeTo_LT_T_GT__u20_as_u20_core__ops__range__RangeBounds_LT_T_GT__GT_9end_bound17h14c9d6fe65901d1bE
                            (&local_c);
  return CONCAT31((int3)((uint)(*piVar1 + -1) >> 8),param_2 <= *piVar1 + -1);
}