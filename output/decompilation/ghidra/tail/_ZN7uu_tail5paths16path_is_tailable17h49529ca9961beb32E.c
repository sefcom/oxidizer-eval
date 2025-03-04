undefined8
_ZN7uu_tail5paths16path_is_tailable17h49529ca9961beb32E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long local_c8;
  undefined8 local_c0;
  
  cVar1 = _ZN3std4path4Path7is_file17h82f08f46fb8d8099E();
  uVar2 = 1;
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_c8,param_1,param_2);
    if (local_c8 == 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
                (2,local_c0);
      uVar2 = 0;
    }
    else {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
                (local_c8,local_c0);
      _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(&local_c8,param_1,param_2);
      uVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6map_or17hd585a8198f0cbe88E(&local_c8);
    }
  }
  return uVar2;
}