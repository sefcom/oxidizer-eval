undefined8
_ZN7uu_test6parser6Symbol3new17habde89fb8e284063E(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
                    /* try { // try from 00156d0d to 00156d1d has its CatchHandler @ 001572c3 */
  uVar4 = (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e60e0)
                    (local_48,uVar1,uVar2);
  if ((local_48[0] & 1) == 0) {
    uVar4 = 1;
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                      (local_40,local_38,"(",1);
    if (cVar3 != '\0') {
      uVar4 = 0;
LAB_00156d96:
      *param_1 = uVar4;
      uVar5 = _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc3c00042d8510b40E
                        (uVar5,uVar1);
      return uVar5;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                      (local_40,local_38,"!",1);
    if (cVar3 != '\0') goto LAB_00156d96;
    uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                      (local_40,local_38,"-a",2);
    if (((char)uVar4 != '\0') ||
       (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                          (local_40,local_38,"-o",2), (char)uVar4 != '\0')) {
      param_1[1] = uVar5;
      param_1[2] = uVar1;
      param_1[3] = uVar2;
      *param_1 = 2;
      return uVar4;
    }
    uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                      (local_40,local_38,"=",1);
    if (((((char)uVar4 == '\0') &&
         (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                            (local_40,local_38,"==",2), (char)uVar4 == '\0')) &&
        (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                           (local_40,local_38,"!=",2), (char)uVar4 == '\0')) &&
       ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                           (local_40,local_38,"<",1), (char)uVar4 == '\0' &&
        (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                           (local_40,local_38,">",1), (char)uVar4 == '\0')))) {
      uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                        (local_40,local_38,"-eq",3);
      if ((((char)uVar4 == '\0') &&
          (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                             (local_40,local_38,"-ge",3), (char)uVar4 == '\0')) &&
         ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                             (local_40,local_38,"-gt",3), (char)uVar4 == '\0' &&
          (((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                               (local_40,local_38,"-le",3), (char)uVar4 == '\0' &&
            (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                               (local_40,local_38,"-lt",3), (char)uVar4 == '\0')) &&
           (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                              (local_40,local_38,"-ne",3), (char)uVar4 == '\0')))))) {
        uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                          (local_40,local_38,"-ef",3);
        if ((((char)uVar4 == '\0') &&
            (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                               (local_40,local_38,"-nt",3), (char)uVar4 == '\0')) &&
           (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                              (local_40,local_38,"-ot",3), (char)uVar4 == '\0')) {
          uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                            (local_40,local_38,"-n",2);
          if (((char)uVar4 != '\0') ||
             (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                (local_40,local_38,"-z",2), (char)uVar4 != '\0')) {
            param_1[1] = 0;
LAB_001572ab:
            param_1[2] = uVar5;
            param_1[3] = uVar1;
            param_1[4] = uVar2;
            *param_1 = 5;
            return uVar4;
          }
          uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                            (local_40,local_38,"-b",2);
          if (((((((char)uVar4 != '\0') ||
                 (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-c",2), (char)uVar4 != '\0')) ||
                (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                   (local_40,local_38,"-d",2), (char)uVar4 != '\0')) ||
               (((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-e",2), (char)uVar4 != '\0' ||
                 (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-f",2), (char)uVar4 != '\0')) ||
                ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-g",2), (char)uVar4 != '\0' ||
                 ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                     (local_40,local_38,"-G",2), (char)uVar4 != '\0' ||
                  (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                     (local_40,local_38,"-h",2), (char)uVar4 != '\0')))))))) ||
              (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                 (local_40,local_38,"-k",2), (char)uVar4 != '\0')) ||
             ((((((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                     (local_40,local_38,"-L",2), (char)uVar4 != '\0' ||
                  (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                     (local_40,local_38,"-N",2), (char)uVar4 != '\0')) ||
                 (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-O",2), (char)uVar4 != '\0')) ||
                ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-p",2), (char)uVar4 != '\0' ||
                 (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-r",2), (char)uVar4 != '\0')))) ||
               ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                   (local_40,local_38,"-s",2), (char)uVar4 != '\0' ||
                ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-S",2), (char)uVar4 != '\0' ||
                 (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                    (local_40,local_38,"-t",2), (char)uVar4 != '\0')))))) ||
              ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                  (local_40,local_38,"-u",2), (char)uVar4 != '\0' ||
               ((uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                   (local_40,local_38,"-w",2), (char)uVar4 != '\0' ||
                (uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                                   (local_40,local_38,"-x",2), (char)uVar4 != '\0')))))))) {
            param_1[1] = 1;
            goto LAB_001572ab;
          }
          goto LAB_00156d25;
        }
        param_1[1] = 2;
      }
      else {
        param_1[1] = 1;
      }
    }
    else {
      param_1[1] = 0;
    }
    param_1[2] = uVar5;
    param_1[3] = uVar1;
    param_1[4] = uVar2;
    *param_1 = 4;
  }
  else {
LAB_00156d25:
    param_1[1] = uVar5;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    *param_1 = 3;
  }
  return uVar4;
}