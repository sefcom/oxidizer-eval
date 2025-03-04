undefined8 * _ZN7uu_test6parser6Symbol3new17ha5314f5fa26867b7E(undefined8 *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*param_2 == -0x8000000000000000) {
    *param_1 = 6;
    return param_1;
  }
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((long)param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((long)param_2 + 0xc);
  local_48 = param_2[2];
                    /* try { // try from 001ae56e to 001ae5e1 has its CatchHandler @ 001aeae3 */
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_38,param_2[1]);
  if (local_38 == 0) {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                      (local_30,local_28,"(",1);
    if (cVar1 == '\0') {
      uVar2 = 1;
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                        (local_30,local_28,"!",1);
      if (cVar1 == '\0') {
                    /* try { // try from 001ae600 to 001aeab5 has its CatchHandler @ 001aeae3 */
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                          (local_30,local_28,"-a",2);
        if ((cVar1 != '\0') ||
           (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                              (local_30,local_28,"-o",2), cVar1 != '\0')) {
          param_1[3] = local_48;
          param_1[1] = CONCAT44(uStack_54,local_58);
          param_1[2] = CONCAT44(uStack_4c,uStack_50);
          *param_1 = 2;
          return param_1;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                          (local_30,local_28,"=",1);
        if ((cVar1 != '\0') ||
           ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                               (local_30,local_28,"==",2), cVar1 != '\0' ||
            (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                               (local_30,local_28,"!=",2), cVar1 != '\0')))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 0;
          *param_1 = 4;
          return param_1;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                          (local_30,local_28,"-eq",3);
        if ((cVar1 != '\0') ||
           ((((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (local_30,local_28,"-ge",3), cVar1 != '\0' ||
              (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (local_30,local_28,"-gt",3), cVar1 != '\0')) ||
             (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                (local_30,local_28,"-le",3), cVar1 != '\0')) ||
            ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                (local_30,local_28,"-lt",3), cVar1 != '\0' ||
             (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                (local_30,local_28,"-ne",3), cVar1 != '\0')))))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 1;
          *param_1 = 4;
          return param_1;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                          (local_30,local_28,"-ef",3);
        if ((cVar1 != '\0') ||
           ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                               (local_30,local_28,"-nt",3), cVar1 != '\0' ||
            (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                               (local_30,local_28,"-ot",3), cVar1 != '\0')))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 2;
          *param_1 = 4;
          return param_1;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                          (local_30,local_28,"-n",2);
        if ((cVar1 != '\0') ||
           (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                              (local_30,local_28,"-z",2), cVar1 != '\0')) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 0;
          *param_1 = 5;
          return param_1;
        }
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                          (local_30,local_28,"-b",2);
        if ((((((cVar1 != '\0') ||
               (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                  (local_30,local_28,"-c",2), cVar1 != '\0')) ||
              (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (local_30,local_28,"-d",2), cVar1 != '\0')) ||
             (((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                  (local_30,local_28,"-e",2), cVar1 != '\0' ||
               (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                  (local_30,local_28,"-f",2), cVar1 != '\0')) ||
              ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                  (local_30,local_28,"-g",2), cVar1 != '\0' ||
               ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                   (local_30,local_28,"-G",2), cVar1 != '\0' ||
                (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                   (local_30,local_28,"-h",2), cVar1 != '\0')))))))) ||
            ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                (local_30,local_28,"-k",2), cVar1 != '\0' ||
             (((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                  (local_30,local_28,"-L",2), cVar1 != '\0' ||
               (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                  (local_30,local_28,"-N",2), cVar1 != '\0')) ||
              (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (local_30,local_28,"-O",2), cVar1 != '\0')))))) ||
           ((((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (local_30,local_28,"-p",2), cVar1 != '\0' ||
              (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (local_30,local_28,"-r",2), cVar1 != '\0')) ||
             (((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                  (local_30,local_28,"-s",2), cVar1 != '\0' ||
               ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                   (local_30,local_28,"-S",2), cVar1 != '\0' ||
                (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                   (local_30,local_28,"-t",2), cVar1 != '\0')))) ||
              (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                 (local_30,local_28,"-u",2), cVar1 != '\0')))) ||
            ((cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                (local_30,local_28,"-w",2), cVar1 != '\0' ||
             (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                                (local_30,local_28,"-x",2), cVar1 != '\0')))))) {
          param_1[4] = local_48;
          param_1[2] = CONCAT44(uStack_54,local_58);
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          param_1[1] = 1;
          *param_1 = 5;
          return param_1;
        }
        goto LAB_001ae581;
      }
    }
    else {
      uVar2 = 0;
    }
    *param_1 = uVar2;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_58);
  }
  else {
LAB_001ae581:
    param_1[3] = local_48;
    param_1[1] = CONCAT44(uStack_54,local_58);
    param_1[2] = CONCAT44(uStack_4c,uStack_50);
    *param_1 = 3;
  }
  return param_1;
}