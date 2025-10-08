void _ZN11forc_crypto17wait_for_keypress17h097f336dd4d0c55fE(void)

{
  undefined8 uVar1;
  undefined local_9;
  undefined8 local_8;
  
  local_9 = 0;
  local_8 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00786630)();
  uVar1 = (*(code *)
            PTR__ZN55__LT_std__io__stdio__Stdin_u20_as_u20_std__io__Read_GT_10read_exact17h74d935bcef497a0bE_00786638
          )(&local_8,&local_9,1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h87d210cf8ae32c35E(uVar1);
  return;
}