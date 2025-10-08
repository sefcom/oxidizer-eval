undefined8
_ZN7uu_tail5paths16path_is_tailable17h884811787df5adf9E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_d0 [44];
  
  cVar1 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_0027d860)();
  uVar2 = 1;
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17h5c248dd9820946ebE(local_d0,param_1,param_2);
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
              (local_d0);
    if (local_d0[0] == 2) {
      uVar2 = 0;
    }
    else {
      _ZN3std2fs8metadata17h5c248dd9820946ebE(local_d0,param_1,param_2);
      uVar2 = _ZN4core6result19Result_LT_T_C_E_GT_9is_ok_and17h37a5d9a0bd9405abE(local_d0);
    }
  }
  return uVar2;
}