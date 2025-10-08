ulong _ZN3bat5theme17color_scheme_impl17h893fb72bbe578005E(char param_1)

{
  char cVar1;
  long lStack_18;
  ulong uStack_10;
  
  if (param_1 == '\0') {
    uStack_10 = 0x54446c;
    cVar1 = (*(code *)
              PTR__ZN91__LT_bat__theme__TerminalColorSchemeDetector_u20_as_u20_bat__theme__ColorSchemeDetector_GT_13should_detect17hf8d13adc4ef70a6cE_00808940
            )();
    if (cVar1 != '\0') goto LAB_00544470;
  }
  else {
    if (param_1 == '\x01') {
LAB_00544470:
      (*(code *)PTR__ZN20terminal_colorsaurus10theme_mode17h81b1361cad83e9dfE_00808950)
                (&lStack_18,1,0);
      if (lStack_18 != -0x7ffffffffffffffc) {
        _ZN4core3ptr117drop_in_place_LT_core__result__Result_LT_terminal_colorsaurus__ThemeMode_C_terminal_colorsaurus__error__Error_GT__GT_17hf2d41c0f9fde5d7eE
                  (&lStack_18);
        return 2;
      }
      return uStack_10 & 0xff;
    }
    uStack_10 = 0x544464;
    _ZN3bat5theme24color_scheme_from_system17ha72283e88c744bcbE();
  }
  return 2;
}