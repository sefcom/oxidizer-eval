ulong __rustcall uu_cp::CopyMode::from_matches(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 unaff_RBP;
  ulong uVar4;
  undefined auStack_48 [40];
  undefined7 uVar5;
  
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,&DAT_0011e218,4);
  if (cVar1 == '\0') {
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_1,"symbolic-link",0xd);
    uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (cVar1 == '\0') {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (auStack_48,param_1,
                 &anon_3e3de117086d0638a741881ed4f30de4_10_llvm_9365201698696221295,6);
      lVar3 = clap_builder::parser::error::MatchesError::unwrap
                        (&anon_3e3de117086d0638a741881ed4f30de4_10_llvm_9365201698696221295,6,
                         auStack_48);
      uVar4 = CONCAT71(uVar5,3);
      if (lVar3 == 0) {
        cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_1,&
                                   anon_3e3de117086d0638a741881ed4f30de4_11_llvm_9365201698696221295
                           ,1);
        if (cVar1 == '\0') {
          cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                            (param_1,"attributes-only",0xf);
          uVar4 = CONCAT71(uVar5,2);
          if (cVar1 != '\0') {
            uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                              (param_1,"remove-destination",0x12);
            uVar4 = (ulong)CONCAT31((int3)((uint)uVar2 >> 8),((byte)uVar2 ^ 1) * '\x02' + '\x02');
          }
        }
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}