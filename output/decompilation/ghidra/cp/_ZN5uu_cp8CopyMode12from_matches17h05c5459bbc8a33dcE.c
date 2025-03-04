ulong _ZN5uu_cp8CopyMode12from_matches17h05c5459bbc8a33dcE(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 unaff_RBP;
  ulong uVar4;
  undefined auStack_48 [40];
  undefined7 uVar5;
  
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_1,&DAT_0011e218,4);
  if (cVar1 == '\0') {
    cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_1,"symbolic-link",0xd);
    uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (cVar1 == '\0') {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h83269f7c9d3ca029E
                (auStack_48,param_1,
                 &anon_3e3de117086d0638a741881ed4f30de4_10_llvm_9365201698696221295,6);
      lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h30948932dbd3ab55E
                        (&anon_3e3de117086d0638a741881ed4f30de4_10_llvm_9365201698696221295,6,
                         auStack_48);
      uVar4 = CONCAT71(uVar5,3);
      if (lVar3 == 0) {
        cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_1,&
                                   anon_3e3de117086d0638a741881ed4f30de4_11_llvm_9365201698696221295
                           ,1);
        if (cVar1 == '\0') {
          cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                            (param_1,"attributes-only",0xf);
          uVar4 = CONCAT71(uVar5,2);
          if (cVar1 != '\0') {
            uVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
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