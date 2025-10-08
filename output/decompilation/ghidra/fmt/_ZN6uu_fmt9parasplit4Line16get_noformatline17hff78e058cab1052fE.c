void _ZN6uu_fmt9parasplit4Line16get_noformatline17hff78e058cab1052fE(void)

{
  code *pcVar1;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_40 = &PTR_s_Found_FormatLine_when_expecting_N_001f0480;
  local_38 = 1;
  local_30 = 8;
  local_28 = 0;
  uStack_20 = 0;
                    /* try { // try from 001629a5 to 001629b6 has its CatchHandler @ 001629b9 */
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_001f6dd0)
            (&local_40,&PTR_s_src_uu_fmt_src_parasplit_rs_001f0490);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}