void _ZN7uu_uniq24handle_preceding_options17hdc22a5259b3d167dE
               (undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 local_3c;
  undefined *local_38;
  
  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                    (param_1,param_2,&DAT_0011b1d1,2);
  if (cVar3 != '\0') {
    local_38 = param_3;
    lVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                      (param_1,param_2);
    if (lVar5 == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001fc540)
                (param_1,param_2,2,param_2,&PTR_DAT_001f58f8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                      (lVar5,extraout_RDX,&DAT_0011b176,10);
    uVar4 = 1;
    if (cVar3 == '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                        (lVar5,extraout_RDX,&DAT_0011b16b,0xb);
      if (cVar3 == '\0') {
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                          (lVar5,extraout_RDX,&DAT_0011b150,0xb);
        if (cVar3 == '\0') {
          cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                            (lVar5,extraout_RDX,&DAT_0011b195,5);
          if (cVar3 == '\0') {
            uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                              (lVar5,extraout_RDX,&DAT_0011b144,0xc);
          }
        }
      }
    }
    *local_38 = uVar4;
    param_3 = local_38;
  }
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                    (param_1,param_2,&DAT_0011b1cf,2);
  uVar4 = 1;
  if (cVar3 == '\0') {
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                      (param_1,param_2,&DAT_0011b1cd,2);
    if (cVar3 == '\0') {
      uVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                        (param_1,param_2,&DAT_0011b1d3,2);
    }
  }
  *param_4 = uVar4;
  local_3c = 0;
  uVar2 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_3c);
  cVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h164e9dfb27ee38d7E
                    (param_1,param_2,uVar2,extraout_RDX_00);
  if (cVar3 == '\0') {
    *param_4 = 0;
    *param_3 = 0;
  }
  return;
}