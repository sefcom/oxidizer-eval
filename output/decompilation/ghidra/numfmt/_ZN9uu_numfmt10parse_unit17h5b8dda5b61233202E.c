void _ZN9uu_numfmt10parse_unit17h5b8dda5b61233202E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h47d6932d4cc292c3E
                    (param_2,param_3,"autoBool",4);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h47d6932d4cc292c3E
                      (param_2,param_3,"si",2);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h47d6932d4cc292c3E
                        (param_2,param_3,"iec",3);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h47d6932d4cc292c3E
                          (param_2,param_3,"iec-i",5);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h47d6932d4cc292c3E
                            (param_2,param_3,&DAT_00118f14,4);
          if (cVar1 == '\0') {
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4c3223c430555e40E
                      (param_1,"Unsupported unit is specified",0x1d);
            return;
          }
          *(undefined *)(param_1 + 1) = 5;
        }
        else {
          *(undefined *)(param_1 + 1) = 1;
        }
      }
      else {
        *(undefined *)(param_1 + 1) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 1) = 3;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
  }
  *param_1 = 0x8000000000000000;
  return;
}