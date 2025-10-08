void _ZN4just7shebang7Shebang3new17he57eb4f1ce7ed327E
               (undefined (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auStack_b8 [48];
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [48];
  undefined2 local_28;
  
  cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                    (param_2,param_3,&DAT_00171382,2);
  if (cVar2 != '\0') {
    auVar4 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (2,param_2,param_3);
    if (auVar4._0_8_ == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00566098)
                (param_2,param_3,2,param_3,&PTR_DAT_00530e30);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
              (local_58,10,auVar4._0_8_,auVar4._8_8_);
    local_68 = 0;
    local_28 = 0;
    local_60 = auVar4._8_8_;
    auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_14next_inclusive17h05fb6e2c9643a702E
                       (&local_68);
    if (auVar4._0_8_ == 0) {
      auVar4 = ZEXT816(1);
    }
    else {
      auVar4 = _ZN89__LT_core__str__LinesMap_u20_as_u20_core__ops__function__Fn_LT__LP__RF_str_C__RP__GT__GT_4call17h32b8dbc7f07f5738E
                         (auVar4._0_8_,auVar4._8_8_);
    }
    auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hfd0add22eadc0a63E
                       (auVar4._0_8_,auVar4._8_8_);
    _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h473cefa6588d8442E
              (auStack_b8,0x900000020,auVar4._0_8_,auVar4._8_8_);
    local_88 = 0;
    local_78 = 1;
    local_70 = 1;
    local_80 = auVar4._8_8_;
    auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17ha4b7bac5e40888b3E(auStack_b8);
    uVar3 = auVar4._8_8_;
    if (auVar4._0_8_ == 0) {
      auVar4 = ZEXT816(1);
    }
    if (local_70 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar3;
      auVar5 = auVar5 << 0x40;
    }
    else if (local_70 == 1) {
      local_70 = 0;
      auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_7get_end17h7348fa543be9108fE(auStack_b8);
    }
    else {
      local_70 = local_70 + -1;
      auVar5 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17ha4b7bac5e40888b3E(auStack_b8);
    }
    if (auVar4._8_8_ != 0) {
      *param_1 = auVar4;
      param_1[1] = auVar5;
      return;
    }
  }
  *(undefined8 *)*param_1 = 0;
  return;
}