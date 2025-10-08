void _ZN2fd3cli19default_num_threads17h36b22ae70e76f6afE(void)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  ulong local_10;
  undefined8 local_8;
  
  local_10 = (*(code *)PTR__ZN3std6thread21available_parallelism17h897bc36791d72018E_00540870)();
  uVar1 = extraout_RDX;
  local_8 = extraout_RDX;
  if ((local_10 & 1) != 0) {
    _ZN4core3ptr113drop_in_place_LT_core__result__Result_LT_core__num__nonzero__NonZero_LT_usize_GT__C_std__io__error__Error_GT__GT_17h2435fb8218d4e37dE
              (&local_10);
    uVar1 = 1;
  }
  _ZN4core3cmp3Ord3min17h37f98c03afb9f14cE(uVar1,0x40);
  return;
}