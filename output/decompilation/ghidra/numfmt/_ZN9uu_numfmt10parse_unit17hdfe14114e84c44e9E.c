void _ZN9uu_numfmt10parse_unit17hdfe14114e84c44e9E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                    (param_2,param_3,&DAT_0011580c,4);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                      (param_2,param_3,"si",2);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                        (param_2,param_3,"iec",3);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                          (param_2,param_3,"iec-i",5);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h476a084f905105c4E
                            (param_2,param_3,&DAT_00115898,4);
          if (cVar1 == '\0') {
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h523a2f825c855b37E
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