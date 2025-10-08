void _ZN9alacritty5input22Processor_LT_T_C_A_GT_26update_selection_scrolling17haef1ad53b13a7ec5E
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong local_210 [2];
  float local_1fc;
  float local_1f4;
  float local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  undefined local_f8 [200];
  
  lVar1 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                    ();
  dVar9 = *(double *)(lVar1 + 0x18);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (local_210,param_1);
  uVar2 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                    (param_1);
  uVar2 = _ZN9alacritty7display6window6Window2id17h395f89524db74bebE(uVar2);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (param_2);
  dVar7 = _DAT_001ea758 * dVar9;
  dVar8 = dVar7;
  if (dVar7 <= DAT_001eae48) {
    dVar8 = DAT_001eae48;
  }
  if (DAT_001ea930 <= dVar8) {
    dVar8 = DAT_001ea930;
  }
  iVar6 = (int)dVar8;
  if (NAN(dVar7)) {
    iVar6 = 0;
  }
  dVar9 = dVar9 * DAT_001eaf88;
  dVar8 = dVar9;
  if (dVar9 <= DAT_001eae48) {
    dVar8 = DAT_001eae48;
  }
  if (DAT_001ea930 <= dVar8) {
    dVar8 = DAT_001ea930;
  }
  iVar5 = (int)dVar8;
  if (NAN(dVar9)) {
    iVar5 = 0;
  }
  iVar3 = (int)local_1ec;
  if (DAT_001edecc < local_1ec) {
    iVar3 = 0x7fffffff;
  }
  if (NAN(local_1ec)) {
    iVar3 = 0;
  }
  local_1dc = _ZN4core3cmp3Ord3max17h485505c56320f468E(iVar6,iVar3);
  iVar3 = (int)local_1fc;
  if (DAT_001edecc < local_1fc) {
    iVar3 = 0x7fffffff;
  }
  local_1ec = local_1ec + (float)local_210[0] * local_1f4;
  if (NAN(local_1fc)) {
    iVar3 = 0;
  }
  iVar4 = (int)local_1ec;
  if (DAT_001edecc < local_1ec) {
    iVar4 = 0x7fffffff;
  }
  if (NAN(local_1ec)) {
    iVar4 = 0;
  }
  iVar6 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar3 - iVar6,iVar4);
  if (param_3 < local_1dc) {
    local_1dc = (iVar5 - param_3) + local_1dc;
  }
  else {
    if (param_3 < iVar6) {
      _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE(&local_1e8,param_2,uVar2,0);
      _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
                (&local_1e8);
      return;
    }
    local_1dc = iVar6 - (param_3 + iVar5);
  }
  if (iVar5 != 0) {
    local_1dc = local_1dc / iVar5;
    local_1e0 = 0;
    local_1e8 = 0x8000000000000003;
    _ZN9alacritty5event5Event3new17hfaf9b093bcbfdb2bE(local_f8,&local_1e8,1,uVar2);
    _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE(&local_1e8,param_2,uVar2,0);
                    /* try { // try from 0055b6da to 0055b6e1 has its CatchHandler @ 0055b76a */
    _ZN4core3ptr76drop_in_place_LT_core__option__Option_LT_alacritty__scheduler__Timer_GT__GT_17h4830a0e7a5b3781aE
              (&local_1e8);
    _ZN9alacritty9scheduler9Scheduler8schedule17hb60357d8e26bddb3E
              (param_2,local_f8,0,15000000,1,uVar2,0);
    return;
  }
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_009de5b0)
            (&PTR_DAT_00982eb0);
  uVar2 = (*(code *)
            PTR__ZN4core9panicking11panic_const24panic_const_div_overflow17h7f81f43144dd3074E_009dff08
          )(&PTR_DAT_00982eb0);
                    /* catch() { ... } // from try @ 0055b6da with catch @ 0055b76a */
                    /* try { // try from 0055b76d to 0055b779 has its CatchHandler @ 0055b782 */
  _ZN4core3ptr44drop_in_place_LT_alacritty__event__Event_GT_17h62e9a8616c9ea4f1E(local_f8);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar2);
}