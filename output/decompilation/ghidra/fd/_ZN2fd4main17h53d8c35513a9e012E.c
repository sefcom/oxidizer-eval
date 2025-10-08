void _ZN2fd4main17h53d8c35513a9e012E(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_60;
  char local_58;
  undefined local_57;
  undefined8 local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined *local_18;
  undefined8 local_10;
  
  _ZN2fd3run17h62123af0cd2476eeE(&local_58);
  if (local_58 == '\x01') {
    local_60 = local_50;
    local_48 = &local_60;
    local_40 = 
    PTR__ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h9012a81392132d04E_005401e0
    ;
    local_38 = &PTR_s__fd_error___00502140;
    local_30 = 2;
    local_18 = &DAT_0017b620;
    local_10 = 1;
    local_28 = &local_48;
    local_20 = 1;
                    /* try { // try from 002fa1f3 to 002fa207 has its CatchHandler @ 002fa214 */
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_005408a0)(&local_38);
    _ZN2fd10exit_codes8ExitCode4exit17h02d8f1fb9c43201aE(4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar2 = _ZN2fd10exit_codes8ExitCode4exit17h02d8f1fb9c43201aE(local_57);
                    /* catch() { ... } // from try @ 002fa1f3 with catch @ 002fa214 */
                    /* try { // try from 002fa217 to 002fa220 has its CatchHandler @ 002fa229 */
  _ZN4core3ptr34drop_in_place_LT_anyhow__Error_GT_17hce2382bafb0d22e8E(&local_60);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar2);
}