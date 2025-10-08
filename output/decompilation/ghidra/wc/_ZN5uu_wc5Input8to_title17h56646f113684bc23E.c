void _ZN5uu_wc5Input8to_title17h56646f113684bc23E(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  if (*param_2 == -0x7fffffffffffffff) {
    if (*(char *)(param_2 + 1) == '\0') {
      *param_1 = 0x8000000000000000;
      param_1[1] = &DAT_0011a13e;
      param_1[2] = 1;
    }
    else {
      *param_1 = 0x8000000000000001;
    }
  }
  else {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001ffca8)
              (local_40,lVar1,lVar2);
                    /* try { // try from 00165581 to 00165585 has its CatchHandler @ 001655e9 */
    cVar3 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                      (local_38,local_30);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h14345ba51c0be1b8E(local_40);
    if (cVar3 != '\0') {
      (*(code *)PTR__ZN6uucore8features13quoting_style11escape_name17h942044e1943bd5afE_001ffcb0)
                (param_1,lVar1,lVar2,&DAT_0011a13f);
      return;
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
  }
  return;
}