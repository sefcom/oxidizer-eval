void _ZN8uu_split24handle_preceding_options17ha9316461586fd0f7E
               (undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined4 local_3c;
  undefined *local_38;
  
  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                    (param_1,param_2,"--",2);
  if (cVar3 != '\0') {
    local_38 = param_3;
    lVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                      (param_1,param_2);
    if (lVar5 == 0) {
      _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                (param_1,param_2,2,param_2,&PTR_s_src_uu_split_src_split_rs_002482e0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                      (lVar5,extraout_RDX,"bytes",5);
    uVar4 = 1;
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                        (lVar5,extraout_RDX,"line-bytes",10);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                          (lVar5,extraout_RDX,"lines",5);
        if (cVar3 == '\0') {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                            (lVar5,extraout_RDX,"additional-suffix",0x11);
          if (cVar3 == '\0') {
            cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                              (lVar5,extraout_RDX,"filter",6);
            if (cVar3 == '\0') {
              cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                                (lVar5,extraout_RDX,"number",6);
              if (cVar3 == '\0') {
                cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                                  (lVar5,extraout_RDX,"suffix-length",0xd);
                if (cVar3 == '\0') {
                  uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                                    (lVar5,extraout_RDX,"separator",9);
                }
              }
            }
          }
        }
      }
    }
    *local_38 = uVar4;
    param_3 = local_38;
  }
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                    (param_1,param_2,"-b",2);
  uVar4 = 1;
  if (cVar3 == '\0') {
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                      (param_1,param_2,"-C",2);
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                        (param_1,param_2,"-l",2);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                          (param_1,param_2,"-n",2);
        if (cVar3 == '\0') {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                            (param_1,param_2,"-a",2);
          if (cVar3 == '\0') {
            uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                              (param_1,param_2,"-t",2);
          }
        }
      }
    }
  }
  *param_4 = uVar4;
  local_3c = 0;
  uVar2 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&local_3c);
  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hcb49aff15e773791E
                    (param_1,param_2,uVar2,1);
  if (cVar3 == '\0') {
    *param_4 = 0;
    *param_3 = 0;
  }
  return;
}