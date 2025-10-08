long * _ZN3bat6config20get_pager_executable17h08ad46b3efb251cfE(long *param_1)

{
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [88];
  
  _ZN3bat5pager9get_pager17hd377d976785f18eeE(&local_80);
  if (local_80 == -0x7fffffffffffffff) {
    _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_bat__pager__Pager_GT__C_shell_words__ParseError_GT__GT_17h953dfe83362f50b1E
              (&local_80);
  }
  else if (local_80 != -0x8000000000000000) {
    param_1[2] = CONCAT44(uStack_6c,uStack_70);
    *param_1 = local_80;
    param_1[1] = CONCAT44(uStack_74,local_78);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h2f78fa9eb600a3a5E
              (local_68);
    return param_1;
  }
  *param_1 = -0x8000000000000000;
  return param_1;
}