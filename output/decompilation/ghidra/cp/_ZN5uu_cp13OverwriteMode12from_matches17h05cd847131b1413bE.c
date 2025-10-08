ulong _ZN5uu_cp13OverwriteMode12from_matches17h05cd847131b1413bE(undefined8 param_1)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulong uVar2;
  undefined7 uVar3;
  
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
          )(param_1,"interactive",0xb);
  uVar3 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00267b80
            )(param_1,"no-clobber",10);
    if (cVar1 != '\0') {
      uVar2 = CONCAT71(uVar3,2);
      goto LAB_0019e109;
    }
    uVar2 = 0;
  }
  _ZN5uu_cp11ClobberMode12from_matches17h6bc1ef902f3afca6E(param_1);
LAB_0019e109:
  return uVar2 & 0xffffffff;
}