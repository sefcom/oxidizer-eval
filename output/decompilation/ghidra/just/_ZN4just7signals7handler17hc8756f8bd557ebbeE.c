void _ZN4just7signals7handler17hc8756f8bd557ebbeE(uint param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  undefined *puVar5;
  undefined local_21;
  int local_20;
  undefined4 local_1c;
  
                    /* try { // try from 0038b098 to 0038b120 has its CatchHandler @ 0038b123 */
  uVar2 = (*(code *)
            PTR__ZN3nix5errno43__LT_impl_u20_nix__errno__consts__Errno_GT_4last17hb04833c6376db30aE_00566240
          )();
  if (param_1 < 0x100) {
    iVar3 = _ZN4core4sync6atomic11atomic_load17h3c60c6b857c954f9E();
    if (iVar3 == -1) {
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_005660a8)
                (&DAT_00168f60,8,&PTR_DAT_00530fb0);
      goto LAB_0038b121;
    }
    local_21 = (char)param_1;
    _ZN3nix6unistd5write17hf31749d4a38336d7E(&local_20,iVar3,&local_21,1);
    if (local_20 != 1) {
      (*(code *)
        PTR__ZN3nix5errno43__LT_impl_u20_nix__errno__consts__Errno_GT_3set17h2fbdd1d9ac94e96dE_00566cc8
      )(uVar2);
      return;
    }
    puVar5 = (undefined *)
             (*(code *)
               PTR__ZN3nix5errno43__LT_impl_u20_nix__errno__consts__Errno_GT_4desc17h73f6220358296083E_00566cd0
             )(local_1c);
    uVar4 = extraout_RDX;
  }
  else {
    uVar4 = 0x11;
    puVar5 = &DAT_00171801;
  }
  _ZN4just7signals3die17hb64eaa78d67e7dd0E(puVar5,uVar4);
LAB_0038b121:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}