void _ZN3bat7printer18InteractivePrinter34print_header_component_with_indent17hfbb93f37e32c0b2eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_80 = param_4;
  local_78 = param_5;
  _ZN3bat7printer18InteractivePrinter29print_header_component_indent17h7aeede11860fa092E(&local_60);
  if ((char)local_60 == '\r') {
    local_70 = &local_80;
    local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5cd1e3edb3ca57a0E;
    local_60 = &DAT_007cea80;
    uStack_58 = 2;
    local_40 = 0;
    local_50 = &local_70;
    uStack_48 = 1;
    (*(code *)PTR__ZN3bat6output12OutputHandle9write_fmt17hec1e6f03d02f41b4E_00807b20)
              (param_1,param_3,&local_60);
    return;
  }
  param_1[8] = local_20;
  param_1[9] = uStack_18;
  param_1[6] = local_30;
  param_1[7] = uStack_28;
  param_1[4] = local_40;
  param_1[5] = uStack_38;
  param_1[2] = local_50;
  param_1[3] = uStack_48;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}