void _ZN3bat7vscreen10Attributes21update_with_hyperlink17h54b93a72f9c23cebE
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                    (param_2,param_3,&DAT_002a2fde,3);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x100) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
            (param_1 + 0xf0,param_2,param_3 + param_2);
  return;
}