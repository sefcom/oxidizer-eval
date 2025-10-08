void _ZN2rg5flags9FlagValue13unwrap_switch17h8b3b7134394aeb98E(void)

{
  code *pcVar1;
  undefined local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = &PTR_s_internal_error__entered_unreacha_004eb6c8;
  local_40 = 1;
  local_38 = local_50;
  local_30 = 0;
  uStack_28 = 0;
                    /* try { // try from 00355be4 to 00355bf5 has its CatchHandler @ 00355bf8 */
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00526780)
            (&local_48,&PTR_s_crates_core_flags_mod_rs_004eb6d8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}