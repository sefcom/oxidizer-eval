undefined8 _ZN4just5lexer5Lexer13is_identifier17h7647ec4ff2f9f03dE(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined auVar3 [12];
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = param_1;
  local_20 = param_2 + param_1;
  auVar3 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_28);
  uVar2 = auVar3._8_4_;
  if (((auVar3 & (undefined  [12])0x1) != (undefined  [12])0x0) &&
     ((uVar2 - 0x61 < 0x1a || ((0x40 < uVar2 && (uVar2 < 0x5b || uVar2 == 0x5f)))))) {
    local_18 = 1;
    local_28 = param_1;
    local_20 = param_2 + param_1;
    do {
      if (local_18 != 0) {
        local_18 = 0;
        lVar1 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17h79c51f2353e76d38E
                          (&local_28);
        if (lVar1 != 0) {
          return 1;
        }
      }
      auVar3 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_28);
      uVar2 = auVar3._8_4_;
      if ((auVar3 & (undefined  [12])0x1) == (undefined  [12])0x0) {
        return 1;
      }
    } while ((uVar2 - 0x61 < 0x1a) ||
            (((0x40 < uVar2 && (uVar2 == 0x5f || uVar2 < 0x5b)) ||
             (uVar2 == 0x2d || uVar2 - 0x30 < 10))));
  }
  return 0;
}