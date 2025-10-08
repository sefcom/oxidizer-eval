void _ZN21ruff_python_formatter6string9docstring14CodeExampleRst14new_code_block17h4a2856211cdeac1eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN3std4sync6poison4once4Once9call_once17h1a70ca06d963a972E
            (&DAT_006c19b8,
             &
             _ZN21ruff_python_formatter6string9docstring14CodeExampleRst14new_code_block15DIRECTIVE_START17h822cadd0e9c18456E
            );
  local_78 = 0;
  uStack_60 = 0;
  uStack_50 = CONCAT31(uStack_50._1_3_,1);
  uStack_70 = param_2;
  local_68 = param_3;
  local_58 = param_3;
  _ZN14regex_automata4util6search5Input8set_span17h3ad304913d28e6d8E(&local_78,param_3);
  local_28 = (undefined4)local_58;
  uStack_24 = local_58._4_4_;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  local_38 = (undefined4)local_68;
  uStack_34 = local_68._4_4_;
  uStack_30 = (undefined4)uStack_60;
  uStack_2c = uStack_60._4_4_;
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = (undefined4)uStack_70;
  uStack_3c = uStack_70._4_4_;
  _ZN14regex_automata4meta5regex5Regex11search_half17h616a8b42bdada3fbE(&local_78,&local_48);
  if (CONCAT44(uStack_74,local_78) == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
                    /* try { // try from 004252b5 to 004252c2 has its CatchHandler @ 0042530f */
    _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
              (&local_78,param_2,param_3);
    param_1[5] = local_68;
    param_1[3] = CONCAT44(uStack_74,local_78);
    param_1[4] = uStack_70;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 6) = 5;
    *(undefined *)(param_1 + 9) = 1;
  }
  return;
}